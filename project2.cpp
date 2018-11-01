#include<iostream>
using namespace std;
/*CLASS DECLARATION*/
class SavingsAccount{
private:
	int interestRate;
	int initialAmount;
	int year;
public:
	SavingsAccount(int, int, int);
	~SavingsAccount();
	void setInitRate(int);	
	void setInitAmount(int);
	void setYear(int);
	int getYear();
	double getInterestRate();
	int getInitialAmount();
	double projectedSavings(int);
};
/*IMPLEMENTATION SECTION*/
SavingsAccount::SavingsAccount(int r, int n, int y):interestRate(r), initialAmount(n), year(y){}
SavingsAccount::~SavingsAccount(){}
void SavingsAccount::setInitRate(int r){
	interestRate = r;
}
void SavingsAccount::setInitAmount(int n){
	initialAmount = n;
}
void SavingsAccount::setYear(int y){
	year = y;
}
double SavingsAccount::getInterestRate(){
	return interestRate/100.0;
}
int SavingsAccount::getInitialAmount(){
	return initialAmount;
}
int SavingsAccount::getYear(){
	return year;
}
double SavingsAccount::projectedSavings(int y) {
	double result;
	if (y == 0)
		return getInitialAmount();
	return projectedSavings(y-1)+projectedSavings(y-1)*getInterestRate();

}
/*MAIN FUNCTION*/
int main(){
	int n, r, y;
	cout<<"Please enter the principle: ";
	cin>>n;
	cout<<"Please enter the interest rate: ";
	cin>>r;
    cout<<"Please enter the number of years: ";
    cin>>y;
    SavingsAccount s(r,n,y);
    cout<<"Your total savings after "<< y << " years will be $"<< s.projectedSavings(y) <<endl;
	system("pause");
	return 0;
}
