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
		if (menu == 0) break;
			if(deleteok==1){
				count = count - deleteBook(&b[no-1]);
			}
		}
		else if(menu==5){
			if(count==0) printf("데이터가 없습니다!\n");
			else saveData(b,curcount);
		}
	}
	printf("종료됨!\n");
	return 0;
}
