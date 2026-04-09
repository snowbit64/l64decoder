// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: message
// Entry Point: 00c12d24
// Size: 224 bytes
// Signature: undefined __cdecl message(TPrefixType param_1, char * param_2, GsTSourceLoc param_3)


/* GsTInfoSinkBase::message(TPrefixType, char const*, GsTSourceLoc) */

void GsTInfoSinkBase::message(TPrefixType param_1,char *param_2,GsTSourceLoc param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ulong *this;
  size_t sVar4;
  
  this = (ulong *)(ulong)param_1;
  location(param_1);
  prefix((GsTInfoSinkBase *)this,(TPrefixType)param_2);
  sVar4 = strlen((char *)(ulong)param_3);
  bVar3 = (*(byte *)this & 1) != 0;
  uVar1 = (ulong)(*(byte *)this >> 1);
  if (bVar3) {
    uVar1 = this[1];
  }
  uVar2 = 0x16;
  if (bVar3) {
    uVar2 = (*this & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < sVar4 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)this);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this);
  bVar3 = (*(byte *)this & 1) != 0;
  uVar1 = (ulong)(*(byte *)this >> 1);
  if (bVar3) {
    uVar1 = this[1];
  }
  uVar2 = 0x16;
  if (bVar3) {
    uVar2 = (*this & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < uVar1 + 3) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)this);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this);
  return;
}


