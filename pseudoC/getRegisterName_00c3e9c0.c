// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRegisterName
// Entry Point: 00c3e9c0
// Size: 116 bytes
// Signature: undefined __thiscall getRegisterName(IR_RegisterSet * this, uint param_1)


/* IR_RegisterSet::getRegisterName(unsigned int) const */

long __thiscall IR_RegisterSet::getRegisterName(IR_RegisterSet *this,uint param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 8);
  uVar4 = (*(long *)(this + 0x10) - lVar2 >> 3) * -0x3333333333333333;
  uVar3 = (ulong)param_1;
  if ((uVar3 <= uVar4 && uVar4 - uVar3 != 0) && (*(char *)(lVar2 + uVar3 * 0x28) != '\0')) {
    lVar5 = lVar2 + uVar3 * 0x28;
    bVar1 = *(byte *)(lVar5 + 8);
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(lVar5 + 0x10);
    }
    if (uVar4 != 0) {
      lVar2 = *(long *)(lVar2 + uVar3 * 0x28 + 0x18);
      if ((bVar1 & 1) == 0) {
        lVar2 = lVar5 + 9;
      }
      return lVar2;
    }
  }
  return 0;
}


