// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasRegister
// Entry Point: 00c3eb18
// Size: 80 bytes
// Signature: undefined __thiscall hasRegister(IR_RegisterSet * this, uint param_1)


/* IR_RegisterSet::hasRegister(unsigned int) const */

bool __thiscall IR_RegisterSet::hasRegister(IR_RegisterSet *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 8);
  uVar3 = (*(long *)(this + 0x10) - lVar1 >> 3) * -0x3333333333333333;
  uVar2 = (ulong)param_1;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    return *(char *)(lVar1 + uVar2 * 0x28) != '\0' && lVar1 != 0;
  }
  return false;
}


