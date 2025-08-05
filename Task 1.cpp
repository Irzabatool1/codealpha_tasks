//CGPA Calculator
#include<iostream>
using namespace std;
int main()
{
	int course;
	float grades[100], creditHours[100], totalcreditHours = 0, totalPoints = 0;
	
	cout << ".....CGPA CALCULATOR....." << endl;
	cout << "Enter the number of courses: ";
	cin >> course;
	for (int i = 0; i < course;i++)
	{
		cout << "\nCourse # " << i + 1;
		cout << endl;
		cout << "Enter grade (on the scale of 4.0): ";
		cin >> grades[i];
		cout << "Enter credit hours: ";
		cin >> creditHours[i];
		cout << endl;
		totalPoints += grades[i]*creditHours[i];
		totalcreditHours += creditHours[i];
	}
	cout << "\nCourse Grade: \n";
	for (int i=0;i<course;i++)
	{
		cout<<"Course "<<i+1<<": Grade : "<<grades[i]<<", Credit Hours = " << creditHours[i] << endl;
	}
	float gpa = totalPoints / totalcreditHours;
	cout << "\nTotal Credit Hours = " << totalcreditHours;
	cout << "\nTotal Grade Points = " << totalPoints;
	cout << "\nCGPA = " << gpa << endl;

	return 0;

}