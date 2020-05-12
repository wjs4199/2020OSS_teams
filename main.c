#include "book.h"
#include "manager.h"

//메인함수
int main(void){
	Book b[100];// 데이터를 저장하는 구조체변수배열
	int count=0, curcount=0;
	count=loadData(b);
	curcount=count;

	while (1){
		menu = selectMenu();
		//0번메뉴 : 프로그램 종료
		if (menu == 0) break;

		//1번메뉴 : listBook을 사용하여 book읽기
		if (menu == 1){
			if(count>0) listBook(b, curcount);
			else printf("데이터가 없습니다.\n");
		}
		
		//2번메뉴 : createBook을사용하여 book생성 
		else if (menu == 2){
			count+=createBook(&b[curcount++]);
		}

		//5번메뉴 : saveData를 사용하여 파일저장
		else if(menu==5){
			if(count==0) printf("데이터가 없습니다!\n");
			else saveData(b,curcount);
		}

		//6번메뉴 : serchFunction을 사용하여 book검색
		else if(menu==6){
			searchFunction(b, curcount);
		}
	}
	printf("종료됨!\n");
	return 0;
}
