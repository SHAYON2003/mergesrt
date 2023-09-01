#include <iostream>
using namespace std;



void merge(int *arr, int s, int e){
 
  int mid = (s+e)/2;
    
    int len1 = mid-s+1;
     int len2 = e-mid;
    // dynamic array banao
      int *left = new int[len1];
      int *right = new int[len2];

    // copy values
     int k = s;
     for(int i = 0;i<len1;i++){
        left[i] = arr[k];
         k++;
     }

  k = mid+1;
   for(int i = 0;i<len2;i++){
     right[i] = arr[k];
       k++;
   }
   

   //merge logic
   int leftIndex = 0;
   int RightIndex = 0;
   int mainarrindex = s;


   while(leftIndex<len1 && RightIndex<len2){
        if(left[leftIndex]<right[RightIndex]){
          arr[mainarrindex++]= left[leftIndex++];
        }
  else
   
      arr[mainarrindex++] = right[RightIndex++];  
   }
 
 //copy values if one of the arrays legnth completed
 //copy value for left array
   while(leftIndex<len1){
     arr[mainarrindex++] = left[leftIndex++];
   }
  

   //copy value for right array
    while(RightIndex<len2){
        arr[mainarrindex++] =  right[RightIndex++];
    }
 
  }



void mergesort(int*arr, int s, int e){
      //base case
      //s ==e single element
      //s>e  invalid array
    if(s>=e)
      return;
  
  // mid nikalo
    int mid = (s+e)/2;
 // left wala array sort kro recursion bhaiya
  mergesort(arr,s,mid);

  //right wala array sort krdo recursion bhaiya
    mergesort(arr,mid+1, e);
    
    //merge 2 sort arrays
    merge(arr,s,e);

}



int main(){
   int arr[]={4,5,13,2,12};
    int n = 5;
   int s = 0;
   int e = n-1;
   //calling merge sort function
   mergesort(arr,s,e);
    //printing the array
   for(int i = 0; i<n;i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
