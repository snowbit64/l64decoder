// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceive
// Entry Point: 00c554cc
// Size: 488 bytes
// Signature: undefined __thiscall canReceive(IR_Type * this, IR_Type * param_1, bool param_2, IR_Type * * param_3)


/* IR_Type::canReceive(IR_Type*, bool, IR_Type*&) */

ulong __thiscall IR_Type::canReceive(IR_Type *this,IR_Type *param_1,bool param_2,IR_Type **param_3)

{
  uint uVar1;
  IR_Type *pIVar2;
  int iVar3;
  ulong uVar4;
  IR_Struct *this_00;
  
  do {
    if (this == param_1) break;
    if ((*(int *)this != 0) || (1 < *(int *)((long)this + 8) - 1U)) {
      uVar4 = 0xffffffff;
      switch(*(int *)this) {
      case 0:
        if (*(int *)((long)this + 8) != 0) goto switchD_00c55550_caseD_1;
        break;
      case 1:
      case 2:
switchD_00c55550_caseD_1:
        uVar4 = canReceiveWhenGenericMatrix(this,SUB81(param_1,0),(IR_Type **)(ulong)(param_2 & 1));
        return uVar4;
      case 3:
        if (*(int *)param_1 == 3) {
          this_00 = *(IR_Struct **)((long)this + 8);
          if ((this_00 == *(IR_Struct **)(param_1 + 8)) ||
             ((this_00[0x50] != (IR_Struct)0x0 &&
              (uVar4 = IR_Struct::queryResolvedStruct(this_00,*(IR_Struct **)(param_1 + 8),param_3),
              (uVar4 & 1) != 0)))) goto LAB_00c55528;
        }
        break;
      case 4:
        if ((*(int *)param_1 == 4) &&
           ((*(int *)((long)this + 0x10) == 0 ||
            (*(int *)((long)this + 0x10) != *(int *)(param_1 + 0x10))))) {
          iVar3 = canReceive(*(IR_Type **)((long)this + 8),*(IR_Type **)(param_1 + 8),false,param_3)
          ;
          return (ulong)-(uint)(iVar3 != 0);
        }
        break;
      case 5:
        pIVar2 = *(IR_Type **)((long)this + 8);
        if (*(int *)param_1 != 5) {
          pIVar2 = param_1;
          param_1 = this;
        }
        return (ulong)-(uint)(*(IR_Type **)((long)param_1 + 8) != pIVar2);
      default:
        goto switchD_00c55550_caseD_6;
      case 7:
        if ((((*(int *)param_1 == 7) && (*(int *)(param_1 + 0x10) == *(int *)((long)this + 0x10)))
            && (iVar3 = canReceive(*(IR_Type **)((long)this + 8),*(IR_Type **)(param_1 + 8),false,
                                   param_3), iVar3 == 0)) &&
           (param_1[0x14] == *(IR_Type *)((long)this + 0x14))) {
          if (param_1[0x15] == *(IR_Type *)((long)this + 0x15)) {
            iVar3 = *(int *)((long)this + 0x18);
            if (*(int *)(param_1 + 0x18) == iVar3) goto LAB_00c55528;
          }
          else {
            iVar3 = *(int *)((long)this + 0x18);
          }
          if (*(IR_Type *)((long)this + 0x15) != param_1[0x15]) {
            return 0xffffffff;
          }
          if (iVar3 != 2) {
            uVar1 = 1;
            if (*(int *)(param_1 + 0x18) == 2) {
              uVar1 = 0xffffffff;
            }
            return (ulong)uVar1;
          }
          return 0xffffffff;
        }
      }
      return 0xffffffff;
    }
    uVar4 = queryResolvedType(this,param_1,param_3);
    if ((uVar4 & 1) == 0) {
      return 0xffffffff;
    }
    this = *param_3;
  } while ((int *)this != (int *)0x0);
LAB_00c55528:
  uVar4 = 0;
switchD_00c55550_caseD_6:
  return uVar4;
}


