//����һ���ڵ㣬�������е�Ԫ�ذ���δ洢
#include<stdio.h>
#include<stdlib.h>

//����ṹ��
typedef struct TreeNode{
	int val;//������
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode; 



//�����½ڵ㣬�������ݲ�����
TreeNode* createNode(int val){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));//Ϊ�½ڵ㿪�ٿռ�
	newNode->val = val;//Ϊ�½ڵ㸳ֵ
	newNode->left = NULL;
	newNode->right = NULL;//���ҽڵ�Ϊ��
	return newNode;//���ع���õĽڵ� 
} 

//���������
TreeNode*  build(){
	int index =1;
	TreeNode* start = createNode(index++);
	start->left = createNode(index++);
	start->right = createNode(index++);
	
	start->left->left = createNode(index++);
	start->left->right = createNode(index++);
	start->right->left = createNode(index++);
	start->right->right = createNode(index++);
	return start;//����ͷ�ڵ� 
	
} 

void toprintf(TreeNode* node){//ǰ����� 
	if(node==NULL)return;
	printf("%d  ",node->val);//���ʸ��ڵ�
	toprintf(node->left);
	toprintf(node->right);
	
}

int main(){
	TreeNode* start = build();
	toprintf(start);
} 
