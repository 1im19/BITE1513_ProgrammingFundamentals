// BITE1513_ProgrammingFundamentals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // for cout and cin
#include <cmath> // for complex math function eg: pow and sqrt
#include<cstdlib> // for random number generation eg: rand and srand 
#include<ctime> // for time based programming
#include<string> // for string datatype
#include<cctype> // for tolower and toupper function
#include<fstream> // for input and output file
using namespace std;

void lab1question1_1()
{
	cout << "Hello\nI am a second year student from FKE\n\n";
	cout << "My name is Aniza Othman";
}

void lab1question1_2()
{
	cout << "*********************************\n";
	cout << "*****          UTEM         *****\n";
	cout << "*********************************\n";
}

void lab1question1_3()
{
	cout << "10\n";
	cout << " 9\n";
	cout << " 8\n";
	cout << " 7           x\n";
	cout << " 6 x\n";
	cout << " 5                    x\n";
	cout << " 4   x\n";
	cout << " 3               x\n";
	cout << " 2     x\n";
	cout << " 1 x\n";
	cout << " 0 1 2 3 4 5 6 7 8 9 10\n";
}

void lab1question1()
{
	lab1question1_1();
	cout << "\n";
	lab1question1_2();
	cout << "\n";
	lab1question1_3();
}

void lab1question2()
{
	char program1[100], university1[100];
	int year1;

	cout << "Enter your program: \t";
	cin >> program1;
	cin.getline(program1, 100); //if you want user to key in more than 1 word in a char input, use cin.getline(variable,size)
	cout << "\nEnter your university: \t";
	cin >> university1;
	cin.getline(university1, 100);
	cout << "\nEnter your year of study: \t";
	cin >> year1;
	cout << "\n\nWelcome" << endl;
}

void lab1()
{
	int questionchoice1;

	do
	{
		cout << "Lab 1 - Introduction to Visual C++ Program\n";
		cout << "Please select question range from 1 and 2, or key in other inputs to cancel: \t";
		cin >> questionchoice1;
		if (questionchoice1 == 1)
		{
			cout << "\n";
			lab1question1();
			cout << "\n";
		}
		else if (questionchoice1 == 2)
		{
			cout << "\n";
			lab1question2();
			cout << "\n";
		}
	} while (questionchoice1 == 1 || questionchoice1 == 2);
}

void lab2question1()
{
	int S1;
	float A1;

	cout << "A = sqrt(S^5 + 2^4)\n";
	cout << "Please key in the value for S: \t";
	cin >> S1;

	A1 = sqrt(pow(S1, 5) + pow(2, 4)); // sqrt(x1) is a square root of x1. pow(x1,x2) is an exponent of x1 to the power of x2
	cout << "A = \t" << A1 << endl;
}

void lab2question2()
{
	int C1;
	float F1;

	cout << "A = (C * 9/5) + 32\n";
	cout << "Please key in the value for C: \t";
	cin >> C1;

	F1 = ((float)C1 * 9 / 5) + 32; // (float) converts any data type to float
	cout << "F1 = \t" << F1 << endl;
}

void lab2question3()
{
	int r1;
	double pi1 = 3.1415926535897;
	double Volume1;

	cout << "Volume = 4/3 * pi * r^3 \n";
	cout << "Please key in the value for r: \t";
	cin >> r1;

	Volume1 = 4/3 * pi1 * pow(r1,3);
	cout << "Volume = \t" << Volume1 << endl;
}

void lab2question4()
{
	int b1, c1, d1, e1;
	float ANSWER1;

	cout << "ANSWER = (b+c)^1/2 * (d-e)\n";
	cout << "Please key in the value for b: \t";
	cin >> b1;
	cout << "Please key in the value for c: \t";
	cin >> c1;
	cout << "Please key in the value for d: \t";
	cin >> d1;
	cout << "Please key in the value for e: \t";
	cin >> e1;

	ANSWER1 = (sqrt(b1+c1)) * (d1 - e1);
	cout << "ANSWER = \t" << ANSWER1 << endl;
}

void lab2()
{
	int questionchoice2;

	do
	{
		cout << "Lab 2 - Introduction C++ and Problem Solving\n";
		cout << "Please select question range from 1 and 4, or key in other inputs to cancel: \t";
		cin >> questionchoice2;
		if (questionchoice2 == 1)
		{
			cout << "\n";
			lab2question1();
			cout << "\n";
		}
		else if (questionchoice2 == 2)
		{
			cout << "\n";
			lab2question2();
			cout << "\n";
		}
		else if (questionchoice2 == 3)
		{
			cout << "\n";
			lab2question3();
			cout << "\n";
		}
		else if (questionchoice2 == 4)
		{
			cout << "\n";
			lab2question4();
			cout << "\n";
		}
	} while (questionchoice2 >= 1 && questionchoice2 <= 4);
}

void lab4question1()
{
	for (int i1 = 0; i1 < 200; i1++)
	{
		cout << "Muhammad Aiman Bin Mohd Nor Azman" << endl;
	}
}

void lab4question2()
{
	int i2 = 3;

	while (i2 <= 222)
	{
		cout << i2 << " ";
		i2 += 3;
	}
	cout << endl;
}

void lab4question3()
{
	for (int i3 = 50; i3 > 0; i3--)
	{
		cout << i3 << " ";
	}
	cout << endl;
}

void lab4question4()
{
	int i4 = 300;

	while (i4 <= 500)
	{
		if (i4 % 3 == 0 && i4 % 7 == 0)
		{
			cout << i4 << " ";
		}
		i4++;
	}
	cout << endl;
}

