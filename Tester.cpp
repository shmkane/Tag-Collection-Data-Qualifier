#include <iostream>
#include "TagExaminer.h"
using namespace std;


int main() {

	TagExaminer ex = TagExaminer();
	//Make some tags
	vector<Tag> tags;
	tags.push_back(Tag(-0.2, 2, 1));
	tags.push_back(Tag(-.25, 1, 1));
	tags.push_back(Tag(-.02, 1, 1));
	tags.push_back(Tag(-.12, 1, 1));
	tags.push_back(Tag(.12, 1, 1));
	tags.push_back(Tag(-.12, 1, 1));
	tags.push_back(Tag(-.22, 1, 1));
	tags.push_back(Tag(-.25, 1, 1));
	tags.push_back(Tag(.23, 1, 1));

	ex.loadTags(tags);
}