#include <iostream>
using namespace std;

void calculator_menu();
double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main(){
	int choice;
	choice = 0;
	double x, y;
	
	while (choice != 1 and choice != 2 and choice !=3 and choice != 4 and choice != 5){
	calculator_menu();
	cout<<"Select 1-5: ";
	cin>>choice;
	if (choice < 1 or choice >5){
		cout<<"Please select correctly (1-5).\n";
	}
	if (choice >=1 and choice <=4){
		cout<<"Enter numbers.\n";
		cout<<"Enter value for x: ";
		cin>>x;
		if (choice == 4){
			do{
			cout<<"Enter value for y: ";
			cin>>y;
			if (y ==0){
				cout<<"Incorrect. Can't devide with zero!";
			}
			}while(y == 0);
		}else{
			cout<<"Enter value for y: ";
			cin>>y;	
		}	
	}	
	if (choice == 1){
		cout<<"x + y = "<<x<<" + "<<y<<" = "<<addition(x, y);
	}else if (choice == 2){
		cout<<"x - y = "<<x<<" - "<<y<<" = "<<subtraction(x, y);
	}else if (choice == 3){
		cout<<"x + y = "<<x<<" * "<<y<<" = "<<multiplication(x, y);
	}else if (choice == 4){
		cout<<"x + y = "<<x<<" / "<<y<<" = "<<division(x, y);
	}else if (choice == 5){
		cout<<"You have exited the calculator..";
	}
	}
	
}

void calculator_menu(){
	cout<<"~~Calculator Menu~~\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n5. Exit\n";
}
double addition(double a, double b){
	return a + b;
}
double subtraction(double a, double b){
	return a - b;
}
double multiplication(double a, double b){
	return a * b;
}
double division(double a, double b){
	return 1.0 * a / b;
}
