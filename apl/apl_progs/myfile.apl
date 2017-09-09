decl
	integer status,pid;
enddecl
integer main()
{
	status=Create("input.dat");
	status=Create("output.dat");

	pid=Fork();
	if (pid == -2) then
		status=Exec("input.xsm");
	else
		Exit();
	endif;
	return 0;
}
