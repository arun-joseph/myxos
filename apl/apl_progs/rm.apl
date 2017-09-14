decl
	integer status;
	string filename;
enddecl
integer main()
{
	read(filename);

	status=Delete(filename);
	if (status == -1) then
		print("no file found");
	endif;

	status=Signal();
	Exit();
	return 0;
}
