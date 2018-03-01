//
//  main.c
//  FizzBuzz
//
//  Created by Raman Singh on 2018-02-25.
//  Copyright © 2018 Raman Singh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 6;
    
    for (i = 1; i <=100; i++) {

        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0){
            printf("Fizz\n");
        } else if (i % 5 == 0){
            printf("Fuzz\n");
        }
        
        
    }
        
    return 0;
}
