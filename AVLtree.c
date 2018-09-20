#include <stdlib.h>
#include "AVLtree.h"

void R_Rotate(BSTree *p){
	BSTree lc = (*p)->lchild;
	(*p)->lchild = lc->rchild;
	lc->rchild = *p;
	*p = lc;
}

void L_Rotate(BSTree *p){
	BSTree rc = (*p)->rchild;
	(*p)->rchild = rc->lchild;
	rc->lchild = *p;
	*p = rc;
}

void LeftBalance(BSTree *p){
}

void RightBalance(BSTree *p){
}

int InsertAVL(BSTree *t,int e,int *taller){
}
