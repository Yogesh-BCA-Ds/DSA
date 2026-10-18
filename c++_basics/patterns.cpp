# include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter a number:";
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
             cout << j+1;
             }
             cout << endl;
     }

 cout << "==============================================\n";
     int n1;
    cout <<"enter a number:";
    cin >> n1;
    for (int i=0; i<n1; i++){
        char a='a';
        for (int j=0; j<n1; j++){
             cout << a;
             a+=1;
             }
             cout << endl;
     }
cout << "==================================================\n" << endl;
     int n3;
    cout <<"enter a number:";
    cin >> n3;
    int num = 1;
    for (int i=0; i<n3; i++){
        for (int j=0; j<n3; j++){
             cout << num;
             num+=1;
             }
             cout << endl;
     }
cout << "======================================================\n" << endl;
    int n4;
    cout <<"enter a number:";
    cin >> n4;
    char c = 'a';
    for (int i=0; i<n4; i++){
        for (int j=0; j<n4; j++){
             cout << c;
             c+=1;
             }
             cout << endl;
     }
cout << "======================================================\n" << endl;
    int n5;
    cout <<"enter a number:";
    cin >> n5;
    for (int i=0; i<n5; i++){
        for (int j=0; j<=i; j++){
             cout << "*";
             }
             cout << endl;
     }
cout << "======================================================\n" << endl;
    int n6;
    cout <<"enter a number:";
    cin >> n6;
    for (int i=0; i<n6; i++){
        for (int j=0; j<=i; j++){
             cout << i+1;
             }
             cout << endl;
     }
cout << "=====================================================\n" << endl;
    int n7;
    cout <<"enter a number:";
    cin >> n7;
    char l='a';
    for (int i=0; i<n7; i++){
        for (int j=0; j<i+1; j++){
             cout << l;
             }
             l+=1;
             cout << endl;
     }
cout << "========================================================\n" << endl;
    int n8;
    cout <<"enter a number:";
    cin >> n8;
    for (int i=0; i<n8; i++){
        for (int j=0; j<i+1; j++){
             cout << j+1;
             }
             l+=1;
             cout << endl;}
cout << "=========================================================\n" << endl;
    int n9;
    cout <<"enter a number:";
    cin >> n9;
    int x = 1;
    for (int i=0; i<n9; i++){
        for (int j=0; j<i+1; j++){
             cout << x;
             x+=1;
             }
             cout << endl;}
cout << "============================================================\n" << endl;
    int n10;
    cout <<"enter a number:";
    cin >> n10;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
             cout << i-(j-1);
             }
             cout << endl;}
cout << "=========================================================\n" << endl;
    int n11;
    cout <<"enter a number:";
    cin >> n11;
    char m='A';
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
             cout << m;
             m+=1;
             }
             cout << endl;}
cout << "========================================================\n" << endl;
    int n12;
    cout <<"enter a number:";
    cin >> n12;
    for (int i=0; i<n12; i++){
        char z = 'a';
        for (int j=i+1; j>0; j--){
             char x = z+j-1;
             cout << x;
             }
            cout << endl;}
cout << "==========================================================\n" << endl;
    int n13;
    cout <<"enter a number:";
    cin >> n13;
    for (int i=0; i<n13; i++){
        for (int j=0; j<i; j++){
             cout <<" ";}
        for (int k=0; k<(n13-i); k++){
             cout << i+1;
             }
             cout << endl;}

cout << "===========================================================\n" << endl;
    int n14;
    cout <<"enter a number:";
    cin >> n14;
    for (int i=0; i<n14; i++){
        for (int j=0; j<(n14-i); j++){
             cout <<" ";}
        for (int k=0; k<i+1; k++){
             cout << " " << i;
             }
             cout << endl;}
cout << "=================================================================\n" << endl;
int n15;
    cout <<"enter a number:";
    cin >> n15;
    char v = 'a';
    for (int i=0; i<n15; i++){
        for (int j=0; j<i; j++){
             cout <<" ";}
        for (int k=0; k<(n15-i); k++){
             cout << v;
             }
             v+=1;
             cout << endl;}

cout << "========================================================\n" << endl;
int n16;
    cout <<"enter a number:";
    cin >> n16;
    for (int i=0; i<n16; i++){
        for (int j=0; j<n16-i; j++){
             cout <<" ";}
        for (int k=0; k<i+1; k++){
             cout << k+1;
             }
        for (int l=0; l<i; l++){
            cout << i-((l-1))-1;}
             cout << endl;}
cout << "=============================================================\n" << endl;
int n17;
    cout <<"enter a number:";
    cin >> n17;
    for (int i=0; i<n17; i++){
        for (int j=n17-i+1; j>0; j--){
             cout << " ";}
        cout << "*";
        for (int k=0; k<i*2; k++){
             cout << "*";}
        if (i!=0){
        cout << "*";}
        cout << endl;}
        for(int l=0; l<n17-1; l++){
            for(int m=0; m<(l-2+1)+4; m++){
             cout << " ";}
             cout << "*";
             for (int n = 0; n<((n17-l*2)-1)+3
             ; n++){
             cout << "*";}
             if (((n17-l*2)-1)+1 == 0){
             cout << "*";}
             cout << "*";
             cout << endl;}
cout << "===============================================================\n" << endl;
int p;
cout << "enter a number:";
cin >> p;
for (int i=0; i<p; i++){
for (int j=0; j<i+1; j++){
cout << "*";
}
for (int k=0; k<(p-(i+1))*2; k++){
cout << " ";
}
for (int l=0; l<i+1; l++){
cout << "*";
}
cout << endl;
}
for (int b=0; b<p; b++){
for (int a=p-b; a>0; a--){
cout << "*";
}
for (int c=0; c<b*2; c++){
cout << " ";
}
for (int d=p-b; d>0; d--){
cout << "*";
}
cout << endl;
}

return 0;}

