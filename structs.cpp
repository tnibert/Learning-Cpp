#include <iostream>
using namespace std;

//defines struct product and creates a product apple
struct product {
	int weight;
	double price;
	const char * name;
} apple;

product initprod(int weight, double price, const char * name)
{
	product pr;
	pr.weight = weight;
	pr.price = price;
	pr.name = name;
	return pr;
}

void printprod(product prod)
{
	cout << prod.name << " is $" << prod.price << " and weighs " << prod.weight << " kilos" << endl;
}

int main()
{
	product banana;
	banana = initprod(12, 1.5, "Banana");
	apple = initprod(3, 2.6, "Apple");

	printprod(banana);
	printprod(apple);

	return 0;
}
