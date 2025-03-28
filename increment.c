#include<stdio.h>
main()
{
	int a =5,i ;
	
	i = ++a + ++a + a++;
	i = a++ + ++a + ++a;
	i = ++a + ++a + a++;
	
	printf("a=%d\n",a);
	printf("i=%d\n",i);
}
