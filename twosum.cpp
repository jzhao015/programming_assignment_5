class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create a map to store the number
        map<int, int> m_num; 
        vector<int> v; // store the answer
        //loop through the vector
        for(int i =0; i< nums.size(); i++)
        {
            int diff = target - nums[i];
            //if find it
            if(m_num.find(diff) != m_num.end())
            {
                auto p = m_num.find(diff);
                //push the answer into the vector 
                v.push_back(p->second);
                v.push_back(i);       
            }
            //if not find, store the int at ith into the map
            m_num.insert(make_pair(nums[i], i));
        }
        return v;// return the answer
    }
};
