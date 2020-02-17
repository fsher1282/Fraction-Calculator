//
//  DMPPProg1.cpp
//  FMCLRational
//
//  Created by Daniel Mai Fisher on 1/25/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <stdio.h>
#include "DMPPRationalClass.h"
using namespace std;


int main(int argc, const char * argv[]){
    int n=0;
    int d=1;
    int n2=0;
    int d2=1;
    char operation;
 
 //Show Output and Prompt Input
    cout<< "Enter a Number into Numerator then Denominator...\n"<<endl;
    cin>>n; cout<<"-"<<endl; cin>>d;
   
    cout<<"Enter in a operator (+,-,*,/) afterwards press Enter...\n";
    cin>>operation;
    
    cout<<"Enter Another Numerator then Denominator...\n"<<endl;
    cin>>n2; cout<<"-"<<endl; cin>>d2;
   
    
    //Establish Condition for selecting Operators
    if (operation=='+') {
        Rational num1(n,d), num2(n2,d2), num3;
        num3=num1+(num2);
   
        cout<<"The Answer is..."<< num3.toRationalString()<<endl;

    } else if (operation=='-'){
        Rational num1(n,d), num2(n2,d2), num3;
        num3=num1-(num2);
  
        cout<<"The Answer is..."<< num3.toRationalString()<<endl;

    } else if (operation=='*'){
        Rational num1(n,d), num2(n2,d2), num3;
        num3=num1*(num2);
    
        cout<<"The Answer is..."<< num3.toRationalString()<<endl;
        cout<<"I don't know what this is called but: "<<num3.decimalForm()<<endl;
    }
    else if (operation=='/'){
        Rational num1(n,d), num2(n2,d2), num3;
        num3=num1/(num2);
   
        cout<<"The Answer is..."<< num3.toRationalString()<<endl;
        cout<<"I don't know what this is called but: "<<num3.decimalForm()<<endl;
        
    }
    
    
    
    else cout<<"Error: I said put in one of these (+,-,*,/) or you were being silly and didn't put in a number in the numerator or denominator"<<endl;
    
    
    return 0;
}
