namespace mana
{
  extern "C"
  {
    __attribute__((naked)) int mana();
                           int main();

    int
    mana()
    {
      __asm
      (
        "call main"
      );
    }
  }
}
