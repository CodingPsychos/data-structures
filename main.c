#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"

void main() {
		//list node
		list_node* head=NULL;
		li st_node* tail=NULL;
		
		while(1){
		
		printf("\na.push\n"
                "b.pop\n"
                "c.shift\n"
                "d.unshift\n"
                "e.insert\n"
                "f.delete\n"
                "g.print\n"
                "h.print in reverse\n"
                "i.reverse list\n"
                "q.quit\n"
            );
		char c;
		scanf("\n%c",&c);
		if(c=='q'){
			break;
		}
		else{
			switch(c){

				case 'a':{
				int a;
				printf("Enter the value");
				scanf("%d",&a);
				list_push(&head,&tail,a);
				break;}
				
				case 'b':
				list_pop(&head,&tail);
				break;
				
				case 'c':{
				int a;
				printf("Enter the value");
				scanf("%d",&a);
				list_shift(&head,&tail,a);
				break;}
				
				case 'd':
				list_unshift(&head,&tail);
				break;
				
				
				
				case 'e':{
				int v;
				int p,n;
				printf("Enter the position");
				scanf("%d",&p);
				printf("Enter the value");
				scanf("%d",&n);
				v=list_insert(&head,&tail,p,n);
				printf("\n%d Value added",v);
				break;
				}
				
				case 'f':{
				int v;
				int p;
				printf("Enter the position");
				scanf("%d",&p);
				v=list_delete(&head,&tail,p);
				printf("\n%d position removed",v);
				break;
				}

                case 'g':
				list_print(head);
				break;
				
				case 'h':
				list_print_in_reverse(head);
				break;
				default:printf("Check the data entered");

                case 'i':
				list_reverse(&head);
				break;
			}
		}
	}
}