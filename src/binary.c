//
//  binary.c
//  converter
//
//  Created by Paulo Ricardo Paz Vital on 23/05/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include <stdio.h>
#include "binary.h"

void dec2bin(int decimal) {
    int remainder[32];
    int quocient = decimal, i = 0;
    
    while (quocient >= 2) {
        remainder[i] = quocient % 2;
        quocient = quocient / 2;
        i++;
    }
    
    // add the last quocient in the end of remainder list
    remainder[i] = quocient;
    
    // print the remainder list in the revert order
    printf ("The decimal number %d in binary is: ", decimal);
    while (i >= 0) {
        printf("%d", remainder[i]);
        i--;
    }
    printf("\n");
}

