decl
	integer a,b,c,d;
enddecl
integer main(){
	read(a);
	read(b);
	read(c);
	read(d);
	if(a>b) then 
		if(a>c) then 
			if(a>d) then 
				print(a);
			else	
				print(d); 
			endif;
		else 
			if(c>d) then 
			     print(c);
		     	else 
		     		print(d); 
		     	endif;
		endif;
	else
		if(b>c) then 
			if(b>d) then 
				print(b);
			else 
				print(d); 
			endif;
		else
			if(c>d) then 
				print(c);
		    	else
		    		print(d);
		    	endif; 
		endif;		
	endif;
	return 0;
}
