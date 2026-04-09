// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00c21094
// Size: 120 bytes
// Signature: undefined __thiscall operator<<(GsTInfoSinkBase * this, char * param_1)


/* GsTInfoSinkBase::TEMPNAMEPLACEHOLDERVALUE(char const*) */

GsTInfoSinkBase * __thiscall GsTInfoSinkBase::operator<<(GsTInfoSinkBase *this,char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  size_t sVar4;
  
  sVar4 = strlen(param_1);
  bVar3 = ((byte)*this & 1) != 0;
  uVar1 = (ulong)((byte)*this >> 1);
  if (bVar3) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar2 = 0x16;
  if (bVar3) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < sVar4 + uVar1 + 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)this);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this);
  return this;
}


