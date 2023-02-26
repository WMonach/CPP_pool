/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:09:02 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/26 21:18:37 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("ShrubberyCreationForm", 145, 137), _Target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("ShrubberyCreationForm", 145, 137), _Target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & rhs ): Form()
{
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_Target);
}

const ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	*this = rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute( const Bureaucrat &intern ) const
{	
	std::string			filename = this->_Target + "_shrubbery";
	std::ofstream		PlanetFile(filename.c_str());
	
	if ( intern.getGrade() < this->getExecutionGrade())
	{
		PlanetFile << "               _{/ _{/{//}/}/}__				" << std::endl;
		PlanetFile << "              {/{//}{/{//}(/}{//} _			" << std::endl;
		PlanetFile << "             {/{//}{/{//}(_)/}{/{//}  _		" << std::endl;
		PlanetFile << "          {/{/(/}/}{/{//}/}{/){//}/} //}		" << std::endl;
		PlanetFile << "         {/{/(_)/}{/{/)/}{/(_){/}/}/}/}		" << std::endl;
		PlanetFile << "        _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}		" << std::endl;
		PlanetFile << "       {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}		" << std::endl;
		PlanetFile << "       _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}		" << std::endl;
		PlanetFile << "      {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}	" << std::endl;
		PlanetFile << "       {/{//}(_){/{/{//}/}(_){//}{//}/})/}	" << std::endl;
		PlanetFile << "        {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)	" << std::endl;
		PlanetFile << "       {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}	" << std::endl;
		PlanetFile << "        {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}	" << std::endl;
		PlanetFile << "          {/({/{/{/{/{//}(_){//}/}/}/}(/}	" << std::endl;
		PlanetFile << "           (_){/{//}{/{//}/}{/{/)/}/}(_)		" << std::endl;
		PlanetFile << "             {/{/{/{//}{/{/{/{/(_)/}			" << std::endl;
		PlanetFile << "              {/{/{/{//}/}{/{//}/}			" << std::endl;
		PlanetFile << "               {){/ {//}{//} /}/}			" << std::endl;
		PlanetFile << "               (_)  /.-'.-/					" << std::endl;
		PlanetFile << "           __...--- |'-.-'| --...__			" << std::endl;
		PlanetFile << "    _...--   .-'    |'-.-'|  ' -.  --..__	" << std::endl;
		PlanetFile << "  -    ' .  . '     |.'-._| '  . .  '   		" << std::endl;
		PlanetFile << "  .  '-  '    .--'  | '-.'|    .  '  . '		" << std::endl;
		PlanetFile << "           ' ..     |'-_.-|					" << std::endl;
		PlanetFile << "   .  '  .       _.-|-._ -|-._  .  '  .		" << std::endl;
		PlanetFile << "               .'   |'- .-|   '	.			" << std::endl;
		PlanetFile << "   ..-'   ' .  '.   `-._.-.   .'  '  - .		" << std::endl;
		PlanetFile << "    .-' '        '-._______.-'     '  .		" << std::endl;
		PlanetFile << "         .      ~,							" << std::endl;
		PlanetFile << "     .       .   |/   .    ' '-.				" << std::endl;
	}
}