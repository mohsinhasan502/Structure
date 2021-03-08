#include<iostream>
#include<string>

using namespace std;

struct MovieData //structures
{
	string title;
	string director;
	int release;
	int duration;
};
	
void display(MovieData); //prototype

int main()
{
	MovieData movie1;
	MovieData movie2;

	cout << "***Collecting Data for First Movie***";

	cout << "\n\nEnter title of a movie : ";
	cin >> movie1.title;

	cout << "\nEnter name of director : ";
	cin >> movie1.director;

	cout << "\nEnter release year : ";
	cin >> movie1.release;

	cout << "\nEnter duration of movie (mins) : ";
	cin >> movie1.duration;


	cout << "\n\n***Collecting Data for Second Movie***";

	cout << "\n\nEnter title of a movie : ";
	cin >> movie2.title;

	cout << "\nEnter name of director : ";
	cin >> movie2.director;

	cout << "\nEnter release year : ";
	cin >> movie2.release;

	cout << "\nEnter duration of movie (mins) : ";
	cin >> movie2.duration;
	
	cout << "\nNow displaying data from 1st movie";
	cout << "\n-----------------------------------\n";
	
	display(movie1);

	cout << "\n\nNow displaying data from 2nd movie";
	cout << "\n-------------------------------------\n";
	
	display(movie2);


	system("pause>0");
}

void display(MovieData movie)
{
	cout <<"\nTitle : " <<movie.title;
	
	cout << "\nDirector : " << movie.director;

	cout <<"\nRelease Year : "<< movie.release;

	cout << "\nDuration" << movie.duration << " minutes";

}