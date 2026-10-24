# include <iostream>
using namespace std;
int product(int arr[],int size){
    int p = 1;
    int i = 0;
    while (i<size){
        p = p*arr[i];
        i+=1;
        }

    return p;
    }
int main(){
int arr[] = {1,2,3,4};
cout << product(arr,4) << endl;

return 0;
}

