##2020OSS_teams
1. mini project 주제

- 책 판매를 위한 CRUD구현

2. mini project의 대략적인 기능 설명

[함수 종류]
1. selectMenu (메뉴판 보여주기)
2. create
3. read (한줄, 리스트)
4. update
5. delete
6. save
7. load
8. selectDataNo(원하는 번호입력)
9. searchFunction(검색함수)
10. 추가적인 검색기능.(이름검색, 가격검색, 별점 검색)

[함수정의]
-구조체정의
typedef struct{
    char name[30];
    int cost;
    int page;
    int star;
} Book;

- int CreateBook(Book *b);
- void readBook(Book b);
- void listBook(Book *b, int count);
- int updateBook(Book *b);
- int deleteBook(Book *b);
- int selectMenu();
- void saveData(Book* b, int count);
- int loadData(Book* b);
- int selectDataNo(Book* b, int count);
- void searchFunction(Book* b, int count)
- void searchName(Book* b, int count);
- void searchPrice(Book* b, int count);
- void searchStar(Book* b, int count);

- 메뉴 구성은 총 7가지로 제품조회, 추가, 수정, 삭제, 파일저장, 추가검색, 종료로 이루어진다. 
- 파일 조회시 파일로부터 로딩된 것이 있다면 그 파일의 내용과 더불어 사용자가 추가한 제품들을 리스트로 보여준다.
- 제품 추가, 수정, 삭제 메뉴를 선택함으로써 제품을 추가하고, 원하는 제품의 번호를 선택하여 수정 및 삭제할 수 있다.
- 파일저장 메뉴를 실행할 시, 현재까지 저장한 데이터의 목록을 텍스트 파일에 저장한다. 
- 검색메뉴를 실행할 시, 추가 검색이 가능한 종류(제품 이름, 가격, 별점검색)을 보여주고 원하는 메뉴를 선택하게 한다. 원하는 번호를 선택하면, 그에 맞는 검색기능을 실행한다.

3. 팀소개 및 팀원이 맡은 역할

[팀소개]
-팀원: 21800647 전예은 21900441연예진
-팀특징: 속전속결!! 호흡척척!!

[팀원이 맡은 역할]
- 연예진: 구조체와 CRUD함수 정의
- 전예은: save, load, search함수 정의
