// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prefix
// Entry Point: 00c15a48
// Size: 324 bytes
// Signature: undefined __thiscall prefix(GsTInfoSinkBase * this, TPrefixType param_1)


/* GsTInfoSinkBase::prefix(TPrefixType) */

void __thiscall GsTInfoSinkBase::prefix(GsTInfoSinkBase *this,TPrefixType param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  switch(param_1) {
  case 0:
    goto switchD_00c15a78_caseD_0;
  case 1:
    bVar3 = ((byte)*this & 1) != 0;
    uVar1 = (ulong)((byte)*this >> 1);
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar2 < uVar1 + 0xb) {
LAB_00c15b68:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      reserve((ulong)this);
    }
    break;
  case 2:
    bVar3 = ((byte)*this & 1) != 0;
    uVar1 = (ulong)((byte)*this >> 1);
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar2 < uVar1 + 9) goto LAB_00c15b68;
    break;
  case 3:
    bVar3 = ((byte)*this & 1) != 0;
    uVar1 = (ulong)((byte)*this >> 1);
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar2 < uVar1 + 0x12) goto LAB_00c15b68;
    break;
  default:
    bVar3 = ((byte)*this & 1) != 0;
    uVar1 = (ulong)((byte)*this >> 1);
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar2 < uVar1 + 0x10) goto LAB_00c15b68;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this);
switchD_00c15a78_caseD_0:
  return;
}


