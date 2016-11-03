//@author Jake Runyan

#include <iostream>
#include <vector>

//**** GLOBAL VArS ****
double highest = 0;
double lowest = 100000000000000;
int nums = 0;
std::vector<double> numbers;

//**** FUNCTION DEFINITIONS ****
int inOrder();
void reorder();

/**
  * Main Method
  */
int main(){
	while(1){
		//Greeting
		std::cout << "Welcome, enter anything to begin or '|' to exit.";
		char menuchoice = 0;
		std::cin >> menuchoice;
		if(menuchoice == '|'){
			break;
		}

		//Take in integers
		std::cout << "Enter the lower number.\n";
		double lower = 0;
		std::string lunits; 
		std::cin >> lower;
		if(lower > highest){
			std::cout << "Wow, this is the highest number I've seen so far!\n";
			highest = lower;
		}else if(lower < lowest){
			std::cout << "Wow, this is the lowest number I've seen so far!\n";
			lowest = lower;
		}
		nums++;
		numbers.push_back(lower);


		std::cout << "Enter the higher number.\n";
		double higher = 0;
		std::cin >> higher;
		if(higher > highest){
			std::cout << "Wow, this is the highest number I've seen so far!\n";
			highest = higher;
		}else if(higher < lowest){
			std::cout << "Wow, this is the lowest number I've seen so far!\n";
			lowest = higher;
		}

		if(lower == higher){
			std::cout << "The numbers are equal.\n";
		}else if(higher > lower){
			std::cout << "This number is greater.\n";
		}else{
			std::cout << "The first number was greater.\n";
		}
		nums++;
		numbers.push_back(higher);

	}

	//Printout
	std::cout << "********* SUMMARY **********\n";
	std::cout << "Smallest Number: " << lowest << "\n";
	std::cout << "Largest Number: " << highest << "\n";
	std::cout << "The " << nums <<" numbers entered were:\n";
	while(!inOrder())
		reorder();
	for(unsigned int i = 0; i < nums; i++){
		std::cout << "\t" << numbers[i] << "\n";
	}
}

/**
  * Returns 1 if in order, 0 otherwise.
  */
int inOrder(){
	double last = numbers[0];
	for(unsigned int i = 1; i < nums; i++){
		if(numbers[i] > last)
			return 0;
		last = numbers[i];
	}
	return 1;
}

/**
  * Returns 1 if in order, 0 otherwise.
  */
void reorder(){
	double last = numbers[0];
	double temp;
	for(unsigned int i = 1; i < nums; i++){
		if(numbers[i] > last){
			temp = numbers[i];
			numbers[i] = last;
			numbers[i-1] = temp;
		}
	}
}
