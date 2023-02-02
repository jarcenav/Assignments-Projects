/* You are creating a program for a huge life insurance company. Yearly payments are determined by the amount of coverage offered, the age of the customer, and by whether the customer has a pre-existing sickly condition. Payments are calculated as follows:

Ages less than 19 – Yearly premium is 1/2000 th of the total premium. (example: a $500,000 policy would have a $250 yearly premium.)
Ages between 20 and 39 – Yearly premium is 1/1000 th of the total premium.
Ages between 40 and 59 - Yearly premium is 1/800 th of the total premium.
Ages greater than 60 – Yearly premium is 1/500 th of the total premium.
If the customer is sickly or has a risky pre-existing condition, the yearly payment is 2* the value of the normal premium.
Use conditional expressions to determine if a customer is sickly or not.

Use the following prompt for collecting user input:

“ Enter the appropriate number or the range for the customer:

  1 : 1 – 20 years old

  2 : 20 – 40 years old

  3 : 40 – 60 years old

  4 : 60 years or older

“

Use conditional expressions for evaluating
*/
#include <iostream>
using namespace std;
 
int main() {
 
int policyAmount = 500000;
int premium = 0;
char condition;
int coverageOffer = 0;
int ageofCustomer = 0;
 
 
cout << "Do you have a pre-existing condition? (y or n)" << endl;
cin >> condition;
cout << condition;
 
cout << "What is your age?" << endl;
cin >> ageofCustomer;
cout << ageofCustomer << endl;
 
cout << "The total premium will be:" << endl;
 
 
 
cin >> ageofCustomer;
 
if (ageofCustomer < 20) {
	premium == policyAmount * (1/2000);
}
else if (ageofCustomer <= 39) {
	premium == policyAmount * (1/1000);
}
else if (ageofCustomer <=59) {
	premium == policyAmount * (1/800);
}
else if (ageofCustomer >= 60) {
	premium == policyAmount * (1/500);
}
 
premium = (condition == 'y' || (condition == 'Y'));
premium = policyAmount* 2;
cout << premium << endl;
 
 
 
 
 
	return 0;
}