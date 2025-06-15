#include <iostream>
using namespace std;

float div(float a, float b);

int main(){
	float num1, num2;
	
	cout<<"Enter numbers: ";
	cin>>num1>>num2;
	
	cout<<"Div is: "<<div(num1, num2);
	
	return 0;
}

float div(float a, float b){
	float div;
	if (b == 0){
		cout<<"Cannot devide with zero.\n";
		return -1;
	}else{
		div = a / b;
		return div;
	}
}

