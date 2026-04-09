// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00dce424
// Size: 648 bytes
// Signature: undefined __thiscall init(dtNavMesh * this, dtNavMeshParams * param_1)


/* dtNavMesh::init(dtNavMeshParams const*) */

undefined4 __thiscall dtNavMesh::init(dtNavMesh *this,dtNavMeshParams *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *(undefined8 *)(param_1 + 0xc);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = uVar12;
  *(undefined8 *)(this + 8) = uVar14;
  *(undefined8 *)this = uVar13;
  uVar6 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)param_1;
  uVar11 = *(undefined4 *)(param_1 + 4);
  *(uint *)(this + 0x30) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar11;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xc);
  if (uVar6 + 3 < 7) {
    iVar5 = 1;
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar4 = ((int)uVar4 >> 2) - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    iVar5 = uVar4 + 1;
    if (uVar4 == 0xffffffff) {
      iVar5 = 1;
    }
  }
  uVar11 = 0x80000004;
  *(int *)(this + 0x34) = iVar5;
  *(int *)(this + 0x38) = iVar5 + -1;
  lVar3 = dtAlloc(uVar6 * 0x68,0);
  *(long *)(this + 0x50) = lVar3;
  if (lVar3 != 0) {
    lVar3 = dtAlloc(*(int *)(this + 0x34) << 3,0);
    *(long *)(this + 0x40) = lVar3;
    if (lVar3 != 0) {
      memset(*(void **)(this + 0x50),0,(long)*(int *)(this + 0x30) * 0x68);
      memset(*(void **)(this + 0x40),0,(long)*(int *)(this + 0x34) << 3);
      *(undefined8 *)(this + 0x48) = 0;
      if (0 < (int)*(uint *)(this + 0x30)) {
        lVar3 = *(long *)(this + 0x50);
        uVar8 = (ulong)*(uint *)(this + 0x30) + 1;
        puVar9 = (undefined4 *)0x0;
        do {
          iVar5 = (int)uVar8;
          uVar8 = uVar8 - 1;
          puVar10 = (undefined4 *)(lVar3 + (ulong)(iVar5 - 2) * 0x68);
          *(undefined4 **)(puVar10 + 0x18) = puVar9;
          *puVar10 = 1;
          puVar9 = puVar10;
        } while (1 < uVar8);
        *(long *)(this + 0x48) = lVar3;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        uVar6 = 1;
        uVar4 = 0;
      }
      else {
        uVar6 = *(int *)(param_1 + 0x14) - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
        uVar4 = (uint)(uVar6 >> 0x10 != 0) << 4;
      }
      uVar6 = uVar6 >> (ulong)uVar4;
      uVar7 = uVar6 >> ((ulong)(0xff < uVar6) << 3);
      uVar1 = uVar7 >> ((ulong)(0xf < uVar7) << 2);
      uVar6 = (uint)(0xff < uVar6) << 3 | uVar4 | (uint)(0xf < uVar7) << 2 | (uint)(3 < uVar1) << 1
              | (uVar1 >> ((ulong)(3 < uVar1) << 1)) >> 1;
      iVar5 = *(int *)(param_1 + 0x18);
      *(uint *)(this + 0x5c) = uVar6;
      if (iVar5 == 0) {
        uVar4 = 1;
        uVar7 = 0;
      }
      else {
        uVar4 = iVar5 - 1;
        uVar4 = uVar4 | uVar4 >> 1;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 | uVar4 >> 4;
        uVar4 = uVar4 | uVar4 >> 8;
        uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
        uVar7 = (uint)(uVar4 >> 0x10 != 0) << 4;
      }
      uVar4 = uVar4 >> (ulong)uVar7;
      uVar1 = uVar4 >> ((ulong)(0xff < uVar4) << 3);
      uVar2 = uVar1 >> ((ulong)(0xf < uVar1) << 2);
      uVar4 = (uint)(0xff < uVar4) << 3 | uVar7 | (uint)(0xf < uVar1) << 2 | (uint)(3 < uVar2) << 1
              | (uVar2 >> ((ulong)(3 < uVar2) << 1)) >> 1;
      uVar6 = 0x20 - (uVar6 + uVar4);
      *(uint *)(this + 0x60) = uVar4;
      if (0x1e < uVar6) {
        uVar6 = 0x1f;
      }
      uVar11 = 0x80000008;
      if (9 < uVar6) {
        uVar11 = 0x40000000;
      }
      *(uint *)(this + 0x58) = uVar6;
    }
  }
  return uVar11;
}


