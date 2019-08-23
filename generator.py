import random
appetizers_list = ["Mozzarella Sticks", "Chips and Dip", 'chicken wings']
maincourse_list= ["Chicken Tenders", "Burgers","Chipotle"]
dessert_list= ["ice cream", "cake","brownie"]


fork = random.choice(appetizers_list)
print ("Randomly selected first name - ", fork)

namesw_item = random.choice(maincourse_list)
print ("Randomly selected item last night - ", namesw_item)

fork = random.choice(dessert_list)
print ("Randomly selected first name - ", fork)
