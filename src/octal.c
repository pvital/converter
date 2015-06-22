//
//  octal.c
//  converter
//
//  Created by Paulo Ricardo Paz Vital on 22/06/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include <stdio.h>
#include "octal.h"

void dec2oct(int decimal) {
    int remainder[32];
    int quocient = decimal, i = 0;
    
    while (quocient >= 7) {
        remainder[i] = quocient % 8;
        quocient = quocient / 8;
        i++;
    }
    
    // add the last quocient in the end of remainder list
    remainder[i] = quocient;
    
    // print the remainder list in the revert order
    printf ("The decimal number %d in octal is: ", decimal);
    while (i >= 0) {
        printf("%d", remainder[i]);
        i--;
    }
    printf("\n");
}
