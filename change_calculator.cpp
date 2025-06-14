#include <iostream>
using namespace std;

int main(){
	int amount, change_50, change_10, change_5; 
	cout<<"Enter amount to pay: ";
	cin>>amount;
	
	change_50 = amount / 50;
	change_10 = (amount % 50) / 10;
	change_5 = ((amount % 50) % 10) / 5;
	
	cout<<"Change of 50 euro: "<<change_50;
	cout<<"\nChange of 10 euro: "<<change_10;
	cout<<"\nChange of 5 euro: "<<change_5;
	
	return 0;
}
