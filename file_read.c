#include <stdio.h>
#include<string.h>

void p(int m, char *arr){
    int x1,x2;
    printf("Name: ");
for(int i=0;i<m;i++){
    if(arr[i] == ','){
        printf(" ");
         x1=i;
      break;
}
else
printf("%c",arr[i]);
}
printf("\n");
printf("Roll no: ");
for(int i=x1+1;i<m;i++){
    if(arr[i] == ','){
        printf(" ");
         x2=i;
        break;
}
else
printf("%c",arr[i]);
}
printf("\n");
printf("Age: ");
for(int i=x2+1;i<m;i++){
    if(arr[i] == '\n'){
        printf("\n\n");
        break;
}
else
printf("%c",arr[i]);
}
}
int main() {
    FILE *file = fopen("hi.txt", "r"); // Open the file for writing
char arr1[100],arr2[100],arr3[100];
if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }
fgets(arr1,100,file);
fgets(arr2,100,file);
fgets(arr3,100,file);
// fgetc with loop,try.
int m1 = strlen(arr1);
int m2 = strlen(arr2);
int m3 = strlen(arr3);

p(m1,arr1);
p(m2,arr2);
p(m3,arr3);
fclose(file);
  
    return 0;
}
