#April Tag Examiner
Goal Of This Class:

To create a way to graphically examine a collection of April Tags.

Preliminary Design For C++ Class: Tag Collection Data Qualifier

Create a class in C++ that is constructed with a 2 parameters:
column width
center location
When an object is constructed from this class, it will take x, y, z coordinates as values and sort them into vectors based on the X position and then order them in their specific vector from closest to farthest.

As a simple example: google sheet
 each column is a vector containing sorted coordinates
notice how we can potentially have a graphical representation of what tags we are seeing
Why?:
Having our data in this manner affords us a lot of capabilities...
If in this object, a vector (column) has 4+ home tags in it, we'd know we are at a corner in home base (which is SUPER important for drop off)
Being able to say, "hey, if there a tag a little ahead of us and to the right (in a slew of tags) ..." is super useful.
It will allow us to align ourselves inside homebase. If we get 3 or more april tags in the -0.5 to 0.5 range, we know we've gotten pretty straight lined up with them. As we tune down column width closer to tag size, we'd get finer and finger alignment with those three tags of the home base. 
etc!
