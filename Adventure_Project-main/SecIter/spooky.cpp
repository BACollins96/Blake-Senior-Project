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
	returner = SecRoom();
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
		        "1) Leave it alone\n2) Look at the mirror\n3) Look at the ball of yarn\n4) Look at the record player\n");
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
	printw("As you follow the shimmering thread as it unravels in front of you, it ends before a door that is similar to the one\n"
		"that was on the room you started in. But as you open it, you feel a cool nightly breeze as the evening sky hangs over head.\n"
		"\nYou are currently in garden for a large manor, though the corridors behind you certainly was not a manor you had ever seen\n"
		"The surroundings are covered in greenery and foliage that only looks somewhat tamed, and a large shed that is obscured by\n"
		"some untrimmed tapiaries. Most of interest, however, is the large wrought iron that leads to a greater courtyard.");
	getch();
return true;
}

//---------------------------------------------------------------------------------------------------------
//_________________________________________________________________________________________________________

bool GhostManor::SecRoom(){
	int axe = 0;
	int fire = 0;
	int machete = 0;
	bool release = false;
	char choice = 0;
	bool shed = false;
	bool fight = false;
	/*bool tape = false;
	bool match = false;
	bool rag = false;*/

	printw("\nAs you go to even test the door, you notice moments before danger strikes that something guards the gate. A bushsize\n"
		"writhing plant holding the door lashes towards you from behind it, it's startling long vines snap out and you quickly\n"
		"stagger out of the way. It tries to reach for you again as you stumble back, reveal that its reach is incredible.\n");

	do{
		printw("It's clear that you will have to somehow deal with the creature, and from a good distance at that. You look around\n"
		"the garden and see the shed as well. If anything had answers for unruly plants, perhaps a groundskeeper's shed might. \n"
		"If you had something on hand, you could certainly use it against the plant now.\n\n"
		"1)Check the surroundings\n2) Go into the shed\n3) Attempt to deal with the plant\n");
		choice = getch();
		clear();
		switch (choice)
		{
		case '1':
			printw("The evening sky hangs above you in this garden for a large manor.\n"
		"The surroundings are covered in greenery and foliage that only looks somewhat tamed, and a large shed that is obscured by\n"
		"some untrimmed tapiaries. Most of interest, however, is the large wrought iron that leads to a greater courtyard, but\n"
		"you know that is guarded by a long limbed plant. It cannot get through the gate, but it is unsafe to get on the other\n"
		"side of the gate as long as it lives,\n");
			getch();
			clear();
			break;

		case '2':
			do{
			shed = false;
			//This is a collection of assembled tools for the player to pick up and then throw at the plant, 
			//there are a variety of things to notice and all of them can be picked up
			//They'll be given 1 after picked up 
			printw("The shed isn't derelict with age, but it certain hasn't been used recently. Interestingly, it seems to contain\n"
			"an interesting variety of outdoor supplies, not just common gardening supplies but motorized gear and fuel. \n"
			"Amongst all the stuff here, you must be able to find something to deal with that plant.\n\n"
			"1)Leave the shed\n");
			if(axe == 0){
				printw("2) Pick up an axe\n");
			}
			if(fire == 0){
				printw("3) Make a firebomb\n");
			}
			if(machete == 0){
				printw("4) Makeshift spear\n");
			}
			choice = getch();
			clear();
			if(choice == '1'){
				shed = true;
				printw("You go back out to the garden to challenge the plant with what you have on hand, or perhaps the coder\n"
				"just coded a way back and you just typed 1 to test this, who knows.\n");
				getch();
				clear();
			}
			else if(choice == '2' && axe == 0){
				axe = 1;
				printw("You can't go wrong with axing the plant a question, though throwing a lumber axe is probably less than\n"
				"useful.\n");
				getch();
				clear();
			}
			else if(choice == '3' && fire == 0){
				fire = 1;
				printw("Ah yes, fire, friend of man, enemy of plant. It takes a bit of work, but you are able to put fuel into\n"
				"and doused a rag too. With some grilling supplies nearby you can find an igniter in the pile. As long as you\n"
				"as long as you don't miss horribly, this should do some damage.\n");
				getch();
				clear();
			}
			else if(choice == '4' && machete == 0){
				machete = 1;
				printw("With the greatest omnitool to exist, ducktape, you manage to put a machete on a rake. It's awkward, \n"
				"but it might be able to get at the limbs of the creature.");
				getch();
				clear();
			}
			else{
				printw("That is not a viable choice, choose another.\n");
			}

			//shed = true;
			}while(shed == false);
			break;

		case '3':
			do{
			fight = false;
			//this one is simple, anything used here that doesn't work changes its designation to '2' to  make it utterly unavailable
			//this will occur for machete and axe, but fire is the answer and will trigger release.
			//1 is an available option from the below dialogue, 0 and 2 are not.
			if(fire != 0 && machete != 0 && axe != 0){
				printw("The wriggling plant writhes limply, flinging its limbs towards you with force. It cannot get through the gate\n"
				"but it clearly poses a threat even if you tried to go around it. It must clearly be defeated somehow for you to get\n"
				"through.\n\n"
			"1)Leave the plant alone\n");
			if(axe == 1){
				printw("2) Hurl the axe\n");
			}
			if(fire == 1){
				printw("3) Toss a firebomb\n");
			}
			if(machete == 1){
				printw("4) Swing the spear\n");
			}
			choice = getch();
			clear();
			if(choice == '1'){
				fight = true;
				printw("You decide to leave the plant alone for now, either out of materials, or unprepared.\n");
				getch();
				clear();
			}
			else if(choice == '2' && axe == 1){
				axe = 2;
				printw("You can in fact go wrong with axing the plant a question, especially if there is an iron gate between\n"
				"the plant and you. It makes a terrible clatter of ringing wood and metal and lies just in front of the gate.\n");
				getch();
				clear();
			}
			else if(choice == '3' && fire == 1){
				fire = 2;
				fight = true;
				release = true;
				printw("Ah yes, fire, friend of man, enemy of plant. It splashes across the gate but enough fuel gets onto the\n"
				"plant to catch it alight. You quite easily set the plant aflame, and it flails trying to extinguish itself\n"
				"but cannot properly smother the flame before it slowly goes still and withers. You wait for a sometime for\n"
				"the bush to extenguish itself, not feeling safe to go close to it. As night falls, you grab a lantern from\n"
				"the shed, and step out into the greater courtyard.\n");
				getch();
				clear();
			}
			else if(choice == '4' && machete == 1){
				machete = 2;
				printw("Apperently, a machete on gardening tool is not very nimble and the creature is actually smart enough to \n"
				"clear out of the way of the clumsy blade before slapping it out of your hand in irritation. Surprising, given\n"
				"that your opponent is actual vegetation.\n");
				getch();
				clear();
			}
			else{
				printw("That is not a viable choice, choose another.\n");
			}
			}
			else{
				printw("You have nothing to fight the plant with other than sheer bravado, and that'll get you killed.\n"
				"You leave the plant for now.\n");
				getch();
				clear();
				fight = true;
			}
			//fight = true;
			}while(fight == false);
			break;
		
		default:
			printw("That is not a viable option, choose another.\n");
			break;
		}

		
		//release = true;
	}while(release == false);

return true;
}

#endif
