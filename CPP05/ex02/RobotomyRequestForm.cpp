#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45)
{
  std::cout << "RobotomyRequestForm Initialized Constructor Called" << std::endl;
  this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
  std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
  this->target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

const std::string RobotomyRequestForm::getTarget() const
{
  return this->target;
}

void RobotomyRequestForm::execute ( const Bureaucrat & executer) const
{
  if (this->getSignature() == 0)
	throw Form::NotSignedException();
  else if (executer.getGrade() > this->getGradeToExecute())
	throw Form::GradeTooHighException();
  std::cout << "* Drilling noises *" << std::endl;
  srand(time(NULL));
  if(rand() % 2)
    std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
  else
    std::cout << "FAILURE: impossible robotomized " << this->target << std::endl;
}
