#include <string.h>
#include "Global_function.h"
using namespace StudentUtils;
int StudentUtils::compare_name(char x1[30], char x2[30])
{
	if (strcmp(x1, x2) < 0)
		return -1;
	else if (strcmp(x1, x2) == 0)
		return 0;
	else return 1;
}
int StudentUtils::compare_math_grade(float x1, float x2)
{
	if (x1 < x2)
		return -1;
	else if (x1 == x2) return 0;
	else return 1;
}
int StudentUtils::compare_english_grade(float x1, float x2)
{
	if (x1 < x2)
		return -1;
	else if (x1 == x2) return 0;
	else return 1;
}
int StudentUtils::compare_history_grade(float x1, float x2)
{
	if (x1< x2)
		return -1;
	if (x1 == x2) return 0;
	else return 1;
}
int StudentUtils::compare_average(float x1, float x2)
{
	if (x1< x2)
		return -1;
	if (x1 == x2) return 0;
	else return 1;
}