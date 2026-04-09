// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expand
// Entry Point: 00f2e86c
// Size: 476 bytes
// Signature: undefined __thiscall expand(btAlignedObjectArray<btSolverBody> * this, btSolverBody * param_1)


/* btAlignedObjectArray<btSolverBody>::expand(btSolverBody const&) */

long __thiscall
btAlignedObjectArray<btSolverBody>::expand
          (btAlignedObjectArray<btSolverBody> *this,btSolverBody *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = *(uint *)(this + 4);
  lVar8 = (long)(int)uVar5;
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
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar3 * 0xf8,0x10);
        uVar5 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)(lVar4 + lVar6);
          puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar6);
          lVar6 = lVar6 + 0xf8;
          uVar7 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar7;
          uVar7 = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar7;
          uVar7 = puVar1[4];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar7;
          uVar7 = puVar1[6];
          puVar2[7] = puVar1[7];
          puVar2[6] = uVar7;
          uVar10 = puVar1[0x14];
          uVar9 = puVar1[0x17];
          uVar7 = puVar1[0x16];
          uVar12 = puVar1[0x11];
          uVar11 = puVar1[0x10];
          uVar14 = puVar1[0x13];
          uVar13 = puVar1[0x12];
          puVar2[0x15] = puVar1[0x15];
          puVar2[0x14] = uVar10;
          puVar2[0x17] = uVar9;
          puVar2[0x16] = uVar7;
          puVar2[0x11] = uVar12;
          puVar2[0x10] = uVar11;
          puVar2[0x13] = uVar14;
          puVar2[0x12] = uVar13;
          uVar13 = puVar1[0x1a];
          uVar10 = puVar1[0x1d];
          uVar9 = puVar1[0x1c];
          uVar7 = puVar1[0x1e];
          uVar12 = puVar1[0x19];
          uVar11 = puVar1[0x18];
          puVar2[0x1b] = puVar1[0x1b];
          puVar2[0x1a] = uVar13;
          puVar2[0x1d] = uVar10;
          puVar2[0x1c] = uVar9;
          puVar2[0x1e] = uVar7;
          puVar2[0x19] = uVar12;
          puVar2[0x18] = uVar11;
          uVar10 = puVar1[0xc];
          uVar9 = puVar1[0xf];
          uVar7 = puVar1[0xe];
          uVar14 = puVar1[9];
          uVar13 = puVar1[8];
          uVar12 = puVar1[0xb];
          uVar11 = puVar1[10];
          puVar2[0xd] = puVar1[0xd];
          puVar2[0xc] = uVar10;
          puVar2[0xf] = uVar9;
          puVar2[0xe] = uVar7;
          puVar2[9] = uVar14;
          puVar2[8] = uVar13;
          puVar2[0xb] = uVar12;
          puVar2[10] = uVar11;
        } while ((ulong)uVar5 * 0xf8 - lVar6 != 0);
      }
      if ((*(long *)(this + 0x10) != 0) && (this[0x18] != (btAlignedObjectArray<btSolverBody>)0x0))
      {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(this + 4);
      *(long *)(this + 0x10) = lVar4;
      *(int *)(this + 8) = iVar3;
      this[0x18] = (btAlignedObjectArray<btSolverBody>)0x1;
    }
  }
  *(uint *)(this + 4) = uVar5 + 1;
  puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar8 * 0xf8);
  uVar7 = *(undefined8 *)param_1;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[2] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  puVar2[6] = uVar7;
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar9 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  uVar13 = *(undefined8 *)(param_1 + 0x90);
  puVar2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar2[0x14] = uVar10;
  puVar2[0x17] = uVar9;
  puVar2[0x16] = uVar7;
  puVar2[0x11] = uVar12;
  puVar2[0x10] = uVar11;
  puVar2[0x13] = uVar14;
  puVar2[0x12] = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  uVar12 = *(undefined8 *)(param_1 + 200);
  uVar11 = *(undefined8 *)(param_1 + 0xc0);
  puVar2[0x1b] = *(undefined8 *)(param_1 + 0xd8);
  puVar2[0x1a] = uVar13;
  puVar2[0x1d] = uVar10;
  puVar2[0x1c] = uVar9;
  puVar2[0x1e] = uVar7;
  puVar2[0x19] = uVar12;
  puVar2[0x18] = uVar11;
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar2[0xc] = uVar10;
  puVar2[0xf] = uVar9;
  puVar2[0xe] = uVar7;
  puVar2[9] = uVar14;
  puVar2[8] = uVar13;
  puVar2[0xb] = uVar12;
  puVar2[10] = uVar11;
  return *(long *)(this + 0x10) + lVar8 * 0xf8;
}


