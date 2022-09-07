The purpose of this code is to initialize an array and ask the user for three character inputs.
Once the three characters are entered, the code will search for the combination of characters given by the user using the findIndex function, and print out whether or not the combination was found.
If it was found, it will display the index location of the start of the combination. If not, it will give an error message "[combination] not found!"
<br></br>
You will find that the array is initialized awkwardly in the initArray function. This is a requirement by my instructor, as we were not permitted to use strings.
<br></br>
The current error is that when I type a combination such as "bca" the program returns "bca not found!" even though it is clearly located in index position 1.
