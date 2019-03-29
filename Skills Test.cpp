#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	double hourlyWage;
	hourlyWage = 15.50;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Your Hourly Wage is: $" << hourlyWage << endl;

	double hourlyNetWage;
	hourlyNetWage = (hourlyWage - (hourlyWage * 0.14));
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Your Hourly Wage with Tax is: $" << hourlyNetWage << endl;

	cout << " " << endl;

	cout << "NUMBER OF HOURS IN:" << endl;

	int hoursWeekOne;
	cout << "Week 1: ";
	cin >> hoursWeekOne;
	cout << "      : " << hoursWeekOne << " hours" << endl;

	int hoursWeekTwo;
	cout << "Week 2: ";
	cin >> hoursWeekTwo;
	cout << "      : " << hoursWeekTwo << " hours" << endl;

	int hoursWeekThree;
	cout << "Week 3: ";
	cin >> hoursWeekThree;
	cout << "      : " << hoursWeekThree << " hours" << endl;

	int hoursWeekFour;
	cout << "Week 4: ";
	cin >> hoursWeekFour;
	cout << "      : " << hoursWeekFour << " hours" << endl;

	int hoursWeekFive;
	cout << "Week 5: ";
	cin >> hoursWeekFive;
	cout << "      : " << hoursWeekFive << " hours" << endl;

	cout << " " << endl;

	int totalHours;
	totalHours = hoursWeekOne + hoursWeekTwo + hoursWeekThree + hoursWeekFour + hoursWeekFive;
	cout << "TOTAL NUMBER OF HOURS: " << totalHours << "hours" << endl;

	cout << " " << endl;

	double totalSal;
	cout << fixed << showpoint;
	cout << setprecision(2);
	totalSal = totalHours * hourlyNetWage;
	cout << "TOTAL SALARY: $" << totalSal << endl;

	cout << " " << endl;
	cout << "EXPENSES:" << endl;

	double clothes;
	cout << fixed << showpoint;
	cout << setprecision(2);
	clothes = (totalSal * 0.10);
	cout << "a.) For Clothes: $" << clothes << endl;

	double school;
	cout << fixed << showpoint;
	cout << setprecision(2);
	school = (totalSal * 0.01);
	cout << "b.) For School Supplies: $" << school << endl;

	double saveBonds;
	cout << fixed << showpoint;
	cout << setprecision(2);
	saveBonds = ((totalSal - (clothes + school)) * 0.25);
	cout << "c.) For Saving Bonds: $" << saveBonds << endl;

	double saveBondsP;
	cout << fixed << showpoint;
	cout << setprecision(2);
	saveBondsP = (((totalSal - (clothes + school)) * 0.25) / 2);
	cout << "d.) For Saving Bonds (from Parents): $" << saveBondsP << endl;

	cout << " " << endl;

	_getch();
	return 0;

}