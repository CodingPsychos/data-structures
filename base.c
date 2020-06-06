int max(int a, int b)	{ 
	return (a > b)? a : b; 
}
int min(int a, int b)   {
    return (a < b)? a : b;
}

void swap(double* a, double *b)  {
  double temp = *a;
  *a = *b;
  *b = temp;
}

void array_print(int* arr, int n)  {
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void double_array_print(double* arr, int n)  {
	for(int i=0; i<n; i++) {
		printf("%f ",arr[i]);
	}
	printf("\n");
}

