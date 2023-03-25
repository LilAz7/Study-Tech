#pragma once
#include "Sea.h"
class Bay :
	public Sea
{
private:
	string name;
	float deep;
	float size;
public:
	Bay()
	{
		name = "Áåçûìÿííûé";
		deep = 1;
		size = 1;
	}
	Bay(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Bay obj);
	friend istream& operator<<(istream& stream, Bay obj);
};
