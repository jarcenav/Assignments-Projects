#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int powerFunc(int x, int y)
{
	unsigned long long int result = 1;
	int i;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}

int hexToDec(string hexaNumber)
{
	int i;
	int power = hexaNumber.length() - 1;
	int checkLength = hexaNumber.length();
	unsigned long long int decimalResult = 0;


	for (i = 0; i < checkLength; i++)
	{
		if (int(hexaNumber[i]) >= '0' && int(hexaNumber[i]) <= '9') {				

			decimalResult += ((int(hexaNumber[i])) - 48) * powerFunc(16, power);	
		}
		else if (int(hexaNumber[i]) >= 'A' && int(hexaNumber[i]) <= 'F')			
		{
			decimalResult += ((int(hexaNumber[i])) - 55)*powerFunc(16, power);
		}
		else if (int(hexaNumber[i]) >= 'a' && int(hexaNumber[i]) <= 'f')			
		{
			decimalResult += ((int(hexaNumber[i])) - 87)*powerFunc(16, power);
		}
		power--;		
	}

	return decimalResult;
}

int main()
{
	unsigned long long int result;
	unsigned long long int dec1;
	unsigned long long int dec2;
	unsigned long long int totalDec;
	string hexa1;
cout << "Enter hexidecimal: " << endl;
	string FirstHexaNumber;

	getline(cin, FirstHexaNumber);

	dec1 = hexToDec(FirstHexaNumber);

	cout <<  dec1 << endl;
	

	return 0;
}

