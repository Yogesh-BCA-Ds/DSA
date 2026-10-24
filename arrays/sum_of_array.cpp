# include <iostream>
using namespace std;
int sum_of_array(int arr[],int size){
    int sum = 0;
    int i = 0;
    while (i<size){
        sum = sum+arr[i];
        i+=1;
        }

    return sum;
    }
int main(){
int arr[] = {1,2,3,4,5};
cout << sum_of_array(arr,5) << endl;

return 0;
}

