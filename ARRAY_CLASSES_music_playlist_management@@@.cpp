//Music Playlist Management: Develop a class to represent a music playlist,
 //where each song is stored as an object with properties like title, artist, and duration.
//  Implement methods to add, remove, and reorder songs in the playlist, as well as
// to generate playlists based on criteria like genre or mood.

#include <iostream>
#include <string>
using namespace std;

const int MAX_SONGS = 100;

class Song {
private:
    string title;
    string artist;
    string genre;
    int duration; // in seconds

public:
    Song(const string& title, const string& artist, const string& genre, int duration)
        : title(title), artist(artist), genre(genre), duration(duration) {}

    string getTitle() const {
        return title;
    }

    string getArtist() const {
        return artist;
    }

    string getGenre() const {
        return genre;
    }

    int getDuration() const {
        return duration;
    }
};

class Playlist {
private:
    Song* songs[MAX_SONGS];
    int numSongs;

public:
    Playlist() : numSongs(0) {}

    bool addSong(const Song& song) {
        if (numSongs < MAX_SONGS) {
            songs[numSongs] = new Song(song);
            numSongs++;
            return true;
        }
        return false; // Playlist is full
    }

    bool removeSong(const string& title) {
        for (int i = 0; i < numSongs; ++i) {
            if (songs[i]->getTitle() == title) {
                delete songs[i];
                for (int j = i; j < numSongs - 1; ++j) {
                    songs[j] = songs[j + 1];
                }
                numSongs--;
                return true;
            }
        }
        return false; // Song not found
    }

    void displayPlaylist() const {
        if (numSongs == 0) {
            cout << "Playlist is empty." << endl;
        } else {
            cout << "Playlist:" << endl;
            for (int i = 0; i < numSongs; ++i) {
                cout << i + 1 << ". " << songs[i]->getTitle() << " - " << songs[i]->getArtist() << " (" << songs[i]->getGenre() << ", " << songs[i]->getDuration() << "s)" << std::endl;
            }
        }
    }
};

int main() {
    Playlist playlist;

    char choice;
    do {
        cout << "Enter song details:" << endl;
        string title, artist, genre;
        int duration;
        cout << "Title: ";
        cin >> title;
        cout << "Artist: ";
        cin >> artist;
        cout << "Genre: ";
        cin >> genre;
        cout << "Duration (in seconds): ";
        cin >> duration;
        
        if (playlist.addSong(Song(title, artist, genre, duration))) {
            cout << "Song added to the playlist." << endl;
        } else {
            cout << "Failed to add song. Playlist is full." << endl;
        }
        
        cout << "Do you want to add another song? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Display the playlist
    playlist.displayPlaylist();

    // Implement the functionality to remove songs if needed

    return 0;
}
