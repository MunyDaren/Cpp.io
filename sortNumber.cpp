#include<iostream>
using namespace std;
// int main(){
//    int arr[]={1,3,24,5,45,6,756,5434,523};
// int a;

//   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//     for(int j = i; j<sizeof(arr)/sizeof(arr[0]);j++){
//         if(arr[j]<arr[i]){
//             a = arr[i];
//             arr[i]=arr[j];
//             arr[j]=a;
//         }
//     }
//     cout<<"index"<<i<< ":"<<arr[i]<<endl;
//   }

//     return 0;
// }

///////////////////////2\\\\\\\\\\\\\\\\\\\\\\\\\\\/
int main()
{
  int arr[] = {1, 12, 4, 13, 44, 21, 54, 55, 17, 45};
  for (int j = 0; j < 9; j++)
  {
    for (int i = 0; i < 9; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
      }
    }
  }
  for (int a = 0; a < 10; a++)
  {
    cout << arr[a] << " ";
  }
  return 0;
}
