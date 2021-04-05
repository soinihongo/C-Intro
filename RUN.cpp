#include <iostream>
using namespace std;
int main(){
    long long count = 0;
	long long n;
	cin >> n ;
	long long a[n];
    for(long long j =0; j<n; j++){
    	cin >> a[j];
	}
	for(long long i = 0; i < n; i++){
    	if (a[i]>a[i+1])
    		count++;
	}
	cout << count+1 ;
}
