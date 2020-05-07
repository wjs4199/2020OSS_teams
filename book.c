#include "book.h"

int createBook(Book *b){
	getchar();
	printf("책제목은? ");
	scanf("%[^\n]s",b->name);
	printf("가격은? ");
	scanf("%d",&b->cost);
	printf("페이지수는? ");
	scanf("%d",&b->page);
	printf("별점은? ");
	scanf("%d", &b->star);
	return 1;
}

void readBook(Book b){
	char s[]="★ ";	
	//printf("%s  %5d원 p.%-3d %2d점 \n", b.name, b.cost, b.page, b.star);
	printf("%s\n", b.name);
	printf(" %d원 | p.%-3d | ",b.cost,b.page);
	for(int i=0;i<b.star;i++)
    		printf("%s",s);
	printf("\n\n");
}

void listBook(Book *b, int count){
	printf("*******************************\n");
	for(int i=0;i<count; i++){
		if(b[i].cost==-1) continue;
		printf("%2d ", i+1);
		readBook(b[i]);
	}
	printf("\n");
}

int updateBook(Book *b){
	getchar();
	printf("새 책제목은? ");
	scanf("%[^\n]s",b->name);
	printf("새 가격은? ");
	scanf("%d",&b->cost);
	printf("새 페이지수는? ");
	scanf("%d",&b->page);
	printf("새 별점은?");
	scanf("%d", &b->star);
	return 1;
}

int deleteBook(Book *b){
	b->cost=-1;
	printf("=> 삭제됨!\n");
	return 1;
}

int selectMenu(){
	int menu;
	printf("\n*** Book Store ***\n");
	printf("1. 책조회\n");
	printf("2. 책추가\n");
	printf("3. 책수정\n");
	printf("4. 책삭제\n");
	printf("5. 파일저장\n");
	//printf("6. 검색\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}
