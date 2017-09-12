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

	status=Delete("input1.dat");
	status=Delete("input2.dat");

	return 0;
}
