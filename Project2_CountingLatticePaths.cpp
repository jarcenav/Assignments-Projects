/*
Set Up: Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
: Compute the number of these types of routes through an 
n×n grid for  1≤n≤20.  Allow the user to choose n.
*/

#include <iostream>

using namespace std;

int main(){

    int gridSize = 0;


    cout<<"Enter the size of the grid: ";

    cin>>gridSize;

    long paths = 1;

    for (int i = 0; i < gridSize; i++) {

        paths *= (2 * gridSize) - i;

        paths /= i + 1;

    }


    cout<<"Number of Routes Available from Top Left Corner to the Bottom Right Corner is: "<<paths<<endl;

    return 0;

}