#include <iostream>
using namespace std;

int main(){
	
	double weight, height, bmi; //weight in kg and height in m
	
	cout<<"Insert your weight (in kg): ";
	cin>>weight;
	cout<<"Insert your height (in m): ";
	cin>>height;
	
	bmi = weight / (height * height);
	
	if (bmi < 18.5){
		cout<<"Underweight.";
	}else if (bmi >= 18.5 && bmi < 25){
		cout<<"Normal weight.";
	}else if (bmi >= 25 && bmi < 30){
		cout<<"Overweight.";
	}else{
		cout<<"Obese";
	}
	
	return 0;
}
