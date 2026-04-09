// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSameShapeBoolean
// Entry Point: 00c547f8
// Size: 308 bytes
// Signature: undefined __thiscall getSameShapeBoolean(IR_TypeSet * this, IR_Type * param_1)


/* IR_TypeSet::getSameShapeBoolean(IR_Type*) */

void __thiscall IR_TypeSet::getSameShapeBoolean(IR_TypeSet *this,IR_Type *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  IR_Type *pIVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  iVar2 = *(int *)param_1;
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar7 = (ulong)(iVar2 - 1);
    if (*(long *)(this + uVar7 * 0x10 + 0x2e0) == 0) {
      puVar6 = (undefined4 *)operator_new(0x20);
      puVar6[5] = iVar2;
      *(undefined4 **)(this + uVar7 * 0x10 + 0x2e0) = puVar6;
      *puVar6 = 1;
      puVar6[2] = 9;
      this[uVar7 * 0x10 + 0x2e8] = (IR_TypeSet)0x1;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar3 = iVar2 - 1;
    uVar7 = (ulong)(iVar1 - 1);
    lVar4 = uVar7 * 0x10 + (ulong)uVar3 * 0x40;
    if (*(long *)(this + lVar4 + 0xc20) == 0) {
      puVar6 = (undefined4 *)operator_new(0x20);
      puVar6[4] = iVar2;
      puVar6[5] = iVar1;
      *(undefined4 **)(this + lVar4 + 0xc20) = puVar6;
      *puVar6 = 2;
      puVar6[2] = 9;
      this[uVar7 * 0x10 + (ulong)uVar3 * 0x40 + 0xc28] = (IR_TypeSet)0x1;
    }
  }
  else {
    if (iVar2 == 4) {
      pIVar5 = (IR_Type *)getSameShapeBoolean(this,*(IR_Type **)(param_1 + 8));
      getArrayType(this,pIVar5,*(uint *)(param_1 + 0x10));
      return;
    }
    if (*(long *)(this + 0x90) == 0) {
      puVar6 = (undefined4 *)operator_new(0x20);
      *puVar6 = 0;
      *(undefined4 **)(this + 0x90) = puVar6;
      puVar6[2] = 9;
      this[0x98] = (IR_TypeSet)0x1;
    }
  }
  return;
}


