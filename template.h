//
//  template.h
//  class_templates
//
//  Created by Alyxandra Spikerman on 12/4/16.
//  Copyright © 2016 Embedded Design. All rights reserved.
//

#ifndef template_h
#define template_h

using namespace std;
/*
 Declares template<class T> class ops with public and private
	declarations
 @param data1: value to be used in public functions
 @param data2: value to be used in public functions
 
 functions setData: to set the values of data1 and data2
 function comparison: compares the values of data1 and data2
	and returns a string describing the comparison
 function sum: sums data1 and data2
 function printFinal: prints the final comparison and sum
 destructor function: prints "Destructed." when a value is 
	destructed
 */
template<class T> class ops{
private:
	T data1;
	T data2;
public:
	void setData() {data1 = T(); data2 = T();}
	void setData(T value1, T value2);
	string comparison();
	T sum();
	void printFinal(string, T);
	~ops<T>(){cout << "Destructed." << endl;};
};

#endif 
