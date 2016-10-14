#pragma once
#include "test.h"
#include "finexam.h"
class answer:  protected test
{
	protected: int answ, mm;
			   void setmm(int mm);
public:int numb;

		   void setansw(int answ);
		   void getansw();
	answer(void);
	~answer(void);
};

