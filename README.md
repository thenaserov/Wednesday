# Wednesday
# Coded and engineered by Naser Rezaei

In Qt/C++, if you have a normal class and widget included class,
then you have your class run in a thread (normal class)
and you call a function in your widget class which changes the ui elements...
the program will crash...

# SOLUTION

you must ->
    1. Have a signal, a private slot and a normal method
    2. In your method emit the signal
    3. In your class connect the signal to the lrivate slot
    4. In your private slot do the changes and if you saw any crash I will buy you a beer

