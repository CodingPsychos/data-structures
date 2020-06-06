void min_heap_up(double* heap, int c )  {
	if(c == 0)
		return;
	int p = (c-1)/2;
	if(heap[c]<heap[p])
		swap(&heap[c],&heap[p]);
	min_heap_up(heap, p);
}

void min_heap_down(double* heap,int n,int c)  {
  int l = 2*c+1;
  int r = 2*c+2;
  if(l<n) {
		if((r<n) && (heap[r]<heap[l])) {
			if(heap[r]<heap[c])  {
		  	swap(&heap[r],&heap[c]);
		  }
		  min_heap_down(heap,n,r);
		}  	
		else	{
		if(heap[l]<heap[c])  {
		  	swap(&heap[l],&heap[c]);
		  }
		  min_heap_down(heap,n,l);
		}
	}
	else
		return;		
}

void min_heap_build(double* arr, int n)	{
    for (int i = n/2-1; i >= 0; i--) 
        min_heap_down(arr, n, i);
}

void min_heap_push(double* heap, int* n, double data)  {
  heap[(*n)++] = data;
  min_heap_up(heap,(*n)-1);
}

double min_heap_pop(double* heap, int* n)  {
	double temp = heap[0];
	heap[0] = heap[(*n)-1];
	(*n)--;
	min_heap_down(heap,*n,0);
	return temp;
}

int minmax(int a, int b) {
    return min(a,b);
}
