// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTrigger
// Entry Point: 00873c10
// Size: 56 bytes
// Signature: undefined __thiscall setTrigger(AnimalData * this, basic_string * param_1, void * param_2)


/* AnimalCompanionManager::AnimalData::setTrigger(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, void*) */

void __thiscall
AnimalCompanionManager::AnimalData::setTrigger(AnimalData *this,basic_string *param_1,void *param_2)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30),param_1);
  *(void **)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x48] = (AnimalData)0x1;
  return;
}


