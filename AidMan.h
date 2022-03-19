/*
	==================================================
	Mile Stone 2
	==================================================
	Name   : Sangwoo Shin
	ID     : 119294213
	Email  : sshin36@myseneca,ca
	Section: NCC
	Date   : 2022/3/15
*/

// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef AIDMAN_H
#define AIDMAN_H
#include <iostream>
#include "Menu.h"

namespace sdds
{

	class AidMan : public Menu
	{
	private:
		char* fileName;
		Menu option;
	public:
		AidMan();
		void searchList(const char* menu, int select);
		int menu() const;
		void run();
		~AidMan();
	};
}

#endif //AIDMAN_H