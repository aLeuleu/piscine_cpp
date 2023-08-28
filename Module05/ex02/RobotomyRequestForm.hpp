#ifndef ROBOTOMYCREATIONFORM_HPP
# define ROBOTOMYCREATIONFORM_HPP
#include "AForm.hpp"
#include <cstdlib>
class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string name, std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void execute(Bureaucrat const & executor) const;
};
#endif
