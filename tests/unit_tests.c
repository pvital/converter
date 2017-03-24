//
//  unit_tests.c
//  converter
//
//  Created by Paulo Ricardo Paz Vital on 22/06/15.
//  Copyright (c) 2015 pvital Solutions. All rights reserved.
//

#include <stdio.h>
#include "binary.h"
#include "octal.h"
#include "hexa.h"

int main_2 (int argc, const char * argv[]) {
    int decimal = 12785;
    
    dec2bin(decimal);
    dec2oct(decimal);
    dec2hexa(decimal);
    
    return 0;
}
