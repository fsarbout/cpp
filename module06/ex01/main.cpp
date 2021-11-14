#include "Serialization.hpp"

int main()
{
	Data data;

	data.i = 2000;
	data.c = 'F';
	data.str = "ADA";

	cout << "**************** BEFORE ****************" << endl;

	cout << data.i << endl;
	cout << data.c << endl;
	cout << data.str << endl;

	uintptr_t p = serialize(&data);
	Data *d = deserialize(p);

	cout << "**************** After *****************" << endl;


	cout << d->i << endl;
	cout << d->c << endl;
	cout << d->str << endl;

	return 0;
}