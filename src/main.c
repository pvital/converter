//
//  main.c
//  converter - Command-line number converter to Mac OS
//
//  Created by Paulo Ricardo Paz Vital on 23/05/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "binary.h"

void usage(void) {
    printf("usage: convert decimal_number \n");
} 

int main(int argc, const char * argv[]) {
    int decimal;
    
    if (argc < 2 || argc > 3) {
        usage();
        return -1;
    }
    
    decimal = atoi(argv[1]);
    
    if (decimal < 0) {
        printf("ERROR: decimal number must be greater than zero (0).\n");
        return -1;
    }
    if (decimal > INT_MAX) {
        printf("ERROR: maximum decimal number supported is %d.\n", INT_MAX);
        return -1;
    }

    dec2bin(decimal);
    return 0;
}
