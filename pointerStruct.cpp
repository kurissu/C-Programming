//
//  main.cpp
//  testXcode
//
//  Created by Kurissu on 9/18/18.
//  Copyright © 2018 Kurisu Industries. All rights reserved.
//

#include <iostream>
using namespace std;

struct Course {
    int courseNumber;
    char grade;
};
void printCourse(Course *);

int main() {
    const int numberOfCourses = 4;
    Course courseList[] = {
        {101,'A'},
        {125,'B'},
        {190,'C'},
        {286,'A'}
    };
    
    cout << "Course list:" << endl;
    for(int i=0; i<sizeof(courseList)/sizeof(courseList[0]); i++){
        printCourse(&courseList[i]);
    }
    
    return 0;
}
void printCourse(Course *c){
    cout<< c->courseNumber;
    cout<<" "<< c->grade  <<endl;
}

