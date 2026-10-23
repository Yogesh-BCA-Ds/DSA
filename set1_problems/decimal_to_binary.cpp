# include <iostream>
using namespace std;
int main(){
int n;
cout << "enter a number: ";
cin >> n;
int ans=0;
int pow = 1;
while (n>0){
    int rem = n%2;
    n = n/2;
    ans = ans+rem*pow;
    pow=pow*10;
    }
cout <<"decimal: "<<n<<"to "<<"binary: "<<ans << endl;
}
