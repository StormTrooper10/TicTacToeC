//
//  main.cpp
//  TicTacToe
//
//  Created by Umar Gul on 7/20/21.
//

#include <iostream>
#include<iomanip>


using namespace std;

//compile time constant
#define FG_RED "\033[31m"
#define FG_DEFAULT "\033[39m"

/*
FG_GREEN    = 32,
FG_BLUE     = 34,
FG_DEFAULT  = 39,
BG_RED      = 41,
BG_GREEN    = 42,
BG_BLUE     = 44,
BG_DEFAULT  = 49
*/

//O for p.1
//X for p.2
//game will be user inputted b/w two players

int i,j;
int x,y,x2,y2;
char game_array[3][3];    //'O': Player 1, 'X': Player 2, ' ': Empty
//int coordinates[3][3];    //coordinates entered by the player

int initialize(){

    
    for(i = 0; i < 3 ; i++){
         
         for(j = 0; j < 3; j++){
             
             //player_array[i][j] = '|';
             game_array[i][j] = ' ';
             
         }
    }
    cout<<"initialization success"<<endl;
    
    return 0;
}

int Display_game(){   //for drawing grid
    
    /*cout<<setw(15)<<"|"<<endl;
    cout<<setw(15)<<"|"<<endl;
    cout<<setw(15)<<"|"<<endl;*/
    
    
    
    for(i = 0; i < 3 ; i++){
        
        for(j = 0; j < 3; j++){
            
            //player_array[i][j] = '|';
            
            if (game_array[i][j] == 'X' || game_array[i][j] == 'O' || game_array[i][j] == ' ')
                cout<<setw(4)<<game_array[i][j];
            else {
                if (game_array[i][j] == 'x') {
                    //display with change color
                    cout<<FG_RED<<setw(4)<<"X"<<FG_DEFAULT;
                }
                
                else if (game_array[i][j] == 'o') {
                    //display with change color
                    cout<<FG_RED<<setw(4)<<"O"<<FG_DEFAULT;
                }
            }
            
            if (j < 2)
                cout<<setw(4)<<"|";
                //cout<<setw(4)<<"|";
            
        }
        
        cout<<endl;
        
        cout<<string(25,'-');
        
        cout<<endl;
        
        //game_array[i][j] = '-';
        
        //cout<<setw(4)<<game_array[i][j];
        
        //cout<<endl;
        
    }
        
        
    return 0;
}





//Return int
//1: Player 1 wins
//2: Player 2 wins
//3: Game Draw
//0: Game in progress, no one wins
//
//if (check_winner() == 1) {}
//elseif (check_winner() == 2) {}
//int r = check_winner();
//if (r == 1) ....

int check_winner(){  //declaring winner according to set conditions
   
    //Player 1 check:
    if(game_array[0][0] == 'X' && game_array[0][1] == 'X' && game_array[0][2] == 'X' ) {
        //1st row
        game_array[0][0] = 'x';
        game_array[0][1] = 'x';
        game_array[0][2] = 'x';
        return 1;
    }
    else if(game_array[1][0] == 'X' && game_array[1][1] == 'X' && game_array[1][2] == 'X' ) {
        //2nd row
        game_array[1][0] = 'x';
        game_array[1][1] = 'x';
        game_array[1][2] = 'x';
        return 1;
    }
    else if(game_array[2][0] == 'X' && game_array[2][1] == 'X' && game_array[2][2] == 'X' ) {
        //3rd row
        game_array[2][0] = 'x';
        game_array[2][1] = 'x';
        game_array[2][2] = 'x';
        return 1;
    }
    else if(game_array[0][0] == 'X' && game_array[1][0] == 'X' && game_array[2][0] == 'X' ) {
        //1st col
        game_array[0][0] = 'x';
        game_array[1][0] = 'x';
        game_array[2][0] = 'x';
        return 1;
    }
    else if(game_array[0][1] == 'X' && game_array[1][1] == 'X' && game_array[2][1] == 'X' ) {
        //2nd col
        game_array[0][1] = 'x';
        game_array[1][1] = 'x';
        game_array[2][1] = 'x';
        return 1;
    }
    else if(game_array[0][2] == 'X' && game_array[1][2] == 'X' && game_array[2][2] == 'X' ) {
        //3rd col
        game_array[0][2] = 'x';
        game_array[1][2] = 'x';
        game_array[2][2] = 'x';
        return 1;
    }
    else if(game_array[0][0] == 'X' && game_array[1][1] == 'X' && game_array[2][2] == 'X' ) {
        //Diagnol left to right
        game_array[0][0] = 'x';
        game_array[1][1] = 'x';
        game_array[2][2] = 'x';
        return 1;
    }
    else if(game_array[0][2] == 'X' && game_array[1][1] == 'X' && game_array[2][0] == 'X' ) {
        //Diagnol right to left
        game_array[0][2] = 'x';
        game_array[1][1] = 'x';
        game_array[2][0] = 'x';
        return 1;
    }
    
    //Player 2 check:
    if(game_array[0][0] == 'O' && game_array[0][1] == 'O' && game_array[0][2] == 'O' ) {
        //1st row
        game_array[0][0] = 'o';
        game_array[0][1] = 'o';
        game_array[0][2] = 'o';
        return 2;
    }
    else if(game_array[1][0] == 'O' && game_array[1][1] == 'O' && game_array[1][2] == 'O' ) {
        //2nd row
        game_array[1][0] = 'o';
        game_array[1][1] = 'o';
        game_array[1][2] = 'o';
        return 2;
    }
    else if(game_array[2][0] == 'O' && game_array[2][1] == 'O' && game_array[2][2] == 'O' ) {
        //3rd row
        game_array[2][0] = 'o';
        game_array[2][1] = 'o';
        game_array[2][2] = 'o';
        return 2;
    }
    else if(game_array[0][0] == 'O' && game_array[1][0] == 'O' && game_array[2][0] == 'O' ) {
        //1st col
        game_array[0][0] = 'o';
        game_array[1][0] = 'o';
        game_array[2][0] = 'o';
        return 2;
    }
    else if(game_array[0][1] == 'O' && game_array[1][1] == 'O' && game_array[2][1] == 'O' ) {
        //2nd col
        game_array[0][1] = 'o';
        game_array[1][1] = 'o';
        game_array[2][1] = 'o';
        return 2;
    }
    else if(game_array[0][2] == 'O' && game_array[1][2] == 'O' && game_array[2][2] == 'O' ) {
        //3rd col
        game_array[0][2] = 'o';
        game_array[1][2] = 'o';
        game_array[2][2] = 'o';
        return 2;
    }
    else if(game_array[0][0] == 'O' && game_array[1][1] == 'O' && game_array[2][2] == 'O' ) {
        //Diagnol left to right
        game_array[0][0] = 'o';
        game_array[1][1] = 'o';
        game_array[2][2] = 'o';
        return 2;
    }
    else if(game_array[0][2] == 'O' && game_array[1][1] == 'O' && game_array[2][0] == 'O' ) {
        //Diagnol right to left
        game_array[0][2] = 'o';
        game_array[1][1] = 'o';
        game_array[2][0] = 'o';
        return 2;
    }
    
    else {
        bool check_space= false;
        //loop through the array. Find a single blank. True: Game in progress, False: Game Draw
        for(i = 0; i<3 ; i++){
        		for(j = 0 ; j<3 ; j++){
        		
        			if(game_array[i][j] == ' ' ){
        				
        				check_space = true;
        				
        				
        			
        			}
        			
        			
        				
        			
        			
        		}
        
        }
        
        if(check_space == true){
        
        		return 0;
        
        }
        
        else
        
        		return 3;
       
    }
    
    
    return 0;
 
 }


