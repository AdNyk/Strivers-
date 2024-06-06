class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
    
     vector<int> result={-1,-1};
     int first= binarySearch(nums,target,true);
     int last= binarySearch(nums,target,false);
     result[0]=first;
     result[1]=last;
     return result;
    }
int binarySearch(vector<int>& nums,int target,bool leftSearch){
    int ind=-1;
    int left=0;
    int right=nums.size()-1;

while(left<=right){  
     int mid = left + (right - left) / 2;  
    if(target>nums[mid])left=mid+1;
else if(target<nums[mid])right=mid-1;
else{
    ind=mid;
    if(leftSearch)right=mid-1;
    else left=mid+1;
    
}

 
}return ind;
}
};