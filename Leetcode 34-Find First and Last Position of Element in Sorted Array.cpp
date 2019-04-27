class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first, last;
        first=find_first_pos(nums,target);
        last=find_last_pos(nums,target);
        if (first==last) return {-1,-1};
        else return {first, last-1};
    }
    int find_first_pos(vector<int>& nums, int target){
        int left,right,mid;
        left=0;
        right=nums.size();
        while (left<right) {
            mid=(left+right)/2;
            if (nums[mid]<target) left=mid+1;
            else if (nums[mid]>=target) right=mid;
        }
        return left;
    }
    int find_last_pos(vector<int>& nums, int target){
        int left,right,mid;
        left=0;
        right=nums.size();
        while (left<right) {
            mid=(left+right)/2;
            if (nums[mid]<=target) left=mid+1;
            else if (nums[mid]>target) right=mid;
        }
        return left;
    }
};