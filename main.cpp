#include <iostream>
using namespace std;
int main()
{

    char choice_1; // variable to take user's input to start a new game or exit

    int player_1_choice , player_2_choice , counter_1 = 0 , counter_2 = 0 ;
         // variables to take players input for the row and column place.
        // counter 1 is to count how many times player 1 enter an input ( it should equal 5)
       // counter 2 is to count how many times player 2 enter an input ( it should equal 4)

    string winner = "A" , player_1_name , player_2_name;// variable helps in no winner condition





        cout<<"Welcome to XO Game\n"; // outside the loop to be executed only one time

    do {// Do while loop to keep taking user's input as long as the input is 'A' (new game)
        // printing messages for user to choose

        cout<<"Do you want to start a new game? \n";
        cout<<" A- New Game \n";
        cout<<" B- Exit \n";
        cin>>choice_1;// taking user's input





        // if user enter invalid choice ask user to enter a valid choice
        while (choice_1 != 'A' && choice_1 != 'a' && choice_1 != 'e' && choice_1 != 'E' )
        {
            cout<<"Please insert a valid choice : ";
             cin>>choice_1;
        }
        cout<<"Enter your name player one :";// taking player 1 name
        cin>>player_1_name;                            // not declared outside the loop to keep taking the name every new game
        cout<<"Enter your name player two :";// taking player 2 name
        cin>>player_2_name;

        if (choice_1 == 'A' || choice_1 == 'a')// if user chose to start a new game ....
        {
         char V1 = '-' , V2 = '-' , V3 = '-' ,//Vn represents places in the XO game
              V4 = '-' , V5 = '-' , V6 = '-' ,//Ex. V1 represents the first row and first column
              V7 = '-' , V8 = '-' , V9 = '-' ;//V5 represents the second row and second column and so on ...
             //Vn is declared outside the other do while to reassign the variables by (-) when the game is over

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;// the output   1 2 3
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//               1 - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//               2 - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//               3 - - -




          do{


         cout<<" Enter your move "<<player_1_name<<" (player one) *row then column*: ";
         cin>>player_1_choice;

         /* if player 1 enter a number consisted of more than two number.
          print invalid number and keep taking input from player 1 until player 1 enter a valid choice*/

         while ( player_1_choice / 100 != 0 || player_1_choice / 10 == 0 )
         {
             cout<<"Please insert a valid number (consisted of two numbers): ";
             cin>>player_1_choice;
         }

         /* if user enter a number not in { 1 , 2 , 3}.
          print invalid choice and keep taking another input until user enter a valid choice...*/

         while (player_1_choice != 11 && player_1_choice != 12 && player_1_choice != 13
            &&  player_1_choice != 21 && player_1_choice != 22 && player_1_choice != 23
            &&  player_1_choice != 31 && player_1_choice != 32 && player_1_choice != 33   )
         {
             cout<<"Please insert a valid choice in { 1 , 2 , 3 }: ";
             cin>>player_1_choice;
         }

         counter_1 ++; // increment counter 1 after the validation of the input

          // checking the place of the input
         if (player_1_choice == 11)
         {
             V1 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//place of the output O - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                    - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                    - - -

         }
         else if (player_1_choice == 12)
         {
             V2 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//place of the output - O -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                    - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                    - - -

         }
         else if (player_1_choice == 13)
         {
             V3 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - O
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }
         else if (player_1_choice == 21)
         {
             V4 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                    O - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                    - - -

         }
         else if (player_1_choice == 22)
         {
             V5 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                    - O -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                    - - -

         }
         else if (player_1_choice == 23)
         {
             V6 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - O
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }
         else if (player_1_choice == 31)
         {
             V7 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;//place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                    - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                    O - -

         }
         else if (player_1_choice == 32)
         {
             V8 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - O -

         }
         else if (player_1_choice == 33)
         {
             V9 = 'O' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - O

         }
         // winning conditions for player one

         if (V1 == 'O' && V2 == 'O' && V3 == 'O' )//first row check

            {
                cout<<player_1_name<<" is the winner  \n";
                winner = "Player one";
                counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false

                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

         else if (V4 == 'O' && V5 == 'O' && V6 == 'O' )//second row check
            {
                cout<<player_1_name<<" is the winner \n";
                winner = "Player one";
                counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }
        else if (V7 == 'O' && V8 == 'O' && V9 == 'O' )//third row check

            {
                cout<<player_1_name<<" is the winner \n";
                winner = "Player one";
                counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not

            }
        else if (V1 == 'O' && V4 == 'O' && V7 == 'O' )//first column check

            {cout<<player_1_name<<" is the winner \n";
              winner = "Player one";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V2 == 'O' && V5 == 'O' && V8 == 'O' )//second column check

            {cout<<player_1_name<<" is the winner \n";

               winner = "Player one";
               counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }
        else if (V3 == 'O' && V6 == 'O' && V9 == 'O' )//third column check

            {cout<<player_1_name<<" is the winner \n";

              winner = "Player one";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }
        else if (V1 == 'O' && V5 == 'O' && V9 == 'O' )//diagonal right to left check

            {cout<<player_1_name<<" is the winner \n";

              winner = "Player one";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }
        else if (V3 == 'O' && V5 == 'O' && V7 == 'O' )//diagonal left to right check

            {
                cout<<player_1_name<<" is the winner \n";
                winner = "Player one";
                counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }
            if ( winner == "A" && counter_1 == 5 && counter_2 == 4 )
        {
            cout<<" no winner\n";
            break;// use break to break from the game loop and ask the user to start a new game or not
        }


        // taking player 2 input
         cout<<" Enter your move "<<player_2_name<<" (player two) *row then column*: ";
         cin>>player_2_choice;

         /* if player 2 enter a number consisted of more than two number.
          print invalid number and keep taking input from player 2 until player 2 enter a valid choice*/
         while ( player_2_choice / 100 != 0 || player_2_choice / 10 == 0 )
         {
             cout<<"Please insert a valid choice (consisted of two numbers): ";
             cin>>player_2_choice;
         }

         /* if user enter a number not in { 1 , 2 , 3} .
          print invalid choice and keep taking another input until user enter a valid choice... */
         while (player_2_choice != 11 && player_2_choice != 12 && player_2_choice != 13
            &&  player_2_choice != 21 && player_2_choice != 22 && player_2_choice != 23
            &&  player_2_choice != 31 && player_2_choice != 32 && player_2_choice != 33  )
         {
             cout<<"Please insert a valid choice in { 1 , 2 , 3 }: ";
             cin>>player_2_choice;
         }

         /* if player two entered the same input as player one ,
          print invalid choice and take input from player two again.*/
         while (player_2_choice == player_1_choice){

             cout<<"Please insert a choice not in "<<player_1_name<<" choices : ";
             cin>>player_2_choice;
         }

         counter_2 ++ ;// increment counter 2 after the validation of the input

         // checking the place of the input
         if (player_2_choice == 11)
         {
             V1 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output X - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 12)
         {
             V2 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - X -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 13)
         {
             V3 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - X
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 21)
         {
             V4 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     X - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 22)
         {
             V5 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - X -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 23)
         {
             V6 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - X
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - -

         }

         else if (player_2_choice == 31)
         {
             V7 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     X - -

         }

         else if (player_2_choice == 32)
         {
             V8 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - X -

         }

         else if (player_2_choice == 33)
         {
             V9 = 'X' ;

             cout<<" "<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
             cout<<"1"<<" "<<V1<<" "<<V2<<" "<<V3<<endl;// place of the output - - -
             cout<<"2"<<" "<<V4<<" "<<V5<<" "<<V6<<endl;//                     - - -
             cout<<"3"<<" "<<V7<<" "<<V8<<" "<<V9<<endl;//                     - - X

         }

        // winning conditions for player 2


        if (V1 == 'X' && V2 == 'X' && V3 == 'X' )//first row check
            {
                cout<<player_2_name<<" is the winner \n";
                winner = "Player two";
                counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V4 == 'X' && V5 == 'X' && V6 == 'X' )//second row check

            {cout<<player_2_name<<" is the winner \n";
              winner = "Player two";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
              counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
              break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V7 == 'X' && V8 == 'X' && V9 == 'X' )//third row check

            {cout<<player_2_name<<" is the winner \n";
              winner = "Player two";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V1 == 'X' && V4 == 'X' && V7 == 'X' )//first column check

            {cout<<player_2_name<<" is the winner \n";
              winner = "Player two";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V2 == 'X' && V5 == 'X' && V8 == 'X' )//second column check

            {cout<<player_2_name<<" is the winner \n";
               winner = "Player two";
               counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V3 == 'X' && V6 == 'X' && V9 == 'X' )//third column check

            {cout<<player_2_name<<" is the winner \n";
              winner = "Player two";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
                counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
                break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V1 == 'X' && V5 == 'X' && V9 == 'X' )//diagonal right to left check

            {cout<<player_2_name<<" is the winner \n";
              winner = "Player two";
              counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
             counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
             break ;// use break to break from the game loop and ask the user to start a new game or not
            }

        else if (V3 == 'X' && V5 == 'X' && V7 == 'X' )//diagonal left to right check

            {cout<<player_2_name<<" is the winner \n";
             winner = "Player two";
             counter_1 = 5 ;// assigning counter 1 to 5 to make the do while condition false
             counter_2 = 4 ;// assigning counter 2 to 4 to make the do while condition false
             break ;// use break to break from the game loop and ask the user to start a new game or not
            }

            // if there is no winner print no winner
        if ( winner == "A" && counter_1 == 5 && counter_2 == 4 )
        {
            cout<<" no winner\n";
            break;
        }

       }while(counter_1 != 5 || counter_2 != 4 ); // condition if true the game continue
                                                 //if false break the loop and ask user to start a new game or not









    }





}while (choice_1 == 'A' || choice_1 == 'a');// condition to check user's input if 'A' or 'a' continue else break





return 0 ;
}
