decl
	integer swap(string &x,&y);
enddecl
integer swap(string &x,&y)
{
	string a;
	a=x;
	x=y;
	y=a;
	return 100;
}
integer main()
{
	string u,v;
	read(u);
	read(v);
	print(swap(u,v));
	print(u);
	print(v);
	return 0;	
}
