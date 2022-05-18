#include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
 {
  int data;
  struct node *next;
 };
 struct node *head=NULL,*pos=NULL,*tail=NULL;
 int ch,entry,count=0;
 while(1)
 	{
 	  printf("\n1:INSERT\n 2:DISPLAY\n 3:COUNT THE NO OF ELEMENTS\n 4:EXIT");
 	  printf("\n enter your choice:");
 	  scanf("%d",&ch);
 	  switch(ch)
 	  {
 	  	case 1:
 	  	{
 	  	 printf("\n enter data:");
 	  	 scanf("%d",&entry);
 	  	 if(head==NULL)
 	  	 {
 	  	  	head=(struct node*)malloc(sizeof(struct node));
 	  	  	head->data=entry;
 	  	  	pos=head;
 	  	  	tail=head;
 	  	 }
 	  	  else
 	  	 {
 	  	  tail->next=(struct node*)malloc(sizeof(struct node));
 	  	  tail=tail->next;
 	  	  tail->data=entry;
 	  	 }
 	  	 break;
 	  	}
 	  	 case 2:
 	  	 	{
 	  	 	 pos=head;
 	  	 	 printf("\n ELEMENTS ARE");
 	  	 	 while(pos!=NULL)
 	  	 	 	{
 	  	 	 	 printf("\t %d\n",pos->data);
 	  	 	 	 pos=pos->next;
 	  	 	 	}
 	  	 	    break;
 	  	 	}
 	  	 	case 3:
 	  	 		{
 	  	 			pos=head;
 	  	 			while(pos!=NULL)
 	  	 			{
 	  	 				count++;
 	  	 				pos=pos->next;
 	  	 			}
 	  	 			 printf("no of elements is :%d",count);
 	  	 		}
 	  	 		break;		
 	  	 		case 4:
 	  	 			{ 
 	  	 			 printf("\n GOOD BYE");
 	  	 			 exit(0);
 	  	 			}
 	  	 }
 	    }	 
} 	  	
 	  
 	  	
 	  	 			 	  
