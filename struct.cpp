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

struct Course {
	int courseNumber; 
	char grade;
};

struct Exam {
    int examNumber;
    string grade;
};
int main(int argc, const char * argv[]) {
	Course myCourse ;
    Exam myExam;
    myExam.examNumber = 111;
    myExam.grade = "B-";
	myCourse.courseNumber = 101;
    myCourse.grade = 'A' ;
	cout << " I took MAC " << myCourse.courseNumber ;
	cout << " and I got a(n) " << myCourse.grade << endl;
    cout << " I took MAC " << myExam.examNumber ;
    cout << " and I got a(n) " << myExam.grade << endl;

return 0;    

}

