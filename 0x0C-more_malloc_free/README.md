malloc - used to allocate a block of memory of a specific size, and returns a pointer to the first byte of the allocated memory
	int *p;
	p = (int*) malloc(10 * sizeof(int));


calloc - is used to allocate a block of memory of a specific size, but it also initializes the memory to zzero. It takes 2 arguments: the number of elements to allocate, and the size of each element.


realloc - is used to change the size of an already allocated block of code of memory. It takes 2 arguments: a pointer to the block of memory to be resized, and the new size of the memory block
