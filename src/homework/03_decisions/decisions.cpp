#include "decisions.h"

std::string get_letter_grade_using_if(int grade){
	if (grade <= 100 && grade >=90){
		return "A";
	} else if (grade >= 80){
		return "B";
	} else if (grade >= 70){
		return "C";
	} else if (grade >= 60){
		return "D";
	} else {
		return "F";
	}
}

std::string get_letter_grade_using_switch(int grade){
	grade = grade/10;
	switch (grade){
		case 9:
			return "A";
			break;
		case 8:
			return "B";
			break;
		case 7:
			return "C";
			break;
		case 6:
			return "D";
			break;
		default:
			return "F";
			break; 
	}
}