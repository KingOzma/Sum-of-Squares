#include<stdio.h>

#include<math.h>

#include<limits.h>

int
main ()
{

  int x, z, count = 0;

  float y;

  printf ("Enter the value of z (from 0 to %d): ", INT_MAX);

  scanf ("%d", &z);

  for (x = 0; x * x <= z; x++)

    {

      y = sqrt (z - (x * x));


      if (y == (int) y)

	{

	  printf ("%d, %d; ", x, (int) y);

	  count++;

	}

    }


  if (count == 0)

    printf ("None found");

  return 0;

}
