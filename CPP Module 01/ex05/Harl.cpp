#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug() {
	std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	std::cout << "I love having extra bacon for my \
		7XL-double-cheese-triple-pickle-specialketchup \
		burger. I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << GRAY << "[INFO]    " << DEFAULT;
	std::cout << "I cannot believe adding extra bacon \
		costs more money. You didn\'t put enough bacon \
		in my burger! If you did, I wouldn\'t be asking \
		for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << YELLOW << "[WARNING] " << DEFAULT;
	std::cout << "I think I deserve to have some extra \
		bacon for free. I\'ve been coming for years whereas \
		you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << RED << "[ERROR]   " << DEFAULT;
	std::cout << "This is unacceptable! I want to speak to \
		the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	int			num_of_commands = 4;
	void		(Harl::*ptr[num_of_commands])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[num_of_commands] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < num_of_commands; i++) {
		if (levels[i] == level) {
			(this->*ptr[i])();
			return ;
		}
	}
}