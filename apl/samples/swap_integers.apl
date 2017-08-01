decl
	integer swap(integer &x,&y);
enddecl
integer swap(integer &x,&y)
{
	integer a;
	a=x;
	x=y;
	y=a;
	return 100;
}
integer main()
{
	integer u,v;
	read(u);
	read(v);
	print(swap(u,v));
	print(u);
	print(v);
	return 0;	
}
