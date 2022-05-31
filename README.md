# KALKULATOR

Witam wszystkich odwiedzających to repozytorium, znajdziecie tutaj moją autorską implementację kalkulatora.
Program jest aplikacją konsolową napisaną dla systemu Windows.
Wszystko napisane jest w C++ w standardzie C++ 20, a środowiskiem pracy jest Visual Studio 2022 z rozszerzeniem ReSharper firmy JetBrains.
System budowania aplikacji jest standardem dla projektów napisanych w Visual Studio przy użyciu plików .sln i .vcxproj.



## SETTINGS VS 2022

To properly build the application, I recommend the following changes to the project properties:

Configuration Properties:
	General:
		Output directory: \$(SolutionDir)Calculator\bin\\$(Platform)\\$(Configuration)\\
		Intermediate directory: \$(SolutionDir)Calculator\bin\Intermediate\\$(Platform)\\$(Configuration)\\
		C ++ language standard: C ++ 20
	C ++ Directories:\n
		Header file directories: [PATH TO]\Calculator\Calculator\include



### APPLICATION DESCRIPTION

The calculator consists of four modules. Each module is written in separate classes that are combined into a single whole.

![Main_menu.png](https://github.com/XiZ1/Calculator/blob/master/Images/Main_Menu.png)

Standard calculator

![Standard_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Standard_Calculator.png)

It allows you to perform six basic math operations:
-Addition
-Subtraction
-Division
-Multiplication
-The rest of the division
-Square root

Advanced calculator

![Advanced_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Advanced_Calculator.png)

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

Calculator for developers

![Developer_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Developer_Calculator.png)

It allows you to convert number systems
-BIN
-OCT
-DEC
-HEX

Unit conversion calculator

![Unit_Conversion_Calculator.png](https://github.com/XiZ1/Calculator/blob/master/Images/Unit_Conversion_Calculator.png)

It allows unit conversions
-LENGTH
-WEIGHT
-VOLUME
