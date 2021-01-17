# ShopifyImageRepo
Mini project for the Shopify Intern Design Challenge developed by Noah Lee

This project was implemented using C++ to create a desktop application that allows users to create a profile and display their products as well as buy and sell their products. While a web based program would be a logical approach for this project, my limited experience with web scripting languages led me to develop the application with tools I am more familiar with. However, I hope to acquire those skills soon! The application must be run locally and the executable is specific to MacOS. As well, as I have only just began my first course on databases, this application simply uses two text files to store and search for data.

# How To Use It

If you have a MacOS computer simply run the application from the test folder. Two profiles are loaded in the users text file Noahlee and Auston. The passwords are 00 for Noahlee and 34 for Auston. Once logged in there are a number of options. You can make a deposit into ur account by typing the amount you would like and clicking the deposit button. You can add a product by filling in the prompts then clicking the add product button, however you must add the image file to the folder with the application first. You can delete a product by name as long as you are the owner. Finally you can view your products one by one, as well as all products of any existing accounts! For other users products you can see the sellers username, the product name, and the cost. If you press the buy button congratulations the product is yours! As well you can use the search feature to limit the amount of products to just those that conatin the descriptor word you searched for. 

# Some Additional Ideas

Other features that could be added to this project would be a "create account" option. As of right now, if you would like to add an account you would have to create it directly in the user text file. A feature that would be of great value but also would require more time to develop would be a dialog option to communicate with vendors. Of course this would be much simpler if the application was based on a web server. Another important feature would be to use a more efficient structure for my database. The program simply loads product information into a vector, but in reality this database would be incredibly large and a simple container such as a vector would be inefficient. Perhaps a container that provides hashing abilities or a data structure such as a binary search tree.

