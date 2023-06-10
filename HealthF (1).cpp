#include "HealthF.h"

void HealthF::setWeight(double weight)
{
	w = weight;
}
void HealthF::setHeight(double height)
{
	h = height;
}
void HealthF::setAge(int age)
{
	a = age;
}
void HealthF::setPeroffat(double pfat)
{
	p = pfat;
}
void HealthF::setGender(char gen)
{
	g = gen;
}
double HealthF::getWeight()
{
	return w;
}
double HealthF::getHeight()
{
	return h;
}
int HealthF::getAge()
{
	return a;
}
double HealthF::getPeroffat()
{
	return p;
}
char HealthF::getGender()
{
	return g;
}
double HealthF::bmrgb()
{
    if (a <= 0.0 or w <= 0.0 or h <= 0.0)
    {
        cout << "Age or Weight or Height is incorrect";
        return 0.0;
    }
	if (g == 'M')
	{
	    return 88.362 + (13.397 * w) + (4.799 * h) - (5.677 * a);
	}
	else
	{
	    if (g == 'W')
	    {
	        return 447.593 + (9.247 * w) + (3.098 * h) - (4.330 * a);
	    }
	
	    else
	    {
	        cout << "Gender is invalid";
	        return 0.0;
	    }
	}
}
double HealthF::bmrmd()
{
    if (a <= 0.0 or w <= 0.0 or h <= 0.0)
    {
        cout << "Age or Weight or Height is incorrect";
        return 0.0;
    }
	if (g == 'M')
	{
	    return (10 * w) + (6.25 * h) - (5 * a) + 5;
	}
	else 
	{
	    if (g == 'W')
	    {
	        return (10 * w) + (6.25 * h) - (5 * a) - 161;
	    }
	    else
	    {
	        cout << "Gender is invalid";
	        return 0.0;
	    }
	}
}
double HealthF::bmrkma()
{
    if (w <= 0.0 or p <= 0.0 or p > 1.0)
    {
        cout << "PercentOfFat or Weight is incorrect";
        return 0.0;
    }
	return 370 + (21.6 * (w * (1 - p)));
}
double HealthF::Cactiv(int t,int tm)
{
    return (met[t] * 3.5 * w * tm)/200;
}
double HealthF::CactivA(int *tArray,int tm,int size)
{
    for(i = 0; i < size; i++) {
        int x = tArray[i];
        C = C + (met[x] * 3.5 * w * tm)/200;
    }
    return C;
}
double* HealthF::Macel()
{
    xa[0] = {2*w};
    xa[1] = {1.5*w};
    xa[2] = {8*w};
    return xa;
}
double HealthF::Watercons(int tim){
    if (tim <= 0)
    {
        cout << "time is incorrect";
        return 0.0;
    }
    if (g == 'M')
	{
	    return (WcM + (tim*1.0)/60);
	}
	else 
	{
	    if (g == 'W')
	    {
	        return (WcW + (tim*1.0)/60);
	    }
	    else
	    {
	        cout << "Gender is invalid";
	        return 0.0;
	    }
	}
}

