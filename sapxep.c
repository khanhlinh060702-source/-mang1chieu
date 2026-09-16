void M1C::sapxep(){
	int i,j;
	int tam;
	for(i=0 ; i<spt-1 ; i++){
		for(j=i+1 ; j<spt ; j++){
			if(a[i]>a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
