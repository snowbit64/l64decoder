// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRegisterType
// Entry Point: 00c3ead4
// Size: 68 bytes
// Signature: undefined __thiscall setRegisterType(IR_RegisterSet * this, uint param_1, IR_Type * param_2)


/* IR_RegisterSet::setRegisterType(unsigned int, IR_Type*) */

void __thiscall IR_RegisterSet::setRegisterType(IR_RegisterSet *this,uint param_1,IR_Type *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 8);
  uVar3 = (*(long *)(this + 0x10) - lVar1 >> 3) * -0x3333333333333333;
  uVar2 = (ulong)param_1;
  if ((uVar2 <= uVar3 && uVar3 - uVar2 != 0) && (*(char *)(lVar1 + uVar2 * 0x28) != '\0')) {
    *(IR_Type **)(lVar1 + uVar2 * 0x28 + 0x20) = param_2;
  }
  return;
}


