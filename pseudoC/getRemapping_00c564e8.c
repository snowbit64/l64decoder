// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRemapping
// Entry Point: 00c564e8
// Size: 84 bytes
// Signature: undefined __thiscall getRemapping(StructFieldRemapping * this, uint param_1)


/* StructFieldRemapping::getRemapping(unsigned int) const */

long __thiscall StructFieldRemapping::getRemapping(StructFieldRemapping *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)this;
  if (*(long *)(this + 8) - lVar1 != 0) {
    uVar2 = 0;
    uVar3 = (*(long *)(this + 8) - lVar1 >> 3) * -0x3333333333333333;
    do {
      if (*(uint *)(lVar1 + uVar2 * 0x28 + 8) == param_1) {
        return lVar1 + uVar2 * 0x28;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return 0;
}


