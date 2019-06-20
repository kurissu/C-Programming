//
//  main.cpp
//  testXcode
//
//  Created by Kurissu on 9/18/18.
//  Copyright © 2018 Kurisu Industries. All rights reserved.
//

#include <iostream>
#include <string> 
using namespace std ;
class Person {
public:
	Person (){ cout << "New person created . " << endl ;}
	~Person(){cout << "Person deleted." << endl;}
	void sayHello(){cout << "Hello I am a person." << endl;} void sayHello ( string name){
	cout << "I am " << name << ". I am a person." << endl;}
};
class Student : public Person { 
public:
	Student (){ cout << "New student created . " << endl ;}
	~Student(){cout << "Student deleted." << endl;}
	void sayHello(){cout << "Hello I am a student." << endl;} void sayHello ( string name){
	cout << "I am " << name << ". I am a student." << endl;}
};
int main() { 
Person pr1 ;
Student st1 ;
pr1.sayHello();
pr1.sayHello( " Bob " ) ;
st1.sayHello();
st1.sayHello("John" ); return 0;
}


