class Solution {
public:
    int jump(vector<int>& nums) {
       int goal=nums.size()-1;
       int count=0;
       while(goal>0){
       for(int i=0;i<goal;i++){
        if(i+nums[i]>=goal){
            goal=i;
            count++;
            //break;
        }
       } 
       }
       return count;
    }
};
