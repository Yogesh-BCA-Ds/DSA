# include <iostream>
using namespace std;

int calculator(){
float a = 0;
float b = 0;
char u;
cout << "enter 1st number: ";
cin >> a;
cout << "enter 2nd number: ";
cin >> b;
cout << "enter m for *, d for /, a for +, s for - : ";
cin >> u;
if (u == 'a'){
cout << a << " + " << b << " = " << a+b << endl;
}
else if (u == 'm'){
cout << a << " * " << b << " = " << a*b << endl;
}
else if (u == 'd'){
cout << a << " / " << b << " = " << a/b << endl;
}
else if (u == 's'){
cout << a << " - " << b << " = " << a-b << endl;
}
else{
cout << "follow the instructions correctly" << endl;
}
return 0;
}

int main(){
calculator();
return 0;
}
