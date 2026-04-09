// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyRegisterDetails
// Entry Point: 00c3ec0c
// Size: 80 bytes
// Signature: undefined __thiscall copyRegisterDetails(IR_RegisterSet * this, uint param_1, uint param_2)


/* IR_RegisterSet::copyRegisterDetails(unsigned int, unsigned int) */

void __thiscall IR_RegisterSet::copyRegisterDetails(IR_RegisterSet *this,uint param_1,uint param_2)

{
  RegisterInfo *pRVar1;
  RegisterInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * -0x3333333333333333;
  uVar3 = (ulong)param_1;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    pRVar2 = (RegisterInfo *)(*(long *)(this + 8) + uVar3 * 0x28);
    pRVar1 = (RegisterInfo *)0x0;
    if (*pRVar2 != (RegisterInfo)0x0) {
      pRVar1 = pRVar2;
    }
    setRegisterDetails(this,param_2,pRVar1);
    return;
  }
  setRegisterDetails(this,param_2,(RegisterInfo *)0x0);
  return;
}


