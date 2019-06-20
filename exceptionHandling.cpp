#include<iostream>
using namespace std;

int main(){
    int friends = 0;
    double money = 0.0 , average = 0.0;
    
    try{
        cout <<"How many friends do you have? ";
        cin>>friends;
        cout<<"How much money do you have? ";
        cin>>money;
        if(friends <= 0)
            throw money;
            
        average = money/friends;
        cout<<"Each friend will get $"<<average;

    }
    catch(double e){
        cout<<"$"<<e;
        cout<<" will not make you happy if you have no friends.";
    }
    return 0;
}
