#pragma once
class rational {
private:
	int a, b;
public:
	rational();
	rational(int _a, int _b);
	void set(int _a, int _b);
	void show();
	rational operator+(rational next) {
		return rational((this->a * next.b + next.a * this->b), this->b * next.b);
	};
	friend rational operator-(const rational& ratio1, const rational& ratio2);
	void operator++();
	bool operator==(const rational& next);
	bool operator>(const rational& next);
	void operator=(const rational& next);
};
