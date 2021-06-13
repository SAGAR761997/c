struct node{
    char data;
    struct node *p,*q;
}

inorder(struct node *a ){
	if(a!=null){			//if (t)        alternative
    		inorder(a -> left);     
    		printf(a.data);
    		printf(a -> right);
	}
}
