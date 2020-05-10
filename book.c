#include "book.h"

//book을 생성해주는 함수 구현
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

//book을 출력해주는 함수 구현
//별점수를 별모양 아이콘으로 구현
void readBook(Book b){
	char s[]="★ ";
	printf("%s\n", b.name);
	printf(" %d원 | p.%-3d | ",b.cost,b.page);
	for(int i=0;i<b.star;i++)
    		printf("%s",s);
	printf("\n\n");
}

//book의 목록 전체를 출력해주는 함수 구현
void listBook(Book *b, int count){
	printf("*******************************\n");
	for(int i=0;i<count; i++){
		if(b[i].cost==-1) continue;
		printf("%2d ", i+1);
		readBook(b[i]);
	}
	printf("\n");
}

//book을 수정할 수 있는 함수 구현
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

//book을 지우는 함수 구현
int deleteBook(Book *b){
	b->cost=-1;
	printf("=> 삭제됨!\n");
	return 1;
}

//각 함수의 기능을 심행하기 위한 메뉴를 제공하는 함수 구현
//1,2,3,4,5,6,0 번 메뉴 존재
int selectMenu(){
	int menu;
	printf("\n*** Book Store ***\n");
	printf("1. 책조회\n");
	printf("2. 책추가\n");
	printf("3. 책수정\n");
	printf("4. 책삭제\n");
	printf("5. 파일저장\n");
	printf("6. 검색\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}
