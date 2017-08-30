//STEP1 - INSTALL CSCOPE TOOL
$ sudo apt-get install cscope	($ man cscope)
$ sudo apt-get install ctags    ($ man ctags )

//STEP2 - DOWNLOAD LATEST STABLE KERNEL SOURCE CODE
https://www.kernel.org/pub/linux/kernel/v3.x/

//STEP3 - CREATE AN EMPTY DIRECTORY IN HOME FOLDER (or anywhere)
$ mkdir ~/dirname
$ cd ~/dirname
$ tar -xvf ~/Download/linux-3.19.tar.gz 
[ above command will extract .tar.gz file into a current directory i.e. ~/dirname ]
$ cd linux-3.19

//STEP4 - CREATE CSCOPE DATABASE
$ find . -name "*.[hc]" > cscope.files
[ above command will search all .c & .h files & redirects to cscope.files ]

$ cscope -bqk
[ above command will create cscope database ]

$ ctags -R *
[ above command will tag with all files in the source code ]


//STEP5 - HOW TO USE CSCOPE TOOL
$ cscope -d
[ above command runs cscope tool ]

$ ctrl+d
[ above command to comeout of cscope tool ]

$ cscope -d 
[ options in cscope tool ]

Find this C symbol:
Find this global definition:
Find functions called by this function:
Find functions calling this function:
Find this text string:
Change this text string:
Find this egrep pattern:
Find this file:
Find files #including this file:
Find assignments to this symbol:


//STEP6 - HOW TO FIND FUNCTION DEFINITIONS
|
*--------use "up/down" arrow to swich between these options
|
*-------- goto second option 
		|
		*-- Find this global definition:printf
		|
		*----open stdio.c file
|
*------- use "tab key" to switch between cscope menu & output options
	
//STEP7 - HOW TO SEARCH MACROS
|
*---- goto first option
	|
	*--- Find this C symbol:pid_t
		|
		*--- open any file 
		*--- move cursor on pid_t & press ctrl+] to see what is pid_t?
		*--- ctrl+t to come back

