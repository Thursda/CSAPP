#include "stdafx.h"
#include "..\Utilities\BinaryTree.h"
#include <exception>

struct BinaryTreeNode {
	int m_nValue;
	BinaryTreeNode * m_pLeft;
	BinaryTreeNode * m_pRight;
	
};
typedef BinaryTreeNode BinaryTreeNode;

BinaryTreeNode *ConstructCore(int *startPreorder, int endPreorder int *startInorder, int *endInorder );

BinaryTreeNode *Construct(int *preorder, int *inOrder, int length){
	if(preorder == NULL || inOrder == NULL || length < 0) 
		return NULL;

	return ConstructCore(preorder, preorder + length -1, inOrder + length -1);
}

BinaryTreeNode *ConstructCore(int *startPreorder, int *endPreorder int *startInorder, int *endInorder ){
	int rootValue = *startPreorder;
	BinaryTreeNode *root = new BinaryTreeNode();
	root -> m_nValue = rootValue;
	root -> m_pLeft = root -> m_pRight = NULL;

	//前序遍历的第一个节点是根节点
	if(startPreorder == endPreorder){
		if (startInorder = endInorder && *startPreorder == *startInorder) {
			return root;
		}else{
			throw std:: exception("Invalid input");
		}
	}

	//中序遍历中找出根节点的值
	int * rootInorder = startPreorder;
	while(rootInorder < endInorder && * rootInorder != rootValue){
		++rootInorder;
	}

	if (rootInorder == endInorder && *rootInorder != rootValue) {
		throw std:: exception("Invalid input");
	}

	int leftLength = rootInorder - startInorder;

	int *leftPreoderEnd = startPreorder - leftLength;

	if (leftLength > 0) {
		root->m_pLeft = ConstructCore(startPreorder + 1, leftPreoderEnd,
			startInorder, rootInorder -1);
	}

	if (leftLength < endPreorder - startPreorder)
	{
		root->m_pRight = ConstructCore(leftPreoderEnd + 1, endPreorder,
			rootInorder + 1, endInorder);
	}
	return root;
}


