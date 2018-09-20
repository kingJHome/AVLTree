#include <stdio.h>
#include <string.h>
#include "AVLtree.h"

char *readTxt(char *filename);
void CreateAVL(BSTree *r,char *content);
void visitAVL(BSTree r);

int main(int argc,char *argv[]){
	BSTree root = NULL;
	char *content = readTxt("avltree.txt");
	
	if( content ){
		CreateAVL(&root,content);
		visitAVL(root);
		printf("\n");
	}

	return 0;
}

char* readTxt(char *filename){
	FILE *fp = fopen(filename, "r");

	if( fp ){
		char *content = NULL;
		size_t st = 0;

		getline(&content, &st, fp);
		return content;
	}

	return NULL;
}

void CreateAVL(BSTree *r,char *content){
	char delit[] = " ",
		 *sepstr = NULL;

	sepstr = strtok(content,delit);
	while(sepstr){
		int data = atoi(sepstr),
			taller = 0;

		InsertAVL(r,data,taller);
		sepstr = strtok(NULL,delit);
	}
}

void visitAVL(BSTree r){
	if( r ){
		printf("%-5d",r->data);
		visitAVL(r->lchild);
		visitAVL(r->rchild);
	}
}
