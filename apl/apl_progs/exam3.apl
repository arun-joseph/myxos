decl
	integer status;
enddecl
integer main()
{
	integer pid1,pid2,fp1,fp2,i,num;
	fp1=Open("num1.dat");
	fp2=Open("num2.dat");
	pid1=Fork();
	if (pid1 == -2) then
		pid2=Fork();
		if (pid2 == -2) then
			i=0;
			while(i < 100) do
				status=Read(fp2,num);
				print(num);
				i=i+1;
			endwhile;
		else
			status=Write(fp1,2000);
			status=Close(fp2);
		endif;
	else
		pid2=Fork();
		if (pid2 == -2) then
			status=Seek(fp1,10);
			status=Read(fp1,num);
			print(num);
			status=Open("num2.dat");
		else
			i=0;
			while(i < 10) do
				status=Read(fp1,num);
				print(num);
				i=i+1;
			endwhile;
			i=0;
			while(i < 20) do
				status=Read(fp2,num);
				print(num);
				i=i+1;
			endwhile;
		endif;
	endif;
	return 0;
}
