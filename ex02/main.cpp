#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{/*
	// TEST ShrubberyCreationForm CLASS
	NEW_LINE;
 	std::cout << "____________ ShrubberyCreationForm _____________________" << std::endl;
	ShrubberyCreationForm Shrubbery1("Jardin");

	NEW_LINE;
	Bureaucrat	theNewEmployee("The new employee", 150);
	Bureaucrat	boss("The boss", 1);
	NEW_LINE;

	std::cout << "The new employee will try to execute an unsigned ShrubberyCreationForm" << std::endl;
	Shrubbery1.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The new employee will try to sign the unsigned ShrubberyCreationForm" << std::endl;
	Shrubbery1.beSigned(theNewEmployee);

	NEW_LINE;
	std::cout << "Boss will sign the unsigned ShrubberyCreationForm" << std::endl;
	Shrubbery1.beSigned(boss);

	NEW_LINE;
	std::cout << "The new employee will try to execute the already signed ShrubberyCreationForm" << std::endl;
	Shrubbery1.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The boss will execute the already signed ShrubberyCreationForm" << std::endl;
	Shrubbery1.execute(boss);
*//*
	// TEST RobotomyRequestForm CLASS
	NEW_LINE;
 	std::cout << "____________ RobotomyRequestForm _____________________" << std::endl;
	RobotomyRequestForm robo("Terminator");

	NEW_LINE;
	Bureaucrat	theNewEmployee("The new employee", 150);
	Bureaucrat	boss("The boss", 1);
	NEW_LINE;

	std::cout << "The new employee will try to execute an unsigned RobotomyRequestForm" << std::endl;
	robo.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The new employee will try to sign the unsigned RobotomyRequestForm" << std::endl;
	robo.beSigned(theNewEmployee);

	NEW_LINE;
	std::cout << "Boss will sign the unsigned RobotomyRequestForm" << std::endl;
	robo.beSigned(boss);

	NEW_LINE;
	std::cout << "The new employee will try to execute the already signed RobotomyRequestForm" << std::endl;
	robo.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The boss will execute the already signed RobotomyRequestForm" << std::endl;
	robo.execute(boss);
	robo.execute(boss);
	robo.execute(boss);
	robo.execute(boss);
	robo.execute(boss);
*/
	// TEST PresidentialPardonForm CLASS

	NEW_LINE;
 	std::cout << "____________ PresidentialPardonForm _____________________" << std::endl;
	PresidentialPardonForm dany("Danny DeVito");

	NEW_LINE;
	Bureaucrat	theNewEmployee("The new employee", 150);
	Bureaucrat	boss("The boss", 1);
	NEW_LINE;

	std::cout << "The new employee will try to execute an unsigned PresidentialPardonForm" << std::endl;
	dany.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The new employee will try to sign the unsigned PresidentialPardonForm" << std::endl;
	dany.beSigned(theNewEmployee);

	NEW_LINE;
	std::cout << "Boss will sign the unsigned PresidentialPardonForm" << std::endl;
	dany.beSigned(boss);

	NEW_LINE;
	std::cout << "The new employee will try to execute the already signed PresidentialPardonForm" << std::endl;
	dany.execute(theNewEmployee);

	NEW_LINE;
	std::cout << "The boss will execute the already signed PresidentialPardonForm" << std::endl;
	dany.execute(boss);

	NEW_LINE;
	return 0;
}
