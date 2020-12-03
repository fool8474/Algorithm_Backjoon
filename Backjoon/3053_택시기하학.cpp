#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void 택시기하학_3053()
{
	double n;
	double s1, s2;
	cin >> n;
	s1 = n * n * 3.14159265359;
	s2 = n * n * 2;

	printf("%.6f\n", s1);
	printf("%.6f\n", s2);
}