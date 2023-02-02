#include <iostream>
using namespace std;

int main () {		// library needed to run the program 
	
	int daysAnnually = 365;
	int annualMoney = 5000000;
	int totalActors = 5;
	int moneyPerEpisode = 225000;
	int totalEpisodes = 0;
	double dailyShowIncome = 0;
	double moneyPaidDailyToActors = 0;
	char answer;
	
	totalEpisodes = annualMoney/moneyPerEpisode;  // Computation for total amount of episodes made in a year
	cout << "How I Met Your Mother aired " << totalEpisodes << " episodes each year." << endl;

	dailyShowIncome = annualMoney/daysAnnually;	// Computation for the amount of money the show recievces daily in a year
	moneyPaidDailyToActors = dailyShowIncome/totalActors;	// Computation to find the amount of money the actors earn daily
	cout << "Each leading cast member in How I Met Your Mother made $" << moneyPaidDailyToActors << " per day." << endl;
	
	cout << "Who is the father that is telling the story in How I Met Your Mother?" << endl;
	cout << "Would it be a) Kanye West, b) Post Malone, c) Future Ted ?" << endl;	// Answer choices for input users to use
	cin >> answer;
	
	if (answer == 'a') {
		cout << "Kanye West" << endl;	// if else statements that check for the users input
		cout << "Incorrect" << endl;
	}
	
	else if (answer == 'b') {
		cout << "Post Malone" << endl;
		cout << "Incorrect" << endl;
	}
	
	else if (answer == 'c') {
		cout << "Future Ted" << endl;
		cout << "Correct" << endl;
	}
	
	return 0;

}
