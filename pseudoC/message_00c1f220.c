// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: message
// Entry Point: 00c1f220
// Size: 192 bytes
// Signature: undefined __thiscall message(GsTInfoSinkBase * this, TPrefixType param_1, char * param_2)


/* GsTInfoSinkBase::message(TPrefixType, char const*) */

void __thiscall GsTInfoSinkBase::message(GsTInfoSinkBase *this,TPrefixType param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  size_t sVar4;
  
  prefix(this,param_1);
  sVar4 = strlen(param_2);
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
  bVar3 = ((byte)*this & 1) != 0;
  uVar1 = (ulong)((byte)*this >> 1);
  if (bVar3) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar2 = 0x16;
  if (bVar3) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar2 < uVar1 + 3) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)this);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this);
  return;
}


