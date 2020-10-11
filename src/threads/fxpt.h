#include <stdint.h>

#define F 16384

/* methods for converting into fixed-point arithmetic */
int tofxpt(int a);
int tointfloor(int a);
int tointround(int a);
int addin(int a, int b);
int addfx(int a, int b);
int subin(int a, int b);
int subfx(int a, int b);
int mulin(int a, int b);
int mulfx(int a, int b);
int divin(int a, int b);
int divfx(int a, int b);

/* Converts integer to a into a fixed-point number */
int 
tofxpt(int a)
{
	return a * F;
}

/* Converts integer to a into a fixed-point number that retuns floor of the number*/
int 
tointfloor(int a)
{
	return a / F;
}

/* Converts integer to a into a fixed-point number that retuns rounded value of the number*/
int 
tointround(int a)
{
	if (a>=0)
		return (a + F/2) / F;
	else
		return (a - F/2) / F;
}

/* Converts integer to a into a fixed-point number that retuns sum of an integer and a fixed point number */
int 
addin(int a, int b)
{
	return a + (b * F);
}

/* Add integers */
int 
addfx(int a, int b)
{
	return a + b;
}

/* Subtracts integer and F */
int 
subin(int a, int b)
{
	return a - (b * F);
}

/* Subtracts integers */
int 
subfx(int a, int b)
{
	return a - b;
}

/* Multiply integers */
int 
mulin(int a, int b)
{
	return a * b;
}

/* Multiply a by b */
int 
mulfx(int a, int b)
{
	return ((int64_t) a) * b / F;
}

/* Divide integers */
int 
divin(int a, int b)
{
	return a / b;
}

/* Divide a by b */
int 
divfx(int a, int b)
{
	return ((int64_t) a) * F / b;
}