# include <iostream>
using namespace std;
int main(){
int n;
cout << "enter a number: ";
cin >> n;
int ans=0;
int pow = 1;
while (n>0){
    int rem = n%10;
    n = n/10;
    ans = ans+rem*pow;
    pow=pow*2;
    }
cout <<"binary: "<<n<<" to "<<"binary: "<<ans << endl;
}
