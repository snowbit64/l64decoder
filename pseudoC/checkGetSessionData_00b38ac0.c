// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkGetSessionData
// Entry Point: 00b38ac0
// Size: 48 bytes
// Signature: undefined __thiscall checkGetSessionData(GenericMpManager * this, bool * param_1, basic_string * param_2)


/* GenericMpManager::checkGetSessionData(bool&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

undefined8 __thiscall
GenericMpManager::checkGetSessionData(GenericMpManager *this,bool *param_1,basic_string *param_2)

{
  *param_1 = true;
  if ((*(byte *)param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
    return 1;
  }
  **(undefined **)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  return 1;
}