void lab4question5()
{
	const int size1 = 10;
	int input1[size1];
	int sum1 = 0;
	float average1;

	cout << "Please enter 10 numbers: \n";

	for (int i5 = 0; i5 < size1; i5++)
	{
		cout << "Number " << i5 + 1 << ": \t";
		cin >> input1[i5];
		sum1 += input1[i5];
	}

	average1 = (float)sum1 / size1;
	cout << "Sum: \t" << sum1 << endl;
	cout << "Average: \t" << average1 << endl;
}

void lab4question6()
{
	int mark1;
	do
	{
		cout << "Please insert the mark, or any number smaller than 0 or greater than 100 to stop: \t";
		cin >> mark1;
		if (mark1 >= 0 && mark1 < 40)
		{
			cout << "Grade C" << endl;
		}
		else if (mark1 >= 40 && mark1 < 70)
		{
			cout << "Grade B" << endl;
		}
		else if (mark1 >= 70 && mark1 <= 100)
		{
			cout << "Grade A" << endl;
		}
	} while (mark1 >= 0 && mark1 <= 100);
}

void lab4question7v1(int& useranswer1, int num1, int num2, char operation1)
{
	cout << "What is " << num1 << " " << operation1 << " " << num2 << "? : \t";
	cin >> useranswer1;
}

void lab4question7v2(char& choice1, int useranswer1, int actualanswer1, int attempt1, int maxattempt1, int num1, int num2, char operation1)
{
	while (useranswer1 != actualanswer1 && attempt1 < maxattempt1)
	{
		attempt1++;
		cout << "Wrong Answer, Try again!" << endl << endl;
		lab4question7v1(useranswer1, num1, num2, operation1);
		if (attempt1 >= maxattempt1)
		{
			cout << endl;
			cout << "Oopps!" << endl << endl << endl;
		}
	}

	if (useranswer1 == actualanswer1)
	{
		cout << endl;
		cout << "Right Answer, Congratulation" << endl << endl << endl;
	}

	cout << "Do you want to try again? (Y/N) : \t";
	cin >> choice1;
	if (choice1 == 'Y' || choice1 == 'y')
	{
		attempt1 = 0;
		cout << endl << endl;
	}
}

void lab4question7v3(int& useranswer1, char& choice1, int num1, int num2, char operation1, int actualanswer1, int attempt1, int maxattempt1)
{
	lab4question7v1(useranswer1, num1, num2, operation1);
	lab4question7v2(choice1, useranswer1, actualanswer1, attempt1, maxattempt1, num1, num2, operation1);
}

void lab4question7()
{
	int max1 = 50;
	int num1, num2;
	int useranswer1, actualanswer1;
	int attempt1 = 1, maxattempt1 = 3;
	int operationtype1;
	char choice1;
	char operation1;

	do
	{
		srand(time(NULL)); // generates different random numbers everytime the program is run at different time
		num1 = rand() % max1 + 1; //ranges of random numbers
		num2 = rand() % max1 +  1;
		operationtype1 = rand() % 3 + 1;

		if (operationtype1 == 1)
		{
			operation1 = '+';
			actualanswer1 = num1 + num2;
			lab4question7v3(useranswer1, choice1, num1, num2, operation1, actualanswer1, attempt1, maxattempt1);
		}
		else if (operationtype1 == 2)
		{
			operation1 = '-';
			actualanswer1 = num1 - num2;
			lab4question7v3(useranswer1, choice1, num1, num2, operation1, actualanswer1, attempt1, maxattempt1);
		}
		else if (operationtype1 == 3)
		{
			operation1 = 'x';
			actualanswer1 = num1 * num2;
			lab4question7v3(useranswer1, choice1, num1, num2, operation1, actualanswer1, attempt1, maxattempt1);
		}
	} while (choice1 == 'Y' || choice1 == 'y');
}

void lab4()
{
	int questionchoice3;

	do
	{
		cout << "Lab 4 - Selection and Repetition\n";
		cout << "NOTE: QUESTION 1 TO 4 IS MERGED TO OUTPUT NUMBER 1, QUESTION 5 IS OUTPUT 2, QUESTION 6 IS OUTPUT 3 AND EXERCISE IS OUTPUT 4\n";
		cout << "Please select question range from 1 and 4, or key in other inputs to cancel: \t";
		cin >> questionchoice3;
		if (questionchoice3 == 1)
		{
			cout << "\n";
			lab4question1();
			cout << "\n";
			lab4question2();
			cout << "\n";
			lab4question3();
			cout << "\n";
			lab4question4();
			cout << "\n";
		}
		else if (questionchoice3 == 2)
		{
			cout << "\n";
			lab4question5();
			cout << "\n";
		}
		else if (questionchoice3 == 3)
		{
			cout << "\n";
			lab4question6();
			cout << "\n";
		}
		else if (questionchoice3 == 4)
		{
			cout << "\n";
			lab4question7();
			cout << "\n";
		}
	} while (questionchoice3 >= 1 && questionchoice3 <= 4);
}

void lab5question1a()
{
	cout << "Without Functions: \n\n";
	cout << "()()\n(^_^)\n(____)o"; 
	cout << endl << endl;
	cout << " ___\n('v')\n( )\nv v";
	cout << endl << endl;
	cout << "  ()\n (  )\n(    )\n  ||";
	cout << endl << endl;
}

