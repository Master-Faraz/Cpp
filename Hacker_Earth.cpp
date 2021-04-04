#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
  int sq;
  bool k = false;
  sq = sqrt(n);

  for (int i = 2; i <= sq; i++)
  {
    if (n % i == 0)
      return k = false;
    else
      return k = true;
  }
  return k;
}

int *p = NULL; // Pointer which points on array
int top = 0;   // Pointer which points on last index of array
int sum = 0;
int x, y;

int *factor(int z)
{

  int *A = new int[z];
  p = A;

  for (int i = 1; i <= z; i++) // Finding Factor
  {
    if (z % i == 0)
    {
      A[top] = i; //        Push Factors into array
      top++;      // Incrementing Top
    }
  }
  return A; // Returning Array
}

int sum_of_factor(int n)
{
  p = new int[3];
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  p[3] = 6;
  top = 4;
  for (int i = 0; i < top; i++)
  {
    if (p[i] == 1)
    {
      sum += 0;
    }
    else if (prime(p[i]) == true)
    {
      sum += 1;
    }
    else
    {
      y = p[top - 2];
      if (p[top - 3] == 1)
      {
        x = y;
      }
      else
      {
        x = p[top - 3];
      }

      sum += (y * sum_of_factor(x) + x * sum_of_factor(y));
    }
  }
  return sum;
}

int fun(int l, int r)
{
  int s = 0;
  for (l; l <= r; l++)
  {
    factor(l);
    sum_of_factor(l);
    s += sum;
    sum = top = x = y = 0;
    delete p;
    p = NULL;
  }
  return s;
}

int main()
{
  cout<<sum_of_factor(6)<<endl;
  return 0;
}