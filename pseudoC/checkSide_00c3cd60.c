// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkSide
// Entry Point: 00c3cd60
// Size: 292 bytes
// Signature: undefined __thiscall checkSide(IR_InstructionSequence * this, char * param_1, uint * param_2, uint param_3)


/* IR_InstructionSequence::checkSide(char const*, unsigned int const*, unsigned int) */

bool __thiscall
IR_InstructionSequence::checkSide
          (IR_InstructionSequence *this,char *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  
LAB_00c3cd68:
  bVar3 = *param_1;
  if (bVar3 != 0x3a) {
    if (bVar3 == 0x2a) {
      return true;
    }
    if (bVar3 != 0) {
      if (param_3 == 0) {
        return false;
      }
      bVar2 = false;
      do {
        if (bVar3 < 0x2c) {
          if (bVar3 == 0) goto LAB_00c3ce50;
          if (bVar3 == 0x2a) {
            return true;
          }
        }
        else if ((bVar3 == 0x2c) || (bVar3 == 0x3a)) goto LAB_00c3ce50;
        if ((int)*param_2 < 0) {
          iVar1 = *(int *)(*(long *)(*(long *)this + 0x80) + ((ulong)*param_2 & 0x7fffffff) * 0x18);
          if ((iVar1 == 0xe) || (iVar1 == 0)) {
            param_1 = (char *)((byte *)param_1 + 1);
            bVar3 = *param_1;
            bVar2 = true;
          }
          else {
            bVar2 = (bool)((((bVar3 == 0x4e && iVar1 == 0xc || bVar3 == 0x42 && iVar1 == 0xb) ||
                            bVar3 == 0x4e && iVar1 == 10) || bVar3 == 0x43 && iVar1 < 10) | bVar2);
            param_1 = (char *)((byte *)param_1 + 1);
            bVar3 = *param_1;
          }
        }
        else {
          bVar2 = (bool)(bVar3 == 0x52 | bVar2);
          param_1 = (char *)((byte *)param_1 + 1);
          bVar3 = *param_1;
        }
      } while( true );
    }
  }
  return param_3 == 0;
LAB_00c3ce50:
  if (!bVar2) {
    return false;
  }
  param_2 = param_2 + 1;
  if (bVar3 == 0x2c) {
    param_1 = (char *)((byte *)param_1 + 1);
  }
  param_3 = param_3 - 1;
  goto LAB_00c3cd68;
}