void lab5question1bv1()
{
	cout << "1st Function: \n";
	cout << "()()\n(^_^)\n(____)o";
	cout << endl << endl;
}

void lab5question1bv2()
{
	cout << "2nd Function: \n";
	cout << " ___\n('v')\n( )\nv v";
	cout << endl << endl;
}

void lab5question1bv3()
{
	cout << "3rd Function: \n";
	cout << "  ()\n (  )\n(    )\n  ||";
	cout << endl << endl;
}

void lab5question1b()
{
	cout << "With Functions: \n\n";
	lab5question1bv1();
	cout << endl;
	lab5question1bv2();
	cout << endl;
	lab5question1bv3();
}

void lab5question1()
{
	lab5question1a();
	cout << "\n";
	lab5question1b();
}

void lab5question2a()
{
	float A2;
	float A3, A4, A5;

	cout << "Without Function: \n\n";
	cout << "Please insert the value of A: \t";
	cin >> A2;
	A3 = pow(A2, 2);
	A4 = pow(A2, 3);
	A5 = pow(A2, 4);
	cout << "A^2: \t" << A3 << endl;
	cout << "A^3: \t" << A4 << endl;
	cout << "A^4: \t" << A5 << endl;
}


void lab5question2bv1_1(float A2)
{
	float A3, A4, A5;

	A3 = pow(A2, 2);
	A4 = pow(A2, 3);
	A5 = pow(A2, 4);
	cout << "A^2: \t" << A3 << endl;
	cout << "A^3: \t" << A4 << endl;
	cout << "A^4: \t" << A5 << endl;
}

void lab5question2bv1()
{
	float A2;

	cout << "Please insert the value of A: \t";
	cin >> A2;
	lab5question2bv1_1(A2);
}

// void function is not returnable, other functions than void is returnable
float lab5question2bv2_1()
{
	float A2;

	cout << "Please insert the value of A: \t";
	cin >> A2;
	return A2;
}

float lab5question2bv2_2(float A2)
{
	float A3;

	A3 = pow(A2, 2);
	return A3;
}

float lab5question2bv2_3(float A2)
{
	float A4;

	A4 = pow(A2, 3);
	return A4;
}

float lab5question2bv2_4(float A2)
{
	float A5;

	A5 = pow(A2, 4);
	return A5;
}

void lab5question2bv2()
{
	float A2;
	float A3, A4, A5;

	A2 = lab5question2bv2_1();
	A3 = lab5question2bv2_2(A2);
	A4 = lab5question2bv2_3(A2);
	A5 = lab5question2bv2_4(A2);
	cout << "A^2: \t" << A3 << endl;
	cout << "A^3: \t" << A4 << endl;
	cout << "A^4: \t" << A5 << endl;
}


void lab5question2bv3_1(float& A2)
{
	cout << "Please insert the value of A: \t";
	cin >> A2;
}

void lab5question2bv3_2(float& A3, float& A4, float& A5, float A2)
{
	A3 = pow(A2, 2);
	A4 = pow(A2, 3);
	A5 = pow(A2, 4);
	cout << "A^2: \t" << A3 << endl;
	cout << "A^3: \t" << A4 << endl;
	cout << "A^4: \t" << A5 << endl;
}

void lab5question2bv3()
{
	float A2;
	float A3, A4, A5;

	lab5question2bv3_1(A2);
	lab5question2bv3_2(A3, A4, A5, A2);
} 

void lab5question2b()
{
	int questionchoice4_1_1;
	do
	{
		cout << "1 - receive input A via parameter, calculate and display\n";
		cout << "2 - receive input A via parameter, calculate and return result\n";
		cout << "3 - receive input A  via parameter, calculate and updates results via reference parameter\n";
		cout << "\nPlease choose the function: \t";
		cin >> questionchoice4_1_1;
		if (questionchoice4_1_1 == 1)
		{
			cout << "\n";
			lab5question2bv1();
			cout << "\n";
		}
		else if (questionchoice4_1_1 == 2)
		{
			cout << "\n";
			lab5question2bv2();
			cout << "\n";
		}
		else if (questionchoice4_1_1 == 3)
		{
			cout << "\n";
			lab5question2bv3();
			cout << "\n";
		}
	} while (questionchoice4_1_1 >= 1 && questionchoice4_1_1 <= 3);
}

void lab5question2()
{
	char questionchoice4_1;

	do
	{
		cout << "Please choose 'a' for 'without function', 'b' for 'with function' or any other input to cancel: \t";
		cin >> questionchoice4_1;
		if (questionchoice4_1 == 'a')
		{
			cout << "\n";
			lab5question2a();
			cout << "\n";
		}
		else if (questionchoice4_1 == 'b')
		{
			cout << "\n";
			lab5question2b();
			cout << "\n";
		}
	} while (questionchoice4_1 == 'a' || questionchoice4_1 == 'b');
}


void lab5question3a()
{
	int win1, draw1, loss1;
	int points1;

	for (int i6 = 0; i6 < 10; i6++)
	{
		cout << "Enter how many games that team " << i6 + 1 << " has: \n";
		cout << "won: \t";
		cin >> win1;
		cout << "draw: \t";
		cin >> draw1;
		cout << "lost: \t";
		cin >> loss1;
		while (win1 + draw1 + loss1 != 30)
		{
			cout << "\nInvalid input. The total number of games is 30.\n\n" << endl;
			cout << "Enter how many games that team " << i6 + 1 << " has: \n";
			cout << "won: \t";
			cin >> win1;
			cout << "draw: \t";
			cin >> draw1;
			cout << "lost: \t";
			cin >> loss1;
		}
		points1 = win1 * 3 + draw1;
		cout << "Team " << i6 + 1 << " gets " << points1 << " points" << endl << endl;
	}
}

