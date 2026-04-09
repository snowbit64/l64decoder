// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AllOnes
// Entry Point: 00ce3048
// Size: 196 bytes
// Signature: undefined __thiscall AllOnes(PolynomialMod2 * this, ulong param_1)


/* CryptoPP::PolynomialMod2::AllOnes(unsigned long) */

void __thiscall CryptoPP::PolynomialMod2::AllOnes(PolynomialMod2 *this,ulong param_1)

{
  long in_x8;
  ulong uVar1;
  undefined4 *__s;
  ulong __n;
  
  uVar1 = (ulong)(this + 0x1f) >> 5;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar1;
  AllocatorBase<unsigned_int>::CheckSize(uVar1);
  if (this + 0x1f < (PolynomialMod2 *)0x20) {
    __s = (undefined4 *)0x0;
    *(undefined8 *)(in_x8 + 0x18) = 0;
  }
  else {
    __n = uVar1 * 4;
    __s = (undefined4 *)UnalignedAllocate(__n);
    *(undefined4 **)(in_x8 + 0x18) = __s;
    *__s = 0;
    if (uVar1 != 1) {
      memset(__s + 1,0,__n - 4);
    }
    memset(__s,0xff,__n);
  }
  if (((ulong)this & 0x1f) != 0) {
    __s[uVar1 - 1] = __s[uVar1 - 1] & (-1 << ((ulong)this & 0x1f) ^ 0xffffffffU);
  }
  return;
}


