//
//  Number.hpp
//  Lab
//
//  Created by Danila Agapitov on 11/02/2021.
//  Copyright © 2021 Danila Agapitov. All rights reserved.
//

#ifndef Number_hpp
#define Number_hpp

#include <stdio.h>

class Number
{
    private:
        int Value;
    
    public:
        Number();
        Number(int value);
        Number(float value);
        Number(double value);
    
        operator int ();
        operator float ();
        operator double ();
    
    friend Number operator + (Number num1, Number num2);
    friend Number operator - (Number num1, Number num2);
    friend Number operator * (Number num1, Number num2);
    friend Number operator / (Number num1, Number num2);
};

#endif /* Number_hpp */
