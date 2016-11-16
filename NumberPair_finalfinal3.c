#include<stdio.h>
#include<windows.h>

const int Size = 20;

int getValue(char MSG[40]);
char getChar(char MSG[40]);
int getLength(int x);

int main()
{
    int i,j,k,l; //loops
    int x, a, result, counter; //reassign
    int test_case[Size], split_case[Size]; // arrays
    int size_a, num_test, test_value;//holder
    char ans;

do{
    system("cls");
    num_test = getValue("Input number of test cases: ");

    if(num_test < 1 || num_test > 20)
    {
        printf("Invalid test cases [1-20]\n");
    }
    else
    {
      for(i = 0; i < num_test; i++)
      {
        test_case[i] = getValue("Input test case/s: ");
        if(test_case[i] <= 10)
        {
          printf("Invalid test cases 2 digit!\n");
          break;
        }
      }
      for (i = 0; i < num_test; i++)
      {
        x = test_case[i];
        counter = 0;
        for(j = x, test_value = j; j > 0; j--)
        {
          a = j;
          size_a = getLength(a);
          for (k = 0; k < size_a; k++)
          {
            split_case[k] = a % 10;
            a /= 10;
            if((j + split_case[k])==test_value)
            {
              counter++;
              result = split_case[k] + j;
              printf("%d + %d = %d\n", j, split_case[k], result);
            }
          }
        }
        if(counter > 0)
        {
          printf("---------------\n%d pairs for %d \n---------------\n", counter, x);
        }
        else
        {
          printf("---------------\nNo pairs for %d \n---------------\n", x);
        }
      }
    }
    ans = getChar("Try Again?: [y/n]");
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
