#include <iostream>
#include "Money.h"
using namespace std;

Money::Money() {
	rubles = 0;
	kopecks = 0;
}

Money::Money(long r, int k) {
	rubles = r;
	kopecks = k;
}

Money::Money(const Money& tmp) {
	rubles = tmp.rubles;
	kopecks = tmp.kopecks;
}

Money::~Money() {};

long Money::get_rub() {
	return rubles;
}

int Money::get_kop() {
	return kopecks;
}

void Money::set_rub(long r) {
	rubles = r;
}

void Money::set_kop(int k) {
	kopecks = k;
}

istream& operator>>(istream& is, Money& tmp) {
	cout << "rubles? : "; 
	is >> tmp.rubles;
	cout << "kopecks? : "; 
	is >> tmp.kopecks;
	return is;
}

ostream& operator<<(ostream& os, Money& tmp) {
	return (os << tmp.rubles << "," << tmp.kopecks);
}

Money& Money::operator=(const Money& tmp) {
	if (&tmp == this)
	{
		return *this;
	}
	rubles = tmp.rubles;
	kopecks = tmp.kopecks;
	return *this;
}

Money Money::operator*(double factor) {
	long totalKopecks = (rubles * 100 + kopecks) * factor;
	Money tmp;
	tmp.rubles = totalKopecks / 100;
	tmp.kopecks = totalKopecks % 100;
	return tmp;
}

Money Money::operator/(int divider) {
	if (divider == 0) {
		return Money(0, 0);
	}
	long totalKopecks = rubles * 100 + kopecks;
	totalKopecks /= divider;
	Money tmp;
	tmp.rubles = totalKopecks / 100;
	tmp.kopecks = totalKopecks % 100;
	return tmp;
}