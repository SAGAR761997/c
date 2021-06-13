buildHeap(A){
	A.heapsize=A.lemgth
	for(i=A.length/2 to 1){
		maxHeapify(A,i)
	}
}
