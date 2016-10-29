//@author Jake Runyan
#include <iostream>

int main(){
	std::cout << "Hi, enter your first name! (followed by an enter)\n>";
	std::string name;
	std::cin >> name;
	std::cout << "Your name was " << name << ".\n";
}
