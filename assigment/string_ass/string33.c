#include<stdio.h>
#include<string.h>
void wordFirstOc(char* str,char* word){
           int index=0,flag=0,i,del=-1,n=strlen(word),lo;
    while(str[index]!='\0')
    {
        if(str[index]==word[0])
        {
                flag=1;
                i=0;
                while(word[i]!='\0'){
                     if(str[index+i]!=word[i]){
                           flag=0;
                           break;
                     }
                     i++;
                }

        }
        if(flag==1){
            lo=index;
            while(str[lo]!='\0'){
                str[lo]=str[n+lo];
                lo++;
            }
            flag=10;
            continue;
        }
        index++;
    }


    printf("%s",str);

}


void main(){
    char str[100],word[100];
    gets(str);
    gets(word);

    wordFirstOc(str,word);

}


