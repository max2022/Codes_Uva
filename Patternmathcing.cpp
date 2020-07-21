#include<bits/stdc++.h>
using namespace std;

void search(char* pattern, char* fulltext)
{
      int pat_length = strlen(pattern);
      int text_length = strlen(fulltext);
      //printf("%d",pat_length);
      for(int i =0;i<text_length-pat_length;i++)
      {
          int j;

          for(j=0;j<pat_length;j++)
          {
           if(fulltext[i+j]!=pattern[j])
            break;
          }
          if(j==pat_length){
          printf("pattern found at %d \n",i );
          }
      }
}

int main()
{
    //printf("Hasan");
    char fulltext[]="AABACCCCAABAVVVAABA";
    char pattern[] ="AABA";
    search(pattern,fulltext);

    return 0;
}

