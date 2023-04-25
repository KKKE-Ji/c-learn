#include <stdio.h>

int main()

{

    int n = 10;

    int i, j;

    int min = 0;

    int data[10] = {0};

    for (i = 0; i < n; i++)

    {

        scanf("%d", &data[i]);
    }

    for (i = 0; i < n - 1; i++)

    {

        min = i;

        for (j = i + 1; j < n; j++)

        {

            if (data[min] > data[j])

            {

                min = j;
            }
        }

        int temp = data[min];

        data[min] = data[i];

        data[i] = temp;
    }

    for (i = 0; i < n; i++)

    {

        /*  if(i == n-1)



          {



          printf("%d", data[i]);



          break;



          }*/

        printf("%d,", data[i]);
    }

    return 0;
}
