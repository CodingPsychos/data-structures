#include <stdio.h>
#include <stdlib.h>
#include "dsa.c"

void main() {
   
    list* l = create_list(); 
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
                "j.data\n"
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
                list_push(l,a);
                list_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'b':
                list_pop(l);
                list_print(l);
                printf("count = %d",l->count);
                break;
                
                case 'c':{
                int a;
                printf("Enter the value");
                scanf("%d",&a);
                list_shift(l,a);
                list_print(l);
                printf("count = %d",l->count);
                break;}
                
                case 'd':
                list_unshift(l);
                list_print(l);
                printf("count = %d",l->count);
                break;
                
                
                
                case 'e':{
                int v;
                int p,n;
                printf("Enter the position");
                scanf("%d",&p);
                printf("Enter the value");
                scanf("%d",&n);
                v=list_insert(l,p,n);
                printf("\n%d Value added",v);
                list_print(l);
                break;
                }
                
                case 'f':{
                int v;
                int p;
                printf("Enter the position");
                scanf("%d",&p);
                v=list_delete(l,p);
                printf("\n%d position removed",v);
                list_print(l);
                break;
                }

                case 'g':
                list_print(l);
                break;
                
                case 'h':
                list_print_in_reverse(l);
                break;

                case 'i':
                list_reverse(l);
                break;

                case 'j':   {
                int n;
                printf("Enter the position\n");
                scanf("%d",&n);
                printf("%d",list_data(l,n));
                break;
                }
                default:printf("Check the data entered");

                

            }
        }
    }
}



