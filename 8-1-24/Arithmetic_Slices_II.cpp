// https://leetcode.com/problems/arithmetic-slices-ii-subsequence/submissions/?envType=daily-question&envId=2024-01-07
int numberOfArithmeticSlices(vector<int>& nums) {
    vector<map<long long,long long>> v(nums.size());
    long long c=0;
    for(int i=1;i<nums.size();i++){
        for(int j=0;j<i;j++){
            long long a=(long long)nums[i]-nums[j];
                v[i][a]=v[i][a]+v[j][a]+1;
                c+=v[j][a];
        }
    }
    return c;
}