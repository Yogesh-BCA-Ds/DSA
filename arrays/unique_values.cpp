# include <iostream>
using namespace std;

void unique(int arr[],int size){
    for (int i=0; i<size; i++){
        int u = arr[i];
        int c = 0;
        for (int j=0; j<size; j++){
            if (u == arr[j]){
                c = c+1;
                }
            if (c>=1){
               arr[i] = 0;
               arr[j] = 0;
               break;
               }
           }
       }
}

int main(){
int arr[] = {1,1,2,3,4};
cout << unique(arr,4) << endl;
return 0;
}

