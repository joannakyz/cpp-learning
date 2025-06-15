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
	
	int i = 1, result = 1;
	
	while (i <= x){
		result *= i;
		i++;
	}
		
	return result;
}

