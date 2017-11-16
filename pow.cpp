complex pow(double ba, const complex ex) const {
      const complex i(0, 1);
      complex c(std::pow(ba, ex.a)*std::cos(ex.b*std::log(ba)));
      c += i*std::pow(ba, ex.a)*std::sin(ex.b*std::log(ba));
      return c;
    }
    
complex pow(const complex& c, int ex) const {
     complex h = c;
     for(int x = 0; x < ex-1; x++) h = c*h;
          return h;
}