// Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TagExaminer.h"
#include <utility>

using namespace std;




int main()
{
	//Create some tags
	Tag tag1 = Tag(-2.5, 1, 1);
	Tag tag2 = Tag(-1, 2, 2);
	Tag tag3 = Tag(-.25, 1, 1);
	Tag tag4 = Tag(.75, 1, 1);
	Tag tag5 = Tag(2.5, 1, 2);
	Tag tag6 = Tag(-1, 4, 4);
	Tag tag7 = Tag(-1, 3, 3);
	Tag tag8 = Tag(-2.1, 2, 2);
	Tag tag9 = Tag(-1.75, 3, 4);
	Tag tag10 = Tag(1.25, 1, 1);


	//put tags in a vector
	vector<Tag> tags;
	tags.push_back(tag1);
	tags.push_back(tag4);
	tags.push_back(tag5);
	tags.push_back(tag6);
	tags.push_back(tag2);
	tags.push_back(tag3);
	tags.push_back(tag7);
	tags.push_back(tag8);
	tags.push_back(tag9);
	tags.push_back(tag10);


	//create TagExaminer obj
	TagExaminer ex = TagExaminer(tags, 1, 0);
	

	//get data from it
	
    return 0;
}
