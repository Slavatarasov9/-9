#pragma once
#include <iostream>
using namespace std;

class Money {
	long rubles;
	int kopecks;
public:
	Money();
	Money(long r, int k);
	Money(const Money& tmp);
	~Money();
	long get_rub();
	int get_kop();
	void set_rub(long r);
	void set_kop(int k);
	friend istream& operator>>(istream& is, Money& temp);
	friend ostream& operator<<(ostream& os, Money& temp);
	Money& operator=(const Money& temp);
	Money operator*(double factor);
	Money operator/(int divider);
};