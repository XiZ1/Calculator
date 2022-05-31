# KALKULATOR
	Hello to all visitors to this repository, you will find here my proprietary implementation of a rather simplified calculator known from Windows 10.  
	The program was created for a fairly prosaic reason of programming in C ++, I learn by writing my own projects, it is one of the projects that I want to share with the world.  
	Feel free to browse, comment, rate, correct and develop the code.  
	Thank you in advance for any comments and evaluations.  

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

## TECHNOLOGY
	The program is a console application written in C ++ using the C ++ 20 standard.  
	The workbench is Visual Studio 2022 with JetBrains ReSharper extension.  
	The project build system is based on the .sln and .vcxproj files.  

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

## CONFIGURATION AND COMPILATION
	1. Visual Studio 2022  
		To properly build the application, I recommend the following changes to the project properties and then project builds.  
			Configuration Properties:  
				General:  
					Output directory: \$(SolutionDir)Calculator\bin\$(Platform)\$(Configuration)\  
					Intermediate directory: \$(SolutionDir)Calculator\bin\Intermediate\$(Platform)\$(Configuration)\  
					C ++ language standard: C ++ 20  
				C ++ Directories:  
					Header file directories: [PATH TO]\Calculator\Calculator\include  

	2.Visual Studio Code  
		Worl in progress.  

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

### APPLICATION USAGE
	The calculator consists of four modules. Each module is written in separate classes that are combined into a single whole.  

	1. Main Menu  
![Main_menu.png](https://github.com/XiZ1/Calculator/blob/master/Images/Main_Menu.png)

	2. Standard calculator:  
		It allows you to perform six basic math operations:  
			-Addition  
			-Subtraction  
			-Division  
			-Multiplication  
			-The rest of the division  
			-Square root  
![Standard_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Standard_Calculator.png)

	3. Advanced calculator  
		It allows you to perform twelve basic and advanced mathematical operations:  
			-Addition  
			-Subtraction  
			-Division  
			-Multiplication  
			-The rest of the division  
			-Square root  
			-Cube root  
			-Exponentiation  
			-Logarithm  
			-Sine  
			-Cosine  
			-Tangent  
![Advanced_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Advanced_Calculator.png)

	4. Calculator for developers  
		It allows you to convert number systems  
			-BIN  
			-OCT  
			-DEC  
			-HEX  
![Developer_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Developer_Calculator.png)

	5. Unit conversion calculator  
		It allows unit conversions  
			-LENGTH  
			-WEIGHT  
			-VOLUME  
![Unit_Conversion_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Unit_Conversion_Calculator.png)

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#### COPYRIGHTS
	Copyright (C) 2022 Jakug Górecki - All Right Reserved.  
	Gmail: jakub.xiz1.gorecki@gmail.com  
	GitHub https://github.com/XiZ1  
