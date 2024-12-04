//构造一个节点，将数组中的元素按层次存储
#include<stdio.h>
#include<stdlib.h>

//构造结构体
typedef struct TreeNode{
	int val;//数据域
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode; 



//创建新节点，定义数据并返回
TreeNode* createNode(int val){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));//为新节点开辟空间
	newNode->val = val;//为新节点赋值
	newNode->left = NULL;
	newNode->right = NULL;//左右节点为空
	return newNode;//返回构造好的节点 
} 

//构造二叉树
TreeNode*  build(){
	int index =1;
	TreeNode* start = createNode(index++);
	start->left = createNode(index++);
	start->right = createNode(index++);
	
	start->left->left = createNode(index++);
	start->left->right = createNode(index++);
	start->right->left = createNode(index++);
	start->right->right = createNode(index++);
	return start;//返回头节点 
	
} 

void toprintf(TreeNode* node){//前序遍历 
	if(node==NULL)return;
	printf("%d  ",node->val);//访问根节点
	toprintf(node->left);
	toprintf(node->right);
	
}

int main(){
	TreeNode* start = build();
	toprintf(start);
} 
