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
			updateBook(&b[no-1]);
		}
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
		else if(menu==5){
			if(count==0) printf("데이터가 없습니다!\n");
			else saveData(b,curcount);
		}
	}
	printf("종료됨!\n");
	return 0;
}
