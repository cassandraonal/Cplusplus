CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = main

SRCS = main.cpp LinkedList.cpp Person.cpp Student.cpp Faculty.cpp ListNode.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)