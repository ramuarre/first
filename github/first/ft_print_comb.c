
#include<stdio.h>

void ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;

	while (x + y + z <= 24)
	{
	z++;	
	if (y==9)
	{
	x++;
	y=0;
	}
	if (z==9)
	{
	z=0;
	y++;
	}
	if (x != y && y != z && x != z) && ("%d%d%d" x, y, z != "%d%d%d" y, z, x)
		{
			printf("%d,%d,%d, ", x, y, z);
		continue;
		}
			else
			{
			y++;
			}	
				
		if (x != y && y != z && x != z)
		{
			printf("%d,%d,%d, ", x, y, z);
		}
}
}
