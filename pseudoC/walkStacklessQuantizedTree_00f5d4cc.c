// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkStacklessQuantizedTree
// Entry Point: 00f5d4cc
// Size: 344 bytes
// Signature: undefined __thiscall walkStacklessQuantizedTree(btQuantizedBvh * this, btNodeOverlapCallback * param_1, ushort * param_2, ushort * param_3, int param_4, int param_5)


/* btQuantizedBvh::walkStacklessQuantizedTree(btNodeOverlapCallback*, unsigned short*, unsigned
   short*, int, int) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTree
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,ushort *param_2,ushort *param_3,
          int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ulong uVar15;
  ushort *puVar16;
  int iVar17;
  
  if (param_4 < param_5) {
    puVar16 = (ushort *)(*(long *)(this + 0xb8) + (long)param_4 * 0x10);
    iVar1 = 1;
    do {
      iVar17 = iVar1;
      uVar3 = *param_2;
      uVar4 = puVar16[3];
      uVar5 = *param_3;
      uVar6 = *puVar16;
      uVar7 = param_2[2];
      uVar8 = param_3[2];
      uVar9 = puVar16[5];
      uVar10 = puVar16[4];
      uVar11 = puVar16[2];
      uVar12 = param_2[1];
      uVar13 = puVar16[1];
      uVar14 = param_3[1];
      uVar2 = *(uint *)(puVar16 + 6);
      if (((-1 < (int)uVar2) &&
          (((((uVar4 >= uVar3 && uVar5 >= uVar6) && uVar9 >= uVar7) && uVar8 >= uVar11) &&
           uVar10 >= uVar12) && uVar14 >= uVar13)) &&
         (uVar15 = (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar2 >> 0x15,uVar2 & 0x1fffff),
         (uVar15 & 1) == 0)) break;
      if ((int)uVar2 < 0 &&
          (((((uVar4 < uVar3 || uVar5 < uVar6) || uVar9 < uVar7) || uVar8 < uVar11) ||
           uVar10 < uVar12) || uVar14 < uVar13)) {
        iVar1 = -*(int *)(puVar16 + 6);
        puVar16 = puVar16 + (long)-*(int *)(puVar16 + 6) * 8;
      }
      else {
        puVar16 = puVar16 + 8;
        iVar1 = 1;
      }
      param_4 = param_4 + iVar1;
      iVar1 = iVar17 + 1;
    } while (param_4 < param_5);
  }
  else {
    iVar17 = 0;
  }
  if (maxIterations < iVar17) {
    maxIterations = iVar17;
  }
  return;
}