void lab5question3bv1_1(int win1, int draw1, int i6)
{
	int points1;
	points1 = win1 * 3 + draw1;
	cout << "Team " << i6 + 1 << " gets " << points1 << " points" << endl << endl;
}

void lab5question3bv1()
{
	int win1, draw1, loss1;
	int points1;

	for (int i6 = 0; i6 < 10; i6++)
	{
		cout << "Enter how many games that team " << i6 + 1 << " has: \n";
		cout << "won: \t";
		cin >> win1;
		cout << "draw: \t";
		cin >> draw1;
		cout << "lost: \t";
		cin >> loss1;
		while (win1 + draw1 + loss1 != 30)
		{
			cout << "\nInvalid input. The total number of games is 30.\n\n" << endl;
			cout << "Enter how many games that team " << i6 + 1 << " has: \n";
			cout << "won: \t";
			cin >> win1;
			cout << "draw: \t";
			cin >> draw1;
			cout << "lost: \t";
			cin >> loss1;
		}
		lab5question3bv1_1(win1, loss1, i6);
	}
}

int lab5question3bv2_1()
{
	int win1;

	cout << "won: \t";
	cin >> win1;

	return win1;
}

int lab5question3bv2_2()
{
	int draw1;

	cout << "draw: \t";
	cin >> draw1;

	return draw1;
}

int lab5question3bv2_3()
{
	int loss1;

	cout << "lost: \t";
	cin >> loss1;

	return loss1;
}

int lab5question3bv2_4(int win1, int draw1)
{
	int points1;

	points1 = win1 * 3 + draw1;

	return points1;
}

void lab5question3bv2()
{
	int win1, draw1, loss1;
	int points1;

	for (int i6 = 0; i6 < 10; i6++)
	{
		cout << "Enter how many games that team " << i6 + 1 << " has: \n";
		win1 = lab5question3bv2_1();
		draw1 = lab5question3bv2_2();
		loss1 = lab5question3bv2_3();
		while (win1 + draw1 + loss1 != 30)
		{
			cout << "\nInvalid input. The total number of games is 30.\n\n" << endl;
			cout << "Enter how many games that team " << i6 + 1 << " has: \n";
			win1 = lab5question3bv2_1();
			draw1 = lab5question3bv2_2();
			loss1 = lab5question3bv2_3();
		}
		points1 = lab5question3bv2_4(win1, draw1);
		cout << "Team " << i6 + 1 << " gets " << points1 << " points" << endl << endl;
	}
}

void lab5question3bv3_1(int& win1)
{
	cout << "won: \t";
	cin >> win1;
}

void lab5question3bv3_2(int& draw1)
{
	cout << "draw1: \t";
	cin >> draw1;
}

void lab5question3bv3_3(int& loss1)
{
	cout << "lost: \t";
	cin >> loss1;
}

void lab5question3bv3_4(int& points1, int win1, int draw1)
{
	points1 = win1 * 3 + draw1;
}

void lab5question3bv3()
{
	int win1, draw1, loss1;
	int points1;

	for (int i6 = 0; i6 < 10; i6++)
	{
		cout << "Enter how many games that team " << i6 + 1 << " has: \n";
		lab5question3bv3_1(win1);
		lab5question3bv3_2(draw1);
		lab5question3bv3_3(loss1);
		while (win1 + draw1 + loss1 != 30)
		{
			cout << "\nInvalid input. The total number of games is 30.\n\n" << endl;
			cout << "Enter how many games that team " << i6 + 1 << " has: \n";
			lab5question3bv3_1(win1);
			lab5question3bv3_2(draw1);
			lab5question3bv3_3(loss1);
		}
		lab5question3bv3_4(points1, win1, draw1);
		cout << "Team " << i6 + 1 << " gets " << points1 << " points" << endl << endl;
	}
}

void lab5question3b()
{
	int questionchoice4_2_1;
	do
	{
		cout << "1 - receive input A via parameter, calculate and display\n";
		cout << "2 - receive input A via parameter, calculate and return result\n";
		cout << "3 - receive input A  via parameter, calculate and updates results via reference parameter\n";
		cout << "Please choose the function: \t";
		cin >> questionchoice4_2_1;
		if (questionchoice4_2_1 == 1)
		{
			cout << "\n";
			lab5question3bv1();
			cout << "\n";
		}
		else if (questionchoice4_2_1 == 2)
		{
			cout << "\n";
			lab5question3bv2();
			cout << "\n";
		}
		else if (questionchoice4_2_1 == 3)
		{
			cout << "\n";
			lab5question3bv3();
			cout << "\n";
		}
	} while (questionchoice4_2_1 >= 1 && questionchoice4_2_1 <= 3);
}

void lab5question3()
{
	char questionchoice4_2;

	do
	{
		cout << "Please choose 'a' for 'without function', 'b' for 'with function' or any other input to cancel: \t";
		cin >> questionchoice4_2;
		if (questionchoice4_2 == 'a')
		{
			cout << "\n";
			lab5question3a();
			cout << "\n";
		}
		else if (questionchoice4_2 == 'b')
		{
			cout << "\n";
			lab5question3b();
			cout << "\n";
		}
	} while (questionchoice4_2 == 'a' || questionchoice4_2 == 'b');
} 


