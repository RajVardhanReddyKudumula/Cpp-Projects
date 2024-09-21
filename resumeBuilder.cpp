#include <iostream>

using namespace std;

int main() {

    std::string uName, college, skillsLearnt, eMail, contNumber, workExpreriece, age;

    std::cout << "Enter your full Name                      : ";
    std::getline(std::cin, uName);

    std::cout << "Enter your Age                            : ";
    std::getline(std::cin, age);

    std::cout << "Enter the college you've graduated from   : ";
    std::getline(std::cin, college);

    std::cout << "Enter the technical skills you're good at : ";
    std::getline(std::cin, skillsLearnt);

    std::cout << "Enter your Work-Experience Status         : ";
    std::getline(std::cin, workExpreriece);

    std::cout << "Enter your contact.no                     : ";
    std::getline(std::cin, contNumber);

    std::cout << "Enter your E-Mail                         : ";
    std::getline(std::cin, eMail);

// Creating the Resume or CV..

    std::cout << "Name                   : " << uName << "\n";
    std::cout << "Age                    : " << age << "\n";
    std::cout << "College                : " << college << "\n";
    std::cout << "Skills                 : " << skillsLearnt << "\n";
    std::cout << "Work-Experience Status : " << workExpreriece << "\n";
    std::cout << "Contact Number         : " << contNumber << "\n";
    std::cout << "E-Mail                 : " << eMail << "\n";

    return 0;
}