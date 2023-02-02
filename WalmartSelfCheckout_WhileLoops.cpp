/* Walmart Self-Checkout

Find the total cost of your groceries:

Input the number of items purchasing
Random number generator to determine the price of each item
Add prices to calculate total cost
If your total cost is greater than $20 they must pay with card?
If less than $20 pay with cash
*/

#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
 
 int items_purchased;
 double price_of_items; //Variables needed
 double total;
 
 srand(time(0)); //seed value of 0 in order to get random number of price for items
 cin >> items_purchased;  //user input of items purchased
 cout << "Total items purchased: " <<  items_purchased << endl;
 
 while(items_purchased==items_purchased)
 {
 
 for(int i =0; i<=items_purchased; ++i)
 { price_of_items = (rand()% items_purchased) +1 ;
  
  total = total + price_of_items;
 
  cout << "Item: $: " << price_of_items << endl; 
  cout << "Total:" << total << endl;
 }
 
 if( total > 20)
 {
  cout << "You must pay with a card." << endl;
 
  
 }
 
 else
 
 {
 cout << "Pay with cash." << endl; 
 }
 
 break;
 }
 
 return 0;
}