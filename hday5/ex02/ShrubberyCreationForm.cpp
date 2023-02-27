/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:09:02 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 18:50:04 by will             ###   ########lyon.fr   */
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

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & rhs ): Form("ShrubberyCreationForm", 145, 137), _Target(rhs.getTarget())
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
	try
	{
		if ( intern.getGrade() > this->getExecutionGrade())
			throw(Form::GradeTooLowException());
		if (this->getSignature() == 0)
			throw(Form::NotSigned());
		PlanetFile << "               _{/ _{/{//}/}/}__			             _{/ _{/{//}/}/}__			              _{/ _{/{//}/}/}__				" << std::endl;
		PlanetFile << "              {/{//}{/{//}(/}{//} _		            {/{//}{/{//}(/}{//} _		             {/{//}{/{//}(/}{//} _			" << std::endl;
		PlanetFile << "             {/{//}{/{//}(_)/}{/{//}  _	           {/{//}{/{//}(_)/}{/{//}  _	            {/{//}{/{//}(_)/}{/{//}  _		" << std::endl;
		PlanetFile << "          {/{/(/}/}{/{//}/}{/){//}/} //}	        {/{/(/}/}{/{//}/}{/){//}/} //}	         {/{/(/}/}{/{//}/}{/){//}/} //}		" << std::endl;
		PlanetFile << "         {/{/(_)/}{/{/)/}{/(_){/}/}/}/}	       {/{/(_)/}{/{/)/}{/(_){/}/}/}/}	        {/{/(_)/}{/{/)/}{/(_){/}/}/}/}		" << std::endl;
		PlanetFile << "        _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}	      _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}	       _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}		" << std::endl;
		PlanetFile << "       {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}	     {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}	      {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}		" << std::endl;
		PlanetFile << "       _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}	     _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}	      _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}		" << std::endl;
		PlanetFile << "      {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}    {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}	    {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}	" << std::endl;
		PlanetFile << "       {/{//}(_){/{/{//}/}(_){//}{//}/})/}     {/{//}(_){/{/{//}/}(_){//}{//}/})/}      {/{//}(_){/{/{//}/}(_){//}{//}/})/}	" << std::endl;
		PlanetFile << "        {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)      {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)	      {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)	" << std::endl;
		PlanetFile << "       {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}     {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}	     {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}	" << std::endl;
		PlanetFile << "        {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}      {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}	      {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}	" << std::endl;
		PlanetFile << "          {/({/{/{/{/{//}(_){//}/}/}/}(/}        {/({/{/{/{/{//}(_){//}/}/}/}(/}	        {/({/{/{/{/{//}(_){//}/}/}/}(/}	" << std::endl;
		PlanetFile << "           (_){/{//}{/{//}/}{/{/)/}/}(_)	         (_){/{//}{/{//}/}{/{/)/}/}(_)	          (_){/{//}{/{//}/}{/{/)/}/}(_)		" << std::endl;
		PlanetFile << "             {/{/{/{//}{/{/{/{/(_)/}		           {/{/{/{//}{/{/{/{/(_)/}		            {/{/{/{//}{/{/{/{/(_)/}			" << std::endl;
		PlanetFile << "              {/{/{/{//}/}{/{//}/}		            {/{/{/{//}/}{/{//}/}		             {/{/{/{//}/}{/{//}/}			" << std::endl;
		PlanetFile << "               {){/ {//}{//} /}/}		             {){/ {//}{//} /}/}			             {){/ {//}{//} /}/}			" << std::endl;
		PlanetFile << "                    /.-'.-/				                  /.-'.-/				                   /.-'.-/					" << std::endl;
		PlanetFile << "           __...--- |'-.-'| --...__		         __...--- |'-.-'| --...__		          __...--- |'-.-'| --...__			" << std::endl;
		PlanetFile << "    _...--   .-'    |'-.-'|  ' -.  --..__  _...--   .-'   |'-.-'|  ' -.  --..__	   ...--   .-'     |'-.-'|  ' -.  --..__	" << std::endl;
		PlanetFile << "  -    ' .  . '     |.'-._| '  . .  '   	-    ' .  . ' |.'-._| '  . .  '   	 -     ' .  . '    |.'-._| '  . .  '   		" << std::endl;
		PlanetFile << "  .  '-  '    .--'  | '-.'|    .  '  . '	.  '-  ' .--' | '-.'|    .  '  . '	 .   '-  '    .--' | '-.'|    .  '  . '		" << std::endl;
		PlanetFile << "           ' ..     |'-_.-|				         ' ..     |'-_.-|				          ' ..     |'-_.-|					" << std::endl;
		PlanetFile << "   .  '  .       _.-|-._ -|-._  .  '  .	 .  '  .       _.-|-._ -|-._  .  '  .	  .  '  .       _.-|-._ -|-._  .  '  .		" << std::endl;
		PlanetFile << "               .'   |'- .-|   '	.		             .'   |'- .-|   '	.		              .'   |'- .-|   '	.			" << std::endl;
		PlanetFile << "   ..-'   ' .  '.   `-._.-.   .'  '  - .	 ..-'   ' .  '.   `-._.-.   .'  '  - .	  ..-'   ' .  '.   `-._.-.   .'  '  - .		" << std::endl;
		PlanetFile << "    .-' '        '-._______.-'     '  .	  .-' '        '-._______.-'     '  .	   .-' '        '-._______.-'     '  .		" << std::endl;
		PlanetFile << "         .      ~,						       .      ~,						        .      ~,							" << std::endl;
		PlanetFile << "     .       .   |/   .    ' '-.			   .       .   |/   .    ' '-.			    .       .   |/   .    ' '-.				" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}