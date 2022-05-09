# Geolocation Makefile by Olivia Stone for Code Clinic: C++
CC		= g++
TARGET	= Geolocation
SRC		= GeolocationMain.cpp GeolocationRequest.cpp  GeolocationWifiPoints.cpp cJSON.c
LDLIBS	= -L/cygdrive/c/Users/amustafa/Desktop/GeolocationApp -lcurl -lwlanapi

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(LDLIBS)

.PHONY: clean
clean:
	rm -f $(TARGET)