void lab5()
{
	int questionchoice4;

	do
	{
		cout << "Lab 5 - Functions\n";
		cout << "Please select question range from 1 and 3, or key in other inputs to cancel: \t";
		cin >> questionchoice4;
		if (questionchoice4 == 1)
		{
			cout << "\n";
			lab5question1();
			cout << "\n";
		}
		else if (questionchoice4 == 2)
		{
			cout << "\n";
			lab5question2();
			cout << "\n";
		}
		else if (questionchoice4 == 3)
		{
			cout << "\n";
			lab5question3();
			cout << "\n";
		}
	} while (questionchoice4 >= 1 && questionchoice4 <= 3);
} 

void lab6question1v1(char(&character1)[200])
{
	do
	{
		cout << "Please enter 2 character here: \t";
		cin >> character1;
		// strlen calculates length of a string
		if (strlen(character1) != 2)
		{
			cout << "\nInvalid Input!" << endl << endl;
		}
	} while (strlen(character1) != 2);
}

void lab6question1v2(char character1[200])
{
	cout << "Characters sorted in alphabetical order" << endl;
	if (tolower(character1[0]) < tolower(character1[1]))
	{
		cout << character1[0] << character1[1] << endl;
	}
	else
	{
		cout << character1[1] << character1[0] << endl;
	}
}

void lab6question1()
{
	char character1[200];

	lab6question1v1(character1);
	cout << "\n";
	lab6question1v2(character1);
}

void lab6question2v1(string (&name1)[10])
{
	cout << "Please enter 10 names: \t" << endl;
	for (int i7 = 0; i7 < 10; i7++)
	{
		cout << i7 + 1 << ". \t";
		cin >> name1[i7];
	}
}

void lab6question2v2(char (&character2)[200], string name1[10])
{
	cout << "The name starts with H and N are:" << endl;
	for (int i8 = 0; i8 < 10; i8++)
	{
		//strcpy_s copies the string of a variable into another variable
		//c_str() is a method that split the character of a string
		strcpy_s(character2, name1[i8].c_str()); 
		if (toupper(character2[0]) == 'H' || toupper(character2[0]) == 'N')
		{
			cout << name1[i8] << endl;
		}
	}
} 

void lab6question2()
{
	string name1[10];
	char character2[200];

	lab6question2v1(name1);
	cout << "\n";
	lab6question2v2(character2, name1);
}

void lab6question3v1(char(&character3)[200])
{
	do
	{
		cout << "Please enter 10 characters: \t";
		cin >> character3;
		if (strlen(character3) > 10)
		{
			cout << "\nInvalid Input!" << endl << endl;
		}
	} while (strlen(character3) > 10);
}

void lab6question3v2(int& count1, char character3[200])
{
	count1 = 0;
	for (int i9 = 0; i9 < strlen(character3); i9++)
	{
		if (tolower(character3[i9]) != 'a' && tolower(character3[i9]) != 'e' && tolower(character3[i9]) != 'i' && tolower(character3[i9]) != 'o' && tolower(character3[i9]) != 'u')
		{
			count1++;
		}
	}
	cout << "There is/are " << count1 << " consonants in your letters" << endl;
}

void lab6question3()
{
	char character3[200];
	int count1;

	lab6question3v1(character3);
	cout << "\n";
	lab6question3v2(count1, character3);
}

void lab6question4v1(string (&animal1)[5])
{
	cout << "Please enter 5 animals:" << endl;
	for (int i10 = 0; i10 < 5; i10++)
	{
		cout << i10 + 1 << ". \t";
		cin >> animal1[i10];
	}
}

void lab6question4v2(char (&character4)[200], bool &isCat1, string animal1[5])
{
	isCat1 = false;
	cout << "List of all animals in Uppercase: " << endl;
	for (int i11 = 0; i11 < 5; i11++)
	{
		strcpy_s(character4, animal1[i11].c_str());
		for (int j1 = 0; j1 < strlen(character4); j1++)
		{
			character4[j1] = toupper(character4[j1]);
			cout << character4[j1];
		}

		if (character4[0] == 'C' && character4[1] == 'A' && character4[2] == 'T')
		{
			isCat1 = true;
		}
		
		if (i11 < 4)
		{
			cout << ", ";
		}
	}
	cout << "." << endl;
	if (isCat1 == true)
	{
		cout << "The list contains my favourite pet." << endl;
	}
}

void lab6question4()
{
	string animal1[5];
	char character4[200];
	bool isCat1;

	lab6question4v1(animal1);
	cout << "\n";
	lab6question4v2(character4, isCat1, animal1);
} 

void lab6question5v1(string (&car1)[10])
{
	cout << "Please enter 10 car brands:" << endl;
	for (int i12 = 0; i12 < 10; i12++)
	{
		cout << i12 + 1 << ". \t";
		cin >> car1[i12];
	}
}

