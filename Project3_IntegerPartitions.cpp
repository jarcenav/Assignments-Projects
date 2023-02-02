/*
 Let 
p(n) represent the number of different ways in which n coins can be separated into piles. For example, five coins can be separated into piles in exactly seven different ways, so p(5)=7.
Compute 
p(n) for 1≤n≤10.  Allow the user to choose integer n.
*/

#include<iostream>
using namespace std;

int printAllUniqueParts(int n)
{
int p[n]; 
int k = 0; 
p[k] = n; 
int answer=0;
  
while (true)
{
answer++;

int value = 0;
while (k >= 0 && p[k] == 1)
{
value += p[k];
k--;
}

if (k < 0)
break;

p[k]--;
value++;

while (value > p[k])
{
p[k + 1] = p[k];
value = value - p[k];
k++;
}
p[k + 1] = value;
k++;
}
return answer;
}
int main()
{
int n;
cout << "Enter the value of n:";
cin>>n;
cout<<"Integer p(n), the number of ways that can be seperated into piles p("<<n<<")"<<"="<<printAllUniqueParts(n)<<endl;
return 0;
}