#include <iostream>
#include <numeric>

typedef int (*funcPointer)(int);

constexpr int N_ELEMENTS = 100;
void InitArray (int*, int, funcPointer);
void UpdateArray (int*, int, funcPointer);

int main () {
    int nArray[N_ELEMENTS] = { };
    InitArray (nArray, N_ELEMENTS, [] (int x) { return x + 1; });

    std::cout << "1-100 ertekek duplazasa" << std::endl;
    UpdateArray (nArray, N_ELEMENTS, [] (int x) { return x * 2; });

    double avg = std::accumulate (&nArray[0], &nArray[N_ELEMENTS], 0.0) / N_ELEMENTS;
    //constexpr double avg = double(N_ELEMENTS + 1) / 2; // Can use it here, but not general solution ofc.
    std::cout << "Atlag: " << avg << std::endl;

    std::cout << "Phase 2 complete...\n";
    
    return 0;
}

void InitArray (int* pArray, int length, funcPointer operation) {
    for (size_t i = 0; i < length; i++) pArray[i] = operation (i);
}


void UpdateArray (int* pArray, int length, funcPointer operation) {
    for (size_t i = 0; i < length; i++) pArray[i] = operation(pArray[i]);
}