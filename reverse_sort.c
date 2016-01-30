int compare(int a, int b){
	return b - a;
}

int compareq(const void *a, const void *b){
	return (*(int*)b - *(int*)a);
}
