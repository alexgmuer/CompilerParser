#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <memory>


// Write in a class in order to read in from the personal_notes.md file,
// partition the sections into a class hierarchy, overload the >> operator
// so that the class object can be easily printed as a tree structure, 
// make it so that the definitions/section bodies can be extracted from the 
// class object using methods.

// Utilize virtual methods somehow

class Parser {
    public:
        std::string name;

        // Number of each type of header
        size_t num_H1;
        size_t num_H2;
        size_t num_H3;

        // Number of links
        size_t num_links;

        // Number of text bodies
        size_t num_text_bodies;
        

        // Temporary vector of vector<char>'s to read file into
        std::vector<char> full_text_body;
    
    private:

    public:
        

        int read(std::string filename) {
            char byte = 0;

            std::ifstream input_file(filename);

            if (!input_file.is_open()) {
                std::cerr << "Could not open file" << std::endl;
                return 1;
            }
            while (input_file.get(byte)) {
                full_text_body.push_back(byte);
            }

            input_file.close();
            return 0;
        }

        void parse(void) {
            // Take the full text body and parse 
        }


        void print(void) {
            

        }


        friend std::ostream& operator<<(std::ostream& os, const Parser* parser) {
            // Iterate through objects in wiki, print number of H1, H2, H3, links,
            // and text bodies
            for (const auto &i : parser->full_text_body) {
                std::cout << i;
            }
            std::cout << std::endl;


            return os;
        }
    
};

