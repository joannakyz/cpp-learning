//Ticket vending machine, that has 3 types of tickets (regular, student, family fare) which cost 0.7, 0.5 and 0.4 each.

#include <iostream>
using namespace std;

void ticket_menu();

int main(){
	double standard, student, family; 
	int choice = 0;
	int count, cost, change_50 = 0, change_20 = 0, change_10 = 0;
	count = 0;
	standard = 0.7;
	student = 0.5;
	family = 0.4;
	
	do{
		ticket_menu();
		cin>>choice;
		if (choice < 1 or choice > 3) {
			cout<<"You selected a wrong choice. Please try again.\n";
		}else{
			cout<<"How many tickets do you want to buy?\n";
			do{
				cin>>count;	
				if (count <= 0){
					cout<<"Please enter a correct count of tickets.\n";
				}
			}while (count <= 0);
			if (choice == 1){
				cost = 100 * count * standard;
			}else if (choice == 2){
				cost = 100 * count * student;
			}else if (choice == 3){
				cost = 100 * count * family;
			}
		}
	}while (choice != 1 && choice != 2 && choice != 3);
	
	change_50 = cost / 50;
	change_20 = (cost % 50) / 20;
	change_10 = ((cost % 50) % 20) / 10;
	
	cout<<"Total cost: "<<1.0 * cost / 100;
	if (change_50 > 0){
		cout<<"\nChange 0.5: "<<change_50;	
	}
	if (change_20 > 0){
		cout<<"\nChange 0.2: "<<change_20;	
	}
	if (change_10 > 0){
		cout<<"\nChange 0.1: "<<change_10;	
	}
	
	
	return 0;
}

void ticket_menu(){
	cout<<"~~Ticket Menu~~";
	cout<<"\n1. Standard fare (0.7 euros)\n2. Student fare (0.5 euros)\n3. Family fare (0.4 euros)";
	cout<<"\nSelect ticket: ";
}
