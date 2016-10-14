#pragma once
#include "answer.h"
#include <iostream>
using namespace std;
class result :public answer
{static const int res=10;
public:
	
	void getre(){cout<<this->res<<endl;}
	result(void);
	~result(void);
};

