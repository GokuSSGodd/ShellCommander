//Yash Desai & Murtaza Amjad
//Program 1 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage();

int main(int argc, char* argv[]){
  FILE* file = fopen("P1_Yash.txt","a");
  if(file == NULL){
    printf("File not opened/ invalid file. Exiting");
    return 1;
  }
  fprintf(file,"\n--------------------------------------------------");
  printf("\n--------------------------------------------------");
  fprintf(file,"\n command\t %s",argv[0]);
  printf("\n command\t %s",argv[0]);
  for(int j=1;j<argc;j++){
    if(argv[j][0] == '-'){
      fprintf(file,"\n switch\t");
      printf("\n switch\t");
      for(int k=1;k<strlen(argv[j]);k++){
        if(argv[j][k]=='-') continue;
        fprintf(file,"%c",argv[j][k]);
        printf("%c",argv[j][k]);
      }
    }
    else{
      fprintf(file,"\n argument %s",argv[j]);
      printf("\n argument %s",argv[j]);
    }
  }
  printf("\n");
  fclose(file);
  return 0;
}

void usage(){
  printf("Usage: option [-abRou] [-i filename] \n");
  exit(1);
}
