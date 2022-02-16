#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string; using std::endl;
//write include statements
#include "decisions.h"

int main(){
	int choice = 0, 
	num = 0;
	string grade;
	cout << "      MAIN MENU" << endl;
	cout << "1-Letter grade using if" << endl;
	cout << "2-Letter grade if using switch" << endl;
	cout << "3-Exit" << endl;
	cin >> choice;
	if(choice == 1){
		cout << "Enter the grade to be converted." << endl;
		cin >> num;
		if(num >= 0 && num <= 100){
			grade = get_letter_grade_using_if(num);
		} else {
			cout << "The number is out of range." << endl;
		}
		cout << "The letter grade is " << grade << endl;
	}

	if(choice == 2){
		cout << "Enter the grade to be converted." << endl;
		cin >> num;
		if(num >= 0 && num <= 100){
			grade = get_letter_grade_using_switch(num);
		} else {
			cout << "The number is out of range." << endl;
		}
		cout << "The letter grade is " << grade << endl;
	}

	return 0;
}