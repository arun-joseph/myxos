decl
	integer x,y;
	integer gcd(integer a,b);
enddecl
integer gcd(integer a,b)
{
	integer d,temp;
	integer f;
	if(a%b==0) then 
		x=0;
		y=1;
		f=b;
	else
		d=gcd(b,a%b);		
		temp=x;
		x=y;
		y=temp-y*(a/b);
		f=d;
	endif;	
	return f;
}
integer main()
{
	integer m,n;
	read(m);
	read(n);
	print(gcd(m,n));
	print(x);
	print(y);
	return 0;
}
