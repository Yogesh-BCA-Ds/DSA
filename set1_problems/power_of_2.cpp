# include <iostream>
using namespace std;
int main(){
int n;
cout << "enter a number: ";
cin >> n;
int pov=1;
while (pov<n){
    pov = pov*2;
    }
    if (pov == n && n>0){
         cout << n << " is power of 2" << endl;
         }
    else{
    cout << n << " is not power of 2" << endl;
    }
cout << "====================================================\n";

cout << "using bitwise left shift" << endl;
int p=1;
while (p<n){
    p=p<<1;}
if (p == n && n>0){
    cout << n << " is power of 2" << endl;
         }
else{
    cout << n << " is not power of 2" << endl;
    }

    return 0;
}
