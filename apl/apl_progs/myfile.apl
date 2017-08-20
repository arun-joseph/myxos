decl
	integer status;
enddecl
integer main()
{
	status = Create("myfile.dat");
	print(status);
	return 0;
}
