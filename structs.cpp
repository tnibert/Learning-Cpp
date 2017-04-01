#include <iostream>
using namespace std;

//defines struct product and creates a product apple
struct product {
	int weight;
	double price;
	const char * name;
} banana, apple;

product initprod(int weight, double price, const char * name)
{
	product pr;
	pr.weight = weight;
	pr.price = price;
	pr.name = name;
	return pr;	//can't return pointer because pr is local var
}

void printprod(product * prod)
{
	cout << (prod)->name << " is $" << (prod)->price << " and weighs " << (prod)->weight << " kilos" << endl;
}

int main()
{
	product *pbanana, *papple;
	banana = (initprod(12, 1.5, "Banana"));
	apple = (initprod(3, 2.6, "Apple"));

	pbanana = &banana;
	papple = &apple;

	printprod(pbanana);
	printprod(papple);

	cout << pbanana->name << " ";
	cout << (*pbanana).name << endl;

	//*pbanana.title is equivalent to *(pbanana.title) e.g. not really valid in this case
	/*
	a.b	Member b of object a
	a->b	Member b of object pointed to by a	equiv: (*a).b
	*a.b	Value pointed to by member b of object a	equiv: *(a.b)
	*/
	return 0;
}
