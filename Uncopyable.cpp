//class specifically designed to prevent copying
class Uncopyable {
  protected: // allow construction
    Uncopyable() {} // and destruction of
    ~Uncopyable() {} // derived objects...
  private:
    Uncopyable(const Uncopyable & ); // ...but prevent copying
  Uncopyable & operator = (const Uncopyable & );
};