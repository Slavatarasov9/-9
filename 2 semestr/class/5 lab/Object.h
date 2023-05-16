#pragma once
#include <iostream>

class Object
{
public:
	Object(void);
	~Object(void);
	virtual void Show() = 0;
};