//
//  Rational Class.h
//  FMCLRational
//
//  Created by Daniel Mai Fisher on 1/22/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef Rational_Class_h
#define Rational_Class_h
#include <iostream>


class Rational{
  private:
    int n;
    int d;
    double fraction;
    void reduce();
    int f;

public:
    Rational (int numerator = 0, int denominator= 1);
    Rational adding (const Rational a);//add 2 rational numbers
    Rational operator+(const Rational a); //first step in overloading operator adding
    Rational subtraction(const Rational s); //subtract 2 rational numbers
    Rational operator-(const Rational s);//first step in overloading operator subtraction
    Rational multiplying(const Rational m); //multiply 2 rational numbers
    Rational operator*(const Rational m); //first step in overloading operator
    Rational division(const Rational b); //divide 2 rational numbers
    Rational operator/(const Rational b); //first step in operator overloading
    std::string toRationalString();
    double toDouble();
    double decimalForm();
};
        
   #endif /* Rational_Class_h */
     
        /* uml class diagram for sample
         ________________________________________________________
         |                                                      |
         |                  Rational   Class                    |
         |                                                      |
         |______________________________________________________|
         |       - n: integer                                   |
         |       - d: integer                                   |
         | -fraction: double                                    |
         |                                                      |
         |______________________________________________________|
         |                                                      |
         | Rational (numerator = 0, denominator= 1):integer     |
         |     +adding: integer                                 |
         |     +subtraction: integer                            |
         |     +multiplying:integer                             |
         |     +division: integer                               |
         |     +toRationalString:string                         |
         |     +toDouble: double                                |
         |     -reduce: void                                    |
         |                                                      |
         |                                                      |
         |______________________________________________________|
         
         */
        
