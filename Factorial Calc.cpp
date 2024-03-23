#include <iostream>
using namespace std;

int main()
{

		//Program to calculate Factorial
		
	int fact = 1, num, x=1;
	
	cout<< "\nEnter the number To calculate factorial: ";
	cin>> num;
	
	while (x<=num)
	{
		fact = fact * x;
		x++;
	}
	
	cout<< "\n\nFactorial of "<<num<< " = "<<fact<<endl;
	
	return 0;
}
