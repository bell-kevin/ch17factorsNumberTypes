// factorsNumberTypes.cpp

#include <iostream>
#include <vector>
#include <algorithm>
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
	//use a vector
	vector<int> factors;
	int sum = 0;
//Use a function object, described with a lambda expression, to determine if a n integer is a factor of the number. Except for the number itself
	
	auto isFactor = [number](int n) {return number % n == 0 && n != number; };
	for (int i = 1; i <= number; i++)
	{
		if (isFactor(i))
		{
			factors.push_back(i);
			sum += i;
		}
	}
	//sort the vector
	sort(factors.begin(), factors.end());
	//display the factors
	for (int i = 0; i < factors.size(); i++)
	{
		cout << factors[i] << " ";
	}
	cout << endl;
	//display the sum
	cout << "The sum of the factors is " << sum << endl;
	//determine the type of number
	if (sum == number)
	{
		cout << "This is a perfect number.\n";
	}
	else if (sum < number)
	{
		cout << "This is a deficient number.\n";
	}
	else
	{
		cout << "This is an abundant number.\n";
	}
	//determine if the number is prime
	if (factors.size() == 1)
	{
		cout << "This is a prime number.\n";
	}
	
	system("pause");
	return 0;
}
