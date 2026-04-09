// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: infoMessage
// Entry Point: 006d4a90
// Size: 212 bytes
// Signature: undefined __thiscall infoMessage(Console * this, char * param_1, uint param_2)


/* Console::infoMessage(char const*, unsigned int) */

void __thiscall Console::infoMessage(Console *this,char *param_1,uint param_2)

{
  undefined2 *puVar1;
  basic_string *pbVar2;
  byte bVar3;
  ulong uVar4;
  
  Mutex::enterCriticalSection();
  if (param_2 != 0) {
    puVar1 = (undefined2 *)(this + 0xd0);
    uVar4 = (ulong)param_2;
    do {
      if (*param_1 == '\n') {
        pbVar2 = *(basic_string **)(this + 0x10);
        if (pbVar2 == *(basic_string **)(this + 0x18)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((basic_string *)(this + 8));
          bVar3 = *(byte *)puVar1;
        }
        else {
                    /* try { // try from 006d4b00 to 006d4b0b has its CatchHandler @ 006d4b64 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar2);
          *(basic_string **)(this + 0x10) = pbVar2 + 6;
          bVar3 = *(byte *)puVar1;
        }
        if ((bVar3 & 1) == 0) {
          *puVar1 = 0;
        }
        else {
          **(undefined **)(this + 0xe0) = 0;
          *(undefined8 *)(this + 0xd8) = 0;
        }
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)puVar1);
      }
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  Mutex::leaveCriticalSection();
  return;
}


