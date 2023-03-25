#include "bay.h"


void Bay::setName(string N)
{
	name = N;
}
void Bay::setDeep(float D)
{
	deep = D;
}
void Bay::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& out, Bay obj)
{
	out << obj.name << " çàëèâ; ";
	out << "ãëóáèíà: " << obj.deep << "ì; ";
	out << "ðàçìåð: " << obj.size << "òûñ êì2";

	return out;
}