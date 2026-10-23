# include <iostream>
using namespace std;
int main(){
   int arr[] = {2,5,1,3,-1,4,55,1,2,0,99,2,33,0,1,44,5};
   int large = arr[0];
   int lar_idx = 0;
   int smal_idx= 0;
   int small = arr[0];
   for (int i=0; i<size(arr); i++){
       if (arr[i] > large){
            large = arr[i];
            lar_idx = i;
            }
       if (arr[i] < small){
           small = arr[i];
           smal_idx = i;
           }
      }
    cout << "largest number is: " << large << " stored at index: " << lar_idx << endl;
    cout << "small number is: " << small << " stored at index: " << smal_idx <<  endl;
   return 0;
}
