decl
	integer length,status;
enddecl
integer main()
{
	integer a,b,i,f1,f2;
	f1=Open("input.dat");
	f2=Open("output.dat");

	length=1;
	status=Read(f1,a);
	if(a != 0) then	
		status=Seek(f1,0);
		status=Read(f1,a);
		status=Write(f2,a);
		status=Seek(f1,length);
		status=Read(f1,a);
	endif;

	while(a != 0) do
		status=Seek(f2,length-1);
		status=Read(f2,b);

		i=length-1;
		while((i >= 0) && (b > a)) do
			status=Seek(f2,i+1);
			status=Write(f2,b);
			i=i-1;

			if(i >= 0) then
				status=Seek(f2,i);
				status=Read(f2,b);
			endif;
		endwhile;

		status=Seek(f2,i+1);
		status=Write(f2,a);

		length=length+1;
		status=Seek(f1,length);
		status=Read(f1,a);
	endwhile;

	status=Seek(f2,length);
	status=Write(f2,0);

	status=Close(f1);
	status=Close(f2);

	status=Exec("output.xsm");
	return 0;
}
