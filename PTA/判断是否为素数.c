int main()
{
    int cnt, m, n, p;
    cnt = 0;
    scanf ( "%d %d", &m, &n );
    printf("Count of ( ");
    for ( p = m; p <= n; p++ ) {
        if ( prime ( p ) != 0 ){
            printf ( "%d ", p );
            cnt++;
        }
    }
    printf(") = %d\n", cnt);
    return 0;
}

int prime(int p)
{
	int i ;
	if(p==1){
	return 0;
	}else if(p==2){
		return 1;
	}else{
		for(i=2 ; i*i<=p ;i++){
			if(p%i==0)
				return 0 ;
            
		}
	}return 1 ;
}
