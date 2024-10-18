namespace mana
{
  extern "C"
  {
    int mana () __attribute__ ((naked));

    int
    mana ()
    {
      __asm ("ret");
    }
  }
}
