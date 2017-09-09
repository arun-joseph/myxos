decl
	integer status;
enddecl
integer main()
{
	integer fp;
	fp=Open("input.dat");
	status=Write(fp,10);
	status=Write(fp,8);
	status=Write(fp,6);
	status=Write(fp,4);
	status=Write(fp,5);
	status=Write(fp,9);
	status=Write(fp,7);
	status=Write(fp,2);
	status=Write(fp,1);
	status=Write(fp,3);
	status=Write(fp,7);
	status=Write(fp,0);
	status=Close(fp);

	status=Exec("program.xsm");
	return 0;
}
