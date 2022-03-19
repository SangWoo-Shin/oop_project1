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

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "AidMan.h"
#include "Date.h"

using namespace std;
namespace sdds
{
	AidMan::AidMan() : Menu()
	{
		fileName = nullptr;
		option = 7;
		option = "1- List Items\n2- Add Item\n3- Remove Item\n4- Update Quantity\n5- Sort\n6- Ship Items\n7- New/Open Aid Database\n---------------------------------\n";
	}

	int AidMan::menu() const
	{
		int select;
		if (fileName)
		{
			cout << "Aid Management System Version 0.1" << endl;
			cout << "Date: " << Date() << endl;
			cout << "Data file: " << fileName << endl;
		}
		else
		{
			cout << "Aid Management System Version 0.1" << endl;
			cout << "Date: " << Date() << endl;
			cout << "Data file: No file" << endl;
		}
		cout << "---------------------------------" << endl;
		select = option.Menu::run();
		return select;
	}

	void AidMan::searchList(const char* menu, int select)
	{
		char list[30];
		int menuLen = 0;
		int count = 0;
		int j = 0;
		menuLen = strlen(option.getMenuContent());
		if (select > 0)
		{		
			for (int i = 0; i < menuLen; i++)
			{
				if (option.getMenuContent()[i] == '\n')
				{
					count++;
					if (count == select)
					{
						list[j] = '\0';
						i = strlen(option.getMenuContent());
					}
				}
				if (count == select - 1)
				{
					list[j] = option.getMenuContent()[i];
					j++;
				}
			}
			if (select == count)
			{
				cout << "\n****";
				if (select == 1)
				{
					for (int i = 3; list[i] != '\0'; i++)
					{
						cout << list[i];
					}
				}
				else
				{
					for (int i = 4; list[i] != '\0'; i++)
					{
						cout << list[i];
					}
				}
				cout << "****\n" << endl;
			}
		}
	}
	void AidMan::run()
	{
		int select = 0;
		AidMan test;
		do
		{
			select = test.menu();
			if (select == 0)
			{
				cout << "Exiting Program!" << endl;
			}
			else
			{
				searchList(option.getMenuContent(), select);
			}
		} while (select != 0);
	}

	AidMan::~AidMan()
	{
		option.clear();
	}
}