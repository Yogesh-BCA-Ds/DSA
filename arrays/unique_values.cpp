# include <iostream>
using namespace std;

void unique1(int arr[],int size){

    for (int i=0; i<size; i++){
        int val = arr[i];
        bool is_unique = true;
        for (int j=0; j<size; j++){
            if (i!=j && arr[i] == arr[j]){
                is_unique = false;
                }

               }
        if (is_unique){
        cout << arr[i] << endl;}
           }
       }


int main(){
int arr[] = {1,1,2,2,0,3,3,4};
unique1(arr,8
);
return 0;
}

