#include "book.h"
#include <stdlib.h>
#include <string.h>

//main 함수
int i, menu;

//saveData(Book* b, int count)
FILE *fp; 

//loadData(Book* b, int count)
int loadcount;

//selectDataNo(Book*b, int count)
int no;

//void searchFunction(Book* b,int count)
int searchnumber;

//void searchName(Product*p, int count)
int scount; //데이터의 존재유무 가리는 변수
char search[20]; //사용자가 검색할 제품명

//void searchPrice(Product*p,int count)
int search1, search2;//사용자가 원하는 최저가격대/ 원하는 최고가격대

//void searchStar(Product*p,int count)
int starnum;//사용자가 원하는ㄴ 평점

/*prototype*/
//파일데이터 저장하는 함수
void saveData(Book* b, int count);
//파일데이터 가져오는 함수
int loadData(Book* b);

//원하는 번호 선택하는 함수
int selectDataNo(Book* b, int count);

//검색기능을 하는 함수
void searchFunction(Book* b,int count);
//책 이름 검색 기능하는 함수
void searchName(Book* b, int count);
//원하는 가격대의 책을 찾아주는 함수
void searchPrice(Book* b,int count);
//원하는 평점 이상의 책을 찾아주는 함수
void searchStar(Book* b,int count);
