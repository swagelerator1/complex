complex log(const complex c)  {
      return complex(std::log(abs(c)), arg(c));
    }