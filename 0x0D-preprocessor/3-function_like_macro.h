#ifndef ABS(x)
#define ABS(x) do
{
	x = -x;
} while x < 0;
#endif
