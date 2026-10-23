# include <iostream>
using namespace std;
int main(){
int n;
cout << "enter a number: ";
cin >> n;
int ans=0;
while (n>0){
    int l = n%10;
    ans = ans*10+l;
    n/=10;
}
cout << "reversed number: " << ans << endl;
}