void lab6question5v2(char (&character5)[200], string car1[10])
{
	int k1 = 1;
	cout << "Cars that is developed by Proton are: " << endl;
	for (int i13 = 0; i13 < 10; i13++)
	{
		strcpy_s(character5, car1[i13].c_str());
		for (int j2 = 0; j2 < strlen(character5); j2++)
		{
			character5[j2] = tolower(character5[j2]);
		}

		if (character5[0] == 'e' && character5[1] == 'x' && character5[2] == 'o' && character5[3] == 'r' && character5[4] == 'a')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 'p' && character5[1] == 'e' && character5[2] == 'r' && character5[3] == 's' && character5[4] == 'o' && character5[5] == 'n' && character5[6] == 'a')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 's' && character5[1] == 'a' && character5[2] == 'g' && character5[3] == 'a')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 'p' && character5[1] == 'r' && character5[2] == 'e' && character5[3] == 'v' && character5[4] == 'e')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 'p' && character5[1] == 'e' && character5[2] == 'r' && character5[3] == 'd' && character5[4] == 'a' && character5[5] == 'n' && character5[6] == 'a')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 'i' && character5[1] == 'r' && character5[2] == 'i' && character5[3] == 's')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
		else if (character5[0] == 's' && character5[1] == 'u' && character5[2] == 'p' && character5[3] == 'r' && character5[4] == 'i' && character5[5] == 'm' && character5[6] == 'a')
		{
			cout << k1 << ". \t" << car1[i13] << endl;
			k1++;
		}
	}
} 

void lab6question5()
{
	string car1[10];
	char character5[200];

	lab6question5v1(car1);
	cout << "\n";
	lab6question5v2(character5, car1);
}

void lab6question6v1(string (&name2)[10], string (&IC1)[10],char (&character6)[200])
{
	cout << "Insert 10 names and IC numbers:" << endl;
	for (int i14 = 0; i14 < 10; i14++)
	{
		do
		{
			cout << i14 + 1 << ". Name: \t";
			cin >> name2[i14];
			cout << "IC number: \t";
			cin >> IC1[i14];
			strcpy_s(character6, IC1[i14].c_str());
			if (strlen(character6) != 12)
			{
				cout << "Invalid IC number." << endl << endl; 
			}
		} while (strlen(character6) != 12);
	}
}

void lab6question6v2(char (&oldest1)[7], char (&character7)[200], string (&oldest2), string name2[10], string IC1[10])
{
	int j3 = 0;
	oldest1[0] = '9', oldest1[1] = '9', oldest1[2] = '1', oldest1[3] = '2', oldest1[4] = '3', oldest1[5] = '1';
	for (int i15 = 0; i15 < 10; i15++)
	{
		j3 = 0;
		strcpy_s(character7, IC1[i15].c_str());
		cout << i15 + 1 << ". Name: \t" << name2[i15] << endl;

		while (character7[j3] - '0' == oldest1[j3] - '0' && j3 < 6)
		{
			if (character7[j3] - '0' == oldest1[j3] - '0')
			{
				j3++;
			}
		}

		if (character7[j3] - '0' < oldest1[j3] - '0')
		{
			for (int k1 = 0; k1 < 6; k1++)
			{
				oldest1[k1] = character7[k1];
			}
			oldest2 = name2[i15];
		}
	}

	cout << "The oldest person in the list is " << oldest2 << endl;
}

void lab6question6()
{
	string name2[10], IC1[10], oldest2;
	char character6[200],character7[200], oldest1[7];

	lab6question6v1(name2, IC1, character6);
	cout << "\n";
	lab6question6v2(oldest1, character7, oldest2, name2, IC1);
}

void lab6question8v1(string (&name3)[10], string (&gender1)[10], char (&character7)[200], int (&score1)[10])
{
	cout << "Please insert 10 names and their gender and score." << endl;
	for (int i16 = 0; i16 < 10; i16++)
	{
		do
		{
			cout << i16 + 1 << ". Name: \t";
			cin >> name3[i16];
			cout << "Gender: \t";
			cin >> gender1[i16];
			strcpy_s(character7, gender1[i16].c_str());
			for (int j4 = 0; j4 < strlen(character7); j4++)
			{
				character7[j4] = tolower(character7[j4]);
			}
			if ((character7[0] != 'm' && character7[1] != 'a' && character7[2] !='l' && character7[3] != 'e') && (character7[0] != 'f' && character7[1] != 'e' && character7[2] != 'm' && character7[3] != 'a' && character7[4] != 'l' && character7[5] != 'e'))
			{
				cout << "Invalid gender." << endl;
			}
			else
			{
				cout << "Score: \t";
				cin >> score1[i16];
				if (score1 < 0)
				{
					cout << "Invalid score." << endl;
				}
			}
		} while ((character7[0] != 'm' && character7[1] != 'a' && character7[2] != 'l' && character7[3] != 'e') && (character7[0] != 'f' && character7[1] != 'e' && character7[2] != 'm' && character7[3] != 'a' && character7[4] != 'l' && character7[5] != 'e') || score1 < 0);
	}
}

void lab6question8v2(int& male1, int& female1, int &highest1, int &lowest1, string& highest2, string &lowest2, string name3[10], string gender1[10], int score1[10])
{
	male1 = 0;
	female1 = 0;
	highest1 = lowest1 = 0;

	for (int i17 = 0; i17 < 10; i17++)
	{
		if (gender1[i17] == "male")
		{
			male1++;
		}
		else if (gender1[i17] == "female")
		{
			female1++;
		}

		if (score1[i17] > highest1)
		{
			highest1 = score1[i17];
			highest2 = name3[i17];
		}
		
		if (i17 == 0)
		{
			lowest1 = score1[i17];
			lowest2 = name3[i17];
		}
		else
		{
			if(score1[i17] < lowest1)
			{
				lowest1 = score1[i17];
				lowest2 = name3[i17];
			}
		}
	}

	cout << "The number of" << endl;
	cout << "Males: \t" << male1 << endl;
	cout << "Females: \t" << female1 << endl << endl;
	cout << "The person with the highest score is " << highest2 << endl;
	cout << "The person with the lowest score is " << lowest2 << endl;
}

