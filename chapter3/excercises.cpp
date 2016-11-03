//@author Jake Runyan
#include <iostream>

int main(){
	std::cout << "Hello, write your first name here.\n>";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Hello, " << first_name << ".\n";

	std::cout << "Enter the name of the person you'd like to talk to.\n>";
	std::string second_name;
	std::cin >> second_name;
	std::cout << "Dear " << second_name << ",\n\tHow are you? I am fine. I miss you.\n";

	std::cout << "Hello, enter the name of a friend.\n>";
	std::string friend_name;
	std::cin >> friend_name;
	std::cout << "Have you seen " << friend_name << " lately?\n";

	std::cout << "What is " << friend_name << "'s gender?\n>";
	char gender;
	std::cin >> gender;
	if(gender == 'm' || gender == 'M'){
		std::cout << "If you see " << friend_name << " ask him to call me!\n";
	}else if(gender == 'f' || gender == 'F'){
		std::cout << "If you see " << friend_name << " ask her to call me!\n";
	}else{
		std::cout << "If you see " << friend_name << " ask them to call me!\n";
	}

	std::cout << "How old is " << friend_name << "?\n>";
	int friend_age;
	std::cin >> friend_age;
	if(friend_age < 0 || friend_age > 100){
		std::cout << "You're kidding!\n";
	}else{
		std::cout << "Next year your friend will be " << friend_age+1;
	}
}
