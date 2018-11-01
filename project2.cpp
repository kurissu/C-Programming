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
	int getInterestRate();
	int getInitialAmount();
	int projectedSavings();
    int power(int);
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
int SavingsAccount::getInterestRate(){
	return double(interestRate/100);
}
int SavingsAccount::getInitialAmount(){
	return initialAmount;
}
int SavingsAccount::getYear(){
	return year;
}
int SavingsAccount::projectedSavings(){
	int result = initialAmount;
	if(year>=1)
		getInitialAmount();
	result = result*power(1+getInterestRate());
    cout<<result<<endl;
	return double(result);
}
int SavingsAccount::power(int n){
	int result = n;
	for(int i=1;i<year;i++)
		result = result * n;
return result;
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
    SavingsAccount s(n,r,y);
    cout<<"power is "<<s.power(2);
    cout<<"Your total savings after "<< y << " years will be "<< s.projectedSavings() <<endl;
return 0;
}