bool check_grid_location_is_emty(int row, int col) {
    
    if (game_array[row][col] == ' ')
        return true;
    else
        return false;

}



int main() {
    
    int check;
    
    int r, c;
    
    /*
    //printf("\x1b[32m R");
    
    //CPlusPlus version 14
    
    cout<<FG_RED" XYZ";
    
    return 0;
    
    */
    
    cout<<"TIC-TAC-TOE GAME"<<endl;
    cout<<endl;
    
    
    //init game_array: fill space char
    
    initialize();
    
    bool break_loop = false;
    
    int current_player = 1;
    
    Display_game();
    
    while (1) {
        
        cout<<"PLAYER " << current_player << " TURN:"<<endl;
        
        cout<<"Enter row: "; cin>>r;
        
        cout<<"Enter col: "; cin>>c;
        
        if(r<0 || c<0)
            break;
        
        
        if (check_grid_location_is_emty(r, c)) {
            
            if (current_player == 1)
                game_array[r][c] = 'X';
            else if (current_player == 2)
                game_array[r][c] = 'O';
            
            check = check_winner(); //0: Game in progress, 1: Pl 1 won, 2: Pls 2 won, 3: Game Draw
            
            Display_game();
            
            switch (check) {
            
            	case 1:
            	case 2:  
            		cout<<"Player "<<check<<" has won!"<<endl;
            		
            		break;
            	case 3: 
            		cout<<"Game Draw!"<<endl;
            		
            		break;
            }
            
            if (check >= 1) {
            	
            	char confirm;
            	cout<<"Do you want to continue [Y/N]?"<<endl;
            	cin >> confirm;
            	
            	if(confirm == 'Y' || confirm == 'y'){
            	
            		initialize();
            		Display_game();
            		
            		continue;
            	
            	}
            	else if(confirm == 'N' || confirm == 'n'){
            	
            		break;
            	}
            	 
            	
            }
            
            
            //Switch Player
            if (current_player == 1)
                current_player = 2;
            else if (current_player == 2)
                current_player = 1;
            
        }
        
        else {
            
            cout<<"The entered grid location is already filled."<<endl;
            
        }
        
    }
    
    /*
    while(1){
    
        Display_game();
        
        cout<<"Enter coordinates for P.1 or enter a negative number to quit"<<endl;
        
        cin>>x;
        cin>>y;
        
        if(x<0 || y<0){
            
            cout<<"Thank You for Playing! "<<endl;
            return 0;
        }
        
        game_array[x][y] = 'X';
        
        //check_winner();
        check = check_winner();
        
        if(check == true){
            
            break;
        }
    
        Display_game();
        
        
        
        cout<<"Enter coordinates for P.2"<<endl;
        
        cin>>x2;
        cin>>y2;
        
        if(x2<0 || y2<0){
            
            cout<<"Thank You for Playing! "<<endl;
            return 0;
        }
        
        game_array[x2][y2] = 'O';
        
        //check_winner();
        
        check = check_winner();
        
        if(check == true){
            
            Display_game();
            
            break;
        }
    
        
        
        
        
        
    }
    */
    
    cout<<endl<<"Thank You for Playing! "<<endl;
    
    return 0;
}
