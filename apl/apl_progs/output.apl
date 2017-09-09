decl
	integer status;
enddecl
integer main()
{
	integer fp,a;
	fp=Open("output.dat");

	status=Read(fp,a);
	while(a != 0) do
		print(a);
		status=Read(fp,a);
	endwhile;

	status=Close(fp);

	status=Delete("input.dat");
	status=Delete("output.dat");
	return 0;
}
