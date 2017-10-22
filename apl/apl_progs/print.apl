decl
	integer status;
enddecl
integer main()
{
	integer i,fp;
	status=Create("num2.dat");
	fp=Open("num2.dat");
	i=1000;
	while(i <= 1500) do
		status=Write(fp,i);
		i=i+1;
	endwhile;
	status=Close(fp);
	return 0;
}
