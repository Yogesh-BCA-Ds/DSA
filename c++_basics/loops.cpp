# include <iostream>
using namespace std;

int using_other_methods(){
int n;
cout <<"enter a number to check prime: ";
cin >> n;
for (int k=2; k<n; k++){
if (n%k==0){
 cout << "it is not prime" << endl;
 break;
 }else{cout << "its prime" << endl;}
}
return 0;
}
int main(){
using_other_methods();
int a;
cout <<"enter starting point: ";
cin >> a;
int b;
cout <<"enter ending point: ";
cin >> b;
for (int i=a; i<=b; i++){
 bool is_prime=true;
 for (int j=2; j<i; j++){
   if (i%j == 0){
    is_prime=false;
    break;}
    }
    if(is_prime){
     cout << i << endl;}
    }
 return 0;
}
