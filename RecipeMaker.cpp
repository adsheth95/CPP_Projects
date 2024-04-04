#include <iostream>
#include <fstream>

using namespace std;

class recipeMaker
{
	public:
		int user_choice;
		int menu_choice;
		
		void mainMenu()
		{
			cout<<"Please pick between one of the following options. Enter the choice number: "<<endl;
			cout<<"1. Get Recipe\n2. See Recent Ingredient List\n3. Quit"<<endl;
			cin>>menu_choice;
			
			switch(menu_choice)
			{
				case 1: mealType(); break;
				case 2: recIng(); break;
				case 3: exit(0); break;
				default: cout<<"Please enter a valid choice! "<<endl; restart(); break;
			}
		}
		
		
		void mealType()
		{
			cout<<"Please pick between one of the following meal types. Enter the choice number: "<<endl;
			cout<<"1. Breakfast\n2. Lunch\n3. Dinner"<<endl;
			cin>>user_choice;
			
			switch(user_choice)
			{
				case 1: breakfast(); break;
				case 2: lunch(); break;
				case 3: dinner(); break;
				default: cout<<"Invalid choice!"<<endl; restart(); break;
			}
		}
		
	//	E:\\ingredients 
		void breakfast()
		{
			int recipe_choice;
			cout<<"Please pick from one of the following recipes. Enter the choice number: "<<endl;
			cout<<"1. Rava Upma\n2. Aloo Paratha\n3. Egg Bhurji\n4. Poha"<<endl;
			cin>>recipe_choice;
			cout<<endl<<endl;
			
			switch(recipe_choice)
			{
				case 1: RavaUpma(); break;
				case 2: AlooParatha(); break;
				case 3: eggBhurji(); break;
				case 4: Poha(); break;
				default: cout<<"Invalid choice!"<<endl; restart(); break;
			}
		}
		
		void lunch()
		{
			int recipe_choice;
			cout<<"Please pick from one of the following recipes. Enter the choice number: "<<endl;
			cout<<"1. Kathi Roll\n2. Aloo Gobi\n3. Dal Makhani\n4. Khichdi"<<endl;
			cin>>recipe_choice;
			cout<<endl<<endl;
		
			switch(recipe_choice)
			{
				case 1: KathiRoll(); break;
				case 2: AlooGobi(); break;
				case 3: DalMakhani(); break;
				case 4: Khichdi(); break;
				default: cout<<"Invalid choice!"<<endl; restart(); break;
			}
		}
		
		void dinner()
		{
			int recipe_choice;
			cout<<"Please pick from one of the following recipes. Enter the choice number: "<<endl;
			cout<<"1. Rajma Chawal\n2. Paneer Butter Masala\n3. Dal Tadka\n4. Matar Paneer"<<endl;
			cin>>recipe_choice;
			cout<<endl<<endl;
			
			switch(recipe_choice)
			{
				case 1: RajmaChawal(); break;
				case 2: PaneerButterMasala(); break;
				case 3: DalTadka(); break;
				case 4: MatarPaneer(); break;
				default: cout<<"Invalid choice!"<<endl; restart(); break;
			}
		}
			
			
			
