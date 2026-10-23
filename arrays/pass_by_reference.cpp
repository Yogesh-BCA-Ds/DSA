# include <iostream>
using namespace std;
int update_array(int arr[],int size){
    for (int i=0; i<size; i++){
        arr[i] = 2*arr[i];
        }
   return 0;
   }

int main(){
    int arr[] = {1,2,3};
    update_array(arr,3);
    for (int i=0; i<3; i++){
        cout << arr[i] << endl;
        }
return 0;
}
