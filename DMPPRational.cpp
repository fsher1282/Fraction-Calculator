//
//  Rational.cpp
//  FMCLRational
//
//  Created by Daniel Mai Fisher on 1/22/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <stdio.h>
#include "DMPPRationalClass.h"
#include <iostream>
#include <string>


Rational::Rational(int numerator, int denominator){ //Create error message for 'd'
    n=numerator;
    d=denominator;
    
    if(d==0) {  //Establish Condition
        std::cout<<"Do not put a Zero in Denominator. Please put new value you drunk!!"<<std::endl;  //Explain Math Error
        std::cin>> d; //Prompt for new value
   }
    
    reduce();
    fraction= numerator/ d;
}

void Rational::reduce(){ //Reduce Fraction Function
    int gcd=1;
    for (int i=1; i<d; i++) {
        if (n %i ==0 && d % i ==0)
            gcd=i;
        
    }
    n = n/gcd;
    d = d/gcd;
   
}

 Rational Rational::adding(const Rational a){ //Adding Function
     int p;
     int l;
    
     p=(n * a.d) +(a.n * d); //Establish Equation
     l=(d * a.d);
     
     Rational temp(p,l);
    
     return temp;
     
 }

Rational Rational::operator+(const Rational a){ //operator overloaded
    return adding(a);
}

 Rational Rational::subtraction(const Rational s){ //Subtraction Fuction
     int u; //Create date type for Numerator
     int v; //Create data type for Denominator
    
     //Create Equation
     u=(n* s.d) -(s.n* d);
     v=(d* s.d);

    
     Rational temp(u,v);
     return temp;
 
 }

Rational Rational::operator-(const Rational s){ //operator overloaded
    return subtraction(s);

}

 Rational Rational::multiplying(const Rational m){ //Multiplication Function
     int q; //Create Data type for Numerator
     int s; //Create Data type for Denominator
     
     //Create equation for multiplying fractions
     q=(n* m.n);
     s=(d* m.d);

     Rational temp(q,s);
     return temp;
 }
Rational Rational::operator*(const Rational m){ //operator overloaded
    return multiplying(m);
}

Rational Rational::division(const Rational b){ //Division Function
     int g; //Create Data type for Numerator
     int h; //Create Data type for Denominator
     
     //Create equation for dividing fractions
     g=(n* b.d);
     h=(d* b.n);

     Rational temp(g,h);
     return temp;
 }
Rational Rational::operator/(const Rational b){
    return division(b);
}


double Rational::toDouble(){
    fraction=n/d;
    return fraction;
}

std::string Rational::toRationalString(){ //Create Structure for Answer Display
    std::string RogerString;
    RogerString= std::to_string(n) + "/"+ std::to_string(d); //cited code
   
    return RogerString;
}
/*https://stackoverflow.com/questions/5590381/easiest-//way-to-convert-int-to-string-in-c*/

double Rational::decimalForm(){
    double p;
    
    p=(n/d);
    
    return p;
    
}
 
 
