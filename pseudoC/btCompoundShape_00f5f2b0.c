// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCompoundShape
// Entry Point: 00f5f2b0
// Size: 464 bytes
// Signature: undefined __thiscall btCompoundShape(btCompoundShape * this, bool param_1, int param_2)


/* btCompoundShape::btCompoundShape(bool, int) */

void __thiscall btCompoundShape::btCompoundShape(btCompoundShape *this,bool param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar5 = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btCompoundShape)0x1;
  *(undefined ***)this = &PTR__btCompoundShape_0101a408;
  *(undefined8 *)(this + 0x48) = 0x5d5e0b6b;
  *(undefined8 *)(this + 0x40) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(this + 0x58) = 0xdd5e0b6b;
  *(undefined8 *)(this + 0x50) = 0xdd5e0b6bdd5e0b6b;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 8) = 0x1f;
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x6c) = 0x3f80000000000000;
  if (param_1) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    puVar3 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x60,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined *)(puVar3 + 7) = 1;
    puVar3[6] = 0;
    *(undefined *)(puVar3 + 0xb) = 1;
    puVar3[2] = 0xffffffff;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined8 *)((long)puVar3 + 0x44) = 0;
    iVar5 = *(int *)(this + 0x28);
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined8 **)(this + 0x60) = puVar3;
  }
  if (iVar5 < param_2) {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar4 = (*(code *)PTR_FUN_01048e38)((long)param_2 * 0x58,0x10);
    }
    uVar2 = *(uint *)(this + 0x24);
    if (0 < (int)uVar2) {
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar4 + lVar6);
        puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar6);
        lVar6 = lVar6 + 0x58;
        uVar7 = *puVar1;
        puVar3[1] = puVar1[1];
        *puVar3 = uVar7;
        uVar7 = puVar1[2];
        puVar3[3] = puVar1[3];
        puVar3[2] = uVar7;
        uVar7 = puVar1[4];
        puVar3[5] = puVar1[5];
        puVar3[4] = uVar7;
        uVar7 = puVar1[6];
        puVar3[7] = puVar1[7];
        puVar3[6] = uVar7;
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        puVar3[10] = puVar1[10];
        puVar3[9] = uVar8;
        puVar3[8] = uVar7;
      } while ((ulong)uVar2 * 0x58 - lVar6 != 0);
    }
    if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (btCompoundShape)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(long *)(this + 0x30) = lVar4;
    *(int *)(this + 0x28) = param_2;
    this[0x38] = (btCompoundShape)0x1;
  }
  return;
}


