/*题目
 * 一个魔法师有许多不同的咒语。

给你一个数组 power ，其中每个元素表示一个咒语的伤害值，可能会有多个咒语有相同的伤害值。

已知魔法师使用伤害值为 power[i] 的咒语时，他们就 不能 使用伤害为 power[i] - 2 ，power[i] - 1 ，power[i] + 1 或者 power[i] + 2 的咒语。

每个咒语最多只能被使用 一次 。

请你返回这个魔法师可以达到的伤害值之和的 最大值 。
 */


class Solution {
    public long maximumTotalDamage(int[] power) {
        //首先获取每个数字出现的次数
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int num:power){
            map.put(num,map.getOrDefault(num,0)+1);//更新每个数出现的次数
        }

        List<Integer> list = new ArrayList<Integer>(map.keySet());//获取所有的 key 放在list 中
        Collections.sort(list);//排序列表
        int len = list.size();//获取列表长度
        long[]dp = new long[len+1];

        for(int i=1,j=0;i<=len;i++){
            int currPower = list.get(i-1);
            while(list.get(j)<currPower-2){//找到可以选且比 i 更近的一个数
                j++;
            }
        dp[i] = Math.max(dp[i-1],dp[j]+(long)currPower*map.get(currPower));
            
        }
    return dp[len];

    }
}
/*
 * 1，首先，一个数字可能会出现很多次，可以计算起来会很麻烦，题目对数据的选择并没有顺序要求，所有先把重复的数字记录下来
 * 用HashMap 将一个数出现的次数记录下来
 * 
 * 2，将出现的数记录到一个List 中，再排序List
 * 
 * 3，接着就是递推公式，先压缩数据域，对于 1 个数，2 个数....的情况下手
 * 对于一个数，可以有 选 或者 不选的情况
 * 分情况讨论
 * 1，选，选中一个数，也就是选择前面满足差值不为2且在递推数组 dp 中找到与其最接近能一起选的数，比方说要选择第三个数，那就得看前面 0~2 中的数可以选且最接近第三个数的值，因为dp 数组存储的是 n 个数的最大值
 * 最接近 第三个数能选的就是最大的，注意还要 * 当前选中数的数量。
 * 
 * 2，不选择某个数，如果不选择某个数，那也就是说长度到当前不选择的数的时候，能获取的最大值就是 dp 数组中当前数前面的那个数，比方数 不选择 下标为 i 这个数，那dp[i] 的值就是 dp[i-1];
 * 如此递推就能获得最大值
 * 
 */