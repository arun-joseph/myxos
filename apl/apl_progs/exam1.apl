decl
	integer status;
enddecl
integer main()
{
	integer pid1,pid2,fp,i,num;
	fp=Open("number.dat");
	status=Seek(fp,300);
	pid1=Fork();
	if (pid1 == -2) then
		pid2=Fork();
		if (pid2 == -2) then
			i=0;
			while(i < 10) do
				status=Read(fp,num);
				print(num);
				i=i+1;
			endwhile;
		else
			i=0;
			while(i < 10) do
				status=Read(fp,num);
				print(num);
				i=i+1;
			endwhile;
		endif;
	else
		pid2=Fork();
		if (pid2 == -2) then
			status=Seek(fp,300);
		else
			status=Write(fp,50);
		endif;	
	endif;
	return 0;
}
