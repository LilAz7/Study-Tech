#pragma once
#include "Ocean.h"
class Sea :
	public Ocean
{
private:
	string name;
	float deep;
	float size;
public:
	Sea()
	{
		name = "Áĺçűě˙ííîĺ";
		deep = 1;
		size = 1;
	}
	Sea(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Sea obj);
	friend istream& operator<<(istream& stream, Sea obj);
};
