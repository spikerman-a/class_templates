//
//  main.cpp
//  class_templates
//
//  Created by Alyxandra Spikerman on 12/4/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "template.h"
#include "template.cpp"

using namespace std;

int main() {
    //example 1 with strings
    string string1 = "Hello ";
    string string2 = "World!";
    ops<string> data;
    data.setData(string1, string2);
    string comp = data.comparison();
    string appended = data.sum();
    data.printFinal(comp, appended);
    
    //example 2 with integers
    int int1 = 10;
    int int2 = 10;
    ops<int> intData;
    intData.setData(int1, int2);
    string comp2 = intData.comparison();
    int sumInt = intData.sum();
    intData.printFinal(comp2, sumInt);
    
    //example 3 with doubles
    double d1 = 11.345;
    double d2 = 9.567;
    ops<double> dData;
    dData.setData(d1, d2);
    string comp3 = dData.comparison();
    double sumDouble = dData.sum();
    dData.printFinal(comp3, sumDouble);
    
    return 0;
}
