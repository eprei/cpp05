#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form{

	public:

		Form( void );
		Form( Form const & src );
		Form( std::string name, int gradeToSigne, int gradeToExecute);
		~Form( void );

		Form &	operator=( Form const & rhs );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		const int	getGradeToSigne( void ) const;
		const int	getGradeToExecute( void ) const ;

	private:

		std::string	_name;
		bool		_isItSigned;
		const int	_gradeToSigne;
		const int	_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif
