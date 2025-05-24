#include<bits/stdc++.h>
using namespace std;
const long long d = 10000007;
//long long  Fibonanci(int a , int b , int n){
//	if( n == 1 || n == 2) return 1;
//	else return ((a*Fibonanci(a,b,n-1)) % d + (b*Fibonanci(a,b,n - 2)) % d) % d;
//}
#define Max 10000
long long f[Max] = {0};
long long Fibonanci(int a , int b , int n){
	f[1] = 1 , f[2] = 1;
	for(int i = 3 ; i <= n ;i++){
		f[i] = (((a*f[i-1]) % d)  + ((b*f[i-2]) % d)) % d;
	}
	return f[n];
}
int main(){
//	ifstream inFile("Fibo.inp.txt" , ios::in);
//	if(!inFile) {
//		cout << "Khong tim thay file in";
//	}
//	ofstream outFile("Fibo.out.txt" , ios::out);
	
//	int a,b,n;
//	inFile >> a >> b >> n;
//	cin >> a >> b >> n;
//	outFile << Fibonanci(a,b,n);
	cout << Fibonanci(3,4,1000);
	cout << "Lam Phuc Truong An";
	cout << "Lop CNTT";
	cout << "Dai doi 158";
//	inFile.close();
//	outFile.close();
}
