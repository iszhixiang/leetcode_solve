/*
给你一个下标从 0 开始的整数数组 nums 。

请你从所有满足 i < j < k 的下标三元组 (i, j, k) 中，找出并返回下标三元组的最大值。如果所有满足条件的三元组的值都是负数，则返回 0 。

下标三元组 (i, j, k) 的值等于 (nums[i] - nums[j]) * nums[k] 。

 
*/

class Solution {
    public long maximumTripletValue(int[] nums) {
        //将三个变量的枚举减少到1个变量的枚举
        int len = nums.length;
        int []shuzu = new int[len+1];//记录后面元素的最大值

        for(int i=len-1;i>1;i--){
            shuzu[i] = Math.max(shuzu[i+1],nums[i]);
        }
        int tempmax =nums[0];
        long maxsum = 0;
        for(int i=1;i<len-1;i++){
            maxsum = Math.max(maxsum,(long)(tempmax-nums[i])*shuzu[i+1]);
            tempmax = Math.max(tempmax,nums[i]);
        }
        return maxsum;
    }
}
/*
 * 定义数组倒序遍历，shuzu[i] 表示从这个数开始，一直到数组中最后一个数 出现的最大的一个数
 * shuzu 表示选为 k 的数，k选中你的数要最大，得到的结果才会最大
 * 第一个数也是最大的，可以用一个变量，不断的更新最大值，
 * 中间值j 就循环遍历中间的值，选中最小的更新即可。
 * 
 * 
 */
