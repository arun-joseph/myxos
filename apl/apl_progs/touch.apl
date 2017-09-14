decl
	integer status;
	string filename;
enddecl
integer main()
{
	read(filename);

	status=Create(filename);
	if (status == -1) then
		print("no memory");
	endif;

	status=Signal();
	Exit();
	return 0;
}
