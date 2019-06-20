#include <iostream>
using namespace std;

class Shape {
  public:
    int height;
    Shape(){height=1;}
    Shape(int h){height=h;}
    virtual void drawShape(){
    	cout << "Shape: height: " << height << endl;
    }
};
class Square: public Shape {
  public:
	Square(){height=1;}
	Square(int h){height=h;}
    void drawShape(){
    	cout << "Square: height: " << height << endl;
    	for(int i=0; i<height;i++){
    		for(int j=0;j<height*2;j++) {cout <<'*';}
    		cout << endl;
    	}
    	cout << endl << endl;
    }
};
class Triangle: public Shape {
  public:
	Triangle(){height=1;}
	Triangle(int h){height=h;}
    void drawShape(){
    	cout << "Triangle: height: " << height << endl;
    	for (int i=1;i<=5; i++) {
    		for(int j=1; j<=5-i; j++) {cout << ' ';}
    		for (int k=1; k<=2*i-1; k++ ) {cout <<'*';}
    		cout <<'\n';
    	}
    	cout << endl;
    }
};
void newDraw(Shape *s){
    cout<<"Hello I am the new function!!!"<<endl;
    s->drawShape();
}
int main () {
    Square mySquare(4);
    Triangle myTriangle(5);
    Shape myShape(6);
    newDraw(&mySquare);
    newDraw(&myTriangle);
    newDraw(&myShape);
  return 0;
}


