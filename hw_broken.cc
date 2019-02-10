/** \file */

#include <iostream>
#include <vector>
#include <cmath>

/**
* \brief Finds the standard deviation of an array of integers
* \param a: The array of integers in question
* \param n: The size of the array, or the amount of numbers to consider
* \return The standard deviation of the first n numbers in a
*/

double deviation( int* a, int n )
{
	int sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	}
	double mean = static_cast<double>(sum) / n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean);
	}
	stddev /= n;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
