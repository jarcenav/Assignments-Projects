/* Write a program that converts miles per hour in to kilometers per hour. 
Allow the user to input their speed.
Add a function that  calculates his distance if it takes him 5 hours to visit family.   */

#include <iostream>
using namespace std;
 
void calculated_Distance(float speed)
{
	const int hours=5;
	float kilometers= speed*hours;
	cout << "Distance travelled in 5 hours: " << kilometers << endl;
}
	float convert(float miles_per_hour)
	{
		float kilomph= miles_per_hour*1.60934;
		return kilomph;
	}
	int main()
	{
		float kilomph;
		float miles_per_hour;
		cout <<"Enter your speeed(Miles/Hour): ";
		cin >> miles_per_hour;
		cout << miles_per_hour << endl;
		kilomph=convert(miles_per_hour);
		cout <<"Speed(Kilometers/Hour): " << kilomph << endl;
		calculated_Distance(kilomph);
 
	return 0;
}