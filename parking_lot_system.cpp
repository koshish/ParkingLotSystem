#include<string>
#include<fstream>
#include<iostream>

using namespace std;

struct operator_person{
	char username[100];
	char password[100];
	int parking_lot_id[100];
} o[100];

struct parking_lot{
	int parking_id;
	int number_of_parking_space;
	int hourly_rate;
} p[100];

int operator_index = 0, parking_lot_index = 0;

void add_operators()
{
	cout << "Add Operators \n";
	cout << "Username: ";
	cin >> o[operator_index].username;
	cout << "Password: ";
	cin >> o[operator_index].password;
	cout << "The list of parking lot id this operator has excess to. enter -1 to exit";
	int count=0, pid=0;
	cin >> pid;
	while (pid != -1)
	{
		o[operator_index].parking_lot_id[count] = pid;
		cin >> pid;
		count++;
	}
	operator_index++; 
}

void delete_operators()
{
	cout << "Delete an Operator Username \n";
	cout << "Operator Username: ";
	int to_delete;
	cin >> to_delete;
	for (int i=0; i<operator_index; i++) 
	{
		if (to_delete == o[i].username)
		{
			for(int j=i; j<operator_index-1 ; j++)
			{
				o[j].username=o[j+1].username;
				o[j].password=o[j+1].password;
			}
		operator_index--;
		break;	
		}
	}
}

void add_parking_lot()
{
	cout << "Add parking lot \n";
	cout << "Parking Lot ID: ";
	cin >> p[parking_lot_index].parking_id;
	cout << "Number of Parking Space: ";
	cin >> p[parking_lot_index].number_of_parking_space;
	cout << "Hourly Rate: ";
	cin >> p[parking_lot_index].hourly_rate;
	parking_lot_index++; 

}

void delete_parking_lot()
{
	cout << "Parking Lot ID to delete \n";
	int to_delete;
	cin >> to_delete;
	for (int i=0; i<parking_lot_index; i++) 
	{
		if (to_delete == p[i].parking_id)
		{
			for(int j=i; j<parking_lot_index-1 ; j++)
			{
				p[j].parking_id=p[j+1].parking_id;
				p[j].number_of_parking_space=p[j+1].number_of_parking_space;
				p[j].hourly_rate=p[j+1].hourly_rate;
			}
		parking_lot_index--;
		break;	
		}
	}
}

void list_operators()
{
	cout << "Username \t Password \t Parking lot IDs \n";
	for(int i=0; i<operator_index; i++)
	{
		cout << o[i].username << "\t" << o[i].password << "\t" << o[i].parking_lot_id <<endl;
	}

}

void list_parking_lot()
{
	cout << "Parking lot ID \t Number of parking spaces \tPer hour rate \n";
	for(int i=0; i<parking_lot_index; i++)
	{
		cout << p[i].parking_id << "\t\t\t" << p[i].number_of_parking_space << "\t\t\t" << p[i].hourly_rate <<endl;
	}

}

void save_operators_to_file()
{

}

void load_opeators_from_file()
{

}
void save_parking_lots_to_file()
{

}

void load_parking_lots_from_file()
{

}
void operator_parking_query()
{

}

void operator_revenue_query()
{

}

void locate_car()
{

}

void park_car()
{
	//int parking_lot_number;
	//parking_lot_number = add_parkinglot;
}

void drive_away()
{
	float hours_parked;
	float revenue;

	cout<< " Enter the number of hours the car was parked. "<<endl;
	cin>> hours_parked;

	//revenue = hours_parked* p[add_parkinglot].hourly_rate;

	cout<<" The total cost of parking is "<< revenue <<endl;
}

void admin_console()
{
	int selection;
	while(1)
	{
		cout << " Welcome to Admin Console. Please select what do you want to perform." <<endl;
		cout << "	1. Add Operators \n "	;
		cout << "	2. Delete Operators \n "; 
		cout << "	3. Add parking lot \n "	;
		cout << "	4. Delete parking lot \n "	; 
		cout << "	5. List all available operators information \n" ;
		cout << "	6. List all parking lot information\n" ;
		cout << "	7. save operation to file\n" ;
		cout << "	8. load operator from file\n";
		cout << "	9. save parking to file \n" ;
		cout << "	10. load parking from file" << endl;
		cin >> selection;
		switch(selection)
		{
			case 1:
				add_operators();
				break;
			case 2:
				delete_operators();
				break;
			case 3:
				add_parking_lot();
				break;
			case 4:
				delete_parking_lot();
				break;
			case 5:
				list_operators();
				break;
			case 6:
				list_parking_lot();
				break;
			case 7:
				save_operators_to_file();
				break;
			case 8:
				load_opeators_from_file();
				break;
			case 9:
				save_parking_lots_to_file();
				break;
			case 10:
				load_parking_lots_from_file();
				break;
			default:
				cout << "Wront input" ;
		}
	}
}

void operator_console()
{
	int selection;
	cout << "Welcome to Operator Console. Please select what do you want to perform." <<endl;
	cout << "	1. Query parking lot \n" ;
	cout << "	2. Revenue \n "	;
	cout << "	3. Locate car \n " << endl;
	cin >> selection;
	switch(selection)
	{
		case 1:
			operator_parking_query();
			break;
		case 2:
			operator_revenue_query();
			break;
		case 3:
			locate_car();
			break;
		default:
			cout << "Wrong input" ;
	}

}

void customer_console()
{
	int selection;
	int car_plate_number;
	cout << "Enter your unique car plate number." <<endl;
	cin >> car_plate_number;
	if (cin.fail()) 
	{
		cout <<"Please enter the unique car plate number correctly"<<endl;
		cin>> car_plate_number;
	}
	cout << " Welcome to Customer Console. Please select what do you want to perform." <<endl;
	cout << "	1. Park \n " ;
	cout << "	2. Drive away \n "<< endl;
	cin >> selection;
	switch(selection)
	{
		case 1:
			park_car();
			break;
		case 2:
			drive_away();
			break;
		default:
			cout << "Wrong input";
	}

}

int main()
{
	int selection;
	cout << " Please select your console \n " ;
	cout << "	1. Admin Console \n ";
	cout << "	2. Operator Console \n " ;
	cout << "	3. Customer Console " << endl;
	cin >> selection;

	switch(selection)
	{
		case 1:
			admin_console();
			break;
		case 2:
			operator_console();
			break;
		case 3:
			customer_console();
			break;
		default:
			cout<< "Wront Selection";
	}

}