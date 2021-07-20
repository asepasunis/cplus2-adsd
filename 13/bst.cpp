#include <stdio.h>
#include <stdlib.h>

//inisialisasi struct
struct data{
	int number;
	//pointer untuk menampung percabangan kiri dan kanan
	data *left, *right;
}*root;

//fungsi untuk menambah data
void InsertBST(data **current, int number){
	//jika pointer current kosong maka akan membuat blok data baru
	if((*current)==NULL){
		(*current) = (struct data *)malloc(sizeof(data));
		//mengisi data
		(*current)->number=number;
		(*current)->left = (*current)->right = NULL;
	/*
    jika tidak kosong, maka akan dibandingkan apakah angka yang 
	ingin dimasukkan lebih kecil dari pada root
	kalau iya, maka belok ke kiri dan lakukan rekursif 
	terus menerus hingga kosong
    */
	}else if(number < (*current)->number){
		InsertBST(&(*current)->left, number);
	//jika lebih besar, belok ke kanan
	}else if(number >= (*current)->number){
		InsertBST(&(*current)->right, number);
	}
}

//InOrder : Telusur ke kiri, print data, telusur ke kanan
void inOrder(data **current){
	if((*current)!=NULL){
		inOrder(&(*current)->left);
		printf("%d -> ", (*current)->number);
		inOrder(&(*current)->right);
	}
}
//PreOrder : Print data, telusur ke kiri, telusur ke kanan
void preOrder(data **current){
	if((*current)!=NULL){
		printf("%d -> ", (*current)->number);
		preOrder(&(*current)->left);
		preOrder(&(*current)->right);
	}
}
//Post Order : Telusur ke kiri, telusur ke kanan, print data
void postOrder(data **current){
	if((*current)!=NULL){
		postOrder(&(*current)->left);
		postOrder(&(*current)->right);
		printf("%d -> ", (*current)->number);
	}
}

//pencarian data
void search(data **current, int number){
	//jika pointer current memiliki data
	if((*current)!=NULL){
		//cek, apakah datanya lebih kecil. Jika iya, belok ke kiri
		if(number<(*current)->number){
			search(&(*current)->left,number);
		//jika lebih besar, maka belok ke kanan
		}else if(number>(*current)->number){
			search(&(*current)->right,number);
		//jika sama dengan, maka angka ketemu
		}else{
			printf("Ditemukan : %d", (*current)->number);
		}
	//jika tidak ada data lagi (not found)
	}else{
		printf("Tidak Ditemukan.");
	}
}

int main(){
    //5, 3, 7, 1, 4, 6, 8, 9
	InsertBST(&root, 5);
	InsertBST(&root, 3);
	InsertBST(&root, 7);
	InsertBST(&root, 1);
	InsertBST(&root, 4);
    InsertBST(&root, 6);
    InsertBST(&root, 8);
    InsertBST(&root, 9);

	inOrder(&root);
	printf("\n");

	preOrder(&root);
	printf("\n");

    postOrder(&root);
	printf("\n");

    search(&root,91);
    printf("\n");

    search(&root,8);
	getchar();
}