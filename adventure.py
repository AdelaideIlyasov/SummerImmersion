# Update this text to match your story.
start = '''
You wake up one morning and find that you aren't in your bed; you aren't even in your room.
You're in the middle of a giant maze.
A sign is hanging from the ivy: "You have one hour."
There is a hallway to your right and to your left.
'''

print(start)

print("Type 'left' to go left or 'right' to go right. ") # Update to match your story.
user_input = input()
if user_input == "left":
    print("You decide to go left and are welcomed by three pitbulls. You are terrified of dogs and start running into another split desicion.") # Update to match your story.
    user_input = input("do you want to run or fight? ")
    if user_input == "fight":
        print("You have been eaten")
    if user_input == "run":
        print("Congrats! You have ran to your safety")
elif user_input == "right":
    print("You decide to go right and immediately start falling downward into a pool, oops you can't swim, you have drowned")
else:
    print("Not a valid path. An arrow shoots straight at you and you die.")
