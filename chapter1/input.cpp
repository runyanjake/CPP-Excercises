//@author Jake Runyan
#include <iostream>

int main(){
	std::cout << "Hi, enter your first name! (followed by an enter)\n>";
	std::string name;
	std::cin >> name;
	std::cout << "Your name was " << name << ".\n";
	std::cout << "Now type 'Hello' until you get it right\n";
	std::string words;
	while(std::cin >> words){
		if(words == "Hello"){
			break;
		}
	}
	std::cout << "Nice one yo.\n";
}
