#include <iostream>
using namespace std;

int factorial(int x);

int main(){
	
	int a;
	
	cout<<"Enter number: ";
	cin>>a;
	
	cout<<"The factorial of "<<a<<" is "<<factorial(a);
	
	return 0;
}

int factorial(int x){
	
	int result = 1;
	
	for(int i = 1; i <= x; i++){
		result *= i;
	}
	
	return result;
}

