// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00c2a05c
// Size: 164 bytes
// Signature: undefined __thiscall operator==(IR_Const * this, IR_Const * param_1)


/* IR_Const::TEMPNAMEPLACEHOLDERVALUE(IR_Const const&) const */

bool __thiscall IR_Const::operator==(IR_Const *this,IR_Const *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)this != *(int *)param_1) {
switchD_00c2a098_caseD_0:
    return false;
  }
  switch(*(int *)this) {
  case 0:
  case 0xe:
    return true;
  default:
    goto switchD_00c2a098_caseD_0;
  case 3:
    bVar1 = *(float *)(this + 8) == *(float *)(param_1 + 8);
    break;
  case 5:
  case 6:
  case 0xd:
    uVar3 = *(uint *)(this + 8);
    uVar4 = *(uint *)(param_1 + 8);
    goto LAB_00c2a0dc;
  case 9:
    uVar3 = (uint)(byte)this[8];
    uVar4 = (uint)(byte)param_1[8];
LAB_00c2a0dc:
    bVar1 = uVar3 == uVar4;
    break;
  case 10:
  case 0xb:
    bVar1 = *(long *)(this + 8) == *(long *)(param_1 + 8);
    break;
  case 0xc:
    iVar2 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


