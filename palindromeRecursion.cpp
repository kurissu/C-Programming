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

bool isPalindrome (string); /* see 1 */

int main(){
    string mystr;
    cout << "Enter a string: ";
    getline (cin, mystr); /* see 2 */
    if (isPalindrome(mystr)) /* see 3 */
        cout << mystr << " is a palindrome \n";
    else
        cout << mystr << " is not a palindrome \n";
}
/*
bool isPalindrome(string str){
    
    int length = str.length();
    
    if(length <= 1)
        return true;
    
    if(str[0] == str[length-1])
        return isPalindrome(str.substr(1, (length - 2)));
    
    return false;
}
bool isPalindrome(string str){
    if (str.empty())
        return true;
    
    int i = 0;
    int j = str.length() - 1;
    
    while(i<j){
        if(str[i++] != str[j--])
            return false;
    }
    return 1;
}*/
bool isPalindrome(string str){
    int length = str.length();
    
    if(length<=1)
        return true;
    if(isPalindrome(mystr))
}

