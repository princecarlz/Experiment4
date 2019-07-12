#include <iostream>
#include <conio.h>
#include <iomanip>

	using namespace std;
	
	int main ()
	{
		//variables
		char response, choice;
		int a, b;


	do
	{
		//menu questionaire
		cout << "Calculator Menu";
		cout <<"\n 1. Addition,\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Modulus"<<"\n\nChoose what you desire: ";
		cin >> response; //inpuser asked to input operation
		cout<<"Enter your two numbers: "; //user asked to input numbers
		cin >> a >> b;
		
			switch (response) //solutions for each operation
			{
				case '1': cout << "Result = "<< a+b;
				break;

				case '2': cout << "Result = "<< a-b;
				break;

				case '3': cout << "Result = "<< a*b; 
				break;

				case '4': 
						if (b==0)
							cout << "division by 0 yields undefined answer. Please try again"; // any number divided by zero is undefined
						else 
							cout << "Result = " << a/b;
				break;

				case '5': cout << "Result = " << a % b;
				break;
						
				default: cout << "Invalid input, please try again"; // when user inputs wrong symbol for operation
			}
					cout << " " << endl;
					cout << "Continue? "; //asking the user to repeat the whole process or not
					cin >> choice;
	}
					
while (choice == 'y' || choice == 'Y'); //this is needed to repeat the whole process or a loop , uppercase or lowercase are considered 

	if (choice == 'n' || choice == 'N') //this is needed to end the calculator , uppercase or lowercase are considered 
	{
		cout << "Termination of program is initiated." << endl; //end of calculator
		system ("pause");
		return 0;
	}
	else
	{
		cout << "Invalid character input. Termination of program is initiated." << endl; //if user used another letter or used a number in choosing y or n
	}
				
system("pause");
return 0;
	}

