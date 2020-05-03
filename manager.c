#include "manager.h"

void saveData(Book* b, int count){
  fp= fopen("Book.txt","wt");
  for(int i=0;i<count;i++){
    if(b[i].cost !=-1)
      fprintf(fp,"%s %d %d %d\n",b[i].name, b[i].cost,b[i].page,b[i].star);
  }
  fclose(fp);
  printf("저장됨!");
}
