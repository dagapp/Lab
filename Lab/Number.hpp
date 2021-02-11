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
    
    friend Number operator + (Number num1, Number num2);
    friend Number operator - (Number num1, Number num2);
    friend Number operator * (Number num1, Number num2);
    friend Number operator / (Number num1, Number num2);
    
    friend Number operator + (Number num1, int num2);
    friend Number operator - (Number num1, int num2);
    friend Number operator * (Number num1, int num2);
    friend Number operator / (Number num1, int num2);
    
    friend float operator + (Number num1, float num2);
    friend float operator - (Number num1, float num2);
    friend float operator * (Number num1, float num2);
    friend float operator / (Number num1, float num2);
    
    friend double operator + (Number num1, double num2);
    friend double operator - (Number num1, double num2);
    friend double operator * (Number num1, double num2);
    friend double operator / (Number num1, double num2);
};

#endif /* Number_hpp */
