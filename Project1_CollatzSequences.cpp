/*
 In a Collatz sequence, all of its terms are positive integers which satisfy the following recursive formula.
 For example, if the first term in the sequence is 
a_1=13, then the recursive formula gives the corresponding Collatz sequence:


13→40→20→10→5→16→8→4→2→1

Note, it is thought that all Collatz sequences end with 1.
*/

#include <iostream>

using namespace std;

int main() {

   cout << "Enter a positive number: ";
   int a;
   cin >> a;
   int length = 1;
   cout << "Collatz sequence is ";
   while(a != 1) {
       cout << a << " ";
       if(a % 2 == 0) {
           a /= 2;
       } else {
           a = (3*a) + 1;
       }
       length++;
   }
   cout << a << endl;
   cout << "The length of the sequence is " << length << endl;
   return 0;
}

