decl
	integer status,pid;
	string command;
enddecl
integer main()
{
	print("arun@xos: $");
	read(command);

	while(command != "exit") do
		pid=Fork();
		if (pid == -1) then
			print("No memory");
		endif;

		if (pid == -2) then
			status=Exec(command);
			if (status == -1) then
				print("no command");
				Exit();
			endif;
		endif;

		if ((pid >= 0) && (pid < 32)) then
			status=Wait(pid);
		endif;

		print("arun@xos: $");
		read(command);
	endwhile;

	return 0;
}
