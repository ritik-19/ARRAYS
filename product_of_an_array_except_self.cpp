Approach 1:
vector<int> productExceptSelf(vector<int> &nums){
for(int i=0;i<nums.size();i++){
int multiply=1;
for(int j=0;j<nums.size();j++){
if(i==j)continue;
multiply*=nums[j];
}
ans.push_back(multiply);
}
return ans;
}