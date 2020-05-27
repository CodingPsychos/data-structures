
void stack_push(stack** s,stack** top,int data){
	list_push(s,top,data);
}

int stack_pop(stack** s,stack** top){
	int a=list_pop(s,top);
	return a;
}

int stack_get_top(stack** s,stack** top){
	return (*top)->data;
}

int stack_is_empty(stack* s){
int ans=0;
	if(s==NULL)
		ans=1;
	return ans;
}




/*

int main(){

	stack* s=NULL;
	stack* top=NULL;
	stack_push(&s,&top,1);
	stack_push(&s,&top,2);
	stack_push(&s,&top,3);
	stack_pop(&s,&top);
	stack_pop(&s,&top);
	stack_pop(&s,&top);
	if(!stack_is_empty(s))
		printf("top=%d\n",stack_get_top(&s,&top));
	if(stack_is_empty(s))
		printf("Empty stack\n");
	return 0;
}*/
