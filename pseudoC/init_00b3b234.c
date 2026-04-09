// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b3b234
// Size: 152 bytes
// Signature: undefined __thiscall init(MasterServerManager * this, KEY_TYPE param_1, ulonglong param_2, char * param_3, uint param_4, LANGUAGE_TYPE param_5)


/* MasterServerManager::init(MasterServerUtil::KEY_TYPE, unsigned long long, char const*, unsigned
   int, LanguageUtil::LANGUAGE_TYPE) */

void __thiscall
MasterServerManager::init
          (MasterServerManager *this,KEY_TYPE param_1,ulonglong param_2,char *param_3,uint param_4,
          LANGUAGE_TYPE param_5)

{
  term();
  *(KEY_TYPE *)(this + 0x400) = param_1;
  *(ulonglong *)(this + 0x408) = param_2;
  *(uint *)(this + 0x410) = param_4;
  *(LANGUAGE_TYPE *)(this + 0x414) = param_5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x110));
  *(undefined8 *)(this + 0x4b8) = 0;
  this[0x4c0] = (MasterServerManager)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x4c8));
  *(undefined2 *)(this + 0x4e0) = 0;
  if (((byte)this[0x4e8] & 1) == 0) {
    *(undefined2 *)(this + 0x4e8) = 0;
  }
  else {
    **(undefined **)(this + 0x4f8) = 0;
    *(undefined8 *)(this + 0x4f0) = 0;
  }
  return;
}


