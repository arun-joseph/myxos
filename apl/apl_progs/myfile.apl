decl
	integer status, wordRead;
enddecl
integer main()
{
	status = Create("myfile.dat");
	print(status);
	status = Open("myfile.dat");
	print(status);
	status = Write(0,"xOS");
	print(status);
	status = Seek(0,0);
	print(status);
	status = Read(0, wordRead);
	print(status);
	print(wordRead);
	status = Close(0);
	print(status);
	status = Delete("myfile.dat");
	print(status);
	return 0;
}
