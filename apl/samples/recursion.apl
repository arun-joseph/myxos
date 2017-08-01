decl
	integer f(integer x);
enddecl
integer f(integer x)
{
	integer a;
	if(x>=91) then
		a=91;
	else
		a=f(f(x+1));
	endif;
	return a;
}
integer main()
{
	integer y;
	read(y);
	print(f(y));
	return 0;	
}
