// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PolynomialMod2
// Entry Point: 00ce2dac
// Size: 156 bytes
// Signature: undefined __thiscall PolynomialMod2(PolynomialMod2 * this, uint param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::PolynomialMod2(unsigned int, unsigned long) */

void __thiscall
CryptoPP::PolynomialMod2::PolynomialMod2(PolynomialMod2 *this,uint param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_2 + 0x1f >> 5;
  *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x10) = uVar3;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (param_2 + 0x1f < 0x20) {
    puVar1 = (uint *)0x0;
    lVar2 = *(long *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    puVar1 = (uint *)UnalignedAllocate(uVar3 << 2);
    lVar2 = *(long *)(this + 0x10);
    *(uint **)(this + 0x18) = puVar1;
  }
  if ((lVar2 != 0) && (*puVar1 = param_1, lVar2 != 1)) {
    memset(puVar1 + 1,0,lVar2 * 4 - 4);
    return;
  }
  return;
}


