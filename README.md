# ImageEvolution

## Autorzy
Krystian Czechowicz  
Bartosz Niemiec

## Wymagane biblioteki

### Lista bibliotek
**GTest** - biblioteka służąca przeprowadzeniu testów jednostkowych.  
**Qt** - biblioteka służąca obsłudze graficznego interfejsu użytkownika  
**CImg**  - biblioteka służąca przetwarzaniu obrazu  
**ImageMagick** - biblioteka obsługująca większość dostępnych rozszerzeń plików graficzncych (wykorzystywana przez CImg)

### Instalacja Linux Ubuntu 22.04
**GTest** - nie wymagane są żadne dodatkowe instalacje, gdyż wszystko rozwiązuje CMake (fetch)

**Qt** - istnieje stosowny pakiet:  
>sudo apt install qtbase5-dev

**CImg** - nie ma konieczności pobierania, ponieważ biblioteka jest zawarta w całości w projekcie jako plik nagłówkowy

**ImageMagick** - istnieje stosowny pakiet:   
>sudo apt install imagemagick

### Instalacja Windows
**GTest** - nie wymagane są żadne dodatkowe instalacje, gdyż wszystko rozwiązuje CMake (fetch)

**Qt** - konieczne jest pobranie zewnętrznego instalatora ze strony  
>https://www.qt.io/download-open-source
Można również zbudować biblioteke samodzielnie z plików źródłowych

**CImg** - nie ma konieczności pobierania, ponieważ biblioteka jest zawarta w całości w projekcie jako plik nagłówkowy

**ImageMagick** - należy pobrać i zainstalować na systemie windows, biblioteka CImg wykorzystuje ImageMagic to obsługi niestandardowych formatów plików graficznych:   
>https://imagemagick.org/script/download.php

## Sposób kompilacji

### Linux  
Kompilacja na systemie linuxowym sprowadza się do wywołania skryptu budującego *CMakeLists.txt*. Sugerowany sposób kompilacji:
> cd {project_directory}  
> mkdir build  
> cd build  
> cmake ..  
> cmake --build .

### Windows
Pierwsza kompilacja musi odbyć się ze wskazaniem położenia biblioteki Qt. W ten sposób zmienna CMAKE_PREFIX_PATH zostanie zapisana do CMakeCache.txt. Sugerowany sposób kompilacji:  
> cd {project_directory}  
> mkdir build  
> cd build  
> cmake .. -D CMAKE_PREFIX_PATH={qt_directory}
> cmake --build .

## Sposób uruchomienia

### Linux  
Po zbudowaniu aplikacji pliki wynikowe znajdują się w katalogu: {project_directory}/build/src/  
>{project_directory}/build/src/ImageEvolution

### Windows
Po zbudowaniu aplikacji pliki wynikowe znajdują się w katalogu: {project_directory}/build/src/Debug
>{project_directory}/build/src/Debug/ImageEvolution.exe

## Testy
Podczas budowania aplikacji, kompilacji ulegają również testy jednostkowe napisane w GTest.
W celu uruchomienia testów należy wywołać:

### Linux   
>{project_directory}/build/test/MainTests

### Windows
>{project_directory}/build/test/Debug/MainTests.exe

## Zawartość szkieletu aplikacji
Szkielet aplikacji zawiera w sobie przykład użycia bibliotek:

**GTest** - prosty test typu "Hello World".

**Qt** - wyświetlenie prostego okna z możliwością wgrania pliku.

**CImg** - wyświetlenie prostego okna ze zdjęciem.

**ImageMagick** - użyte do obsługi plików graficznych przez CImg, brak bezpośrednich odwołań w kodzie   

Szkielet pozwala na swobodne rozpoczęcie pracy z użyciem w.w bibliotek. Są one budowane i przetestowane pod kątem przyszłego programu.

Dodatkowo szkielet aplikacji zawiera pliki (część z nich jest pusta), przedstawiające początkowy zamysł programu. 
Nie wszystkie pliki zawierają napisane klasy. Będą one natomiast sukcesywnie uzupełniane w toku pisania aplikacji.

Ideą prezentowanego szkieletu jest umożliwienie swobodnego podziału prac na konkretne klasy, oraz posiadanie sprawnego środowiska programistycznego dla systemu Windows i Linux. Jedna osoba z pary pracuje na komputerze z systemem operacyjnym Windows, druga z Linuxem.

Skrypty CMake są skonfigurowane tak, aby działały na obu systemach.

## Dodatkowe informacje
### QT Designer i automatyczna generacja kodu
W celu sprawniejszego utworzenia środowiska graficznego, wykorzystujemy aplikację QT Designer. Pozwala ona na wygenerowanie plików *.ui*. Pliki ten są wykorzystywane do automatycznej generacji kodu, odpowiadającego za wizualną stronę utworzonych okien. Proces ten jest zautomatyzowany przy użyciu CMake i jego wbudowanej opcji "CMAKE_AUTOUIC ON". Podczas kompilacji użytkownik nie musi posiadać zainstalowanego Qt Designer'a - aplikacja zajmuje się jedynie generowaniem pliku *.ui*, który zawarty jest w podkatalogu *forms*.

### Forms
Podkatalog *forms* poza plikami *.ui* zawiera także przykładowe zdjęcia w formatach *.png* i *.jpg*. Można dzięki nim przetestować funkcje szablonu (wczytanie zdjęcia do okienka Qt).
