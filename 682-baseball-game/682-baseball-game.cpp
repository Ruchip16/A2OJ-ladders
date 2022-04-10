class Solution {
public:
    int calPoints(vector<string>& ops) {
       
        vector<int> temp;
        int lastEle = 0;
        int sum=0;
        for(string x : ops){
            if(isdigit(x[0]) || x[0]=='-'){
                temp.push_back(std::stoi(x));
            }
            else if(x[0]=='+'){
                temp.push_back(temp[lastEle]+temp[lastEle-1]);
            }
            else if(x[0]=='D'){
                temp.push_back(2*temp[lastEle]);
            }
            else if(x[0]=='C'){
                temp.pop_back();
            }
            lastEle = temp.size()-1;
        }
        for(int i=0; i<temp.size(); i++){
            sum+=temp[i];
        }
        return sum;
        
    }
};


// ops = ["5","2","C","D","+"]

// 1. First start with an empty record
// 2. Create a new array and push the cyrrent score into it while traversing the array
// i.e push --> ["5"]
// 3. If next element is an integer then push it in the array 
// i.e push --> ["2"] , so array becomes ["5","2"]
// 4. Next is "C" which means pop the previous score from the array --> ["5"]
// 5. "D"  --> double the previous score 2*5 = 10 ["5","10"]
// 6. "+" --> sum of previous scores i.e ["5","10"] --> 10+5 = 15 & push it in the array 
// ["5","10","15"] 
// 7. The final sum of all the records is 5+10+15 = 30