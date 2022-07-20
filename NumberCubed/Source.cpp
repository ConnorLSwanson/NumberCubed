#include <iostream>

using namespace std;

int CubeNumber(int x);
void PrintMessage(string message);
void PrintMessage(string message, int x);

int main()
{
	// Prompt user for number
	PrintMessage("Please enter a number: ");

	// Get number from user
	int num = 0;
	cin >> num;

	// call function to cube number
	int cubed = CubeNumber(num);

	// Display output to user
	PrintMessage("Your number cubed is ", cubed);

	return 0;
}


int CubeNumber(int x)
{
	return x * x * x;
}

void PrintMessage(string message)
{
	cout << message << endl;
}

void PrintMessage(string message, int x)
{
	cout << message << x << endl;
}