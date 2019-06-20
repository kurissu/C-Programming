#include <iostream>
using namespace std;
/************ Declaration Section ******************/
class Rectangle{
private:
	int width, length;
public:
	Rectangle();
	Rectangle(int w, int l);
	void printArea();
	void displayInfo();
	Rectangle operator+(Rectangle& r);
};
/************ Implementation Section ******************/
Rectangle::Rectangle() { width = 1; length = 2; }
Rectangle::Rectangle(int w, int l) { width = w; length = l; }
void Rectangle::printArea() {
	cout <<"Area of "<< this <<" = "<< width*length<< endl;
}
void Rectangle::displayInfo() {
	cout << "I am a " << width <<"x"<< length<<" rectangle "
		 <<	"with id " << this << endl;
}

// + is a binary operator ( works will two element) ( element on each side of + operator)

Rectangle Rectangle::operator+/*(similar to funtion)*//*(overloading => using the same name but has different definition or how to use)*/(Rectangle& r)/*(which is take the address the of r)*/  {
									 //the + operator will return stuff ex:x=3+2 => return 5 and '=' will assign the 5 to x	 								//define what does the + operator do will do with rectangle
	//the one on the left side is the own and the one on the right is pass as parameter

	Rectangle temp;//1 step: creating new object type Rectangle

	temp.width = this->width + r.width; //this here means  the current rectangle here means r1 and the r.width means parameter which is passing by
	 //tell the computer to add two width and two length
	temp.length = this->length + r.length;
	return temp; //return the caller and assign(“=“) to the variable here which is r3
}


/***************** Main Section *********************/
int main(){
    Rectangle r1, r2(5,7), r3;
    r1.displayInfo();
    r2.displayInfo();
    r3.displayInfo();

    r3=r1+r2; // calling the + operator which belong to r1 and the parameter is r2
    r3.displayInfo();

    r1.printArea();
    r2.printArea();
    r3.printArea();
    return 0;
}

