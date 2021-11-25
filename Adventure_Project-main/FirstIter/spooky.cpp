#ifdef SPOOK

bool GhostManor::introduction(){
	initscr();
	noecho();
	printw("Please press a button to continue...>");
	getch();
	printw("\nYou have successfully advanced a line. To progress text, you shall press a single key.");
	printw("\nFor the most part, these keys shall be numbered, from 1 to 9. As a test, what is 2+2=?\n");
	char num = getch();
	clear();
	if(num == '4'){
		printw("Well done\n");
	}
	else{
		printw("I find myself disappointed\n");
	}
	getch();
	printw("Now, let us begin this story...\n");
	getch();
	clear();
	bool returner = FirstRoom();
	endwin();
	return returner;
}

bool GhostManor::FirstRoom(){
	/*start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(1));*/
	bool release = false;
	bool yarn = false;
	bool loop = false;
	bool inloop = false;
	bool music = false;
	char select;
	
	printw("You awaken to room made of dark wood, your body aching from a reclining position in a teal colored chair. \n");
		
	do{
	printw("The room is small and dusty, sparsely decorated with only a bookshelf and a wide dresser that is covered \n"
		"with various odds and end, knick knacks and the like. The only thing of obvious significance is a record \n"
		"player. You can see a collection of records on one of the shelves of the bookshelf. There is only one exit, \n"
		"a large tan colored wooden door. What shall you do?\n\n"
		"1) Test the door\n2) Check the bookshelf\n3) Check the dresser\n4) Check the top of the dresser\n");
		select = getch();
		clear();
	if(select == '1'){
		do{
		loop = false;
	printw("You open the door with no issue, the knob turns easily, but as you look out the door, you are greeted\n"
		"with the sight of labyrinthian halls and corridors of off-white cobbled stone. What shall you do?\n\n"
		"1) Leave this for now \n2)Brave the halls\n");
		if(yarn == true){printw("3) Drop the ball of yarn\n");}
		select = getch();
		clear();
		if(select == '1'){
			loop = true;
			clear();
		}
		else if(select == '2'){
			printw("You attempt to brave the twisting and winding hallways to find a way out, but no matter what,\n"
				"the twisting halls simply deposit you back to the room you had started this adventure in. You\n"
				"feel you cannot bypass this challenge without some sort of tool.\n");
			getch();
			clear();
		}
		else if(select == '3' && yarn == true){
			release = true;
			loop = true;
			printw("As you drop the ball of yarn, it tumbles out of your hand and hits the floor, and immediately\n"
				"pivots and winds down the halls. You look down towards the length of shimmering string by your\n"
				"feet and begin to follow it, hoping it leads you out of this place.\n");
			getch();
			clear();
		}
		else{
        	        printw("That is not a viable choice, make another\n");
	        }
		}while(loop == false);
	}
	else if(select == '2'){
		do{
		loop = false;
		printw("You approach the bookshelf, the smell of old paper washes over you. Many books and records are\n" 
		"unlabelled, ruined or are simply unintellegible. You manage to find a few things of interest from the books and\n" 
		"the records. Which would you like to look at?\n\n"
		"1) Leave it alone\n2) Book of Greek Tales\n3) Journal entries on strange happenings\n");
		if(music == false){printw("4) A record titled 'Music of Erich Zann\n");}
		select = getch();
                clear();
                if(select == '1'){
                        loop = true;
                        clear();
                }
                else if(select == '2'){
                        printw("As you pop open the dusty old tome and begin to read, a number of tales and fables\n"
			       "are marred and ruined. However, one is relatively intact, and that is the story of\n"
			       "the story of Theseus and the Minotaur of Crete, and how the hero recieved a length of\n"
			       "glittering thread by Ariadne, a Cretan princess who fell in love with him. Theseus\n"
			       "uses the thread to navigate the labyrinth and slay the Minotaur. He then took Ariadne\n"
			       "to Athens, and married her.");
                        getch();
                        clear();
                }
                else if(select == '3'){
                        printw("You begin to flip through the journal, written by someone who must have been a madman.\n"
			       "You notice an article reporting of an interview of a man who went to a university in\n"
			       "France that talked about a cheap apartment building named 'Rue d'Aussiel' and one of\n"
			       "the inhabitants of that building, a mute musician by the name of Erich Zann, and his\n"
			       "music that could ward away unspeakable evils and otherworldly horrors, and even the\n"
			       "darkness itself. It's enthralling, but it can only be a tall tale, right?\n");
                        getch();
                        clear();
                }
		else if(select == '4' && music == false){
			music = true;
                        printw("Why not, right? Without much thought, you remove the record from the sleeve and place\n"
			       "it on the record player before starting it. As the mournful violin playing a strange melody\n"
			       "begins to fill the room, you figure it is better than the claustrophobic silence.\n");
                        getch();
                        clear();
                }
                else{
                        printw("That is not a viable choice, make another\n");
                }
		}while(loop == false);
	}
	else if(select == '3'){
		printw("You check the various cabinets and drawers on the dresser, but all are only filled with the\n"
		       "smell of dust and aged wood and little else.");
		getch();
                clear();
        }
	else if(select == '4'){
		do{
                loop = false;
		if(yarn == false){
		printw("The top of the dresser is has only a few items of note, chief among them is a large handmirror,\n"
		       "a ball of string and the record player sits there as well. What do you do?\n\n"
		        "1) Leave it alone\n2)Look at the mirror\n3) Look at the ball of yarn\n4) Look at the record player\n");
		select = getch();
                clear();
		
                if(select == '1'){
                        loop = true;
                        clear();
                }
                else if(select == '2'){
                        printw("As you stare deep into the hand mirror, you see a great and hideous beast without equal!\n"
                                "A mere husk of a human being, void of hope and joy, a grotesque parody of what can be\n"
				"described as human. You then realize that the mirror just shows yourself, and set it\n"
				"down.");
                        getch();
                        clear();
                }
                else if(select == '3'){
                        yarn = true;
                        printw("You grab the golden ball of yarn off the table. Something tells you that it could be useful\n"
                                "in getting out of here. You pocket it for later.\n");
                        getch();
                        clear();
                }
		else if(select == '4' && music == true){
                        inloop = false;
                        do{
                        printw("The record plays a strange and melancholy violin tune that breaks the silence.\n"
                                "What do you want to do?\n1) Leave it alone\n2) Stop the music\n");

                        select = getch();
                        clear();
                        if(select == '1'){
                        inloop = true;
                        printw("The record is left alone.\n");

                        getch();
                        clear();
                        }
                        else if(select == '2'){
                        inloop = true;
                        music = false;
                        printw("The record is removed and placed back on the shelf.\n");
                        getch();
                        clear();
                        }
                        else{
                        printw("That is not a viable choice, make another\n");
                        }
                        }while(inloop == false);

                }
		else if(select == '4'){
		printw("You look at the record player. It is old, but it still works fine. Just needs something to play.\n");
                        getch();
                        clear();
		}
                else{
                        printw("That is not a viable choice, make another\n");
                }
		}
		else{
                printw("The top of the dresser is has only a few items of note, chief among them is a large handmirror,\n"
                       "and the record player sits there as well. What will you do?\n\n"
			"1) Leave it alone\n2)Look at the mirror\n3) Look at the record player\n");
		select = getch();
                clear();

                if(select == '1'){
                        loop = true;
                        clear();
                }
                else if(select == '2'){
                        printw("As you stare deep into the hand mirror, you see a great and hideous beast without equal!\n"
                                "A mere husk of a human being, void of hope and joy, a grotesque parody of what can be\n"
                                "described as human. You then realize that the mirror just shows yourself, and set it\n"
                                "down.");
			getch();
                        clear();
                }
                else if(select == '3' && music == true){
                        inloop = false;
			do{
			printw("The record plays a strange and melancholy violin tune that breaks the silence.\n"
				"What do you want to do?\n1) Leave it alone\n2) Stop the music\n");
                        
			select = getch();
                        clear();
			if(select == '1'){
			inloop = true;
			printw("The record is left alone.\n");
                        getch();
                        clear();
	                }
        	        else if(select == '2'){
			inloop = true;
			music = false;
                        printw("The record is removed and placed back on the shelf.\n");
			getch();
                        clear();
                	}
			else{
                	printw("That is not a viable choice, make another\n");
       			}
			}while(inloop == false);
                }
		else if(select == '3'){
                        printw("You look at the record player. It is old, but it still works fine. Just needs something to play.\n");
					
                        getch();
                        clear();
                }
                else{
                        printw("That is not a viable choice, make another\n");
                }
                }
                }while(loop == false);
        }
	else{
		printw("That is not a viable choice, make another\n");
	}

	//release = true;
	}while(release == false);
	printw("That is room 1, I hope you enjoyed.");
	getch();
return true;
}

#endif
