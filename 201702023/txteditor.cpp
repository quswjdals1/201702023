#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

static int page = 0;
static vector<std::string> v;

static std::string z;

class singleton {
private:
    singleton() {}
    static singleton* instance;

public:
    static singleton* getinstance() {
        if (instance == nullptr) {
            instance = new singleton();
        }
        return instance;
    }

    void change(string before, string after) {
        for (int i = 0; i < v.size(); i++) {
            if ((v.at(i).compare(before))==0) {
                v.erase(v.begin()+i);
                v.insert(v.begin()+i, after);
            }
        }
        string s="";
        for (int i = 0; i < v.size(); i++) {
            s = s + v.at(i) + " ";
        }
        s = s.substr(0, s.length()-1);
        z = s;

    }
    void Delete(int q, int w) {
        int x = page * 20 + q;


        vector<std::string> line1;
        string g;
        int y = -1;
        while (true) {

            int u = y + 1;
            int k = 0;
            int j = -1;
            if ((75 + u) > z.size()) {

            }
            for (int i = u; i < 75 + u; i++) {
                if (!z[i]) {
                    k++;
                    j = i;
                    break;
                }
                g = g + z[i];
                if (z[i] == ' ') { y = i - 1; }
            }
            if (k != 0) {
                g = "";
                for (int i = u; i < j; i++) {

                    g = g + z[i];
                }
                line1.push_back(g);
                k = 0;
                break;
            }
            g = "";
            for (int i = u; i <= y; i++) {
                g = g + z[i];
            }
            line1.push_back(g);
            y = y + 1;
        }
        string h = "";
        for (int i = 0; i < x - 1; i++) {
            if (i != 0 && h[h.length() - 1] != ' ') {
                h = h + ' ' + line1.at(i);
                continue;
            }
            h = h + line1.at(i);
        }
        istringstream ss(h);
        string stringBuffer;
        vector<string> e;
        while (getline(ss, stringBuffer, ' ')) {
            e.push_back(stringBuffer);

        }
        v.erase(v.begin()+e.size() + w - 1);

       

        string sd = "";
        for (int i = 0; i < v.size(); i++) {
            sd = sd + v.at(i) + " ";
        }
        sd = sd.substr(0, sd.length() - 1);
        z = sd;



    }

    void insert(int q, int w, string s) {
        int x=page * 20 + q;


        vector<std::string> line1;
        string g;
        int y = -1;
        while (true) {

            int u = y + 1;
            int k = 0;
            int j = -1;
            if ((75 + u) > z.size()) {

            }
            for (int i = u; i < 75 + u; i++) {
                if (!z[i]) {
                    k++;
                    j = i;
                    break;
                }
                g = g + z[i];
                if (z[i] == ' ') { y = i - 1; }
            }
            if (k != 0) {
                g = "";
                for (int i = u; i < j; i++) {

                    g = g + z[i];
                }
                line1.push_back(g);
                k = 0;
                break;
            }
            g = "";
            for (int i = u; i <= y; i++) {
                g = g + z[i];
            }
            line1.push_back(g);
            y = y + 1;
        }
        string h="";
        for (int i = 0; i < x-1; i++) {
            if ( i != 0&& h[h.length() - 1] != ' ') {
                h = h + ' ' + line1.at(i);
                continue;
            }
            h = h + line1.at(i);
        }

        istringstream ss(h);
        string stringBuffer;
        vector<string> e;
        while (getline(ss, stringBuffer, ' ')) {
           e.push_back(stringBuffer);
            
        }
      
        
        v.insert(v.begin()+e.size() + w, s);
       
        string sd = "";
        for (int i = 0; i < v.size(); i++) {
            sd = sd + v.at(i) + " ";
        }
        sd = sd.substr(0, sd.length() - 1);
        z = sd;

    }





    void print(vector<std::string>a, int b) {
        vector<std::string> line1;
        string g;
        int y = -1;
        while (true) {

            int u = y + 1;
            int k = 0;
            int j = -1;
        
            for (int i = u; i < 75 + u; i++) {
                if (!z[i]) {
                    k++;
                    j = i;
                    break;
                }
                g = g + z[i];
                if (z[i] == ' ') { y = i - 1; }
            }
            if (k != 0) {
                g = "";
                for (int i = u; i < j; i++) {
                    
                    g = g + z[i];
                }
                line1.push_back(g);
                k = 0;
                break;
            }
            g = "";
            for (int i = u; i <= y; i++) {
                g = g + z[i];
            }
            line1.push_back(g);
            y = y + 1;
        }
        int n = b * 20;
        int h = (b + 1) * 20;
        if (h > line1.size()) {
            h = line1.size();
        }
        for (int i = n; i < h; i++) {
            cout << line1.at(i) << '\n';
        }

        line1.clear();


    }

};

