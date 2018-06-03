#include <stdio.h>
#include <stdlib.h>

int main()
{
  int array[100], maximum, minimum, size, i, location = 0;

  printf("hany eleme van a tombnek? \n");
  scanf("%d", &size);

  printf("ird be a tomb elemeinek erteket \n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  maximum = array[0];
  minimum= array[0];

  for (i = 0; i < size; i++)
  {
    if (array[i] > maximum)
    {
       maximum  = array[i];
       location = i;
    }
  }

  printf("A legnagyobb elem a %d. helyen talalhato\nertek= %d.\n", location+1, maximum);

  for (i = 0; i < size; i++)
  {
    if (array[i] < minimum)
    {
       minimum  = array[i];
       location = i;
    }
  }

  printf("A legkisebb elem a %d. helyen talalhato\nertek = %d.\n", location+1, minimum);


  return 0;
}
