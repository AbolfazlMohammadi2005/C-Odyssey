#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three numbers (a b c): ");
  scanf("%d %d %d", &a, &b, &c);
  /*
  if(a <= b && a <= c)
      cout << "Min = " << a << endl;
  else if(b <= a && b <= c)      
      cout << "Min = " << b << endl;
  else     
      cout << "Min = " << c << endl;
   */
  /*
  int min;
  min = a;
  if(b < min)
    min = b;
  if(c < min)     
    min = c;

  cout << "Min = " << min << endl;   
 */

  int k = (a < b) ? a : b;
  int min = (c < k) ? c : k;

  printf("Min = %d\n", min);

  return 0;
}