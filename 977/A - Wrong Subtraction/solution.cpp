#include <iostream>
using namespace std;
 
int main()
{
	int count = 0, n , k , temp;
	cin >> n >> k;
	
	for (int i = 0; i < k; i++){
	
		if (n % 10 == 0){
			n = n / 10;
		}
		else{
			n = n - 1;		
		}
	
	}
	cout << n;
	return 0;
}