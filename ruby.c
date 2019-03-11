#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str[20]={0},a[20],con[20];
	char str2[4]={'r','u','b','y'};
	int count,i,j,n,k=0,flag=0;
	
	printf("enter sentances\n");
	scanf("%[^\n]s",&str); //read string with spaces
	

	n=strlen(str);
	
	for(i=0;i<n;i++)//for unique string
	{
		if(str[i]!=0)
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					count++;
					str[j]=0;
				}
			}			
			a[k]=str[i];//storing string in an array
			con[k]=count;  //storing count in anarray
			k++;  //find total unique value
			
		}
	}
	
	////
	int len1=strlen(a);
	
		for(i=0;i<4;i++)
	  		{
	  			for(j=0;j<len1;j++)
	  			{
		
	 			if(str2[i]==a[j])
	    		{
		    		flag=1;
		    		break;
		    	}
				else
		   		{
		   			flag=0;	
		   		}
				}
	  		}
    
	 if(flag==1)
	   {
	   	
	///
	
	
	int val;
	for(i=0;i<k;i++)//printing unique strings
	{
		printf("%c-->%d\n",a[i],con[i]);		
	}
	
    	int large;
    	for(i=0,j=0;i<k;i++)////finding smallest count
		{
		  if(con[j]<con[i])
			{
			  large=con[j];
			}
		  else
			{
			  large=con[i];
			  j=i;
			}
   		}
   	
   	
   	printf("%d\n",large);
   }
     
	  else
	   {
	     printf("0");	
	   }
	   	
}
