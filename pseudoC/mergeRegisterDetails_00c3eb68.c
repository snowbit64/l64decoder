// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeRegisterDetails
// Entry Point: 00c3eb68
// Size: 164 bytes
// Signature: undefined __thiscall mergeRegisterDetails(IR_RegisterSet * this, uint param_1, uint param_2)


/* IR_RegisterSet::mergeRegisterDetails(unsigned int, unsigned int) */

void __thiscall IR_RegisterSet::mergeRegisterDetails(IR_RegisterSet *this,uint param_1,uint param_2)

{
  RegisterInfo *pRVar1;
  long lVar2;
  ulong uVar3;
  RegisterInfo *pRVar4;
  RegisterInfo *pRVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(this + 8);
  uVar6 = (*(long *)(this + 0x10) - lVar2 >> 3) * -0x3333333333333333;
  uVar3 = (ulong)param_1;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
    uVar3 = (ulong)param_2;
    if ((uVar3 <= uVar6 && uVar6 - uVar3 != 0) &&
       (pRVar4 = (RegisterInfo *)(lVar2 + uVar3 * 0x28), *pRVar4 != (RegisterInfo)0x0)) {
LAB_00c3ec00:
      setRegisterDetails(this,param_1,pRVar4);
      return;
    }
  }
  else {
    pRVar4 = (RegisterInfo *)(lVar2 + uVar3 * 0x28);
    uVar3 = (ulong)param_2;
    pRVar1 = (RegisterInfo *)0x0;
    if (*pRVar4 != (RegisterInfo)0x0) {
      pRVar1 = pRVar4;
    }
    if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
      if (pRVar1 != (RegisterInfo *)0x0) {
LAB_00c3ebf0:
        setRegisterDetails(this,param_2,pRVar1);
        return;
      }
    }
    else {
      pRVar5 = (RegisterInfo *)(lVar2 + uVar3 * 0x28);
      pRVar4 = (RegisterInfo *)0x0;
      if (*pRVar5 != (RegisterInfo)0x0) {
        pRVar4 = pRVar5;
      }
      if (pRVar1 == (RegisterInfo *)0x0) {
        if (pRVar4 != (RegisterInfo *)0x0) goto LAB_00c3ec00;
      }
      else if (pRVar4 == (RegisterInfo *)0x0) goto LAB_00c3ebf0;
    }
  }
  return;
}


