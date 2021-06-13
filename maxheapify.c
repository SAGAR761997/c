maxheapify(A,i){
	l=2.i
	r=2.i+1
	
	if(l<=A.heapsize && A[l]>A[i]){
		largest=l
	}
	else{
		largest=i
	}
	
	if(r<=A.heapsize && A[r]>A[i]){
		largest=r
	}
	
	if(largest!=i){
		exchange A[i] with A[largest]
		maxheapify(A,largest)
	}
}