void lab6question8()
{
	string name3[10], gender1[10], highest2, lowest2;
	char character7[200];
	int score1[10], male1, female1, highest1, lowest1;

	lab6question8v1(name3, gender1, character7, score1);
	cout << "\n";
	lab6question8v2(male1, female1, highest1, lowest1, highest2, lowest2, name3, gender1, score1);
}

void lab6question9v1(string (&playername1)[10], int(&weapon1)[10])
{
	cout << "Please enter 10 player names and number of weapons for each player:" << endl;
	for (int i18 = 0; i18 < 10; i18++)
	{
		cout << "Player " << i18 + 1 << " name: \t";
		cin >> playername1[i18];
		cout << "Number of weapons: \t";
		cin >> weapon1[i18];
	}
}

void lab6question9v2(int &temp1, string &temp2, string playername1[10], int weapon1[10])
{
	int i19 = 0;
	do
	{
		if (weapon1[i19] < weapon1[i19 + 1])
		{
			temp1 = weapon1[i19];
			temp2 = playername1[i19];
			weapon1[i19] = weapon1[i19 + 1];
			playername1[i19] = playername1[i19 + 1];
			weapon1[i19 + 1] = temp1;
			playername1[i19 + 1] = temp2;
			i19 = 0;
		}
		else
		{
			i19++;
		}
	} while (i19 < 9);

	cout << "List of player names and number of weapons from highest to lowest:" << endl;
	for (int i20 = 0; i20 < 10; i20++)
	{
		cout << i20 + 1 << ". " << playername1[i20] << " " << weapon1[i20] << " weapon(s)" << endl;
	}
}

void lab6question9()
{
	string playername1[10], temp2;
	int weapon1[10], temp1;

	lab6question9v1(playername1, weapon1);
	cout << "\n";
	lab6question9v2(temp1, temp2, playername1, weapon1);
}

void lab6extraquestion_1(string (&IC2)[5], char (&character8)[200], int (&gamelevel1)[5])
{
	cout << "Insert 5 last 4 of IC numbers and game level" << endl;
	for (int i21 = 0; i21 < 5; i21++)
	{
		do
		{
			cout << i21 + 1 << ". Last 4 IC Number: \t";
			cin >> IC2[i21];
			strcpy_s(character8, IC2[i21].c_str());
			if (strlen(character8) > 4)
			{
				cout << "Invalid Input." << endl;
			}
			else
			{
				cout << "Game level: \t";
				cin >> gamelevel1[i21];
				if (gamelevel1 < 0)
				{
					cout << "Invalid Game Level" << endl;
				}
			}
		} while (strlen(character8) > 4 || gamelevel1 < 0);
	}
}

void lab6extraquestion_2(string IC2[5], int gamelevel1[5])
{
	cout << "LAST FOUR NO IC  GAME LEVEL" << endl << endl;
	for (int i22 = 0; i22 < 5; i22++)
	{
		cout << "       " << IC2[i22] << "         " << gamelevel1[i22] << endl;
	}
}

void lab6extraquestion_3(int& female2, int& male2, char(&character9)[200], string IC2[5])
{
	female2 = 0;
	male2 = 0;
	for (int i23 = 0; i23 < 5; i23++)
	{
		strcpy_s(character9, IC2[i23].c_str());
		if ((character9[3] - '0') % 2 == 0)
		{
			female2++;
		}
		else
		{
			male2++;
		}
	}
	cout << "There are " << female2 << " female players and " << male2 << " male players" << endl;
}

void lab6extraquestion_4(int& highest3, string &highest4, string IC2[5], int gamelevel1[5])
{
	highest3 = 0;
	for (int i24 = 0; i24 < 5; i24++)
	{
		if (gamelevel1[i24] > highest3)
		{
			highest3 = gamelevel1[i24];
			highest4 = IC2[i24];
		}
	}
	cout << highest4 << " plays the highest game level: " << highest3 << endl;
}

void lab6extraquestion_5(int& temp3, string& temp4, string IC2[5], int gamelevel1[5])
{
	int i25 = 0;
	do
	{
		if (gamelevel1[i25] < gamelevel1[i25 + 1])
		{
			temp3 = gamelevel1[i25];
			temp4 = IC2[i25];
			gamelevel1[i25] = gamelevel1[i25 + 1];
			IC2[i25] = IC2[i25 + 1];
			gamelevel1[i25 + 1] = temp3;
			IC2[i25 + 1] = temp4;
			i25 = 0;
		}
		else
		{
			i25++;
		}
	} while (i25 < 4);

	cout << "SORTED LIST BASED ON GAME LEVEL (HIGHEST TO LOWEST)" << endl << endl;
	cout << "LAST FOUR NO IC  GAME LEVEL" << endl << endl;
	for (int i26 = 0; i26 < 5; i26++)
	{
		cout << "       " << IC2[i26] << "         " << gamelevel1[i26] << endl;
	}
}

void lab6extraquestion()
{
	string IC2[5], highest4, temp4;
	char character8[200], character9[200];
	int gamelevel1[5], female2, male2, highest3, temp3;

	lab6extraquestion_1(IC2, character8, gamelevel1);
	lab6extraquestion_2(IC2, gamelevel1);
	lab6extraquestion_3(female2, male2, character9, IC2);
	lab6extraquestion_4(highest3, highest4, IC2, gamelevel1);
	lab6extraquestion_5(temp3, temp4, IC2, gamelevel1);
}

