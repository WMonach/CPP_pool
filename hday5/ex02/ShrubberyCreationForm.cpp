/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:09:02 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/24 16:47:49 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
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

void	ShrubberyCreationForm::execute( void ) const
{	
	std::string			filename = this->_Target + "_shrubbery";
	std::ofstream		PlanetFile(filename.c_str());
	
	PlanetFile << " 	            ,.-:~:-.                .:'/*/'`:,·:~·–:.,                 -~·-.'´::`;-:~.~·–.,   °      .:'/*/'`:,·:~·–:.,                           ,.-:~:'*:~-.°  " << std::endl;
	PlanetFile << "            /':::::::::'`,             /::/:/:::/:::;::::::/`':.,'       /:::::/::::/::::::::::::::'`,        /::/:/:::/:::;::::::/`':.,'                 .·´:::::::::::::::;  " << std::endl;
	PlanetFile << "          /;:-·~·-:;':::',          /·*'`·´¯'`^·-~·:–-'::;:::'`;     /-~·-'·´¯`·-~·––  ::;:::::'i'    /·*'`·´¯'`^·-~·:–-'::;:::'`;              /::;:-·~^*^~-:;:/ ° " << std::endl;
	PlanetFile << "        ,'´          '`:;::`,        '|                       '`;::'i‘   '`·,                       '`;::';   '                        '`;::'i‘        ,.-/:´     .,       ;/     " << std::endl;
	PlanetFile << "       /                `;::|         '`;        ,– .,        'i:'/       '`i       'i*^~;          'i / °   '`;        ,– .,        'i:'/        /::';      ,'::`:~.-:´;     " << std::endl;
	PlanetFile << "     ,'                   '`,::;         i       i':/:::';       ;/'         ';       ; / ,·          .'/',       i       i':/:::';       ;/'        /;:- ´        `'·–·;:'/' _   " << std::endl;
	PlanetFile << "    i'       ,';´'`;         '|:::', ‘     i       i/:·'´       ,:''           ';      ;' ;´         ~´;:::'i°     i       i/:·'´       ,:''        /     ;:'`:.., __,.·'::/:::';  " << std::endl;
	PlanetFile << "  ,'        ;' /´:`';         ';:::'i‘     '; '    ,:,     ~;'´:::'`:,      /´:;     ;–·:`:,          '`;:/°     '; '    ,:,     ~;'´:::'`:,    ;'      ';:::::::::::::::/;;::/  " << std::endl;
	PlanetFile << "  ;        ;/:;::;:';         ',:::;     'i      i:/|       `;::::/:'`;',/::;:' ,  '/::::::;'           'i/' °     'i      i:/        `;::::/:'`;' ¦         '`·-·:;::·-·'´   ';:/‘  " << std::endl;
	PlanetFile << " 'i        '´        `'         'i::'/      ;     ;/           '`:/::::/''.     '` '´·–·~*´           ,'  '        ;     ;/           '`:/::::/' '                          /'    " << std::endl;
	PlanetFile << " ¦       '/`' *^~-·'´|         ';'/'‚      ';   ,'                 '`;/'   ` ·-.,                 ,-·´   '         ';   ,'                 '`;/'    `·,                  ,·'  '    " << std::endl;
	PlanetFile << " '`., .·´              `·.,_,.·´  ‚       `'*´          '`~·-·^'´             '`*^~·- ·^*'´     '              `'*´          '`~·-·^'´           '`~·- . , . -·''          " << std::endl;
} 
