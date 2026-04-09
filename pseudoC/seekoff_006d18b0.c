// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seekoff
// Entry Point: 006d18b0
// Size: 256 bytes
// Signature: undefined __thiscall seekoff(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, longlong param_1, seekdir param_2, uint param_3)


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */

undefined  [16] __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
seekoff(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
       longlong param_1,seekdir param_2,uint param_3)

{
  ulong uVar1;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = *(ulong *)(this + 0x30);
  uVar6 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar7) {
    *(ulong *)(this + 0x58) = uVar7;
    uVar6 = uVar7;
  }
  if (((param_3 & 0x18) == 0) || ((param_2 == 1 && ((param_3 & 0x18) == 0x18)))) goto LAB_006d196c;
  if (uVar6 == 0) {
    lVar8 = 0;
    if (param_2 != 0) goto LAB_006d1900;
LAB_006d1928:
    lVar9 = 0;
  }
  else {
    pbVar2 = this + 0x41;
    if (((byte)this[0x40] & 1) != 0) {
      pbVar2 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 **)(this + 0x50);
    }
    lVar8 = uVar6 - (long)pbVar2;
    if (param_2 == 0) goto LAB_006d1928;
LAB_006d1900:
    lVar9 = lVar8;
    if (param_2 != 2) {
      if (param_2 != 1) goto LAB_006d196c;
      if ((param_3 >> 3 & 1) == 0) {
        lVar9 = uVar7 - *(long *)(this + 0x28);
      }
      else {
        lVar9 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
      }
    }
  }
  uVar1 = lVar9 + param_1;
  uVar5 = 0xffffffffffffffff;
  if ((-1 < (long)uVar1) && ((long)uVar1 <= lVar8)) {
    if ((uVar1 != 0) &&
       ((((param_3 >> 3 & 1) != 0 && (*(long *)(this + 0x18) == 0)) ||
        (((param_3 >> 4 & 1) != 0 && (uVar7 == 0)))))) {
LAB_006d196c:
      return ZEXT816(0xffffffffffffffff) << 0x40;
    }
    if ((param_3 >> 3 & 1) != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar1;
      *(ulong *)(this + 0x20) = uVar6;
    }
    if ((param_3 >> 4 & 1) == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      return auVar4 << 0x40;
    }
    *(long *)(this + 0x30) = *(long *)(this + 0x28) + (long)(int)uVar1;
    uVar5 = uVar1;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  return auVar3 << 0x40;
}


