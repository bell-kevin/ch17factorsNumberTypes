// factorsNumberTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Ch 17 Factors by Kevin Bell\n\n";
	cout << "This program determines the type of your number.\n";
	cout << "Prime (divisible by 1 and itself only)\n";
	cout << "Perfect (sum of factors equals the number)\n";
	cout << "Deficient (sum of factors is less than the number)\n";
	cout << "Abundant (sum of factors is greater than the number)\n\n";
	
	cout << "Enter a positive number: ";
	int number;
	cin >> number;
	cout << "Here are all the factors of " << number << ":\n";
	int sum = 0;
	//display factors except for number itself and sum them
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << "\n\n";
	cout << "The sum of the factors is " << sum << ".\n";	
	//determine type of number
	if (sum == number)
		cout << "This is a perfect number.\n";
	else if (sum < number)
		cout << "This is a deficient number.\n";
	else
		cout << "This is an abundant number.\n";
	
	//determine if prime
	bool prime = true;
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			prime = false;
	}
	if (prime)
		cout << "This is a prime number.\n";
	
	system("pause");
	return 0;
}