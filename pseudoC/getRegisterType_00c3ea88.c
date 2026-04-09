// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRegisterType
// Entry Point: 00c3ea88
// Size: 76 bytes
// Signature: undefined __thiscall getRegisterType(IR_RegisterSet * this, uint param_1)


/* IR_RegisterSet::getRegisterType(unsigned int) const */

undefined8 __thiscall IR_RegisterSet::getRegisterType(IR_RegisterSet *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 8);
  uVar3 = (*(long *)(this + 0x10) - lVar1 >> 3) * -0x3333333333333333;
  uVar2 = (ulong)param_1;
  if ((uVar2 <= uVar3 && uVar3 - uVar2 != 0) && (*(char *)(lVar1 + uVar2 * 0x28) != '\0')) {
    return *(undefined8 *)(lVar1 + uVar2 * 0x28 + 0x20);
  }
  return 0;
}


