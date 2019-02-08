#include <iostream>
#include <vector>
#include <cmath>

//TODO Revert changes to function params.

double deviation( std::vector<int> a, int n);

int main()
{
	std::vector< int > v;
	int _10 = 10;
	while( _10 >= 0 )
	{
		v.push_back(_10);
		std::cout << deviation(v, v.size()) << std::endl;
		_10--;
	}
}

double deviation( std::vector<int> a, int n )
{
	int sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	double mean = sum;
	mean /= n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= n;
	if ( stddev < 0.001)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
