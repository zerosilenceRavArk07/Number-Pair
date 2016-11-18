#include<stdio.h>
#include<windows.h>

const int Size = 5;

int getValue(char MSG[40]);
char getChar(char MSG[40]);
int getLength(int x);

int main()
{
  int user, digits, Size_digits = 0, test_value, counter = 0;;
  int user_array[Size], digit_array[Size];
  int i, j, k, l, m;
  char ans;

do{
  system("cls");
  user = getValue("Input number of test cases: ");

  if(user < 0 || user > 20)
  {
    printf("Invalid number of test case\n");
  }
  else
  {
    for(i = 0; i < user; i++)
    {
      user_array[i] = getValue("Input test case/s: ");
    }
      for (i = 0; i < user; i++)
      {
        counter = 0;
        test_value = user_array[i];
        Size_digits = getLength(user_array[i]);
        for(j = test_value; j > 0; j--)
        {
          for(k = 0, l = j; k < Size_digits; k++)
          {
            digit_array[k] = l % 10;
            l /= 10;
          }
          for(m = 0; m < Size_digits; m++)
          {
            if(j + digit_array[m] == test_value)
            {
              counter++;
              printf("%d + %d = %d\n", j, digit_array[m], test_value);
            }
          }
        }
        if(counter > 0)
        {
            printf("%d pairs for %d \n", counter, test_value);
        }
        else
        {
            printf("No pairs for %d \n", test_value);
        }
      }
    }
    ans = getChar("Try again? [y/n]");
  }while(ans == 'y');
}

int getValue(char MSG[40])
{
    int temp;
    printf("%s", MSG);
    scanf("%d", &temp);
    return temp;
}

char getChar(char MSG[40])
{
    char temp;
    printf("%s", MSG);
    scanf(" %c", &temp);
    return temp;
}

int getLength(int x)
{
  int count = 0;
  while(x != 0)
  {
          x/=10;
          count++;
  }
  return count;
}
