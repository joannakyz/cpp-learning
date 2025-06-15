#include <iostream>
using namespace std;

int total(int x);

int main(){
	int num;
	cout<<"Insert a number: ";
	cin>>num;
	
	cout<<"The total sum of all numbers until number "<<num<<" is "<<total(num);
	return 0;
}

int total(int x){
	int sum = 0;
	
	for(int i = 0; i <= x; i++){
		sum += i;
	}
	
	return sum;
}
