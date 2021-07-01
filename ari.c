string ari(string S)
{
int words=0;int chara=0;int sent=0;
for(int i=0;S[i]!='\0';i++)
  {
   if((isalnum(S[i]))!=0){chara++;}
   if(S[i]=='.'||S[i]=='?'||S[i]=='!'){sent++;}
   if(S[i]==' '){words++;}
  }
float ratio1=4.71*(float)chara/words;
float ratio2=0.5*(float)words/sent;
float score=ratio1+ratio2-21.43;
int Score_Index=(int)score+1;
string out[]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
return out[Score_Index-1];
}
