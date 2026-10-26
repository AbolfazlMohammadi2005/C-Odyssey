#include <stdio.h>
#include <math.h>  

int main()
{
  double a, b;
  char ch;
  
  printf("========== SIMPLE CALCULATOR ==========\n");
  printf("Enter first number (a): ");
  scanf("%lf", &a);
  printf("Enter second number (b): ");
  scanf("%lf", &b);
  
  printf("\nSelect an operator:\n");
  printf("  + : Addition\n");
  printf("  - : Subtraction\n");
  printf("  * : Multiplication\n");
  printf("  / : Division\n");
  printf("  %% : Modulo (remainder) - integers only\n");
  printf("  ^ : Power (a^b)\n");
  printf("  s : Square root of a\n");
  printf("  r : Remainder (fmod)\n");
  printf("\nEnter operator: ");
  scanf(" %c", &ch);
  
  printf("\nResult: ");
  
  switch(ch)
  {
    case '+': 
      printf("%g + %g = %g\n", a, b, a + b);
      break;
      
    case '-': 
      printf("%g - %g = %g\n", a, b, a - b);
      break;
      
    case '*': 
      printf("%g * %g = %g\n", a, b, a * b);
      break;
      
    case '/': 
      if(b != 0)
        printf("%g / %g = %g\n", a, b, a / b);
      else
        printf("Error: Division by zero!\n");
      break;
      
    case '%': 
      if((int)b != 0)
        printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
      else
        printf("Error: Modulo by zero!\n");
      break;
      
    case '^': 
      printf("%g ^ %g = %g\n", a, b, pow(a, b));
      break;
      
    case 's': 
      if(a >= 0)
        printf("sqrt(%g) = %g\n", a, sqrt(a));
      else
        printf("Error: Square root of negative number!\n");
      break;
      
    case 'r': 
      printf("fmod(%g, %g) = %g\n", a, b, fmod(a, b));
      break;
      
    default: 
      printf("Error: Invalid operator! Please use +, -, *, /, %%, ^, s, or r\n");
  }
  
  printf("\n=======================================\n");
  printf("\nPress any key to exit...\n");
  
  return 0;
}