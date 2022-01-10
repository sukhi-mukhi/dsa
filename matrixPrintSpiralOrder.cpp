#include <iostream>
using namespace std;

#define M 5
#define N 5

void
printSpiral (int matrix[][N], int top, int bottom, int left, int right)
{
  //Practise Yourself : Write your code Here
  if (left > right)
    return;
  // print top row
  for (int i = left; i <= right; i++)
    cout << matrix[top][i] << " ";
  top++;

  if (top > bottom)
    return;

  for (int i = top; i <= bottom; i++)
    cout << matrix[i][right] << " ";
  right--;

  if (left > right)
    return;

  for (int i = right; i >= left; i--)
    {
      cout << matrix[bottom][i] << " ";
    }
   bottom--;

   if (top > bottom)
		return;
		
   for (int i=bottom;i>=top;i--){
      cout << matrix[i][left] << " ";
     }
     left++;
     
     printSpiral (matrix, top, bottom, left, right);
    }
   
   

    int main ()
  {
    int matrix[M][N] = {
      {1, 2, 3, 4, 5},
      {16, 17, 18, 19, 6},
      {15, 24, 25, 20, 7},
      {14, 23, 22, 21, 8},
      {13, 12, 11, 10, 9}
    };

    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;

    printSpiral (matrix, top, bottom, left, right);

    return 0;
  }
