#include <iostream>

using namespace std;

int main() {

    int age;
    std::string name;

    std::cout << "What's your Name : ";
    std::getline(std::cin, name);

    std::cout << "What's your age : ";
    std::cin >> age;

    std::cout << "You're " << name << " and your age is " << age << "." << std::endl;

    return 0;
}