			//breakfast
			//https://www.indianhealthyrecipes.com/upma-recipe-how-to-make-upma/#wprm-recipe-container-37748
			void RavaUpma()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[17] = {"1 cup Rava", "2 tbsp Oil (or ghee)", "1/2 tsp mustard seeds", "1/2 tsp jeera", "1 tsp urad dal", "1+1/2 tsp chana dal", "2 tbsp peanuts", "8-12 cashews", "1 sprig curry leaves", "pinch of hing", "1 small onion (chopped or sliced thinly)", "2 green chili(slit)", "1/2 inch ginger (1/2 tsp chopped finely)", "3 cups water", "salt to taste", "lemon juice to taste"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Rava Upma: "<<endl<<endl;
				for(int i = 0; i < 17; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<endl<<endl;
				cout<<"Preparation: "<<endl;
				cout<<"1: Add rava to a pan and dry roast on a low to medium heat until crunchy. Keep stirring often for even roasting."<<endl;
				cout<<"2: Do not brown the rava as the flavor of upma changes. Transfer to a bowl. Set aside to cool."<<endl;
				cout<<"3: Chop onion, green chilies and ginger."<<endl;
				cout<<"4: On medium heat fry peanuts in a tsp of oil until golden and aromatic. Set aside."<<endl;
				cout<<"5: Pour oil to a hot pan. Add mustard seeds, jeera, urad dal and chana dal. Fry until the dal turns light golden, add cashews."<<endl;
				cout<<"6: Fry them stirring until the dal and cashews turn aromatic and light brown but not burnt."<<endl;
				cout<<"7: Add hing, slit green chilies, chopped ginger, and curry leaves. Saute for one minute, add onions and fry until transparent."<<endl;
				cout<<"8: Pour water and add salt. Mix and taste test the water. Do not make too salty."<<endl;
				cout<<"9: Bring the water to a rolling boil. Set flame to low."<<endl;
				cout<<"10: With one hand, pour rava in slowly, while stiring the rava with the other hand. Incoporate the entire rava into the water."<<endl;
				cout<<"11: stir everything to check for lumps. If any, then break up the lumps."<<endl;
				cout<<"12: Cover and cook on the lowest flame until all the water is absorbed."<<endl;
				cout<<"13: Open lid and stir once. Mix in ghee if desired."<<endl;
				cout<<"14: Bring off flame. Cover and let rest for 5 minutes."<<endl;
				cout<<"15: Garnish with roasted/fried peanuts and lemon juice. Serve"<<endl;
				file.close();
			}
			
			//https://www.recipetineats.com/aloo-paratha-indian-potato-stuffed-flatbread/#wprm-recipe-container-25866
			void AlooParatha()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[12] = {"2+1/2 cups plain white flour", "1+1/2 tsp salt", "1 cup water", "2 tsp cooking oil", "1+1/2 cups potatoes (mashed)", "1/2 cups shallots(chopped)", "2 tbsp cilantro(roughly chopped)", "1/2 tsp ginger (grated)", "1 tsp Garam Masala", "1 tsp Ajawin seeds", "1/4 tsp chili powder"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Aloo Paratha: "<<endl<<endl;
				for(int i = 0; i < 12; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<endl<<endl;
				cout<<"Preparation: "<<endl;
				cout<<"1: Place the flour, water, and 1 tsp of salt in a bowl. Use a table knife to mix the ingredients together, then use your hands."<<endl;
				cout<<"2: Once the dough is sort of formed, turn it out onto a work surface and knead it 60 times. It should be smooth and elastic, not sticky or crumbly."<<endl;
				cout<<"3: Form the dough into a ball, cover with cling wrap and set aside for at least 20 minutes (up to a few hours). Do not refrigerate."<<endl;
				cout<<"4: Meanwhile, make the Filling. Place all Filling ingredients into a bowl and mix to combine."<<endl;
				cout<<"5: Preheat oven to very low (to keep Parathas warm because you can only cook one at a time)."<<endl;
				cout<<"6: Cut the dough into 4 pieces with a knife."<<endl;
				cout<<"7: Take one ball and use a rolling pin to roll it out to desired size."<<endl;
				cout<<"8: Place 1/3 cup of the Filling into the middle of the rolled out dough."<<endl;
				cout<<"9: Gather the edges of the dough to enclose the Filling. Remove as much air as possible from inside then pinch to seal."<<endl;
				cout<<"10: Flatten the ball slightly and shape the flattened disc into a circle using your hands."<<endl;
				cout<<"11: Turn the dough over so the 'sealed' side is facing down. Use a rolling pin to roll it out to about 1 1/2 cm thickness. Repeat with remaining dough."<<endl;
				cout<<"12: Heat 1 tbsp of oil in a non stick fry pan over medium heat."<<endl;
				cout<<"13: Place one Paratha into the fry pan and cook the first side for 1 minute 45 seconds. Check if it is ready to turn - the underside should be golden brown."<<endl;
				cout<<"14: Turn the Paratha over and cook the other side for 1 minute 30 seconds."<<endl;
				cout<<"15: Remove from fry pan onto a wire rack and place into a low oven to keep warm while you cook the remaining Parathas."<<endl;
				cout<<"16: Add a small drizzle of the remaining oil into the pan. Proceed to cook the remaining Parathas."<<endl;
				cout<<"17: Cut into 4 pieces and serve immediately. It can be served with chutney or yoghurt on the side. I find that the Filling has so much flavour that it doesn't need anything on the side."<<endl;
				file.close();
			}
			
			//https://pipingpotcurry.com/poha-recipe/#wprm-recipe-container-16480
			void Poha()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[14] = {"2+1/2 cup Poha", "2 tbsp cooking oil", "2 tbsp peanuts", "1/2 tsp mustard seeds", "1/2 tsp jeera", "10-12 curry leaves", "2 green chili(diced)", "3/4 cup onions(diced)", "3/4 cup potato (diced)", "1/4 tsp haldi powder", "salt to taste", "sugar to taste", "1 tbsp lime juice", "1 tbsp coriander(chopped)"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Poha: "<<endl<<endl;
				for(int i = 0; i < 14; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<endl<<endl;
				cout<<"Preparation: "<<endl;
				cout<<"1: Add poha to a strainer and rinse under running water until the water runs clear. Make sure all the poha is wet. Let it rest while you sauté the other ingredients."<<endl;
				cout<<"2: Heat a heavy bottom pan on medium-high heat. Add oil to the pan and let it heat."<<endl;
				cout<<"3: Add the peanuts and saute for 1-2 minutes while stirring continuously. When they are roasted, take out in a plate and set aside."<<endl;
				cout<<"4: Add jeera and mustard seeds to the oil and let them sizzle."<<endl;
				cout<<"5: Add the curry leaves and green chili. Then, add the diced onions and stir well. Saute for a minute."<<endl;
				cout<<"6: Add the diced potatoes. Mix well with the onions. Now cover the pan with a lid and cook on medium-low heat until the potatoes are cooked completely. Open the lid and stir. Break a potato piece with the spatula to ensure it is cooked well."<<endl;
				cout<<"7: Add haldi, salt, sugar, and poha to the pan. Mix gently until all the poha gets the yellow haldi color. Change to low heat and cover the pan for 2 minutes."<<endl;
				cout<<"8: Turn off the heat and open the lid. Sprinkle lime juice, add back the roasted peanuts."<<endl;
				cout<<"9: You can taste test and adjust salt as needed. Garnish with coriander and lime."<<endl;
				file.close();
			}
			
			//https://gypsyplate.com/egg-bhurji/#recipe-card
			void eggBhurji()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[13] = {"2-3 eggs", "salt to taste", "2 tbsp cooking oil", "1/2 tsp jeera", "3/4 cup onion(finely chopped)", "1 green chili(chopped)", "1/2 inch ginger and 2 garlic cloves(minced finely and mixed)", "1 tsp garam masala", "3/4 tsp red chili powder", "1/8 tsp haldi", "2 tbsp coriander", "1 tomato(chopped finely)", "1/4 capsicum"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Egg Bhurji: "<<endl<<endl;
				for(int i = 0; i < 13; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<endl<<endl;
				cout<<"Preparation: "<<endl;
				cout<<"1: Chop onions and tomatoes finely. Chop green chili and cube capsicum."<<endl;
				cout<<"2: Rinse a bowl and break the eggs into the bowl."<<endl;
				cout<<"3: Add salt and haldi. Beat the eggs until frothy and set aside."<<endl;
				cout<<"4: Heat oil in a pan. Add jeera and curry leaves."<<endl;
				cout<<"5: When they begin to splutter, add onions, chilies and saute until the onions turn golden."<<endl;
				cout<<"6: Add ginger and garlic. Fry till you get a nice aroma."<<endl;
				cout<<"7: Add tomatoes and saute until they are soft and completely mushy. Add capsicum and fry until they are partially soft."<<endl;
				cout<<"8: Pour the eggs anbd scramble lightly. Keep cooking, stirring and scramble again."<<endl;
				cout<<"9: When the eggs are soft cooked, sprinkle garam masala powder and red chili powder all over. Stir well and continue to fry."<<endl;
				cout<<"10: Taste test and add more salt and red chili powder if needed"<<endl;
				cout<<"11: When the eggs are fully cooked, turn off the stove. Garnish egg bhurji with coriander. Squeeze some lemon juice as well."<<endl;
				cout<<"12: Serve alone or with pav"<<endl;
				file.close();
			}
			
			//Lunch
			//https://www.indianhealthyrecipes.com/kathi-rolls-recipe-make-kati-rolls/#wprm-recipe-container-37614
			void KathiRoll()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[18] = {"1+1/4 cup atta", "salt to taste", "1/3 cup water", "1+1/4 tbsp cooking oil", "1 medium potato(cubed)", "1/2 cup peas","3/4 cup capsicum", "1/2 tsp jeera", "1/4 tsp mustard seeds", "1 pinch hing", "3/4 cup onion(thinly sliced)", "3/4 tsp ginger garlic paste", "3/4 tsp coriander powder", "1/2 tsp chili powder", "1/2 tsp garam masala", "1/8 tsp haldi", "2 tbsp coriander(chopped)", "2-3 tbsp green chutney"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Egg Bhurji: "<<endl<<endl;
				for(int i = 0; i < 13; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Steam or boil potato until just done without making mushy."<<endl;
				cout<<"2: Add atta to a mixing bowl along with salt and oil. Pour water just as needed and make a soft dough. Knead well until it becomes soft and pilable. Cover and set aside for 20 minues."<<endl;
				cout<<"3: Divide the dough inot 4 to 5 equal parts. Lightly sprinkle the rolling area and the dough ball with flour. Using a rolling pin, roll the ball evenly into a round layer."<<endl;
				cout<<"4: Heat a tawa on a medium high heat. Gently transfer the roti to the tawa. When you see tiny bubbles, flip it and press down gently."<<endl;
				cout<<"5: Cook on both sides, flipping until both sides are cooked with golden to brown spots. Add ghee or oil."<<endl;
				cout<<"6: Spread a kitchen cloth or tissue over a plate. Transfer the roti to it. Make all the rotis and stack them in a plate."<<endl;
				cout<<"7: Heat a pan with oil. Allow mustard and jeera to crackle. Add hing, onions and a pinch of salt. Saute until onions turn golden."<<endl;
				cout<<"8: Fry ginger garlic paste until the raw smells goes off. Add all the veggies. Add tumeric, chili powder, coriander powder, garam masala and salt to taste."<<endl;
				cout<<"9: Saute for 3 minutes. Cover and cook on a low flame until the veggies are cooked to your liking. Set aside to cool."<<endl;
				cout<<"10: Smear chutney over the rotis."<<endl;
				cout<<"11: Add a sufficient amount of cooked veggies to one side of the roti. Begin to roll it tightly and prick a sandwich pick to hold in shape."<<endl;
				cout<<"12: Serve with chutney or any other sauce of your choice on the side."<<endl;
				file.close();
			}
			
			//https://www.indianhealthyrecipes.com/aloo-gobi-recipe/#wprm-recipe-container-37708
			void AlooGobi()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[18] = {"2 cups medium potatoes", "2 cups cauliflower florets(chopped)", "3/4 cups onions(chopped finely)", "1/4 cups tomatoes(chopped finely)", "1 tbsp ginger garlic minced", "1 green chili(chopped)", "2 tbsp coriander leaves(chopped)", "salt to taste", "2-3 tbsp cooking oil", "lemon juice to serve", "1/2 tsp jeera", "1+1/4 tsp Kashmiri chili powder", "1/4 tsp haldi", "1+1/2 tsp garam masala", "1 tsp coriander powder", "3/4 tsp jeera powder", "1 tbsp kasuri methi", "1 tsp amchur"};
				cout<<"\nGood choice! Here are the ingredients you will need to make Aloo Gobi: "<<endl<<endl;
				for(int i = 0; i < 18; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Chop cauliflower. Add them to slightly hot water and set aside for 3-4 minutes"<<endl;
				cout<<"2: Drain the water and rinse them well. Drain them completely"<<endl;
				cout<<"3: Cube potatoes or slice them. Keep them immersed in a bowl of water until used. "<<endl;
				cout<<"4: Mince ginger and garlic. Keep aside."<<endl;
				cout<<"5: Heat oil in a pan and add jeera. When they sizzle, add ginger garlic and saute for around 30 seconds."<<endl;
				cout<<"6: Then add the onions and stir fry until transparent."<<endl;
				cout<<"7: Add the potatoes and green chili. Stir fry for 2-3 minutes. Cover and cook on a low medium haet until they are half done."<<endl;
				cout<<"8: Keep stirring in between and cook covered."<<endl;
				cout<<"9: When they are slightly tender but still undercooked, add the cauliflower and stir fry for 3 minutes."<<endl;
				cout<<"10: Add red chili powder, haldi, jeera powder, garam masala, and coriander powder."<<endl;
				cout<<"11: Mix well. Sprinkle 2-3 tbsp water all over the aloo gobi or across the sides of the pan and mix."<<endl;
				cout<<"12: Cook covered, stirring every few minutes, until both potatoes and cauliflower are almost fork tender. Add salt and continue to cook covered on a low flame until potatoes are soft and fully cooked."<<endl;
				cout<<"13: The veggies will release moisture at this stage and cook quickly. Keep an eye not to over cook the cauliflower. They should remain slightly crunchy yet cooked."<<endl;
				cout<<"14: Add tomatoes and kasuri methi. Fry on a medium to high flame until the raw smell of tomatoes goes away."<<endl;
				cout<<"15: If needed add a little oil at this stage."<<endl;
				cout<<"16: Sprinkle amchur. Finally garnish with coriander leaves. Sprinkle some lemon juice and serve with rice, roti or any bread."<<endl;
				file.close();
			}
			
			//https://hebbarskitchen.com/punjabi-dal-makhani-recipe/#google_vignette
			void DalMakhani()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[17] = {"3/4 cup whole black urud dal", "1/4 cup rajma", "1-2 tbsp ghee", "1 bay leaf", "2 large tomatoes(finely chopped)", "1 tsp ginger-garlic paste", "1/2 tsp haldi", "1 large onion(finely chopped)", "1 tsp coriander powder", "1/2 tsp jeera", "1 tsp kasmiri red chili powder", "salt to taste", "5 cups water", "2 tbsp fresh cream", "few coriander leaves(chopped)", "large pinch of hing", "1/4 tsp garam masala"};
				cout<<"Good choice! Here are the ingredients you will need to make Dal Makhani: "<<endl<<endl;
				for(int i = 0; i < 15; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Take 1 cup of black urad dal and ¼ cup of rajma in a large bowl."<<endl;
				cout<<"2: Add enough water and soak overnight or atleast for 8 hours."<<endl;
				cout<<"3: Rinse the dal in a running water and transfer into a cooker. add 3 cups of water."<<endl;
				cout<<"4: Also add some salt to taste."<<endl;
				cout<<"5: Close the lid and pressure cook on medium flame for 5 whistles. or till the dals are cooked completely."<<endl;
				cout<<"6: In a large kadai add a tbsp of ghee and saute bay leaf for a minute. or till they turn fragrant."<<endl;
				cout<<"7: Then add finely chopped onions and saute till they change in colour."<<endl;
				cout<<"8: Once onions are done, add ginger-garlic paste. saute till raw smell disappears completely."<<endl;
				cout<<"9: Now add chopped tomatoes and cook till they are soft."<<endl;
				cout<<"10: Add haldi, coriander powder, jeera, chili powder and salt to taste. Cook the masalas for a minute."<<endl;
				cout<<"11: Once the masalas start releasing oil from sides, add cooked dal and give a good stir."<<endl;
				cout<<"12: Adjust the consistency by adding 1 cup of water or as required."<<endl;
				cout<<"13: Boil for 15 minutes or more till the dal absorbs flavour and turns thick."<<endl;
				cout<<"14: To get the creamy texture, add 2 tbsp of fresh cream. you can also skip or increase the amount of cream according to your preference."<<endl;
				cout<<"15: Top up with fresh coriander leaves."<<endl;
				cout<<"16: Heat tadka pan, and add a tbsp or more ghee. once it begins to melts, add hing."<<endl;
				cout<<"17: Also add chilli powder and garam masala (optional). fry for 2-3 seconds."<<endl;
				cout<<"18: And immediately pour the tempering over dal makhani. give a good mix to get bright colour and flavour."<<endl;
				cout<<"19: Serve dal makhani with jeera rice or garlic naan."<<endl;
				file.close();
			}
			
			//https://hebbarskitchen.com/moong-dal-khichdi-recipe/
			void Khichdi()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[15] = {"1/2 cup rice", "1/2 cup moong dal", "2+1/2 tbsp ghee", "1/2 tsp haldi", "1 tsp salt", "4+1/4 cup water", "1 tsp jeera", "1 bay leaf", "pinch of hing", "1 onion(finely chopped)", "1 tsp ginger garlic paste", "1 tomato(finely chopped)", "1 tsp chili powder", "1/2 tsp garam masala", "2 tbsp coriander(finely chopped)"};
				cout<<"Good choice! Here are the ingredients you will need to make Khichdi: "<<endl<<endl;
				for(int i = 0; i < 15; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Firstly, in a large bowl rinse and soak ½ cup rice, ½ cup moong dal for 10 minutes."<<endl;
				cout<<"2: In a cooker heat 1 tsp ghee and add soaked dal and rice."<<endl;
				cout<<"3: Saute for 2 minutes, or until the dal turns aromatic."<<endl;
				cout<<"4: Now add ¼ tsp haldi, ½ tsp salt and 3¼ cup water. mix well."<<endl;
				cout<<"5: Cover and pressure cook for 5 minutes."<<endl;
				cout<<"6: In a large kadai heat 2 tbsp ghee. add 1 tsp jeera, 1 bay leaf and pinch hing."<<endl;
				cout<<"7: Saute on low flame until the spices turn aromatic."<<endl;
				cout<<"8: Now add 1 onion, 1 tsp ginger garlic paste and saute well."<<endl;
				cout<<"9: Further, add 1 tomato and saute until the tomato turns soft and mushy."<<endl;
				cout<<"10: Keep the flame on low add ¼ tsp haldi, 1 tsp chilli powder, ½ tsp garam masala and ½ tsp salt."<<endl;
				cout<<"11: Saute for 2 minutes or until the spices turn aromatic."<<endl;
				cout<<"12: Now add cooked rice and dal."<<endl;
				cout<<"13: Also, add 1 cup water and mix well adjusting consistency as required."<<endl;
				cout<<"14: Cover and simmer for 5 minutes or until the flavours are absorbed well."<<endl;
				cout<<"15: Finally, add 2 tbsp coriander and enjoy dal khichdi with pickle and curd."<<endl;
				file.close();
			}
			
			
			
			//dinner
			//https://www.vegrecipesofindia.com/rajma-masala-recipe-restaurant-style/#wprm-recipe-container-139551
			void RajmaChawal()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients [20] = {"1 cup rajma", "4 cups water", "Water for soaking rajma", "4 garlic cloves", "1 inch ginger", "2 green chilies", "2 tbsp butter", "1/2 tsp jeera", "1 cup onions(finely chopped)", "1 cup tomatoes(finely chopped)", "1 tsp coriander powder", "1/2 tsp red chili powder", "1/4 tsp haldi", "1 pinch hing", "1/2 tsp garam masala", "2 cups rajma stock or fresh water", "salt as required", "1 tsp kasuri methi(crushed)", "3 tbsp low fat cream", "2 tbsp coriander leaves(chopped)"};
				cout<<"Good choice! Here are the ingredients you will need to make Rajma Chawal: "<<endl<<endl;
				for(int i = 0; i < 20; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Rinse and soak the rajma in enough water overnight or for 8 to 9 hours."<<endl;
				cout<<"2: Next day, discard the water and rinse the beans again in fresh water for a couple of times."<<endl;
				cout<<"3: Drain all the water."<<endl;
				cout<<"4: In a pressure cooker, take both the soaked rajma and water."<<endl;
				cout<<"5: Pressure cook on a medium to high flame for 15 to 20 minutes."<<endl;
				cout<<"6: When the rajma is cooking, you can chop the onions, tomatoes etc."<<endl;
				cout<<"7: Crush the ginger, garlic and green chillies to a fine or semi-fine texture. Set aside"<<endl;
				cout<<"8: When the pressure settles down on its own, open the lid."<<endl;
				cout<<"9: Check if the rajma beans are cooked or not by taking a bite or pressing a few beans."<<endl;
				cout<<"10: If the beans are cooked well set aside or drain the beans."<<endl;
				cout<<"11: If the rajma are not cooked completely, then pressure cook again adding some water if required for some minutes."<<endl;
				cout<<"12: Heat oil + butter in another pot or pan on a low heat. Add jeera first and let them crackle & get browned."<<endl;
				cout<<"13: Then add onions and sauté them till they golden browned on a medium-low to medium heat. "<<endl;
				cout<<"14: Take care not to burn them as this will give bitter tones in the curry."<<endl;
				cout<<"15: Keep on stirring the onions while sauteing them, for uniform cooking and also so that they don't get burnt."<<endl;
				cout<<"16: Lower the heat and add the crushed ginger-garlic-chili paste. Stir and sauté for 5 to 10 seconds on a low flame until the raw aroma of the ginger and garlic goes away."<<endl;
				cout<<"17: Add the tomatoes. Sauté for 2 to 3 minutes on medium-low to medium heat until the tomatoes become soft."<<endl;
				cout<<"18: Add all the spice powders one by one – haldi, red chili powder, coriander powder, hing and garam masala powder."<<endl;
				cout<<"19: On a medium-low heat or medium heat stirring often sauté the whole masala mixture until the fat starts leaving the sides of the masala base. This masala paste will become glossy, thicken and leave the sides of the pan."<<endl;
				cout<<"20: Using a slotted spoon or a strainer remove the beans and add them to the masala."<<endl;
				cout<<"21: Stir and sauté for a minute."<<endl;
				cout<<"22: Add 2 cups of water. If you prefer you can also add the cooked rajma stock instead of fresh water."<<endl;
				cout<<"23: Add salt as required and stir the whole curry mixture."<<endl;
				cout<<"24: On a low heat to medium-low heat simmer without a lid for 10 to 12 minutes or more time until the curry thickens slightly. It should not be watery."<<endl;
				cout<<"25: Mash a few rajma beans with the spoon. This helps to thicken the curry."<<endl;
				cout<<"26: When the rajma masala has thickened and comes to the right consistency which is neither too thick nor thin, then add the crushed kasuri methi and cream. You can skip the cream if you prefer."<<endl;
				cout<<"27: Stir and simmer for 30 seconds to 1 minute. Switch off the heat."<<endl;
				cout<<"28: Serve rajma masala with steamed basmati rice, jeera rice or naan or roti or paratha. You can garnish with some coriander leaves when serving."<<endl;
				file.close();
			}
			
			//https://www.cookwithkushi.com/paneer-butter-masala-paneer-makhani-recipe/#recipe
			void PaneerButterMasala()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients [16] = {"3+1/2 tbsp butter", "1 tsp jeera", "1 onion (roughly chopped)", "8 cloves of garlic(roughly chopped)", "2 green chilies(roughly chopped)", "1 inch ginger", "16 cashews", "3 tomatoes", "1+1/2 cup water", "salt to taste", "3/4 tsp red chile powder", "3/4 tsp garam masala", "3 tbsp cream", "1 tsp kasuri methi", "200g paneer", "2 tbsp coriander leaves(chopped)"};
				cout<<"Good choice! Here are the ingredients you will need to make Paneer Butter Masala: "<<endl<<endl;
				for(int i = 0; i < 16; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList=ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Heat 1.5 tablespoon of butter in pan or kadai. You can add oil instead of butter or use half portion oil and half portion butter in recipe if needed."<<endl;
				cout<<"2: Add jeera and sauté for few seconds. Next add onion, garlic cloves, green chilies, and ginger and saute till onion and garlic becomes translucent in color on medium flame."<<endl;
				cout<<"3: Now add cashews and saute for 1 minute. Add tomatoes and cook till it becomes soft and mushy. Switch off the flame."<<endl;
				cout<<"4: Let this mixture cool down. If you want to make this process faster you can start blending with ice cold water. Transfer this mixture to mixer or blender and add approximately 1 cup of water. Blend it to a smooth paste."<<endl;
				cout<<"5: In the same pan, add 2 tablespoon of butter, ground paste, salt to taste, red chile powder, garam masala powder (start these spices with ½ teaspoon and then adjust to taste), approximately ½ cup water, and mix."<<endl;
				cout<<"6: Cover this with a lid and cook on medium flame till the gravy thickens and traces of butter can be seen along the sides and top. Keep checking in between and give it a stir. Once the gravy thickens, check for salt and any other spices if needed."<<endl;
				cout<<"7: Add the cream and mix."<<endl;
				cout<<"8: Add paneer cubes, crush kasuri methi between the palm of your hands and add it. Cook for another 3 minutes on medium heat. Do not overcook the paneer. Garnish it with cilantro and some more cream if desired."<<endl;
				cout<<"9: Serve hot and enjoy with naan, roti, chapati, steamed rice, ghee rice or jeera rice."<<endl;
				file.close();
			}
			
			//https://www.cookwithkushi.com/garlic-dal/
			void DalTadka()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[16] = {"1 cup toor dal", "3+1/2 cup water", "4 tbsp ghee", "2 tsp jeera", "8 garlic cloves(finely chopped)", "2 green chilies(slit)", "1 inch ginger(chopped)", "2 tbsp coriander leaves(finely chopped)", "1/2 tbsp haldi", "1 tsp coriander powder", "1+1/4 tsp red chili powder", "1 tsp garam masala", "1 tbsp kasuri methi", "1 tsp salt", "pinch of hing", "2 dry red chilies"};
				cout<<"Good choice! Here are the ingredients you will need to make Dal Tadka: "<<endl<<endl;
				for(int i =0; i < 16; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Add dal to your pressure cooker and wash it nicely with water until the water runs clear."<<endl;
				cout<<"2: To this, add three cups of water and pressure cook on a medium flame for 3 whistles."<<endl;
				cout<<"3: In a pan on medium flame, add ghee. To this, add jeera. When they start to splutter, add the garlic cloves and saute for a few seconds."<<endl;
				cout<<"4: Add onion, ginger, green chilies and saute until translucent."<<endl;
				cout<<"5: Add tomatoes, coriander leaves and cook until it becomes soft."<<endl;
				cout<<"6: Now add haldi, coriander, red chile, and garam masala powder with salt and mix for 1 to 2 minutes."<<endl;
				cout<<"7: Add the cooked dal, ½ cup water, and kasuri methi, and bring it to a nice boil."<<endl;
				cout<<"8: Heat ghee in a pan. Add jeera, hing on medium flame."<<endl;
				cout<<"9: When they splutter, add garlic cloves and saute until translucent."<<endl;
				cout<<"10: Add red chilies and saute for a few seconds. Add the red chile powder and switch off the flame."<<endl;
				cout<<"11: Pour this over the dal. Mix, and serve hot with naan, roti, chapati, or steamed rice and enjoy."<<endl;
				file.close();
			}
			
			//https://www.cookwithkushi.com/paneer-matar-masala-recipe/
			void MatarPaneer()
			{
				ofstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				string ingList;
				string ingredients[22] = {"1 tbsp cooking oil", "1 tbsp butter", "1/2 tsp jeera", "1 bay leaf", "1 inch cinnamon stick", "3 cloves", "2 cardamom pods", "4-6 dry red chilies", "8-10 cashews", "3 onions(sliced)", "6-8 garlic cloves(chopped)", "3 green chilies(slit)", "1 inch ginger(chopped)", "1/4 cup coriander", "3 tomatoes", "Water(as needed)", "3/4 tsp salt", "200g paneer", "1+1/2 cups green peas", "1 tbsp kasuri methi", "1 tbsp heavy cream", "1 tbsp coriander leaves"};
				for(int i = 0; i < 22; i++)
				{
					cout<<ingredients[i]<<endl;
					ingList = ingredients[i];
					file<<ingList<<endl;
				}
				cout<<"Preparation: "<<endl;
				cout<<"1: Heat oil and butter in a pan on medium flame. To this, add jeera, bay leaves, cinnamon, cloves, cardamom, dry red chilies, and cashews. Saute on a medium flame for 2 minutes."<<endl;
				cout<<"2: Add onion, garlic, ginger, green chilies and continue to saute till onions become light golden. Sauteeing onions is a very important step and may take 6 to 8 minutes."<<endl;
				cout<<"3: Once the mixture cools down, transfer this to a blender along with tomato, coriander, ½ cup of water, and blend it to a smooth paste."<<endl;
				cout<<"4: In the same pan, add the ground tomato-onion masala with an additional ½ to ¾ cup water for the desired consistency, salt to taste, and cook for a minute or two."<<endl;
				cout<<"5: Add paneer, green peas, and simmer for 5 to 8 minutes. Finally, add heavy cream, dry fenugreek leaves, coriander leaves, and mix. Switch off the flame."<<endl;
				cout<<"6: Serve with rice, roti, or naan."<<endl;
				file.close();
			}
			
			void restart()
			{
				char back = 'N';
				cout<<"Would you like to restart the program? Type Y/N: ";
				cin>>back;
				
				switch(back)
				{
					case 'Y': mainMenu(); break;
					case'N': exit(0); break;
					default: cout<<"Invalid choice! Please try again!"<<endl; restart(); break;
				}
			}
			
			void recIng()
			{
				string ingList;
				ifstream file("C:\\Users\\arjun\\OneDrive\\Desktop\\DVOC\\Projects\\Recipe Maker\\ingredients.txt");
				cout<<"Most recent ingredient list: "<<endl;
				while(getline(file,ingList))
				{
					cout<<ingList<<endl;
				}
				file.close();
			}
		
};


main()
{	
	recipeMaker user1;
	user1.mainMenu();
}