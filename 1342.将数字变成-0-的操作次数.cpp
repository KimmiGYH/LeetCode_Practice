/*
 * @lc app=leetcode.cn id=1342 lang=cpp
 *
 * [1342] 将数字变成 0 的操作次数
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps (int num) {
        int steps = 0;
        while (num > 0) {
            steps += 1;
            if (num % 2 == 0)
                num /= 2;
            else num -= 1;
        }
        return steps;
    }
};
// @lc code=end

