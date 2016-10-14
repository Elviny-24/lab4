#pragma once
#include "exam.h"
class test:
	public exam
{ int number;
public:
	int m2;
	class quest{
	char* q;
	int m;
	public:
	quest();
	int setm(int m);
	void fair();
	void setq(char* q);
	void getq();
	~quest();
	}D;
	void gethard(quest &x);
	void setnum(int number);
	void getnum();
	
	test(void);
	~test(void);
};

