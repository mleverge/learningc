#include <iostream>
#include <vector>

using namespace std;

/*
Average function
*/
double avg(double tab[], int len)
{
	double moyenne(0);
	for(int i(0); i < len ; i++)
	{
		moyenne += tab[i];
	}
	moyenne /= len;
	return moyenne;
}

/*
Factorial function
*/
double fact(double nb)
{
	double res;
	if(nb == 1 or nb == 0)
	{
		return 1;
	}
	else
	{
		res = fact(nb-1)*nb;
		return res;
	}
}

int main()
{
	int n ;
	int const len(6);
	double tab[len];
	for(int i(0); i < len ; i++)
	{
		tab[i] = fact(i);
		cout << tab[i] << '\n';
	}
	double m ;
	m = avg(tab, len);
	cout << "Moyenne = " << m << '\n';
	return 0;
}