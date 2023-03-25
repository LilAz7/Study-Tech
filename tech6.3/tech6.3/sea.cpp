#include "Sea.h"

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
	stream << obj.name << " ěîđĺ; ";
	stream << "ăëóáčíŕ: " << obj.deep << "ě; ";
	stream << "đŕçěĺđ: " << obj.size << "ňűń ęě2";

	return stream;
}