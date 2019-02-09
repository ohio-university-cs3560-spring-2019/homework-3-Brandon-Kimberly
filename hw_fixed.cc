#include <iostream>
#include <vector>
#include <cmath>

/** \file */

double deviation( int* a, int n);
/*
* \brief Calculates the standard deviation of a vector of ints.
* \param Pointer to the start of a vector, int containing size of vector.
* \return Double value containing the standard deviation.
*/

int main()
{
	std::vector< int > v;
	int _10 = 10;
	while( _10 >= 0 )
	{
		v.push_back(_10);
		int* front = &v.front();
		std::cout << deviation(front, v.size()) << std::endl;
		_10--;
	}
}

double deviation( int* a, int n )
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
