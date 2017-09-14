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
	if (pid == -1) then
		print("No memory");
	endif;

	if (pid == -2) then
		status=Exec("input.xsm");
		if (status == -1) then
			print("no memory");
		endif;
	endif;

	if ((pid >= 0) && (pid < 32)) then
		status=Wait(pid);
	endif;

	pid=Fork();
	if (pid == -1) then
		print("No memory");
	endif;

	if (pid == -2) then
		status=Exec("program.xsm");
		if (status == -1) then
			print("no memory");
		endif;
	endif;

	if ((pid >= 0) && (pid < 32)) then
		status=Wait(pid);
	endif;

	pid=Fork();
	if (pid == -1) then
		print("No memory");
	endif;

	if (pid == -2) then
		status=Exec("output.xsm");
		if (status == -1) then
			print("no memory");
		endif;
	endif;

	if ((pid >= 0) && (pid < 32)) then
		status=Wait(pid);
	endif;

	status=Signal();
	Exit();
	return 0;
}
