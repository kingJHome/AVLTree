#define EQ(a,b) ((a) == (b))
#define LT(a,b) ((a) < (b))
#define GT(a,b) ((a) > (b))
#define LH 1		//左子树高
#define EH 0		//左右子树等高
#define RH -1  		//右子树高

typedef struct BSTNode{
	int data;
	int bf;							//平衡因子
	struct BSTNode *lchild,*rchild;
}BSTNode, *BSTree;

//二叉排序树右旋
void R_Rotate(BSTree *p);

//二叉排序树左旋
void L_Rotate(BSTree *p);

//左子树平衡
void LeftBalance(BSTree *p);

//右子树平衡
void RightBalance(BSTree *p);

//向平衡树插入结点
int InsertAVL(BSTree *t,BSTree parent,int e,int *taller);
