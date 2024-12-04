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
