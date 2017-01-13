#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> calculateNum(std::vector<char> input) {

  std::vector<std::string> output;

  if (input[0] == '2'){
    output.emplace_back("A");
    output.emplace_back("B");
    output.emplace_back("C");
  }
  else if (input[0] == '3'){
    output.emplace_back("D");
    output.emplace_back("E");
    output.emplace_back("F");
  }
  else if (input[0] == '4'){
    output.emplace_back("G");
    output.emplace_back("H");
    output.emplace_back("I");
  }
  else if (input[0] == '5'){
    output.emplace_back("J");
    output.emplace_back("K");
    output.emplace_back("L");
  }
  else if (input[0] == '6'){
    output.emplace_back("M");
    output.emplace_back("N");
    output.emplace_back("O");
  }
  else if (input[0] == '7'){
    output.emplace_back("P");
    output.emplace_back("Q");
    output.emplace_back("R");
    output.emplace_back("S");
  }
  else if (input[0] == '8'){
    output.emplace_back("T");
    output.emplace_back("U");
    output.emplace_back("V");
  }
  else if (input[0] == '9'){
    output.emplace_back("W");
    output.emplace_back("X");
    output.emplace_back("Y");
    output.emplace_back("Z");
  }

  if (input.size() > 1) {
    input.erase(input.begin());
    std::vector<std::string> next(calculateNum(input));
    int outputSize = output.size();
    for(int i = 0; i < outputSize; ++i) {
      for(int j = 0; j < next.size(); ++j) {
        output.emplace_back(output[0] + next[j]);
      }
      output.erase(output.begin());
    }
  }
 
  return output;

}

int main(int argc, char* argv[]) {

  std::vector<char> input;

  for (int i = 0; i < argc; ++i) {
    input.emplace_back(*argv[i+1]);
  }

  std::vector<std::string> output(calculateNum(input));

  for(int i = 0; i < output.size(); ++i) {
    std::cout << output[i] << std::endl;
  }

  return 0;
}
