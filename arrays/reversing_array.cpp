# include <iostream>
using namespace std;
int reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        }
    return 0;
    }
int main(){
int arr[] = {1,2,3,4,5};
reverse(arr,5);
for(int i=0; i<5; i++){
cout << arr[i] << endl;
}
return 0;
}

