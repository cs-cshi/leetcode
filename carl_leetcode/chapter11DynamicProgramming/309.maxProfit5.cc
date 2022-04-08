/**
 * 309. 最佳买卖股票时机含冷冻期
 * 给定一个整数数组prices，其中第  prices[i] 表示第 i 天的股票价格 。​
 * 设计一个算法计算出最大利润。在满足以下约束条件下，你可以尽可能地完成更多的交易（多次买卖一支股票）:
 *     卖出股票后，你无法在第二天买入股票 (即冷冻期为 1 天)。
 * 注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。
 * 链接：https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-with-cooldown
 */

#include <vector>

using std::vector;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        /**
         * 1. dp[i][j]，第 i 天状态为j，所剩最多现金为 dp[i][j]
         *      j=0,买入
         *      j=1，两天前卖出,可以操作
         *      j=2，卖出，冷冻期
         *      j=3，冷冻期
         * 2. 递推公式：
         *      // 今天买入的状态，1.今天不买入，维持昨天买入状态 or 昨天是冷冻期/卖出可操作，今天买入
         *      dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][3])-prices[i])
         *      // 卖出，非冷冻期：1.维持昨天卖出可操作状态，2. 昨天是冷冻期
         *      dp[i][1] = max(dp[i-1][1],dp[i-1][3])
         *      // 卖出，进入冷冻期。1. 昨天的买入状态
         *    dp[i][2] = dp[i-1][0] + prices[i]
         *      // 冷冻期，昨天的卖出进入冷冻期状态
         *    dp[i][3] = dp[i-1][2]
        */
    }
};