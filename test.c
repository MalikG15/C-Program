#include <stdio.h>
#include <cs50.h>

int main(void)
{
        int n;
           do 
           {
              printf("You need a number from 0 to 23 for the height:\n");
              n = GetInt();
           }
           while (n > 23 || n < 0);
       
  
        int number = 1;
        int space_amount = n;
           for (int i = 0; i < n; i++)
             {
              space_amount--;
              for (int i = 0; i < space_amount; i++)
                    {
                        string space = ".";
                        printf("%s", space);
                    }
               number++;
               for (int i = 0; i < number; i++)
                    {
                        string hash = "#";
                        printf("%s", hash);
                    }
               printf("\n");
               }
}

