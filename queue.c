void enqueue(queue** front,queue** rear,int data){
	list_push(front,rear,data);
}

int dequeue(queue** front,queue** rear){
	list_unshift(front,rear);
}

int queue_get_rear(queue** front,queue** rear){
	return (*rear)->data;
}

int queue_get_front(queue** front,queue** rear){
	return (*front)->data;
}

int queue_is_empty(queue* front){
	int ans=0;
	if(front==NULL)
		ans=1;
	return ans;
}








/*
int main(){
	queue* front=NULL;
	queue* rear=NULL;

	enqueue(&front,&rear,1);
	enqueue(&front,&rear,2);
	enqueue(&front,&rear,3);
	dequeue(&front,&rear);
	dequeue(&front,&rear);
	dequeue(&front,&rear);
	if(!queue_is_empty(front))
		printf("front-%d rear-%d\n",queue_get_front(&front,&rear),queue_get_rear(&front,&rear));
	if(queue_is_empty(front))
		printf("Queue is empty\n");


}*/
