decl
	integer length,status;
enddecl
integer main()
{
	integer a,b,f1,f2,fp;
	f1=Open("input1.dat");
	f2=Open("input2.dat");
	fp=Open("output.dat");

	status=Read(f1, a);
	status=Read(f2, b);
	while((a != 0) && (b != 0)) do
		if (a <= b) then
			status=Write(fp, a);
			status=Read(f1, a);
		else
			status=Write(fp, b);
			status=Read(f2, b);
		endif;
	endwhile;

	while(a != 0) do
		status=Write(fp, a);
		status=Read(f1, a);
	endwhile;

	while(b != 0) do
		status=Write(fp, b);
		status=Read(f2, b);
	endwhile;

	status=Write(f2,0);

	status=Close(f1);
	status=Close(f2);
	status=Close(fp);

	status=Signal();
	Exit();
	return 0;
}
