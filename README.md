# vsd-riscv
In the Entire code the shabaz.c refers to the file-name.
<details>
<summary><b>Task 1:</b> Task is to refer to C based and RISCV based lab and compiling the C code using gcc and riscv compiler</summary>

### C Language based LAB
We have to follow the given steps to compile any **.c** file :  
1. Open the terminal and locate to the directory where you want to create your file. Then run the following command:

	```
	gedit shabaz.c
	```  
2. This will open the text editor and allows you to write the code. Then you have to write the C code of printing the sum of n numbers. Once you are done with your code, press ```Ctrl + S``` to save your file, and then press ```Ctrl + W``` to close the text editor.   
3. To the C code on your terminal, run the following command:

	```
	gcc shabaz.c
 	```
 
 	This command compiles the code.
 4. To Run the Code, Run the following command :
 	```
	./a.out
 	```
 ![Image](https://github.com/user-attachments/assets/291c6dc0-76ba-4373-bdb0-0f8aed49acfd)


 ### RISCV based LAB
Follow the given steps:  
1. Open the terminal and then run the given command:  

	```
	cat shabaz.c
	```
![cat Command](link)

2. Now run the given command to compile the code in riscv64 gcc compiler to get Objdump in -O1 format :  
	```

	riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o shabaz.o shabaz.c

 ![Objdump using -O1 format](link)

 
3. Open a new tab in terminal and then run the given command:    
```
	
	riscv64-unknown-elf-objdump -d shabaz.o
	
```
![Objdump using -O1 format](link)


4.To get Main section of data run the given command, after that  Type ```/main``` to locate the main section of our code :
```
	riscv64-unknown-elf-objdump -d shabaz.o | less
``` 
 
 ![Objdump using -O1 format](link)


5.To get Objdump in -Ofast format Run the given command :
```
	riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o shabaz.o shabaz.c
```

 ![Objdump using -Ofast format](link)


6.Open a new tab in terminal and then run the given command:    
```
		riscv64-unknown-elf-objdump -d shabaz.o
``` 

![Objdump using -Ofast format](link)

7.To get Main section of data run the given command, after that  Type ```/main``` to locate the main section of our code :
 ```
	riscv64-unknown-elf-objdump -d shabaz.o | less
```
 ![Objdump using -Ofast format](link)

