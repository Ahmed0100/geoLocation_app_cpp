/**
 * GeolocationMain.cpp by Olivia Stone for Code Clinic: C++
 **/

#include "curl\curl.h" // curl support https://curl.haxx.se/
#include "GeolocationWifiPoints.hpp" 
using namespace std;
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
} 
 
int main()
{ 
  CURL *curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://jsonplaceholder.typicode.com/posts");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    cout<<"HELLO"<<endl;
    std::cout << readBuffer << std::endl;
  }
	// // request and display location info
	// GeolocationRequest request;
	// request.getLocation(jsonPayload);

	return 0;
}
