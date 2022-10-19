# Head First C 
This is a guide for beginners learning C from scratch with Head First C book by David & Dawn Griffiths

* This includes all the tutorial exercises in the book 

* Comments will be added on challenging exercises

# C Insatllation (windows)
Linux and mac users dont have to do this insatllation 
* Go to MinGW official website and click on 'Downloads' 

* Download mingw-get-setup.exe and accept the terms 

* In the MinGW Installation Manager window, click on Basic Setup

* Tick "mingw32-gcc-g++-bin"

* If you are prompted with a menu, click on Mark for Install

* On the top left corner click on Installation > Apply Changes

* Search for "Environment Variables" in Windows Search...

* Double click on the Variable named "Path" 

* Click on New and paste [C:\MinGW\bin]

* Click on ok and close the other windows

* Open cmd and type [gcc --version] to verify installation
 
 # cards.c
program to evaluate the value of cards
 * It will display the value of a card

 # cards2.c
 cards.c program modified so that it can be used for card counting. 
 * It will need to display one message if the value of the card is from 3 to 6. 
 * It will need to display a different message if the card is a 10, Jack, Queen, or King.

 # cards3.c
cards2.c program code modified
 * If statement is replaced with switch

  # cards4.c
cards3.c program modified in code and functionality
 * Switch statement is put in a while loop
 * This displays the card count after each card and ends when user enters X
