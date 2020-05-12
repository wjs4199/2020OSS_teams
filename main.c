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

		//3번메뉴: updateBook을 사용하여 book수정
		else if (menu == 3){
			int no=selectDataNo(b,curcount);
			if(no==0){
				printf("취소됨!\n");
				continue;
			}
			updateBook(&b[no-1]);
		}
		
		//4번메뉴 : deleteBook을 사용하여 book삭제
		else if (menu == 4){
			int no= selectDataNo(b,curcount);
			int deleteok;// 삭제실행 여부
			if(no==0){
				printf("=> 취소됨!\n");
				continue;
			}
			printf("정말로 삭제하시겠습니까 (삭제 :1)? ");
			scanf("%d",&deleteok);
			if(deleteok==1){
				count = count - deleteBook(&b[no-1]);
			}
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
