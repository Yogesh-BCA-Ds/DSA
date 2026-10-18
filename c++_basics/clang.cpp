# include <iostream>
using namespace std;


int example(){
int a = 10;
int b = 10;
cout << a+b << endl;
char grade = 'a';
int val = grade;
cout << val << endl;
double price = 100.021;
cout << "size of price" << sizeof(price) << endl;
int x = (int)price;
cout << "size of price" << sizeof(x) << endl;

int age;
cout << "enter the age:";
cin >> age;
cout << "enetered age:" << age << endl;

int a1;
cout << "enter 1st number: ";
cin >> a1;
int a2;
cout << "enter 2nd number: ";
cin >> a2;
cout << "sum of " <<a1 <<" and " <<a2 <<" is: ";
cout << a1+a2 << endl;
cout << (3 == '3') << endl;
return 0;
}

int main(){
cout << "hello wanocoder" << endl;
example();
return 0;
}
