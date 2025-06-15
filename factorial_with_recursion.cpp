#include <iostream>
using namespace std;

int factorial(int x);

int main(){
	int a;
	cout<<"give a: ";
	cin>>a;
	
	cout<<"The factorial of "<<a<<" is "<<factorial(a);
	return 0;
}

int factorial(int x){
	
	if (x > 0){
		return x * factorial(x - 1);
	}else{
		return 1;
	}
	
}
