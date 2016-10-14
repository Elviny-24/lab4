#pragma once
#include "test.h"
class question:
	public test

{
	char *quest;
public:
	question(void);
	void setQuestion(char *quest);
	void getQuestion();
	~question(void);
};

