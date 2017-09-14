decl
	integer status;
enddecl
integer main()
{
	integer f1,f2,i;

	f1=Open("input1.dat");
	i=20;
	while(i <= 60) do
		status=Write(f1, i);
		i=i+5;
	endwhile;
	status=Write(f1, 0);
	status=Close(f1);

	f2=Open("input2.dat");
	i=1;
	while(i < 40) do
		status=Write(f2, i);
		i=i+2;
	endwhile;
	status=Write(f2, 0);
	status=Close(f2);

	status=Signal();
	Exit();
	return 0;
}
