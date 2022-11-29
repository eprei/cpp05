#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form()
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	_name = "ShrubberyCreationForm";
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "String ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_isItSigned = rhs.getSigned();
	this->_target = rhs.getTarget();
	return *this;
}

std::string		ShrubberyCreationForm::getTarget ( void ) const
{
	return _target;
}

void			ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::string outputFileName;

	try
	{
		if (!_isItSigned)
			throw (ShrubberyCreationForm::NoSignedException());
		if (executor.getGrade() > _gradeToExecute)
			throw (Form::GradeTooLowException());
		std::cout << _name << " Is executed" << std::endl;
		outputFileName = _target;
		outputFileName.append("_shrubbery");

		std::ofstream outfile (outputFileName);
		outfile << "               ,@@@@@@@,
       ,,,.   ,@@@@@@/@@,  .oo8888o.
    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
   `&%\ ` /%&'    |.|        \ '|8'
       |o|        | |         | |
       |.|        | |         | |
jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_ " << std::endl;
		outfile.close();
		std::cout << outputFileName << std::endl;
	}
	catch(ShrubberyCreationForm::NoSignedException& r)
	{
		std::cout << r.what() << std::endl;
	}
	catch(Form::GradeTooLowException& r)
	{
		std::cout << r.what() << std::endl;
	}
	return ;
}

const char* ShrubberyCreationForm::NoSignedException::what() const throw()
{
		return "Error: the form has not yet been signed";
}
