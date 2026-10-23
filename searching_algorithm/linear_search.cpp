# include <iostream>
using namespace std;
int linear_search(int arr[],int key){
    int size = sizeof(arr)/sizeof(int);
    for (int i=0; i<size; i++){
        if (arr[i] == key){
            return i;
            }
    }
    return -1;
}
int main(){
    int a[] = {1,2,4,5,6,8,2,3,4,7,9,0};
    int key;
    cout << "enter key to search: ";
    cin >> key;
    int result = linear_search(a,key);
    if (result == -1){
         cout << key << " not found"<< endl;
         }
    else{
    cout << key << " found at index: " << result << endl;
    }

}
