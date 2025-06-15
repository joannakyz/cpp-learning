#include <iostream>
using namespace std;

int max_two(int a, int b);

int main(){
	int num1, num2;
	
	cout<<"Insert two numbers: ";
	cin>>num1>>num2;
	
	cout<<"Max is "<<max_two(num1, num2);
	
	return 0;
}

int max_two(int a, int b){
	int max = -1000, min = 1000;
	
	if(a > b){
		max = a;	
		return max;
	}else if(a < b){
		max = b;
		return max;
	}
}
