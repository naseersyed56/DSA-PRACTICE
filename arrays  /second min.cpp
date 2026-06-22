#include<iostream>
#include<climits>
uisng namespace std;
//finding seccond min element using function
int second_min(vector<int>&arr){
   int k = arr.size() , mini = INT_MAX ,s_mini = INT_MAX ;
  
for(int i=0 ;i<k;i++){
   if(mini>arr[i]){
     s_mini =mini;
     mini =arr[i];
   }else if(s_mini>arr[i] &&mini !=arr[i]){
     s_mini  =arr[i];
   }
}
return s_mini;
};

     



  
  
