float simple_interest(double P,double T, double R)
{
    return P*T*R/100;

}

float compund_interest(double P,double T, double R, int N)
{
    return P*(1+R/N)*N*T;
}
