#pragma comment (linker, "/entry:mana")
#pragma comment (linker, "/SUBSYSTEM:WINDOWS")

namespace mana
{
  extern "C"
  {
    __declspec ("naked") int mana();
                         int main();

    int
    mana()
    {
      __asm
      {
        call main;
      }
    }
  }
}
