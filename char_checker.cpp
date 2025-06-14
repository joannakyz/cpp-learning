#include <iostream>
using namespace std;

int main(){
	char a;
	cout<<"Enter character: ";
	cin>>a;
	
	if ((a > 'a' && a < 'z') || (a > 'A' && a < 'Z')){
		cout<<"You have entered character: "<<a;
	}else if (a >= '0' or a <= '9'){
		cout<<"You entered a number.";
	}
	return 0;
}
