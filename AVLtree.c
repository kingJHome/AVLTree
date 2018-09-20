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

int InsertAVL(BSTree *t,BSTree parent,int e,int *taller){
	int tall = 0;

	if( !(*t) ){//空结点
		*t = (BSTree)malloc(sizeof(BSTNode));
		if( *t ){
			(*t)->data = e;
			(*t)->bf = EH;
			(*t)->lchild = (*t)->rchild = NULL;
			*taller = 1;
			return 1;
		}
	}else{
		if( EQ(e,(*t)->data) ){
			return 0;
		}else if( LT(e,(*t)->data) ){
			if( !InsertAVL(&((*t)->lchild),*t,e,&tall) ){//插入结点失败
				*taller = 0;
				return 0;
			}else{//插入结点成功
				if( tall ){//树增高

				}
			}
		}else{
			if( !InsertAVL(&((*t)->rchild),*t,e,*tall) ){
				*taller = 0;
				return 0;
			}else{
				if( tall ){

				}
			}
		}
	}
}
