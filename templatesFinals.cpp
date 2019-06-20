#include <iostream>

#include <string>

using namespace std;



/************ Declaration Section ******************/



class Rectangle{



private:



    int width, length;



public:



    Rectangle();



    Rectangle(int w, int l);



    Rectangle operator+(Rectangle& r);



    int getWidth();



    int getLength();



    int getArea();



    void showinfo() ;



};







/************ Implementation Section ******************/



Rectangle::Rectangle() { width = 1, length = 2; }



Rectangle::Rectangle(int w, int l) { width = w, length = l;}



int Rectangle::getWidth(){return width;}



int Rectangle::getLength(){return length;}



int Rectangle::getArea(){return width*length;}



Rectangle Rectangle::operator+(Rectangle& r) {



    Rectangle temp;



    temp.width = this->width + r.width;



    temp.length = this->length + r.length;



    return temp;



}

void Rectangle::showinfo()

{

    cout<< "R:"<<width<<"x"<<length;

}





template<class T>

class Pair{

public:

    Pair();

    Pair(T firstValue, T secondValue);

    T getFirst();

    T getSecond();

    void printPair() ;



private:

    T first;

    T second;

};







template<class T>

Pair<T>::Pair(){

}



template<class T>

Pair<T>::Pair(T firstValue, T secondValue){

    first = firstValue;

    second = secondValue;

}





template<class T>

T Pair<T>::getFirst(){return first;}



template<class T>

T Pair<T>::getSecond(){return second;}





template<class T>

void Pair<T>:: printPair() {

    cout << "(" << first << "," << second << ")";

}



template<class T>

T addValue(Pair<T> &myPair){



    T temp1=myPair.getFirst();

    T temp2=myPair.getSecond();





    return temp1+temp2;

}



template<>//overloading a template function

void Pair<Rectangle>:: printPair(){

    cout << "(" ;

    first.showinfo();

    cout<< "," ;

    second.showinfo();

    cout<< ")";

}





int main() {

    Pair<int> p1(3,5);

    Pair<char> p2('a', 'b');

    Pair<string>p3("one","two");

    Rectangle r1(3,4),r2(7,9);

    Pair<Rectangle>p4(r1,r2);

    r1.showinfo();

    cout<<"\t";

    r2.showinfo();

    cout<<"\n";

    cout << "First pair: ";

    p1.printPair();

    cout << endl;

    cout<<"The sum of the first pair is "<<addValue(p1)<< endl;



    cout << "Second pair: ";

    p2.printPair();

    cout << endl;

    cout<<"The sum of the Second pair is "<<addValue(p2)<< endl;



    cout << "Third pair: ";

    p3.printPair();

    cout << endl;

    cout<<"The sum of the Third pair is "<<addValue(p3)<< endl;



    cout << "Fourth pair: ";

    p4.printPair();

    cout << endl;

    cout<<"The sum of the Fourth pair is ";

    Rectangle result = addValue(p4);

    result.showinfo();



    return 0;

}


