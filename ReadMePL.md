# KALKUALTOR

	Witam wszystkich przegłądających to repozytorium znajdziecie tutaj moją autorska implementację kalkulatora.
	Program jest aplikacją konsolową pisaną na Windowsa.
	Całość jest napisana w C++ w standardzie C++20 za środowisko pracy służyl Visual Studio 2022 w wersji Community z roszerzeniem ReSharper od firmy JetBrains.
	System budowania aplikacji jest standardowy dla projektów pisanych Visual Studio na plikach .sln i .vcxproj.

===============================================================================================================================================================

## USTAWIENIA VS 2022

Do poprawnego budowania aplikacji zalecam takie zmiany w właściwościach projektu:
Właściwości konfiguracji:
	Ogólne:
		Katalog wyjściowy: $(SolutionDir)Calculator\bin\$(Platform)\$(configuration)\
		Katalog pośredni: $(SolutionDir)Calculator\bin\intermediates\$(Platform)\$(configuration)\
		Standard języka C++: C++20
	Katalogi C++:
		Katalogi plików nagłówkowych: C:\Users\kubag\Desktop\ALL\Programing\C++\Projects\Calculator\Calculator\include

===============================================================================================================================================================

### OPIS APLIKACJI

Kaltulator sklada sie z czterech modułów. Każdy moduł jest napisany w osobnej klasie które są łaczone w jednej klasie.

![](https://github.com/XiZ1/Calculator/blob/master/Images/Main_Menu.png)

Standardowy kalkulator

![](Image\Standard_Calculator.png)

Pozwala na wykonywanie sześciu podstawowych działan matematycznych:
	Dodawanie
	Odejmowanie
	Dzielenie
	Mnożenie
	Reszta z dzielenia
	Pierwiastek kwadratowy

Zaawansowany kalkualtor

![](Image\Advanced_Calculator.png)

Pozwala na wykonywanie dwunastu działań matematycznych podstawowych i zaawansowanych:
	Dodawanie
	Odejmowanie
	Dzielenie
	Mnożenie
	Reszta z dzielenia
	Pierwiastek kwadratowy
	Pierwiastek sześcienny
	Potęgowanie
	Logarytm
	Sinus
	Cosinus
	Tangens

Kalkulator dla programistów

![](Image\Developer_Calculator.png)

Pozwala na konwertowanie systemów liczbowych
	BIN
	OCT
	DEC
	HEX

Kalkulator zamiany jednostek

![](Image\Unit_Conversion_Calculator.png)

Pozwala na konwersje jednostek 
	DLUGOSCI
	MASY
	OBJETOŚĆI
