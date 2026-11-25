#include <stdio.h>
 
int main()
{
	long long n , temp;
	int count = 0;
	scanf ("%I64d" , & n);	
	
	while (n > 0){
		temp = n % 10;
		if (temp == 7 || temp == 4){
			count = count + 1;
		}
		n = n / 10;
	}
 
	if (count == 7 || count == 4){
		printf("YES");
	}
	else{
		printf ("NO");
	} 
	return 0;
}	