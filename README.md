# ParkingLotSystem
Design of simple parking lot system
The system consists of three consoles: admin console, operator console, and customer console. The command line program you are going to design presents first the three consoles for the user to choose from. Here is the behavior expected from every console:

1. Admin Console: the admin (only one admin) accesses this portal without password (for simplicity) and can do the following:<br>
a. Add/Delete operators: each operator has a user name and password, and list of parking lot IDs the operator has access to.<br>
b. Add/Delete parking lot: Each parking lot have a number of parking spaces and per hour rate.<br>
c. List all available operators with their usernames/pass/parking lot IDs.<br>
d. List all parking lot IDs/number of parking spaces/per hour rate.<br>
e. Save/Load operators and parking lots information to the file system.<br>

2. Operator Console: The operator is asked first to enter his/her username and pass. If login is successful:<br>
a. The operator can query total number of parking slots in a specific parking lot, with the current number of free and busy ones.<br>
b. The operator can query total amount of revenue (See Customer Console for details on revenue) for each parking lot and for all parking lots under his custody. <br>
c. The operator can find the parking lot ID at which a certain car (by plate number) is located.<br>

3. Customer Console: A customer can login with his unique car plate number (this has to be exactly five digits’ integer, e.g. can be 00156) and once in, a customer can do the following:<br>
a. Park his car in a specific parking lot. The customer can park at only one parking lot at any given time. <br>
b. Drive away. The customer is asked to enter the number of hours he has been in the parking at this stage. Parking lot revenue is incremented here. <br>


# How to Run in Linux system?
1. Clone/ download this repository.
```
  $ git clone https://github.com/koshish/ParkingLotSystem.git
```

2. ``` $ cd ParkingLotSystem ```
3. ``` $ g++ parking_lot_system.cpp -o parking_lot_system ```
4. ``` $ ./parking_lot_system ```
