# vsd-riscv
In the Entire code the shabaz.c refers to the file-name.
<details>
<summary><b>Task 1:</b> Task is to refer to C based and RISCV based lab and compiling the C code using gcc and riscv compiler</summary>

### C Language based LAB
We have to follow the given steps to compile any **.c** file :  
1. Open the terminal. Then run the following command:
	```
	gedit shabaz.c
	```  
2. This will open the text editor to write the code. Then you have to write the C code of printing the sum of n numbers. Once you are done with your code, press ```Ctrl + S``` to save your file, and then press ```Ctrl + W``` to close the text editor.   
3. To compile the C code, run the following command on terminal :
	```
	gcc shabaz.c
 	```
 4. To Run the Code, Run the following command :
 	```
	./a.out
 	```
 ![Image](https://github.com/user-attachments/assets/0b3d3fd8-bb1c-4180-8d2d-04be5a800b57)


 ### RISCV based LAB
Follow the given steps:  
 1. Open the terminal and then run the given command:  
 	```
 	cat shabaz.c
 	```
 ![Image](https://github.com/user-attachments/assets/6e030205-fcd4-4eb0-8314-9cfae38957f4)

 2. To compile the code in riscv64 gcc compiler to get Objdump in -O1 format Run the given command : 
	```
	riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o shabaz.o shabaz.c
	``` 
![Image](https://github.com/user-attachments/assets/d1ae3d0a-ef71-4688-b173-dde28d2a0932)

  3. Open a new tab in terminal and then run the given command:    
	
 	riscv64-unknown-elf-objdump -d shabaz.o


![Objdump using -O1 format](link)

  4.To get Main section of data run the given command, after that  Type ```/main``` to locate the main section of our code :
 
	riscv64-unknown-elf-objdump -d shabaz.o | less
	
![Image](https://github.com/user-attachments/assets/eaffcb47-87c3-4f94-b6e6-3b98aa69aef3)

  5.To get Objdump in -Ofast format Run the given command in previous tab :
	
 	riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o shabaz.o shabaz.c

![Image](https://github.com/user-attachments/assets/69a7b5e4-e341-46a1-8e02-d962f981992d)

  6.Open a new tab in terminal and then run the given command:    
		
	riscv64-unknown-elf-objdump -d shabaz.o
	
![Objdump using -Ofast format](link)

 7.To get Main section of data run the given command, after that  Type ```/main``` to locate the main section of our code :
 	  	
	riscv64-unknown-elf-objdump -d shabaz.o | less
	
![Image](https://github.com/user-attachments/assets/d86ec69c-0e0e-4ebf-b65c-ec98e538ed10)

