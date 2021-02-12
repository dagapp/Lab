//
//  main.cpp
//  Lab
//
//  Created by Danila Agapitov on 11/02/2021.
//  Copyright © 2021 Danila Agapitov. All rights reserved.
//

#include <iostream>
#include "Number.hpp"

int main()
{
    int real_a;
    float real_b = 7;
    float real_c = real_a + real_b;
    
    printf("%d\n", real_a);
    printf("%f\n", real_b);
    printf("%f\n", real_c);
    
    
    Number a;
    Number b = 7;
    float c = a + b;
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    
    
    return 0;
}
