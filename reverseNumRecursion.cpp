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

void printReverse(int);

int main() {
    int number = 10;
    cout<<"Original: "<< number << endl;
    cout<<"Reversed: ";
    printReverse(number);

    return 0;
}

void printReverse(int n){
    if(n==0)
        return;
    printReverse(n/2);
    cout<<n%2;
    return;
    /*while(n!=0){
        cout<<n%10;
        n=n/10;
    }
     */
}

