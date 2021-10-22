#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form(target, 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat const &executer) const
{
	this->execute(executer);
	ofstream oFile((_target + "_shrubbery").c_str());

	oFile << "                                   .         ; " << endl;
	oFile << "      .              .              ;%     ;;" << endl;
	oFile << "        ,           ,                :;%  %;" << endl;
	oFile << "         :         ;                   :;%;'     .," << endl;
	oFile << ",.        %;     %;            ;        %;'    ,;" << endl;
	oFile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%' " << endl;
	oFile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << endl;
	oFile << "    ;%;      %;        ;%;        % ;%;  ,%;' " << endl;
	oFile << "     `%;.     ;%;     %;'         `;%%;.%;'" << endl;
	oFile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
	oFile << "         `:%;.  :;bd%;          %;@%;'" << endl;
	oFile << "           `@%:.  :;%.         ;@@%;'" << endl;
	oFile << "             `@%.  `;@%.      ;@@%;" << endl;
	oFile << "               `@%%. `@%%    ;@@%;" << endl;
	oFile << "                 ;@%. :@%%  %@@%;" << endl;
	oFile << "                   %@bd%%%bd%%:;" << endl;
	oFile << "                     #@%%%%%:;;" << endl;
	oFile << "                     %@@%%%::;" << endl;
	oFile << "                     %@@@%(o);  . '" << endl;
	oFile << "                     %@@@o%;:(.,'" << endl;
	oFile << "                 `.. %@@@o%::;" << endl;
	oFile << "                    `)@@@o%::;" << endl;
	oFile << "                     %@@(o)::;" << endl;
	oFile << "                    .%@@@@%::;" << endl;
	oFile << "                    ;%@@@@%::;." << endl;
	oFile << "                   ;%@@@@%%:;;;." << endl;
	oFile << "               ...;%@@@@@%%:;;;;,..    " << endl;
	oFile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& rhs)
{
	this->Form::operator=(rhs);
    return *this;
}