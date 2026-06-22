#include<iostream>
#include<climits>
#include<vector>
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

vector<int>create_array(){
int n;
cout<<"enter the size of array \n";
cin>>n;
vector<int>arr(n);
for(int i=0 ;i<n;i++){
    cin>>arr[i];
}
for(int i=0 ;i<n;i++){
cout<<arr[i]<<endl;
}
return arr;
}

 int main(){

    vector<int>ssst = create_array();
cout<<second_min(ssst);




  
  
