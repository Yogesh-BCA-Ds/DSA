# include <iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int size1, int size2){
    for (int i=0; i<size1; i++){
        for (int j=0; j<size2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
            }
      }
   }
}
int main(){
int arr1[] = {4,5,9,6,0,0};
int arr2[] = {6,0,5};
intersection(arr1,arr2,6,3);
return 0;
}

