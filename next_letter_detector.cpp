#include <iostream>
using namespace std;

int main(){
	char a;
	cout<<"Enter character: ";
	cin>>a;
	
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
		cout<<"You have entered character: "<<a;
		if (a == 'z'){
			cout<<"\nThe next letter is: a";
		}else if (a == 'Z'){
			cout<<"\nThe next letter is: A";
		}else{
			cout<<"\nThe next letter is: "<<++a;	
		}
	}else if (a >= '0' and a <= '9'){
		cout<<"\nYou entered the number: "<<a;
	}
	return 0;
}
