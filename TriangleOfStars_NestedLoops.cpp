/* A triangle of stars
( the user provides an input value for the height of the triangle) */

#include <iostream>
using namespace std;

int main() {
int rows;

    
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
}
	

		return 0;
}