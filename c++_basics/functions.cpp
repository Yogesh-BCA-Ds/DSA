# include <iostream>
using namespace std;

int digit_sum(int n){
    int sum=0;
    while (n>0){
        int l=n%10;
        n=n/10;
        sum+=l;
    }
    return sum;
    }

int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
          fact*=i;}
   return fact;
}

int nCr(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
    }

void fibonacci(int n){
int a=0;
int b=1;
int c;
int arr[] = {0,1};
for (int i=2; i<=n; i++){
    if (n==0){
    cout << "fibonacci of 1st term is: " << a << endl;
    }
    if (n==1){
    cout << "fibonacci of 2nd term is: " << b << endl;
    }
    c=a+b;
    a=b;
    b=c;
    arr[i] = c;}
    if (n){
    cout << "fibonacci of " << n << "is: " << arr[n];
    cout << endl;
    }
    for(int i=0; i<=size(arr); i++){
     cout << arr[i] << endl;}

}
int main(){
cout << digit_sum(25) << endl;
cout << nCr(8,2) << endl;
int n;
cout << "enter a number to find the nth fibonacci:";
cin >> n;
fibonacci(n);
return 0;
}


