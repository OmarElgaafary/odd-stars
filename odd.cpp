#include <iostream>

void oddstars ();

int main () {

    oddstars ();

    return 0;

}

void oddstars () {
    for (int i = 1; i <= 6 ; i++) { // This loop will repeat 6 times.
        for (int j = 1; j <= 6 -i; j++) { //  This loop will add spaces for each line depending on how many times it looped.
            std::cout << " ";
        } for (int x = 1; x <= i*2-1; x++) { // This loop will print an odd amount of stars.
            std::cout << "*";

        }
        std::cout << std::endl; // New line for each loop done.
    }
}
