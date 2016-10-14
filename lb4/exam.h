#pragma once
#include "ispytanie.h"
#include <iostream>
using namespace std;

class exam : public	ispytanie
{
	int day;
int month;
int num;
public:

	 int days;
	 int months;

exam(int d, int m) : day(d), month(m){};

	char *object;
void	setdate(int day, int month);
void getdate();
void getObject();
void setObject(char* object);

void toConsole()
{
	cout<<typeid(this).name()<<"Date of exam: "<<month<<" . "<<day<<endl;

}


void setstud(int num);
void getstud();
	exam(void);
	virtual ~exam(void);
};

