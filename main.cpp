/*
	This program will print out triangle by point.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <ncurses.h>
#include <array>

// fuck this function in the past.
class mesh {
	private:
		int is = 0;
	public:			
		int tris[10][3] = {{1,1,1},{1,1,1},{1,1,1}}; 			// Array that cointain arrays of points of single triangle.
							    	 		// Need adjust number of triangles can have in this array.
		 void print(){
			/*
				This function made for curses mode.
				Draw point to point (x -> z -> y).	
			*/
			for (auto i: tris) { 		// Look for triangle in @tris 2D array.
							// Get single points of triangle.
					// Projection.	
					is++;
					for (int x = 0;x <= tris[is][0];x++){
						
					}					
				
			}
		}		
};
int main (int argc, char **argv[]){
	// Initialize
	initscr();
	mesh meshCube;
	
	printw("Hello World !!!\nTriangle.\n%d" ,sizeof(meshCube.tris));
	refresh();
	getch();
	endwin();
	
			
	return 0; 

}

