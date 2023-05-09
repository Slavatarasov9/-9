#pragma once
class linear_equation {
	float first;
	float second;
	double x;
public:
	void Read();
	void Show();
	void Init(float, float);
	void function(double x);
};