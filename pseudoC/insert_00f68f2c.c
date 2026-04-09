// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00f68f2c
// Size: 744 bytes
// Signature: undefined __thiscall insert(btHashMap<btInternalVertexPair,btInternalEdge> * this, btInternalVertexPair * param_1, btInternalEdge * param_2)


/* btHashMap<btInternalVertexPair, btInternalEdge>::insert(btInternalVertexPair const&,
   btInternalEdge const&) */

void __thiscall
btHashMap<btInternalVertexPair,btInternalEdge>::insert
          (btHashMap<btInternalVertexPair,btInternalEdge> *this,btInternalVertexPair *param_1,
          btInternalEdge *param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  uVar3 = *(uint *)(this + 0x48);
  uVar2 = (int)*(short *)param_1 + (uint)*(ushort *)(param_1 + 2) * 0x10000 & uVar3 - 1;
  if ((uVar2 < *(uint *)(this + 4)) &&
     (iVar10 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar2 * 4), iVar10 != -1)) {
    do {
      psVar1 = (short *)(*(long *)(this + 0x70) + (long)iVar10 * 4);
      bVar6 = false;
      if (*(short *)param_1 == *psVar1) {
        bVar6 = (uint)*(ushort *)(param_1 + 2) == (uint)(ushort)psVar1[1];
      }
      if (bVar6) {
        *(undefined4 *)(*(long *)(this + 0x50) + (long)iVar10 * 4) = *(undefined4 *)param_2;
        return;
      }
      iVar10 = *(int *)(*(long *)(this + 0x30) + (long)iVar10 * 4);
    } while (iVar10 != -1);
  }
  uVar4 = *(uint *)(this + 0x44);
  uVar8 = uVar4;
  if (uVar4 == uVar3) {
    uVar5 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar5 = 1;
    }
    uVar8 = uVar3;
    if ((int)uVar3 < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,0x10);
        uVar8 = *(uint *)(this + 0x44);
      }
      if (0 < (int)uVar8) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar7 + lVar11) = *(undefined4 *)(*(long *)(this + 0x50) + lVar11);
          lVar11 = lVar11 + 4;
        } while ((ulong)uVar8 * 4 - lVar11 != 0);
      }
      if ((*(long *)(this + 0x50) != 0) &&
         (this[0x58] != (btHashMap<btInternalVertexPair,btInternalEdge>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x50) = lVar7;
      *(uint *)(this + 0x48) = uVar5;
      this[0x58] = (btHashMap<btInternalVertexPair,btInternalEdge>)0x1;
      uVar8 = *(uint *)(this + 0x44);
    }
  }
  *(undefined4 *)(*(long *)(this + 0x50) + (long)(int)uVar8 * 4) = *(undefined4 *)param_2;
  uVar8 = *(uint *)(this + 100);
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  if (uVar8 == *(uint *)(this + 0x68)) {
    uVar5 = uVar8 << 1;
    if (uVar8 == 0) {
      uVar5 = 1;
    }
    if ((int)uVar8 < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,0x10);
        uVar8 = *(uint *)(this + 100);
      }
      if (0 < (int)uVar8) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar7 + lVar11) = *(undefined4 *)(*(long *)(this + 0x70) + lVar11);
          lVar11 = lVar11 + 4;
        } while ((ulong)uVar8 * 4 - lVar11 != 0);
      }
      if ((*(long *)(this + 0x70) != 0) &&
         (this[0x78] != (btHashMap<btInternalVertexPair,btInternalEdge>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar8 = *(uint *)(this + 100);
      *(long *)(this + 0x70) = lVar7;
      *(uint *)(this + 0x68) = uVar5;
      this[0x78] = (btHashMap<btInternalVertexPair,btInternalEdge>)0x1;
    }
  }
  *(undefined4 *)(*(long *)(this + 0x70) + (long)(int)uVar8 * 4) = *(undefined4 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if ((int)uVar3 < *(int *)(this + 0x48)) {
    growTables((btInternalVertexPair *)this);
    uVar2 = (int)*(short *)param_1 + (uint)*(ushort *)(param_1 + 2) * 0x10000 &
            *(int *)(this + 0x48) - 1U;
  }
  uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  lVar7 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(this + 0x30) + (long)(int)uVar4 * 4) = *(undefined4 *)(lVar7 + uVar9);
  *(uint *)(lVar7 + uVar9) = uVar4;
  return;
}


