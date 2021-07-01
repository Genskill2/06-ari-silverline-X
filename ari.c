#include <string.h>
string ari(string S)
{
int words=0;int chara=0;int sent=0;
for(int i=0;S[i]!='\0';i++)
  {
   if(isalnum(S[i])==1){chara++;}
   else if(S[i]=='.'||S[i]=='?'||S[i]=='!'){sent++;}
   else if(S[i]==' '){words++;}
  }
float score=4.71*((float)chara/words)+0.5*((float)words/sent)-21.43;
score=(int)score+1;
string out[]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
return out[score-1];
}
