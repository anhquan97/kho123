#include<math.h>
int uCLN(int a, int b)
{
	a = abs(a); // trị tuyệt đối cho số âm
	b = abs(b);  // trị tuyệt đối cho số âm
	if (a == 0 && b != 0)
	{
		return b;
	}
	else if (a != 0 && b == 0)
	{
		return a;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;

}
