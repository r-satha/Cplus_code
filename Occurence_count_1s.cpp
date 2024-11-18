class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int occur_count = 1;
        int prev_count = 1;
        int temp = 0;
        bool isavailable = false;
        if (nums.size() == 1)
        {
            if ((nums[0]==0))
              return 0;
            else
              return 1;
        }
        for (int i=0; i < (nums.size() - 1);i++)
        {
            temp=nums[i];
            if ((temp==1) && (temp == nums[i+1]))
            {
                isavailable = true; 
                occur_count++;
            }
            else
            {
                if (((nums[i]==1) || (nums[i+1] == 1)) && isavailable == false)
                {
                    isavailable = true;
                }
                    
                if (occur_count > 1)
                {
                    prev_count = max(occur_count, prev_count);
                }
                occur_count = 1;
            }
        }
        if (occur_count > 1 || prev_count > 1)   
        {
            if (prev_count > occur_count)
            {
                return prev_count;
            }
            else
            {
                return occur_count;
            }
        }
        else if (isavailable)
        {
            return occur_count;
        }
        else
        {
            return 0;
        }
}
};