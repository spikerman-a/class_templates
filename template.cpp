//
//  template.cpp
//  class_templates
//
//  Created by Alyxandra Spikerman on 12/4/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "template.h"

using namespace std;

/*
 Sets the inputted values as data1 and data2
 */
template<class T>
void ops<T>::setData(T value1, T value2){
	data1 = value1;
	data2 = value2;
}
/*
 Compares data1 and data2 values and prints a string 
	that describes the comparison
 */
template<class T>
string ops<T>::comparison(){
	string answer;
	if (data1 == data2){
		answer = "Equal";
	}
	else if (data1 > data2){
		answer = "data1 > data2";
	}
	else {
		answer = "data1 < data2";
	}
	return answer;
}
/*
 Sums data1 and data2
 */
template<class T>
T ops<T>::sum(){
	T answer;
	answer = data1 + data2;
	return answer;
}
/*
 Prints the compared relation and sum of data1 and data2
 */
template<class T>
void ops<T>::printFinal(string compare, T summation){
	cout << "Compared: " << compare << endl;
	cout << "The two values summed are: " << summation << endl;
}

