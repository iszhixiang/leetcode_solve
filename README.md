记录自己leetcode的刷题历程

------
#### 1,复习一下节点的构建
首先是结构体和结构体指针的区别
结构体就是普通的数据类型，
```
struct Node{
  int val;
}

//使用
struct Node node;
node.val = 1;
```

这就是一个普通的结构体，和结构体指针的区别如下
```
struct Node{
  int val;
}
struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	node->val =1;
```
相对来看这样会麻烦很多，结构体指针需要先分配内存，然后才能赋值，普通的结构体变量则不用。
当然也可以用  typedef  来简化书写
[C语言链接](https://github.com/iszhixiang/leetcode_solve/blob/main/%E8%8A%82%E7%82%B9%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E6%9E%84%E5%BB%BA.cpp)

--------------
#### 2,动态规划题目
这两天在学习动态规划的题目，之前也有学过之类的，但是那时候更多的是看别人的题解，然后自己抄一遍以为自己会了，其实不然，我没有理解透它的解题技巧。
目前看来解决动态规划题目的步骤
1，将数据域压缩，比如说题目给出三个数取出组合最大值等等条件，那就可以把数量约束一下，比如说在给出的是两个数的情况下会是什么情况，一个数又是如何等等
2，递推公式，这一点其实是最难的，递推公式不好推，但是慢慢找还是可以想出来的。

比较巧妙的一道题  [java链接](https://github.com/iszhixiang/leetcode_solve/blob/main/leetcode_3186%E6%96%BD%E5%92%92%E7%9A%84%E6%9C%80%E5%A4%A7%E6%80%BB%E4%BC%A4%E5%AE%B3.java)

----
#### 2874. 有序三元组中的最大值 II
[解题思路+代码](https://github.com/iszhixiang/leetcode_solve/blob/main/leetcode_2874%E6%9C%89%E5%BA%8F%E4%B8%89%E5%85%83%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9C%80%E5%A4%A7%E5%80%BC.java)
