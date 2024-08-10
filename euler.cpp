#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	
long double e,fat,i,j,n;
  
cout << setprecision(17);

cout <<"";
cin >> n;

e =  1;
  
for(i = 1; i <= n; i++){
    fat = 1.0;
    for(j = 2; j <= i; j++)
      fat = fat * j;
    e = e + (1.0/fat);
  }
cout <<""<<e;
}
