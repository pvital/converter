//
//  main.c
//  converter - Command-line number converter to Mac OS
//
//  Created by Paulo Ricardo Paz Vital on 23/05/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "binary.h"
#include "octal.h"
#include "hexa.h"

#define BIN_OPT     1
#define OCT_OPT     2
#define HEX_OPT     3

void usage(void) {
    printf("usage: convert [-b -o -h] decimal_number \n");
}

int lookup_opt (int argc, const char * argv[]) {
    for (int i=1; i <= argc-1; i++) {
        if (strcmp(argv[i], "-b") == 0) {
            return BIN_OPT;
        }
        if (strcmp(argv[i], "-o") == 0) {
            return OCT_OPT;
        }
        if (strcmp(argv[i], "-h") == 0) {
            return HEX_OPT;
        }
    }
    return BIN_OPT;
}

int main(int argc, const char * argv[]) {
    int decimal;
    
    if (argc < 2) {
        usage();
        return -1;
    }
    
    // process arguments from command line
    // the first argument we'll work is the last one - the decimal number
    decimal = atoi(argv[argc-1]);
    
    if (decimal < 0) {
        printf("ERROR: decimal number must be greater than zero (0).\n");
        return -1;
    }
    if (decimal > INT_MAX) {
        printf("ERROR: maximum decimal number supported is %d.\n", INT_MAX);
        return -1;
    }

    // process the other arguments from command line
    switch (lookup_opt(argc, argv)) {
        case BIN_OPT:
            dec2bin(decimal);
            break;
        case OCT_OPT:
            dec2oct(decimal);
            break;
        case HEX_OPT:
            dec2hexa(decimal);
            break;
        default:
            dec2bin(decimal);
            break;
    }
    return 0;
}
