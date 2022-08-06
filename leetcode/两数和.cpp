//暴力解（小白思路）
#include<iostream>
using namespace std;
int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j <10; j++)
		{
			if (a[i] + a[j] == 8)
			{
				cout << i << "" << j << "\t";
			}
		}
	}
	return 0;
}
/*#include<vector>
#include<iostream>
using namespace std;
int main() {
    Solution 对象名;
    int a[20] = {};
    对象名.twoSum(10);
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int i, j;
        for (i = 0; i < nums.size() - 1; i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return { i,j };
                }
            }
        }
        return { i,j };
    };
<<<<<<< HEAD
};*/



//尝试更新代码
