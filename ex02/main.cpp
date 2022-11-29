#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
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

	NEW_LINE;
	return 0;
}