void lab6()
{
	int questionchoice5;

	do
	{
		cout << "Lab 6 - String and Array\n";
		cout << "NOTE: QUESTION 7 AND 10 ARE SKIPPED DUE TO FUNCTIONS AND ARRAY ARE ALREADY USED FOR EVERY QUESTION. \n";
		cout << "QUESTION 8 BECOMES OUTPUT 7 AND QUESTION 9 BECOMES OUTPUT 8\n";
		cout << "EXTRA: OUTPUT 9 CONTAINS AN EXTRA QUESTION. \n";
		cout << "Please select question range from 1 and 9, or key in other inputs to cancel: \t";
		cin >> questionchoice5;
		if (questionchoice5 == 1)
		{
			cout << "\n";
			lab6question1();
			cout << "\n";
		}
		else if (questionchoice5 == 2)
		{
			cout << "\n";
			lab6question2();
			cout << "\n";
		}
		else if (questionchoice5 == 3)
		{
			cout << "\n";
			lab6question3();
			cout << "\n";
		}
		else if (questionchoice5 == 4)
		{
			cout << "\n";
			lab6question4();
			cout << "\n";
		}
		else if (questionchoice5 == 5)
		{
			cout << "\n";
			lab6question5();
			cout << "\n";
		}
		else if (questionchoice5 == 6)
		{
			cout << "\n";
			lab6question6();
			cout << "\n";
		}
		else if (questionchoice5 == 7)
		{
			cout << "\n";
			lab6question8();
			cout << "\n";
		}
		else if (questionchoice5 == 8)
		{
			cout << "\n";
			lab6question9();
			cout << "\n";
		}
		else if (questionchoice5 == 9)
		{
			cout << "\n";
			lab6extraquestion();
			cout << "\n";
		}
	} while (questionchoice5 >= 1 && questionchoice5 <= 9);
}

void lab7v1(ifstream &file1, string (&playername2)[10], string(&gender2)[10], int (&age1)[10], int (&armour1)[10])
{
	int i27 = 0;
	file1.open("details.txt"); //open the file. The arguement it takes is the file that we want to open. If the file is in another location, change the directory
	//is_open() is a method that checks whether the file is open
	if (file1.is_open())
	{
		//eof is a method that checks if a file that is currently reading has reached it's end
		while (!file1.eof())
		{
			getline(file1, playername2[i27], ' ');
			file1.ignore(0, ' '); //ignores an input. The arguement takes is number of characters and delimiter. 
			file1 >> gender2[i27];
			file1.ignore(0, ' ');
			file1 >> age1[i27];
			file1.ignore(0, ' ');
			file1 >>armour1[i27];
			file1.ignore(0, '\n');

			i27++;
		}
		file1.close(); //close the file after finished 
	}
	else
	{
		cout << "File not found." << endl;
	}
}

void F1(ofstream &file2, int &agecount1, string gender2[10], int age1[10])
{
	agecount1 = 0;
	file2.open("Analysis.txt");
	for (int i28 = 0; i28 < 10; i28++)
	{
		if (gender2[i28] == "M" && age1[i28] >= 15)
		{
			agecount1++;
		}
	}

	file2 << "The number of male players aged 15 years and above = " << agecount1 << endl;
}

void F2(ofstream &file2, int &highest5, string &highest6, string playername2[10], int armour1[10])
{
	highest5 = 0;
	for (int i29 = 0; i29 < 10; i29++)
	{
		if (armour1[i29] > highest5)
		{
			highest5 = armour1[i29];
			highest6 = playername2[i29];
		}
	}

	file2 << "The player that has highest armour = " << highest6 << endl;
	file2.close(); 

	cout << "End of operation. Please check 'Analysis.txt' for verification" << endl;
}

void lab7()
{
	ifstream file1; //declare a file variable. ifstream is "input file stream"
	ofstream file2; //ofstream is "output file stream
	string playername2[10], gender2[10], highest6;
	int age1[10], armour1[10], agecount1, highest5;

	lab7v1(file1, playername2, gender2, age1, armour1);
	file2 << "\n";
	F1(file2, agecount1, gender2, age1);
	file2 << "\n";
	F2(file2, highest5, highest6, playername2, armour1);
}

int main()
{
	int topicchoice1;
	do
	{
		cout << "BITE1513 - Programming Fundamentals\n\n";
		cout << "1 - Lab 1: Introduction to Visual C++ Program\n";
		cout << "2 - Lab 2: Introduction to C++ and Problem Solving\n";
		cout << "3 - Lab 4: Selection and Repetition\n";
		cout << "4 - Lab 5: Functions\n";
		cout << "5 - Lab 6: String and Arrays\n";
		cout << "6 - Lab 7: Input Output File\n";
		cout << "\n Please choose topic: \t";
		cin >> topicchoice1;
		if (topicchoice1 == 1)
		{
			cout << "\n";
			lab1();
			cout << "\n";
		}
		else if (topicchoice1 == 2)
		{
			cout << "\n";
			lab2();
			cout << "\n";
		}
		else if (topicchoice1 == 3)
		{
			cout << "\n";
			lab4();
			cout << "\n";
		}
		else if (topicchoice1 == 4)
		{
			cout << "\n";
			lab5();
			cout << "\n";
		}
		else if (topicchoice1 == 5)
		{
			cout << "\n";
			lab6();
			cout << "\n";
		}
		else if (topicchoice1 == 6)
		{
			cout << "\n";
			lab7();
			cout << "\n";
		}
	} while (topicchoice1 >= 1 && topicchoice1 <= 6);
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
