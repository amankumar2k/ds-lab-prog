/* 
Design, Develop and Implement a Program in C for the following operations
on Strings.

a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP).
b. Perform Pattern Matching Operation: Find and Replace all occurrences of
PAT in STR with REP if PAT exists in STR. Report suitable messages in case
PAT does not exist in STR.   

ALGORITHM:
Step 1: Start.
Step 2: Read main string STR, pattern string PAT and replace string REP.
Step 3: Search / find the pattern string PAT in the main string STR.
Step 4: if PAT is found then replace all occurrences of PAT in main string STR with REP
string.
Step 5: if PAT is not found give a suitable error message.
Step 6: Stop. 
*/


#include<stdio.h>
void read();
void match();
char STR[100],PAT[100],REP[100],ANS[100];
int c,i,j,k,m,flag=0;
main()
{
read();
match();
}
void read()
{
printf("enter main string STR:");
gets(STR);
printf("enter pattern string PAT:");
gets(PAT);
printf("enter replace string REP:");
gets(REP);
}
void match()
{
c=i=j=k=m=0;
while(STR[c]!='\0')
{
if(STR[m]==PAT[i])
{
i++;m++;
if(PAT[i]=='\0')
{
flag=1;
while(REP[j]!='\0')
{
ANS[k++]=REP[j++];
}
c=m;
i=0;
}
}
else
{
ANS[k++]=STR[c++];
m=c;
i=0;
}
}
if(flag==0)
printf("pattern not found");
else
{
ANS[k]='\0';
printf("resultant string is %s",ANS);
}
}
