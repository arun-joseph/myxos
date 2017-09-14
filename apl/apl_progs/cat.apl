decl
	integer status,fp;
	string filename,word;
enddecl
integer main()
{
	read(filename);
	fp=Open(filename);
	if (fp == -1) then
		print("no file found");
		status=Signal();
	endif;

	status=Read(fp, word);
	while(status != -1) do
		print(word);
		status=Read(fp, word);
	endwhile;

	status=Close(fp);

	status=Signal();
	Exit();
	return 0;
}
