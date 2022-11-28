#include "Form.hpp"
#include <iostream>

Form::Form( void ) : _name("[ NOT SET ]"), _isItSigned(false),
_gradeToSigne(1), _gradeToExecute(1)
{
	std::cout << "Default Form constructor called" << std::endl;
	return ;
}

Form::Form( Form const & src ) : _name(src.getName()), _isItSigned(src.getSigned()),
_gradeToSigne(src.getGradeToSigne()), _gradeToExecute(src.getGradeToExecute())
{
	std::cout << "Copy Form constructor called" << std::endl;
	*this = src;
	return ;
}

Form::Form( std::string name, int gradeToSigne, int gradeToExecute) : _name(name), _isItSigned(false),
_gradeToSigne(gradeToSigne), _gradeToExecute(gradeToExecute)
{
	return;
}

Form::~Form(void)
{
	std::cout << "Destructor Form called" << std::endl;
	return ;
}

Form &	Form::operator=( Form const & rhs )
{
	std::cout << "Copy assignment operator Form called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_isItSigned = rhs._isItSigned;
		this->_gradeToSigne = rhs._gradeToSigne;
		this->_gradeToExecute = rhs._gradeToExecute;
	}
	return *this;
}

std::string	Form::getName( void ) const
{
	return _name;
}

bool		Form::getSigned( void ) const
{
	return _isItSigned;
}

const int	Form::getGradeToSigne( void ) const
{
	return _gradeToSigne;
}

const int	Form::getGradeToExecute( void ) const
{
	return _gradeToExecute;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o << "Name :\t\t"<< rhs.getName() << std::endl;
	o << "Is it signed :\t"<< rhs.getSigned() << std::endl;
	o << "Grade to signe :\t"<< rhs.getGradeToSigne() << std::endl;
	o << "Grade to execute :\t"<< rhs.getGradeToExecute() << std::endl;
	return o;
}
