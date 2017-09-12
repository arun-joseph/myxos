decl
	integer status,pid;
enddecl
integer main()
{
	status=Delete("input1.dat");
	status=Delete("input2.dat");
	status=Delete("output.dat");
	status=Create("input1.dat");
	status=Create("input2.dat");
	status=Create("output.dat");

	pid=Fork();
	if (pid == -2) then
		status=Exec("input.xsm");
	else
		Exit();
	endif;
	return 0;
}
