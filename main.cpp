/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <iostream>

int main()
{
    BusOut myleds(D8, D7, D6, D5, D4, D3, D2);
    int numero = 0;

    while (true) {

        cout << "Ingrese un número entero del 0 al 9" << endl;
        cin >> numero;

        if(numero >= 0 && numero <= 9){
            if (numero == 0){
                myleds = 126;
            } else if (numero == 1){
                myleds = 48;
            } else if (numero == 2){
                myleds = 109;
            } else if (numero == 3){
                myleds = 121;
            } else if (numero == 4){
                myleds = 51;
            } else if (numero == 5){
                myleds = 91;
            } else if (numero == 6){
                myleds = 95;
            } else if (numero == 7){
                myleds = 112;
            } else if (numero == 8){
                myleds = 127;
            } else if (numero == 9){
                myleds = 115;
            }
        } else{
            cout <<"Por favor ingrese un número válido" << endl;
        }
        
    }
}