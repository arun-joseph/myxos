decl
	integer status;
enddecl
integer main()
{
	integer fp,pid1,pid2,i,num;
	fp=Open("number.dat");
	pid1=Fork();
	i=0;
	if (pid1 == -2) then
		while(i < 100) do
			status=Read(fp,num);
			print(num);
			i=i+1;
		endwhile;
	else
		pid2=Fork();
		if(pid2 == -2) then
			while(i < 100) do
				status=Read(fp,num);
				print(num);
				i=i+1;
			endwhile;
		else
			while(i < 100) do
				status=Read(fp,num);
				print(num);
				i=i+1;
			endwhile;
		endif;
	endif;
	status=Close(fp);
	return 0;
}
