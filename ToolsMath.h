#ifndef TOOL_MATH_H
#define TOOL_MATH_H
#include "dirent.h"
#include "float.h"
#include"iomanip"
#include <sys/time.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <queue>
#include <ctime>
#include <stdlib.h>
#include <thread>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
#include <eigen3/Eigen/LU>
#include <eigen3/Eigen/SVD>
#include <eigen3/Eigen/Dense>
#include "sg/include/sg.h"
#include "parse_ini_file.h"
using namespace std;

class ToolsMath {
    struct AudioPlay {
        double last_timestamp;
        string file_name;
    };
  public:
    ToolsMath();
    const string kVoiceFilesPath = "file path";
    AudioPlay last_audio_play_;
    int64_t Get0();
    string Get3(const int64_t time_stamp);
    string Get1();
    double Calculate1(const double input, const double input2,
                      const double input3, const double input4);
    double Calculate2(double input, double input2);
    bool Calculate3(const double input, const double input2);
    double Calculate4(const double input);
    double Calculate6(const double input);
    double Calculate5(const double input);
    double Calculate7(const double input,
                      const double input2,
                      const double input3,
                      const double input4);
    double Calculate8(const double input);
    void Calculate9(const double input, const double input2, const double input3,
                    double& input4, double & input5);
    int Run1(string input);
    double Filter1(const vector<double>& input,
                   const unsigned long input2) ;
    vector<string> Get4();
    string Get5(const string input);
    double Calculate10(const double input);
    double FT2(const double input,
               const double input2);
};
#endif
