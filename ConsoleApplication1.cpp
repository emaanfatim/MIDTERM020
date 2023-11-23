#include<iostream>
using namespace std;
int main()
{
	int salary, noofyears, years, performance;
	cout << "enter salary";
	cin >> salary;
	cout << "enter no of year";
	cin >> noofyears;
	do
	{
		double yearlyincrement = salary * 0.05 + salary;
		cout << "yearlyincrement=" << yearlyincrement << endl;
		cout << "does employee have exceptional rating(y/n)";
		cin >> performance;
		if (performance = 'y')
		{
			double performancebonus = yearlyincrement * 0.02 + yearlyincrement;
			cout << "performancebonus=" << performancebonus << endl;
		}
		
		if (salary < 0)
		{
			cout << "invalid entry";
		}
	}
		while (salary > 0);
	
		
	return 0;
}