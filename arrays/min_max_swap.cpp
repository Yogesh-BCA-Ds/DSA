# include <iostream>
using namespace std;
void swap_MinMax(int arr[], int size){
    int min = arr[0];
    int max = arr[0];
    int max_i = 0;
    int min_i = 0;
    int i = 0;
    while (i<size){
        if (arr[i] < min){
            min = arr[i];
            min_i = i;
            }
        if (arr[i] > max){
            max = arr[i];
            max_i = i;
            }
        i+=1;
        }
   int temp = arr[max_i];
   arr[max_i] = arr[min_i];
   arr[min_i] = temp;
}

int main(){
    int arr[] = {1,2,3,4,0,6};
    for(int i=0; i<6; i++){
    cout << arr[i] << endl;
    }
    swap_MinMax(arr,6);
    cout << "=======after min and max swap============" << endl;
    for(int i=0; i<6; i++){
    cout << arr[i] << endl;
    }
    return 0;
}
