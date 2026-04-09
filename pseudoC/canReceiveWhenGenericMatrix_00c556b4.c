// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canReceiveWhenGenericMatrix
// Entry Point: 00c556b4
// Size: 284 bytes
// Signature: undefined __cdecl canReceiveWhenGenericMatrix(IR_Type * param_1, bool param_2, IR_Type * * param_3)


/* IR_Type::canReceiveWhenGenericMatrix(IR_Type*, bool, IR_Type*&) */

ulong IR_Type::canReceiveWhenGenericMatrix(IR_Type *param_1,bool param_2,IR_Type **param_3)

{
  GsTBasicType GVar1;
  int iVar2;
  GsTBasicType GVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  
  puVar6 = (uint *)(ulong)param_2;
  uVar7 = *puVar6;
  if ((2 < (int)uVar7) || (2 < uVar7)) {
    return 0xffffffff;
  }
  GVar1 = puVar6[2];
  if (6 < GVar1 - 3) {
    return 0xffffffff;
  }
  if (uVar7 != 0) {
    iVar2 = *(int *)param_1;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    if (iVar2 == 2) {
      if (uVar7 != 2) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x14) != puVar6[5]) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x10) != puVar6[4]) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar7 == 2) {
        return 0xffffffff;
      }
      if (iVar2 != 1) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x14) != puVar6[5]) {
        return 0xffffffff;
      }
    }
    uVar5 = canCoerceBasicType(param_1,GVar1,(bool)((byte)param_3 & 1));
    return uVar5;
  }
  GVar3 = *(GsTBasicType *)(param_1 + 8);
  if (GVar3 - 3 < 7) {
    if (GVar3 == GVar1) {
      uVar7 = 0;
      goto LAB_00c557ac;
    }
    uVar7 = 0xffffffff;
    if ((GVar1 == 9) || (GVar3 == 9)) goto LAB_00c557ac;
    uVar4 = *(uint *)(&UNK_0053e21c + (ulong)(GVar3 - 3) * 4 + (ulong)(GVar1 - 3) * 0x18);
    if ((-1 < (int)uVar4) && (((uVar4 >> 5 & 1) == 0 || (((ulong)param_3 & 1) != 0)))) {
      uVar7 = 0;
      if ((uVar4 & 0x1f) != 0) {
        uVar7 = (uVar4 & 0x1f) + 1;
      }
      goto LAB_00c557ac;
    }
  }
  uVar7 = 0xffffffff;
LAB_00c557ac:
  uVar4 = uVar7 | 0x10;
  if (1 < *(int *)param_1 - 1U) {
    uVar4 = uVar7;
  }
  return (ulong)uVar4;
}


