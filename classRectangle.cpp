//
//  main.cpp
//  testXcode
//
//  Created by Kurissu on 9/18/18.
//  Copyright © 2018 Kurisu Industries. All rights reserved.
//

#include <iostream>
using namespace std;
class Rectangle{
private:
	int width, length;
public:
	void set(int w, int l) { width = w; length = 1; }
	int getWidth() { return width; }
	int getLength() { return length; }
	void printArea(){
		cout << "Area = " << width*length << endl;
	}
};
int main() {
	Rectangle r1;
	r1.set(4,7);
	cout << "Dimensions: " <<r1.getWidth();
	cout << "x" << r1.getLength() << endl;
	r1.printArea();
    
    return 0;
}

