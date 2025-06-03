#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int nums[]={20,30,40,50,60,70};
    int n = sizeof(nums) / sizeof(int);
    
    
    int small=INT_MAX;
    int large=INT_MIN;
  
  int sIndex=0;
  int lIndex=0;
  
  for(int i=0;i<n;i++){
    if(nums[i] < small){
      small = nums[i];
      sIndex=i;
    }
  }
  
  for(int i=0;i<n;i++){
    if(nums[i] > large){
      large = nums[i];
      lIndex=i;
    }
  }
  
  cout << "Smallet value= " << small << endl;
  cout << "Smallest index= " << sIndex << endl;
  
  cout << "Largest value= " << large << endl;
  cout << "Largest index= " << lIndex << endl;
    return 0;
}
