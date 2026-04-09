// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00f8ba44
// Size: 396 bytes
// Signature: undefined __thiscall push_back(btAlignedObjectArray<btSoftBody::RContact> * this, RContact * param_1)


/* btAlignedObjectArray<btSoftBody::RContact>::push_back(btSoftBody::RContact const&) */

void __thiscall
btAlignedObjectArray<btSoftBody::RContact>::push_back
          (btAlignedObjectArray<btSoftBody::RContact> *this,RContact *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
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
        lVar3 = (*(code *)PTR_FUN_01048e38)((long)iVar2 * 0x78,0x10);
        uVar4 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          puVar5 = (undefined8 *)(lVar3 + lVar6);
          puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
          lVar6 = lVar6 + 0x78;
          uVar10 = *puVar1;
          uVar9 = puVar1[3];
          uVar8 = puVar1[2];
          uVar7 = puVar1[4];
          puVar5[1] = puVar1[1];
          *puVar5 = uVar10;
          puVar5[3] = uVar9;
          puVar5[2] = uVar8;
          puVar5[4] = uVar7;
          uVar7 = puVar1[5];
          puVar5[6] = puVar1[6];
          puVar5[5] = uVar7;
          uVar7 = puVar1[7];
          puVar5[8] = puVar1[8];
          puVar5[7] = uVar7;
          uVar7 = puVar1[9];
          puVar5[10] = puVar1[10];
          puVar5[9] = uVar7;
          uVar7 = *(undefined8 *)((long)puVar1 + 100);
          uVar9 = puVar1[0xc];
          uVar8 = puVar1[0xb];
          *(undefined8 *)((long)puVar5 + 0x6c) = *(undefined8 *)((long)puVar1 + 0x6c);
          *(undefined8 *)((long)puVar5 + 100) = uVar7;
          puVar5[0xc] = uVar9;
          puVar5[0xb] = uVar8;
        } while ((ulong)uVar4 * 0x78 - lVar6 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) &&
         (this[0x18] != (btAlignedObjectArray<btSoftBody::RContact>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar4 = *(uint *)(this + 4);
      *(long *)(this + 0x10) = lVar3;
      *(int *)(this + 8) = iVar2;
      this[0x18] = (btAlignedObjectArray<btSoftBody::RContact>)0x1;
    }
  }
  uVar10 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = (undefined8 *)(*(long *)(this + 0x10) + (long)(int)uVar4 * 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  *puVar5 = uVar10;
  puVar5[3] = uVar9;
  puVar5[2] = uVar8;
  puVar5[4] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar5[6] = *(undefined8 *)(param_1 + 0x30);
  puVar5[5] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar5[8] = *(undefined8 *)(param_1 + 0x40);
  puVar5[7] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  puVar5[10] = *(undefined8 *)(param_1 + 0x50);
  puVar5[9] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 100);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)((long)puVar5 + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)((long)puVar5 + 100) = uVar7;
  puVar5[0xc] = uVar9;
  puVar5[0xb] = uVar8;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


