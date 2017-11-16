complex log(const complex c) const {
      return complex(std::log(c.abs(c)), c.arg(c));
    }