#include <stdio.h>

int main () {
  int anterior, num, inicio, final, a, b;
  a=0;
  b=0;
  final=1;
  num=1;
  scanf("%d", &inicio);
  anterior=inicio;
  while(num!=0) {
    scanf("%d", &num);
    if(anterior+1==num) {
      final=final+1;
    }
    else {
      if(final>a) {
	a=final;
	b=inicio;
      }
      inicio=num;
      final=1;
    }
    anterior=num;
  }
  printf("%d %d\n", b, a);
  return 0;
}
