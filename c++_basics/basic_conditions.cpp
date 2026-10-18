# include <iostream>
using namespace std;
int main(){
cout << "checking odd even\n";
int n;
cout << "enter a number: ";
cin >> n;
if (n%2 == 0){
cout << "even\n";
}
else{
cout << "odd\n";
}

cout << "=================================================\n";
cout << "checking if character is lower or upper case\n";
char a;
cout << "enter a character:";
cin >> a;
if (a>='a' && a<='z'){
cout << "lowercase\n";
} else {
cout << "uppercase\n";
}

cout << "=================================================\n";
cout << "sum of odd numbers\n";
int n1;
cout << "enter number:";
cin >> n1;
int sum=0;
for (int i=1; i<=n1; i++){
if (i%2 != 0){
cout << i << endl;
sum+=i;
}
}
cout << "sum of odd:" << sum << endl;

cout << "=================================================\n";
cout << "sum of even numbers\n";
int n2;
cout << "enter number:";
cin >> n2;
int sum1=0;
for (int y=1; y<=n2; y++){
if (y%2 == 0){
cout << y << endl;
sum1+=y;
}
}
cout << "sum of even:" << sum1 << endl;

cout << "=================================================\n";
cout << "sum of numbers divisible by 3\n";
int n3;
cout << "enter number:" << endl;
cin >> n3;
int q=1;
int s=0;
while (q<=n3){
if (q%3 == 0){
   cout << q << endl;
   s+=q;}
   q++;
   }
cout << "sum of numbers divisible by 3: " << s << endl;
cout << "=================================================\n";
cout << "factorial of a number\n";
int n10;
cout << "enter a number:";
cin >> n10;
int fact=1;
for (int p=1; p<=n10; p++){
 fact*=p;
 }
cout <<"sum:"<<fact<<endl;
cout << "=================================================\n";
cout << "inner loops\n";
int z;
cout << "enter a number:";
cin >> z;
for (int d=1; d<=z; d++){
for (int d1=1; d1<=d; d1++){
cout << "*";}
cout << endl;
}
return 0;
}

