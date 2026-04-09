// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00f60294
// Size: 380 bytes
// Signature: undefined __thiscall push_back(btAlignedObjectArray<btCompoundShapeChild> * this, btCompoundShapeChild * param_1)


/* btAlignedObjectArray<btCompoundShapeChild>::push_back(btCompoundShapeChild const&) */

void __thiscall
btAlignedObjectArray<btCompoundShapeChild>::push_back
          (btAlignedObjectArray<btCompoundShapeChild> *this,btCompoundShapeChild *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)(this + 4);
  if (uVar4 == *(uint *)(this + 8)) {
    iVar2 = uVar4 << 1;
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    if ((int)uVar4 < iVar2) {
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)((long)iVar2 * 0x58,0x10);
        uVar4 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          puVar5 = (undefined8 *)(lVar3 + lVar6);
          puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
          lVar6 = lVar6 + 0x58;
          uVar7 = *puVar1;
          puVar5[1] = puVar1[1];
          *puVar5 = uVar7;
          uVar7 = puVar1[2];
          puVar5[3] = puVar1[3];
          puVar5[2] = uVar7;
          uVar7 = puVar1[4];
          puVar5[5] = puVar1[5];
          puVar5[4] = uVar7;
          uVar7 = puVar1[6];
          puVar5[7] = puVar1[7];
          puVar5[6] = uVar7;
          uVar8 = puVar1[9];
          uVar7 = puVar1[8];
          puVar5[10] = puVar1[10];
          puVar5[9] = uVar8;
          puVar5[8] = uVar7;
        } while ((ulong)uVar4 * 0x58 - lVar6 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) &&
         (this[0x18] != (btAlignedObjectArray<btCompoundShapeChild>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar4 = *(uint *)(this + 4);
      *(long *)(this + 0x10) = lVar3;
      *(int *)(this + 8) = iVar2;
      this[0x18] = (btAlignedObjectArray<btCompoundShapeChild>)0x1;
    }
  }
  uVar7 = *(undefined8 *)param_1;
  puVar5 = (undefined8 *)(*(long *)(this + 0x10) + (long)(int)uVar4 * 0x58);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  *puVar5 = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar5[3] = *(undefined8 *)(param_1 + 0x18);
  puVar5[2] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  puVar5[4] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar5[7] = *(undefined8 *)(param_1 + 0x38);
  puVar5[6] = uVar7;
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar5[10] = *(undefined8 *)(param_1 + 0x50);
  puVar5[9] = uVar8;
  puVar5[8] = uVar7;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


