#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int question1, question2, question3, question4, question5, count1, count2, count3, count4, count5, result;
	cout << endl;
	cout << "\t\t\t\tTest of English" << endl;
	cout << "\tChoose the correct word below that must be in space by entering the right number of answer:\n" << endl;
	cout << "  He got a new job and he _____ more money.\n" << endl;
	cout << "  1 wins" << endl;
	cout << "  2 earns" << endl;
	cout << "  3 spends" << endl;
	cout << "  4 costs" << endl;
	cout << "Enter the correct number of answer: " << endl;
	cin >> question1;
	cout << endl;
	if (question1 == 2)
	{
		cout << "This is the right answer! Congratulations!" << endl << endl;
	}
	else if (question1 != 2)
	{
		cout << "Unfortunately, you choosed the wrong answer or entered the unacceptable symbols!" << endl << endl;
	}
	cout << endl << endl;
	cout << " I _____ I was right, but I made a mistake.\n" << endl;
	cout << "  1 thinked" << endl;
	cout << "  2 think" << endl;
	cout << "  3 though" << endl;
	cout << "  4 thought" << endl;
	cin >> question2;
	cout << endl;
	if (question2 == 4) 
	{   cout << "This is the right answer! Congratulations!" << endl << endl;
	}
	else if (question2 != 4)
	{
		cout << "Unfortunately, you choosed the wrong answer or entered the unacceptable symbols!" << endl << endl;
	}
	cout << " Those shoes are very _____ \n" << endl; 
	cout << "  1 expensive" << endl;
	cout << "  2 a lot" << endl;
	cout << "  3 cost" << endl;
	cout << "  4 lots of" << endl;
	cin >> question3; 
	cout << endl; 
	if (question3 == 1) 
	{
		cout << "This is the right answer! Congratulations!" << endl << endl;
	}
	else if (question3 != 1)
		cout << "Unfortunately, you choosed the wrong answer or entered the unacceptable symbols!" << endl << endl;
	cout << " I _____ there for a long time.\n" << endl;
	cout << "  1 lived" << endl;
	cout << "  2 living" << endl;
	cout << "  3 live" << endl;
	cout << "  4 life" << endl;
	cin >> question4; 
	cout << endl;
	if (question4 == 1)
	{ cout << "This is the right answer! Congratulations!" << endl << endl;
	}
	else if (question4 != 1)
	{ cout << "Unfortunately, you choosed the wrong answer or entered the unacceptable symbols!" << endl << endl;
	}
	cout << " Their car is _____ biggest on the road." << endl << endl;
	cout << "  1 than" << endl;
	cout << "  2 this" << endl;
	cout << "  3 the" << endl;
	cout << "  4 at" << endl;
	cin >> question5;
	cout << endl;
	if (question5 == 3) 
	{
		cout << "This is the right answer! Congratulations!" << endl << endl;
	}
	else if (question5 != 3) 
	{ 
		cout << "Unfortunately, you choosed the wrong answer or entered the unacceptable symbols!" << endl << endl;
	}
	if (question1 == 2) 
	{
		count1 = 1;
	}
	else if (question1 != 2) 
	{
		count1 = 0;
	}
	if (question2 == 4)
	{
		count2 = 1;
	}
	else if (question2 != 4)
	{
		count2 = 0;
	} 
	if (question3 == 1)
	{
		count3 = 1;
	}
	else if (question3 != 1)
	{
		count3 = 0;
	}
	if (question4 == 1)
	{
		count4 = 1;
	}
	else if (question4 != 1)
	{
		count4 = 0;
	}
	if (question5 == 3) 
	{
		count5 = 1;
	}
	else if (question5 != 3)
	{
		count5 = 0;
	}
	result = count1 + count2 + count3 + count4 + count5;
	if (result == 5)
	{ 
		cout << "Congratulations! You have 5 correct answers from 5! " << endl;
	}
	else if (result == 4)
	{
		cout << "You have 4 correct answer from 5. It's a good result!" << endl;
	}
	else if (result == 3)
	{
		cout << "Not bad, but you have just 3 correct answers from 5! Prolong your studying English and you will definitely get the excellent score in the near future!" << endl;
	}
	else if (result <= 2)
	{
		cout << "Unfortunately you've lost the test! You have  " << result << " correct answers from 5! Keep on your studying English and try again later!" << endl;
	}
}