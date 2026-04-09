// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sameShapeBoolean
// Entry Point: 00c50e64
// Size: 256 bytes
// Signature: undefined __thiscall sameShapeBoolean(IR_Type * this, IR_TypeSet * param_1)


/* IR_Type::sameShapeBoolean(IR_TypeSet*) const */

undefined4 * __thiscall IR_Type::sameShapeBoolean(IR_Type *this,IR_TypeSet *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  IR_TypeSet *pIVar6;
  ulong uVar7;
  
  iVar2 = *(int *)this;
  if (iVar2 == 2) {
    iVar2 = *(int *)(this + 0x10);
    iVar1 = *(int *)(this + 0x14);
    uVar3 = iVar2 - 1;
    uVar7 = (ulong)(iVar1 - 1);
    lVar4 = uVar7 * 0x10 + (ulong)uVar3 * 0x40;
    if (*(undefined4 **)(param_1 + lVar4 + 0xc20) != (undefined4 *)0x0) {
      return *(undefined4 **)(param_1 + lVar4 + 0xc20);
    }
    puVar5 = (undefined4 *)operator_new(0x20);
    puVar5[4] = iVar2;
    puVar5[5] = iVar1;
    *(undefined4 **)(param_1 + lVar4 + 0xc20) = puVar5;
    *puVar5 = 2;
    pIVar6 = param_1 + uVar7 * 0x10 + (ulong)uVar3 * 0x40 + 0xc28;
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)(this + 0x14);
    uVar7 = (ulong)(iVar2 - 1);
    if (*(undefined4 **)(param_1 + uVar7 * 0x10 + 0x2e0) != (undefined4 *)0x0) {
      return *(undefined4 **)(param_1 + uVar7 * 0x10 + 0x2e0);
    }
    puVar5 = (undefined4 *)operator_new(0x20);
    puVar5[5] = iVar2;
    *(undefined4 **)(param_1 + uVar7 * 0x10 + 0x2e0) = puVar5;
    *puVar5 = 1;
    pIVar6 = param_1 + uVar7 * 0x10 + 0x2e8;
  }
  else {
    if (iVar2 != 0) {
      return (undefined4 *)0x0;
    }
    if (*(undefined4 **)(param_1 + 0x90) != (undefined4 *)0x0) {
      return *(undefined4 **)(param_1 + 0x90);
    }
    puVar5 = (undefined4 *)operator_new(0x20);
    pIVar6 = param_1 + 0x98;
    *puVar5 = 0;
    *(undefined4 **)(param_1 + 0x90) = puVar5;
  }
  puVar5[2] = 9;
  *pIVar6 = (IR_TypeSet)0x1;
  return puVar5;
}


