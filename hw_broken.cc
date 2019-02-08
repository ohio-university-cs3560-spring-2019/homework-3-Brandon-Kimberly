#include <iostream>
#include <vector>
#include <cmath>

int deviation( int* a, int n);

int main()
{
	std::vector< int > v;
	int _10 = 10;
	while( _10 >= 0 )
	{
		v.push_back(_10);
		std::cout << deviation(v) << std::endl;
		_10 - 1;
	}
}

double deviation( int* a, int n )
{
	int sum;
	for(size_t i = 0; i <= v.size(); i++)
	{
		sum += v[i];
	} 
	double mean = sum /= v.size();
	double stddev = 0;
	for(size_t i = 0; i <= v.size() -1; i++)
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean); 
	}
	stddev /= v.size();
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
