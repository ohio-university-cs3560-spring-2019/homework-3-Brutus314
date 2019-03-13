#include "stddev.h"
#include <iostream>
#include <cmath>

double test(int n, ...){
	return 1;
}
extern "C"
double stddev( int n, ... )
{
	int sum = 0;
	va_list args;
	va_start(args, n);
	for(int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	va_start(args, n);
	double mean = static_cast<double>(sum) / n;
	double stddev = 0;
	for(int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		stddev = stddev + (num - mean) * (num - mean);
	}
	va_end(args);
	stddev /= n;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
