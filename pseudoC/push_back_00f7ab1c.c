// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00f7ab1c
// Size: 396 bytes
// Signature: undefined __thiscall push_back(btAlignedObjectArray<btSoftBody::Anchor> * this, Anchor * param_1)


/* btAlignedObjectArray<btSoftBody::Anchor>::push_back(btSoftBody::Anchor const&) */

void __thiscall
btAlignedObjectArray<btSoftBody::Anchor>::push_back
          (btAlignedObjectArray<btSoftBody::Anchor> *this,Anchor *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(uint *)(this + 4);
  if (uVar5 == *(uint *)(this + 8)) {
    iVar3 = uVar5 << 1;
    if (uVar5 == 0) {
      iVar3 = 1;
    }
    if ((int)uVar5 < iVar3) {
      if (iVar3 == 0) {
        lVar4 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar3 * 0x68,0x10);
        uVar5 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar5) {
        lVar7 = 0;
        do {
          puVar6 = (undefined8 *)(lVar4 + lVar7);
          puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar7);
          lVar7 = lVar7 + 0x68;
          uVar10 = *puVar1;
          uVar9 = puVar1[3];
          uVar8 = puVar1[2];
          uVar2 = *(undefined4 *)(puVar1 + 4);
          puVar6[1] = puVar1[1];
          *puVar6 = uVar10;
          puVar6[3] = uVar9;
          puVar6[2] = uVar8;
          *(undefined4 *)(puVar6 + 4) = uVar2;
          uVar8 = *(undefined8 *)((long)puVar1 + 0x24);
          *(undefined8 *)((long)puVar6 + 0x2c) = *(undefined8 *)((long)puVar1 + 0x2c);
          *(undefined8 *)((long)puVar6 + 0x24) = uVar8;
          uVar8 = *(undefined8 *)((long)puVar1 + 0x34);
          *(undefined8 *)((long)puVar6 + 0x3c) = *(undefined8 *)((long)puVar1 + 0x3c);
          *(undefined8 *)((long)puVar6 + 0x34) = uVar8;
          uVar8 = *(undefined8 *)((long)puVar1 + 0x44);
          *(undefined8 *)((long)puVar6 + 0x4c) = *(undefined8 *)((long)puVar1 + 0x4c);
          *(undefined8 *)((long)puVar6 + 0x44) = uVar8;
          uVar9 = *(undefined8 *)((long)puVar1 + 0x5c);
          uVar8 = *(undefined8 *)((long)puVar1 + 0x54);
          *(undefined4 *)((long)puVar6 + 100) = *(undefined4 *)((long)puVar1 + 100);
          *(undefined8 *)((long)puVar6 + 0x5c) = uVar9;
          *(undefined8 *)((long)puVar6 + 0x54) = uVar8;
        } while ((ulong)uVar5 * 0x68 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) &&
         (this[0x18] != (btAlignedObjectArray<btSoftBody::Anchor>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(this + 4);
      *(long *)(this + 0x10) = lVar4;
      *(int *)(this + 8) = iVar3;
      this[0x18] = (btAlignedObjectArray<btSoftBody::Anchor>)0x1;
    }
  }
  uVar10 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puVar6 = (undefined8 *)(*(long *)(this + 0x10) + (long)(int)uVar5 * 0x68);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  puVar6[1] = *(undefined8 *)(param_1 + 8);
  *puVar6 = uVar10;
  puVar6[3] = uVar9;
  puVar6[2] = uVar8;
  *(undefined4 *)(puVar6 + 4) = uVar2;
  uVar8 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar6 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar6 + 0x24) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar6 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar6 + 0x34) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((long)puVar6 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)((long)puVar6 + 0x44) = uVar8;
  uVar9 = *(undefined8 *)(param_1 + 0x5c);
  uVar8 = *(undefined8 *)(param_1 + 0x54);
  *(undefined4 *)((long)puVar6 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)((long)puVar6 + 0x5c) = uVar9;
  *(undefined8 *)((long)puVar6 + 0x54) = uVar8;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}


