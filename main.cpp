#include <iostream>
#include "TagExaminer.h"

using namespace std;
int main() {
    vector <Tag> tags;

    tags.push_back(Tag(.36,0,0));
    tags.push_back(Tag(.5,1,1));
    tags.push_back(Tag(.25,1,1));
    tags.push_back(Tag(0,3,2));
    tags.push_back(Tag(.25,2,1.2));
    tags.push_back(Tag(.5,1.3,.123));
    tags.push_back(Tag(1,.9812,0.123));

    TagExaminer ex;
    ex.loadTags(tags);
    ex.graph();
    ex.determineTurning();

    return 0;
}