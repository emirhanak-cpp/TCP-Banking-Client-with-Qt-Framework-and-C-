# TCP_Banking_Client_QtApp
In this project, my aim was to create a banking interface that should use TCP to establish communication with the server side. This client side should be user-friendly and understandle. That's why I used Qt framework to create the user-interface. The banking operations requested by the user are all sent to the server side to get checked and then confirmed. As of right now however, only signing in to the bank account is implemented. I'm looking forward to improving it in the future.


## How to use:
- Connect the server and the client to the same network.
- In order for the communication with the server side to be established, TCP Banking Server (which I also provided as another repository) should be running on another computer on the same network.
- The only thing you should watch out for is to change the IPv4 address that the client tries to connect to on the server side. You can do this by opening the .sln file in Visual Studio and navigating to the 59th line of the TCPBankingClass.cpp file. In order to locate the IPv4 address that the server is on, do the following on the SERVER side:
  - Press `Win + R` on your keyboard.
  - Type `cmd`.
  - When the command prompt window opens, type in `ipconfig` and press `Enter`.
  - You should be able to see your IPv4 address in the network you're connected to.
- I've provided the entire project from Visual Studio in this repository. So, running the .sln file should be enough to run the program.
