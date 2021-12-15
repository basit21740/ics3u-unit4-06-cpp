// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// This program prints out all rgb values


#include <iostream>

int main() {
    // this function prints out all rgb values
    int counter1;
    int counter2;
    int counter3;

    // process + output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "RGB(" << counter1 << "," << counter2\
                    << "," << counter3 << ")" << std::endl;
            }
        }
    }
}
