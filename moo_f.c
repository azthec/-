#include <stdio.h>

int main() {
  int valor;
  int i;
  scanf("%d", &valor);  
  int locais[1000];
  locais[0]=valor;
  int cursor=1;
  scanf("%d", &valor);
  while(valor != 0)   {
      for(i=0; i<cursor; i++)
	if(locais[i] == valor)	  {
	    cursor=i;
	    break;
	  }
      locais[cursor]=valor;
      cursor++;
      scanf("%d", &valor);
    }
 
  for(i=0; i<cursor; i++)
     printf("%d\n",locais[i]);

  return 0;
}
