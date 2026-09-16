# -mang1chieu
void M1C::nhap(){
	cout << "So phan tu: ";
	cin>>spt;
	for(int i=0 ; i<spt ; i++){
		cout << "a[" <<i<<"]=";
		cin>>a[i];
    }
}
void M1C::xuat(){
	for(int i=0 ; i<spt ; i++){
		cout << a[i] <<" ";
	}
	cout<<endl;
}
