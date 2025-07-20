#include<stdio.h>
#include<string.h>
int main()
{
    int i,j; 
    char exp[20],dig[20],id[20],ch;
    printf("Enter the expression : ");
    scanf("%s",exp);
    for(i=0;i<strlen(exp);)
    {
	    ch=exp[i];
	    j=0;
	    if(ch>='a'&& ch<='z')
	    {
		    id[j++]=ch;
		    i++;
		    while((exp[i]>='a'&& exp[i]<='z')||(exp[i]>='0'&&exp[i]<='9'))
		    {
			    id[j++]=exp[i++];
		    }
		    id[j]='\0';
		    printf("\n %s is an identifier",id);
	    }
	    else if(ch == '='|| ch == '-'||ch == '*'||ch == '/'|| ch == '+')
	    {
            printf("\n %c is an operator",ch);
            i++;
        }
        else if(ch>='0'&&ch<='9')
        {
            while(exp[i]>='0'&&exp[i]<='9')
            {
                dig[j++]=exp[i++];
            }
            dig[j]='\0';
            printf("\n %s is a constant",dig);
        }
        else
        {
            printf("\n %c is a special character", exp[i]);
            {
                dig[j++]=exp[i++];
            }
        }
    }
}
