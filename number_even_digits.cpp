class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp = 0, digit_count = 0;
        int num_event_count = 0;
        for (int i=0; i<nums.size();i++)
        {
            temp = nums[i];
            while(temp!=0)
            {
                digit_count++;
                temp=temp/10; 
            }
            if ((digit_count > 1) && (digit_count%2) == 0)
            {
                num_event_count++;
            }
            digit_count = 0;
        }
        return num_event_count;
    }
};
