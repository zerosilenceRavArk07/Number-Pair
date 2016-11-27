#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<bool.h>

int getValue(char MSG[40]);
char getChar(char MSG[40]);
int getLength(int test);
int getStart(int test);
int getLimit(int size);
int *splitToArray(int test, int length);
int toInt(int array[]);
void display(int counter, int value);

const int SIZE = 20;

int main()
{
  int test_case[SIZE], *arr_test_case; //arrays
  int num_test, copy_test_case, length, start, ; //integers
  int i, j, k;
  char ans;
  bool test = false;

  do{
      system("cls");
      num_test = getValue("Input number of test cases: ");

      printf("Input test case/s:\n");
      for(i = 0; i < num_test; i++)
      {
        printf("%d> ", i+1);
        scanf("%d", &test_case[i]);
      }
      for(i = 0; i < num_test; i++)
      {
        copy_test_case = test_case[i];
        length = getLength(copy_test_case);
        start = getStart(copy_test_case);
        arr_test_case = splitToArray(start, length);

        for(j = 0; j < length; j++)
        {
          for(k = 0; k < length-1; k++)
          {
            if(arr_test_case[i] == )
            {

            }
          }
        }
        //add = (add * 10) + //some array
      }

      ans = getChar("Try Again? [Y/N]");
  }while(toupper(ans) == 'Y');
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

int getLength(int test)
{
  int count = 0;
  while(test != 0)
  {
    test/=10;
    count++;
  }
  return count;
}

int getStart(int test)
{
  int temp;
  temp = test / 2;
  return temp;
}

int getLimit(int length)
{
  double limit;
  limit = pow(10, length);
  (int) limit;
  return limit;
}

int *splitToArray(int test, int length)
{
  int i;
  static int *splitArr;
  splitArr = (int *) malloc(length * sizeof(int));
  for(i = length-1; i >= 0; i--)
  {
    splitArr[i] = test % 10;
    test /= 10;
  }
  return splitArr;
}

int toInt(int array[])
{

}

void display(int counter, int value)
{
  if(counter > 0)
  {
    printf("\n");
    printf("---------------\n%d pair/s for %d \n---------------\n", counter, value);
    printf("\n");
  }
  else
  {
    printf("\n");
    printf("---------------\nNo pair/s for %d \n---------------\n", value);
    printf("\n");
  }
}
