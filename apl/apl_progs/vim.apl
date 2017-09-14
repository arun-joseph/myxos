decl
	integer status,fp,num,flag,from,to;
	string filename,word,command;
enddecl
integer main()
{
	read(filename);

	status=Create(filename);
	if (status == -1) then
		print("no memory");
		status=Signal();
		Exit();
	endif;

	fp=Open(filename);
	num=0;
	status=Read(fp,word);
	while(status != -1) do
		print(num);
		print(word);
		num=num+1;
		status=Read(fp,word);
	endwhile;
	print(num);

	print(">>");
	read(command);
	while(command != ":q") do
		flag=0;
		if (command == ":w") then
			read(num);
			read(word);
			status=Seek(fp,num);
			if (status == -1) then
				print("invalid index");
			else
				while(word != ":s") do
					status=Write(fp,word);
					if (status == -1) then
						print("no memory");
						break;
					endif;
					read(word);
				endwhile;
			endif;
			flag=1;
		endif;

		if (command == ":d") then
			read(from);
			read(to);
			num=from;
			status=Seek(fp,num);
			if (status == -1) then
				print("invalid index");
			else
				status=Read(fp,word);
				while(status != -1) do
					if (num >= to) then
						break;
					endif;
					print(num);
					print(word);
					num=num+1;
					status=Read(fp,word);
				endwhile;
				print(num);
			endif;
			flag=1;
		endif;

		if (flag == 0) then
			print("no command");
		endif;

		print(">>");
		read(command);
	endwhile;

	status=Signal();
	Exit();
	return 0;
}
