# include <iostream>
using namespace std;
int main(){
int n;
cout << "enter a number: ";
cin >> n;
int sum=0;
while (n>0){
int l = n%10;
sum+=l;
n/=10;
}
cout << "sum of digit is: " << sum << endl;
}
