# Point
# The point of this project is to explore introductionary class design in C++ (information hiding, overloading operators, and creating friend functions).
# I will model mathematical points and include methods to compare two points to each other.
# Only the less than operator will compare the x and y coordinates between points, and all the other relational operators will use the less than operator to establish a true or false value

# Functions:
# point(float x, float y) - Constructor: from two parameters only
# float distance() - Return the linear distance the point is from the origin
# bool operator <(point& lhs, point& rhs) - Operation: return true is the distance to the origin for lhs is less than the distance to the origin for rhs
# bool operator >(point& lhs, point& rhs) - Defined in terms of <
# bool operator >=(point& lhs, point& rhs) - Defined in terms of <
# bool operator ==(point& lhs, point& rhs) - Defined in terms of <
# bool operator <=(point& lhs, point& rhs) - Defined in terms of <
# bool operator !=(point& lhs, point& rhs) - Defined in terms of <
