//
//  hexa.c
//  converter
//
//  Created by Paulo Ricardo Paz Vital on 22/06/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include "hexa.h"

void printhexa (int value) {
    switch (value) {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", value);
            break;
    }
    
}

void dec2hexa(int decimal) {
    int remainder[32];
    int quocient = decimal, i = 0;
    
    while (quocient >= 15) {
        remainder[i] = quocient % 16;
        quocient = quocient / 16;
        i++;
    }
    
    // add the last quocient in the end of remainder list
    remainder[i] = quocient;
    
    // print the remainder list in the revert order
    printf ("The decimal number %d in hexadecimal is: 0x", decimal);
    
    //TODO: create a way to print the letters from 10 to 15
    while (i >= 0) {
        printhexa(remainder[i]);
        i--;
    }
    printf("\n");
}
