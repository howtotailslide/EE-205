#ifndef TOPICS_H
#define TOPICS_H
#include "questions.hpp"
#include <vector>



class topic{

private:
  std::vector<question> questions;

public:

//Getter for overall topic vector
std::vector<question> get_topic();

//Initializer for Topic on C++
void generate_topic_cpp();

//topic generate_topic_hawaii();

//topic generate_topic_history();

//topic generate_topic_popculture();


};


#endif
