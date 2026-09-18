//include statements
#include <iostream>
#include <random>
#include <random>

//initiating functions
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

//constant variables
const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

//main function
int main(){
	int horses[0,0,0,0,0];
	bool keepGoing = true;
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);
	while(keepGoing){
		//for each horse
		for(int hn=0; hn < NUM_HORSES;hn++){
			advance(hn,horses);
			printLane(hn,horses);
			if(isWinner(hn,horses)){
				return false;
			}
		} 
	}
}

//generate random number and move it forward one space if the random number is one
void advance(int horseNum, int* horses){
	coin = dist(rd);
	if(coin==1){
		horses[horseNum]++;
	}
}

//print out the lanes and the horse positions
void printLane(int horseNum, int* horses){
	for(int i=0, i<RACE_LENGTH, i++){
		if(i==horseNum){
			std::cout << "_";
		}else{
			std::cout << horseNum;
		}
	}
}

//function to check if the horse in current iteration has won yet
bool isWinner(int horseNum, int* horses){
	if(horseNum >= RACE_LENGTH){
		return true;		
	}
}



