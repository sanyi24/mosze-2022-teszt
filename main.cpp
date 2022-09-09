#include <iostream>

constexpr int N_ELEMENTS = 100;

int main () {
    // Firstly init array, the double each value?
    // Separate functionality!
    int* b = new int[NELEMENTS];            // NELEMENTS -> N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // Missing ; and std::endl;
    for (int i = 0;)                        // Fix: loop, logic inside the loop
    {  
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) {               // Iterate through the elements of b
        std::cout << "Ertek:"               // Print out value
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) {  // Use ;
        atlag += b[i]                       // Missing ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}