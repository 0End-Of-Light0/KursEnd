#include <cmath>
#include <iostream>

using namespace std;

class HealthF
{
private:
    const float met[14]{1.3,1.8,2,2.2,2.5,3.5,5,4.3,4.5,6.0,12.0,8.0,10.0,8.0};
	double w,h,p,C;
	int a,t,x,i;
	char g;
	double xa[3];
	const double WcW = 2.7;
	const double WcM = 3.7;
public:
	HealthF(double weight, double height, int age)
	{
		w = weight;
		h = height;
		a = age;
		g = 'M';
	}
	HealthF(double weight, double height, int age, char gen)
	{
		w = weight;
		h = height;
		a = age;
		g = gen;
	}
	HealthF(double weight, double pfat)
	{
		w = weight;
		p = pfat;
		g = 'M';
	}
	HealthF(double weight, double pfat, char gen)
	{
		w = weight;
		p = pfat;
		g = gen;
	}
	HealthF(double weight, double pfat, double height, int age)
	{
		w = weight;
		h = height;
		a = age;
		p = pfat;
		g = 'M';
	}
	HealthF(double weight, double pfat, double height, int age, char gen)
	{
		w = weight;
		h = height;
		a = age;
		p = pfat;
		g = gen;
	}

	void setWeight(double weight);
	void setHeight(double height);
	void setAge(int age);
	void setPeroffat(double pfat);
	void setGender(char gen);
	double getWeight();
	double getHeight();
	int getAge();
	double getPeroffat();
	char getGender();
	double bmrgb();
	double bmrmd();
	double bmrkma();
	double Cactiv(int t,int tm);
	double CactivA(int *tArray,int tm,int size);
	double* Macel();
	double Watercons(int tm);
};
