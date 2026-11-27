#include <iostream>
#include <string>
#include <vector>

// ITS A WORDSEARCH
//find letters in the grid that are in the given words
//funciton to turn a column into one string 
//function to search for the word in one row of the grid and output the solution. input word and row/column of grid

// found letters can be overlapping 

//should replace unmatched letters in grid with #
// seperate function >>> keep a list of all the coords of letters that have been found then write those as the matched letter and replace all the other ones with # 
// store if a word has been found or not.

//find the start and end of the word [s, s, e, e]
//return [-1, -1, -1, -1] if not found

bool is_match(const std::string target, const std::string collection, int& index){
    bool match;
    int max = collection.size()-target.size();
    for(int i=0;i<=max;i++){
        match = true;
        //check if whole word is in here. if yes, output [row, i, row, i+target.size()-1]
        for (int j = 0; j<target.size();j++){
            if (collection[i+j]!=target[j]){
                match = false;
            }
        }
        if(match){
            index=i;
            return true;
        }
    }
    return false;
}

void in_row(const std::string target, const std::string collection, int row, std::vector<int>& out){ //return if the word is found in the grid then push_back in find_words
    int index;
    bool match = is_match(target, collection, index);
    if (match){
        int i = index;
        int t=i+target.size()-1;
        out={row, i, row, t};   
    }
    else{
        out={-1, -1, -1, -1};
    }
}

void in_col(const std::string target, const std::string collection, int col, std::vector<int>& out){
    int index;
    bool match = is_match(target, collection, index);
    if (match){
        int i = index;
        int t=i+target.size()-1;
        out= {i, col, t, col};   
    }
    else{
        out = {-1, -1, -1, -1};
    }
}

void col_to_str(const std::vector<std::string>& in, int col, std::string& out){
    // convert a column of the grid into a singular string
    for (int i=0;i<in.size(); i++){
        out.push_back(in[i][col]);
    }
}

void generate_grid(int rows, int cols, std::vector<std::string>& out){
    // generate a vector of "#"s with the specified number of rows and columns
    std::string tmp;
    for (int i=0; i<cols; i++){
        tmp += "#";
    }
    for (int j=0; j<rows; j++){
        out.push_back(tmp);
    }
}

void find_words(const std::vector<std::string>& grid, const std::vector<std::string>& words, std::vector<std::string>& solution, std::vector<std::string>& not_found){
    std::vector<std::vector<int>> found_index; 

    for(int i=0; i<words.size();i++){
        found_index.push_back({-1, -1, -1, -1});
    }

    int rows = grid.size(), cols = grid[0].size();

    for(int i=0; i<words.size(); i++){
        std::vector<int> tmp_index;
        for(int j=0; j<rows; j++){
            in_row(words[i], grid[j], j, tmp_index);
            if (tmp_index[0]!=-1){
                found_index[i]=tmp_index;
            }
        }
    }
    // do the same but going through columns 
    // make a string of the columns then pass that as parameter
    //found_index over hear should overwrite the correct index if output doesn't equal {-1, -1, -1, -1}
    for (int i =0; i<words.size();i++){
        for(int j=0; j<cols;j++){
            std::string ref;
            std::vector<int> tmp_index;
            col_to_str(grid, j, ref);

            in_col(words[i], ref, j, tmp_index);
            if (tmp_index[0]!=-1){
                found_index[i] = tmp_index;
            }
        }
    }

    generate_grid(rows, cols, solution);

 // replace the # with letters if there is a match in the list of words. rows then columns
    // go through found_index and replace at those coords
    for(int i=0; i<found_index.size(); i++){
        if (found_index[i][0] != -1){
            //go through each index from [s,s] to [e, e]
            for (int x = found_index[i][0]; x<(found_index[i][2]+1); x++){
                for (int y=found_index[i][1]; y<(found_index[i][3]+1); y++){
                    solution[x][y] = grid[x][y];
                }
            }
        }
        else{
            not_found.push_back(words[i]);
        }
    }
    

}

int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}