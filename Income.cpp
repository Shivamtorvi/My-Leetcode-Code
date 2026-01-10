#include <iostream>
using namespace std;

class Artist {
protected:
    string name;
    int rating;
    string country;
public:
    void acceptArtistData() {
        cin >> name >> rating >> country;
    }
    void printArtistData() {
        cout << name << " " << rating << " " << country << endl;
    }
    virtual float calculateTotalIncome() = 0;
    bool isFamous() {
        return rating == 3 || rating == 4;
    }
    virtual ~Artist() {}
};

class Painter : virtual public Artist {
    string type;
    float paintingRate;
    int numberOfPainting;
public:
    void acceptPainterData() {
        acceptArtistData();
        cin >> type >> paintingRate >> numberOfPainting;
    }
    void printPainterData() {
        printArtistData();
        cout << type << " " << paintingRate << " " << numberOfPainting << endl;
    }
    float calculateTotalIncome() {
        return paintingRate * numberOfPainting;
    }
};

class Singer : public Artist {
    int numberOfAlbum;
    float ratePerSong;
public:
    void acceptSingerData() {
        acceptArtistData();
        cin >> numberOfAlbum >> ratePerSong;
    }
    void printSingerData() {
        printArtistData();
        cout << numberOfAlbum << " " << ratePerSong << endl;
    }
    float calculateTotalIncome() {
        return numberOfAlbum * ratePerSong;
    }
};

int main() {
    Painter p;
    p.acceptPainterData();
    p.printPainterData();
    cout << p.calculateTotalIncome() << endl;
    cout << p.isFamous() << endl;

    Singer s;
    s.acceptSingerData();
    s.printSingerData();
    cout << s.calculateTotalIncome() << endl;
    cout << s.isFamous() << endl;

    return 0;
}
