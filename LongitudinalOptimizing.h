#ifndef LONGITUDINAL_OPTIMIZING_H
#define LONGITUDINAL_OPTIMIZING_H

class LongitudinalOptimizing {
  public:
    double VD_SGP(double input, double input2);
    double VD_SGI(double input, double input2);
    double VD_SIR(double input);
    float VD_SCR(float input);
    double SM(const double input,
              const double input2,
              const double input3,
              const double input4);
    double SM2(const double input,
               const double input2);
    double CTD(double input, double input2);
};
#endif
