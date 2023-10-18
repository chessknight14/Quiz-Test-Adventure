#include <iostream>
using namespace std;




int main (){
	string name;
	char answer1, answer2, answer3, answer4, answer5;
	int a_q = 0;//could add a skip question feature
	int correct_a = 0;
	char A, B, C, D;
	
	cout << " \n";
	cout << "___________Welcome to the C++ Quiz__________\n";
	cout << " \n";
	cout << " \n";
	cout << " \n";
	cout << "Name: ";
	getline(cin >> ws, name);
	//so there won't be an issue typing in full names

	
	cout << " \n";
	cout << " \n";
	cout << " \n";
	cout << " \n";
	cout << "1. What language is this quiz written in? \n";
	cout << "          A. Microsoft Java \n";
	cout << "          B. Ruby \n";
	cout << "          C. C++ \n";
	cout << "          D. C- \n";
	cout << " \n";
	cout << " \n";
	cout << "Answer: ";
	cin >> answer1;
	
	if (answer1 == 'C'){
		correct_a++;
	}
	
	a_q++;
	
	cout << " \n";
	
	cout << "2. Choose the answer for this question: \n";
	cout << "             7 * x = 56 \n";
	cout << "          A. x = 7 \n";
	cout << "          B. x = 8 \n";
	cout << "          C. x = 56 \n";
	cout << "          D. x = 0 \n";
	cout << " \n";
	cout << " \n";
	cout << "Answer: ";
	cin >> answer2;

	if(answer2 == 'B'){
		correct_a++;
	}
	
	a_q++;
	
	cout << " \n";
	
	cout << "3. Can a 64-bit system run a 32-bit program? \n";
	cout << "          A. Yes \n";
	cout << "          B. No \n";
	cout << " \n";
	cout << " \n";
	cout << "Answer: ";
	cin >> answer3;
	
	if(answer3 == 'A'){
		correct_a++;
	}
	
	a_q++;
	
	cout << " \n";
	
	cout << "4. What continent is Vietnam in? \n";
	cout << "          A. Oceania \n";
	cout << "          B. South America \n";
	cout << "          C. Europe \n";
	cout << "          D. Asia \n";
	cout << " \n";
	cout << " \n";
	cout << "Answer: ";
	cin >> answer4;
	
	if (answer4 == 'D'){
		correct_a++;
	}
	
	a_q++; 
	
	
	cout << " \n";
	
	cout << "5. Choose the correct answer \n";
	cout << "          A. Fate \n";
	cout << "          B. Upstairs \n";
	cout << "          C. Correct answer \n";
	cout << "          D. Krita \n";
	cout << " \n";
	cout << " \n";
	cout << "Answer: ";
	cin >> answer5;
	
	if (answer5 == 'C'){
		correct_a++;
	}
	
	a_q++;
	
	cout << " \n";
	cout << " \n";
	cout << " \n";
	

	cout << "Total questions answered: " << a_q << endl;
	cout << "Score: " << correct_a << "/5";
	
	//WAIT
	cout << " \n";
	
	if (correct_a >= 3){
		cout << name << " has passed the quiz.";
	} else{
		cout << name << " has not passed the quiz.";
	}
	
	
	return 0;
}
