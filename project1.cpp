#include<iostream>
using namespace std;
/*CLASS DECLARATION*/
class Fraction{
private:
	int numerator;
	int denominator;
public:
	Fraction(int, int);
	~Fraction();
	void setNum(int);	
	void setDen(int);
	int getNum();
	int getDen();
	void division();
	void lowestTerm();
	void printTerms();
};
/*IMPLEMENTATION SECTION*/
Fraction::Fraction(int n, int d):numerator(n), denominator(d){}
Fraction::~Fraction(){}
void Fraction::setNum(int n){
	numerator = n;
}
void Fraction::setDen(int d){
	denominator = d;
}
int Fraction::getNum(){
	return numerator;
}
int Fraction::getDen(){
	return denominator;
}
void Fraction::division(){
	double result = (double)numerator/(double)denominator;
	cout<<"The value of the fraction is: "<<result<<endl;
}
void Fraction::lowestTerm(){
	int n = numerator;
	int d = denominator;
	int gcd = n % d;
	while(gcd > 0)
	{
		n = d;
		d = gcd;
		gcd = n % d;
	}
	gcd = d;
	cout <<"The fraction in lowest terms is: ";
	cout << numerator/d <<"/"<<denominator/d<<endl;
}
/*MAIN FUNCTION*/
int main(){
	int n, d;
	cout<<"Please enter the numerator: ";
	cin>>n;
	cout<<"Please enter the denominator: ";
	cin>>d;
	Fraction app(n,d);
	cout<<"Your fraction is: "<<app.getNum()<<"/"<<app.getDen()<<endl;
	app.division();
	app.lowestTerm();
return 0;
}
