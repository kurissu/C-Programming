//
//  main.cpp
//  testXcode
//
//  Created by Kurissu on 9/18/18.
//  Copyright © 2018 Kurisu Industries. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student: public Person{
public:
    double gpa;
};

int main(){
    Student st1;
    st1.name ="bob";
    st1.age = 20;
    st1.gpa =3.55;
    
    cout<< st1.name;
    cout<< " is a " <<st1.age<<" year old student";
    cout<< " with a gpa of " << st1.gpa<<endl;
    return 0;
}