singleton* singleton::instance;

 int main()
 {
 
     ifstream ifile;

     char line[10000]; 
     static std::string s;
    
     char* f;
     ifile.open("D:\\USER_DATA\\Desktop\\test.txt"); 
     int c = 0;
     int x = 0;
     if (ifile.is_open())
     {
         while (ifile.getline(line, sizeof(line))) 
         {      
             z = line;
             f = strtok(line, " ");
             while (f != NULL) {
                 v.push_back(f);
                 f = strtok(NULL, " ");
             }
         
         }


     }
     ifile.close(); 

     singleton::getinstance()->print(v, 0);
     
     while (true) {
         cout << "------------------------------------------------------------------------------------------------------------------------" << '\n';
         cout << "n:다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기, t:저장후 종료" << '\n';
         string a;
       
         getline(cin, a);
         if (a[0] == 'n') {
             page++;
             if (page * 20 * 75 < z.size()) {
                 cout << "------------------------------------------------------------------------------------------------------------------------" << '\n';
                 singleton::getinstance()->print(v, page);
                 cout << "------------------------------------------------------------------------------------------------------------------------" << '\n';
             }
             else {
                 cout << "다음 페이지는 없습니다." << '\n';
                 page--;
             }
         }
         if (a[0] == 'p') {
             page--;
             if (page < 0) {
                 cout << "이전 페이지는 없습니다." << '\n';
                 page ++;
             }
             else {
                 cout << "------------------------------------------------------------------------------------------------------------------------" << '\n';
                 singleton::getinstance()->print(v, page);
                 cout << "------------------------------------------------------------------------------------------------------------------------" << '\n';
             }
         }
         if (a[0] == 'c') {
             a=a.erase(0, 2);
             a = a.erase(a.length() - 1, 1);
       
             istringstream ss(a);
             string stringBuffer;
             int f = 0;
             std::string s;
             std::string q;
           
             while (getline(ss, stringBuffer, ','))
             {  
                 if (f == 0) { s = stringBuffer;
                 f++;
                 }
                 else if (f == 1) { q = stringBuffer; 
                 f =0;
                 }

             }
           
             singleton::getinstance()->change(s,q);
             singleton::getinstance()->print(v, page);
         }
         if (a[0] == 'i') {
             a = a.erase(0, 2);
             a = a.erase(a.length() - 1, 1);

             istringstream ss(a);
             string stringBuffer;
             int d;
             int c;
             string w;
             int f = 0;
             while (getline(ss, stringBuffer, ','))
             {
                 if (f == 0) {
                     std::stringstream ssInt(stringBuffer);
                     ssInt >> d;
                     f++;
                 }
                 else if (f == 1) {
                     std::stringstream ssInt(stringBuffer);
                     ssInt >> c;
                     f++;
                 }
                 else if (f == 2) {
                     w = stringBuffer;
                 }

             }


             if (w.length() >= 75) {
                 cout << "75바이트를 초과했습니다.";
             }
             else {
                 singleton::getinstance()->insert(d, c, w);
                 singleton::getinstance()->print(v, page);
             }
             }
         if (a[0] == 'd') {

             a = a.erase(0, 2);
             a = a.erase(a.length() - 1, 1);

             istringstream ss(a);
             string stringBuffer;
             int d;
             int c;
           
             int f = 0;
             while (getline(ss, stringBuffer, ','))
             {
                 if (f == 0) {
                     std::stringstream ssInt(stringBuffer);
                     ssInt >> d;
                     f++;
                 }
                 else if (f == 1) {
                     std::stringstream ssInt(stringBuffer);
                     ssInt >> c;
                     f++;
                 }


             }
             if (d > 20) { cout << "출력창이 20줄 보다 적습니다."; }
             else {
                 singleton::getinstance()->Delete(d, c);
                 singleton::getinstance()->print(v, page);
             }
         }

         if (a[0] == 't') {

             ofstream writeFile;
             writeFile.open("D:\\USER_DATA\\Desktop\\test.txt");
             writeFile.write(z.c_str(), z.size());


             writeFile.close();    



             break;
         }

     }
    
}

  

 
