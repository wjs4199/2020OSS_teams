##2020OSS_teams

Welcome, read me first:)
This is mini team project in OSS lecture.


1. mini project 주제

- 책 판매를 위한 프로그램을 구현
- CRUD함수와 여러 보조 함수들을 사용


2. mini project의 대략적인 기능 설명

[함수 종류]
1. selectMenu (메뉴판 보여주기)
2. createBook
3. readBook (한줄, 리스트)
4. updateBook
5. deleteBook
6. saveBook
7. loadBook
8. selectDataNo(원하는 번호입력)
9. searchFunction(검색함수)
10. 추가적인 검색기능.(이름검색, 가격검색, 별점 검색)

[함수정의]
- 구조체정의
 typedef struct{
    char name[30];
    int cost;
    int page;
    int star;
} Book;

1. int selectMenu();
2. int CreateBook(Book *b);
3. void readBook(Book b);
   void listBook(Book *b, int count);
4. int updateBook(Book *b);
5. int deleteBook(Book *b);
6. void saveData(Book* b, int count);
7. int loadData(Book* b);
8. int selectDataNo(Book* b, int count);
9. void searchFunction(Book* b, int count)
   void searchName(Book* b, int count);
   void searchPrice(Book* b, int count);
   void searchStar(Book* b, int count);

[메뉴 설명]
- 메뉴 구성
메뉴구성은 총 7가지로 책조회, 추가, 수정, 삭제, 파일저장, 추가검색, 종료로 이루어진다.
- 책 조회
책 조회를 하면 현제 책 목록에 어떤 책들이 있는지를 볼 수 있다.
또한 처음 시작할 때, 파일을 조회하여 파일로부터 로딩된 것이 있다면 그 파일의 내용과 더불어 사용자가 추가한 책들을 리스트로 보여준다.
- 책 추가, 수정, 삭제
CRUD함수에 기초한 책 추가, 수정, 삭제  메뉴를 선택함으로써 책을 추가하고, 원하는 책의 번호를 선택하여 수정 및 삭제할 수 있다.
- 파일 저장 
파일저장 메뉴를 실행할 시, 현재까지 저장한 데이터의 목록을 텍스트 파일에 저장한다.
- 검색
검색메뉴를 실행할 시, 추가 검색이 가능한 종류(책 제목, 가격, 별점검색)을 보여주고 원하는 메뉴를 선택하게 한다. 원하는 번호를 선택하면, 그에 맞는 검색기능을 실행한다.


3. 팀소개 및 팀원이 맡은 역할

[팀소개]
-팀원
: 21800647 전예은, 21900441 연예진
-팀특징
: 속전속결!! 호흡척척!!


[팀원이 맡은 역할]

- 전예은
1. manager.h, manager.c (save, load, search(3가지) 함수 정의 및 구현)
2. main.c 전반적인 뼈대 구현
3. main.c 맡은 함수부분 구현 (menu 1,5,6)

- 연예진
1. .gitignore Makefile 구현
2. book.h, book.c (CRUD 함수 정의 및 구현)
3. main.c 맡은 함수부분 구현 (menu 2,3,4)
