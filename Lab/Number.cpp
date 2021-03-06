//
//  Number.cpp
//  Lab
//
//  Created by Danila Agapitov on 11/02/2021.
//  Copyright © 2021 Danila Agapitov. All rights reserved.
//

#include "Number.hpp"

Number::Number()
{
    Value = 0;
}

Number::Number(int value)
{
    Value = value;
}

Number::Number(float value)
{
    Value = (int)value;
}

Number::Number(double value)
{
    Value = (int)value;
}



Number::operator int ()
{
    return Value;
}

Number::operator float ()
{
    return (float)Value;
}

Number::operator double ()
{
    return (double)Value;
}



Number operator + (Number num1, Number num2)
{
    return Number(num1.Value + num2.Value);
}

Number operator - (Number num1, Number num2)
{
    return Number(num1.Value - num2.Value);
}

Number operator * (Number num1, Number num2)
{
    return Number(num1.Value * num2.Value);
}

Number operator / (Number num1, Number num2)
{
    return Number(num1.Value / num2.Value);
}



Number operator + (Number num1, int num2)
{
    return Number(num1.Value + num2);
}

Number operator - (Number num1, int num2)
{
    return Number(num1.Value - num2);
}

Number operator * (Number num1, int num2)
{
    return Number(num1.Value * num2);
}

Number operator / (Number num1, int num2)
{
    return Number(num1.Value / num2);
}


Number operator + (int num1, Number num2)
{
    return Number(num1 + num2.Value);
}

Number operator - (int num1, Number num2)
{
    return Number(num1 - num2.Value);
}

Number operator * (int num1, Number num2)
{
    return Number(num1 * num2.Value);
}

Number operator / (int num1, Number num2)
{
    return Number(num1 / num2.Value);
}



float operator + (Number num1, float num2)
{
    return num1.Value + num2;
}

float operator - (Number num1, float num2)
{
    return num1.Value - num2;
}

float operator * (Number num1, float num2)
{
    return num1.Value * num2;
}

float operator / (Number num1, float num2)
{
    return num1.Value / num2;
}


float operator + (float num1, Number num2)
{
    return num1 + num2.Value;
}

float operator - (float num1, Number num2)
{
    return num1 - num2.Value;
}

float operator * (float num1, Number num2)
{
    return num1 * num2.Value;
}

float operator / (float num1, Number num2)
{
    return num1 / num2.Value;
}



double operator + (Number num1, double num2)
{
    return num1.Value + num2;
}

double operator - (Number num1, double num2)
{
    return num1.Value - num2;
}

double operator * (Number num1, double num2)
{
    return num1.Value * num2;
}

double operator / (Number num1, double num2)
{
    return num1.Value / num2;
}


double operator + (double num1, Number num2)
{
    return num1 + num2.Value;
}

double operator - (double num1, Number num2)
{
    return num1 - num2.Value;
}

double operator * (double num1, Number num2)
{
    return num1 * num2.Value;
}

double operator / (double num1, Number num2)
{
    return num1 / num2.Value;
}

