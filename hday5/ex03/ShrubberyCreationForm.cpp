/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:09:02 by wmonacho          #+#    #+#             */
/*   Updated: 2023/03/02 10:37:52 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <ios>

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
	this->_Target = rhs._Target;
	this->_Signature = rhs._Signature;
	return (*this);
}

void	ShrubberyCreationForm::execute( const Bureaucrat &intern ) const
{	
	std::string			filename = this->_Target + "_shrubbery";
	std::ofstream		file;

	if ( intern.getGrade() > this->getExecutionGrade())
		throw(Form::GradeTooLowException());
	if (this->getSignature() == 0)
		throw(Form::NotSigned());
	file.open(filename.c_str(), std::ios::out | std::ios::trunc);
	if (file.is_open() == 0)
	{
		std::cerr << "Can't open file !" << std::endl;
		return ;
	}
	file << "               _{/ _{/{//}/}/}__                      _{/ _{/{//}/}/}__                        _{/ _{/{//}/}/}__				" << std::endl;
	file << "              {/{//}{/{//}(/}{//} _                  {/{//}{/{//}(/}{//} _                    {/{//}{/{//}(/}{//} _			" << std::endl;
	file << "             {/{//}{/{//}(_)/}{/{//}  _             {/{//}{/{//}(_)/}{/{//}  _              {/{//}{/{//}(_)/}{/{//}  _		" << std::endl;
	file << "          {/{/(/}/}{/{//}/}{/){//}/} //}         {/{/(/}/}{/{//}/}{/){//}/} //}           {/{/(/}/}{/{//}/}{/){//}/} //}		" << std::endl;
	file << "         {/{/(_)/}{/{/)/}{/(_){/}/}/}/}         {/{/(_)/}{/{/)/}{/(_){/}/}/}/}           {/{/(_)/}{/{/)/}{/(_){/}/}/}/}		" << std::endl;
	file << "        _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}        _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}          _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}		" << std::endl;
	file << "       {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}      {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}        {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}		" << std::endl;
	file << "       _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}      _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}        _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}		" << std::endl;
	file << "      {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}    {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}     {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}	" << std::endl;
	file << "       {/{//}(_){/{/{//}/}(_){//}{//}/})/}     {/{//}(_){/{/{//}/}(_){//}{//}/})/}    {/{//}(_){/{/{//}/}(_){//}{//}/})/}	" << std::endl;
	file << "        {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)      {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)       {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)	" << std::endl;
	file << "       {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}     {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}      {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}	" << std::endl;
	file << "        {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}      {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}       {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}	" << std::endl;
	file << "          {/({/{/{/{/{//}(_){//}/}/}/}(/}        {/({/{/{/{/{//}(_){//}/}/}/}(/}         {/({/{/{/{/{//}(_){//}/}/}/}(/}	" << std::endl;
	file << "           (_){/{//}{/{//}/}{/{/)/}/}(_)          (_){/{//}{/{//}/}{/{/)/}/}(_)            (_){/{//}{/{//}/}{/{/)/}/}(_)		" << std::endl;
	file << "             {/{/{/{//}{/{/{/{/(_)/}                {/{/{/{//}{/{/{/{/(_)/}                 {/{/{/{//}{/{/{/{/(_)/}			" << std::endl;
	file << "              {/{/{/{//}/}{/{//}/}                   {/{/{/{//}/}{/{//}/}                     {/{/{/{//}/}{/{//}/}			" << std::endl;
	file << "               {){/ {//}{//} /}/}                     {){/ {//}{//} /}/}                      {){/ {//}{//} /}/}			" << std::endl;
	file << "                    /.-'.-/                                /.-'.-/                                  /.-'.-/					" << std::endl;
	file << "           __...--- |'-.-'| --...__               __...--- |'-.-'| --..._                  __...--- |'-.-'| --...__			" << std::endl;
	file << "    _...--   .-'    |'-.-'|  ' -.  --..__  _...--   .-'    |'-.-'|  ' -.  --..__    ...--   .-'     |'-.-'|  ' -.  --..__	" << std::endl;
	file << "  -    ' .  . '     |.'-._| '  . .  '    -    ' .  . '     |.'-._| '  . .  '      -     ' .  . '    |.'-._| '  . .  '   		" << std::endl;
	file << "  .  '-  '    .--'  | '-.'|    .  '  . ' .  '-  ' .--'     | '-.'|    .  '  . '   .   '-  '    .--' | '-.'|    .  '  . '		" << std::endl;
	file << "           ' ..     |'-_.-|                       ' ..     |'-_.-|                         ' ..     |'-_.-|					" << std::endl;
	file << "   .  '  .       _.-|-._ -|-._  .  '  .   .  '  .       _.-|-._ -|-._  .  '  .     .  '  .       _.-|-._ -|-._  .  '  .		" << std::endl;
	file << "               .'   |'- .-|   '  .                    .'   |'- .-|   '   .                     .'   |'- .-|   '	.			" << std::endl;
	file << "   ..-'   ' .  '.   `-._.-.   .'  '  - .  ..-'   ' .  '.   `-._.-.   .'  '  - .    ..-'   ' .  '.   `-._.-.   .'  '  - .		" << std::endl;
	file << "    .-' '        '-._______.-'     '  .    .-' '        '-._______.-'     '  .      .-' '        '-._______.-'     '  .		" << std::endl;
	file << "         .      ~,                               .      ~,	                                   .      ~,							" << std::endl;
	file << "     .       .   |/   .    ' '-.               .       .   |/   .    ' '-.              .       .   |/   .    ' '-.				" << std::endl;
	file.close();
}