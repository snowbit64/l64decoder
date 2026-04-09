// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCostToGoal
// Entry Point: 007451d4
// Size: 412 bytes
// Signature: undefined __thiscall setCostToGoal(SearchTree * this, NodeId param_1, FixedPoint16 param_2, uchar param_3, NodeId * param_4, FixedPoint16 * param_5)


/* SearchTree::setCostToGoal(NodeId, FixedPoint16, unsigned char, NodeId&, FixedPoint16&) */

undefined8 __thiscall
SearchTree::setCostToGoal
          (SearchTree *this,ulong param_2,ushort param_3,byte param_4,undefined2 *param_5,
          ushort *param_6)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  undefined uVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  
  uVar9 = (uint)(param_2 >> 0x20);
  uVar14 = (ulong)uVar9 & 0xffff;
  uVar13 = (uint)param_2 - (uint)*(ushort *)(this + 10);
  uVar5 = (ushort)(param_2 >> 0x20);
  if (((uVar13 & 0xffff) < 0xe) &&
     (uVar7 = (int)(param_2 >> 0x10) - (uint)*(ushort *)(this + 0xc), (uVar7 & 0xffff) < 0xe)) {
    uVar11 = (ulong)uVar7 & 0xffff;
    uVar1 = (ushort)uVar13;
    *(ushort *)(this + (ulong)uVar5 * 2 + (ulong)uVar1 * 0x10 + uVar11 * 0xe0 + 0xe) = param_3;
    this[uVar14 + (ulong)uVar1 * 8 + uVar11 * 0x70 + 0xc4e] = (SearchTree)(param_4 | 0x10);
    return 0;
  }
  lVar10 = *(long *)this;
  lVar2 = (ulong)((uint)param_2 >> 0x10) * (ulong)*(ushort *)(this + 8) + (param_2 & 0xffff);
  puVar12 = (ushort *)(lVar10 + lVar2 * 6);
  if ((*puVar12 == 0xffff) ||
     (uVar13 = (uint)uVar14, uVar13 == *(byte *)(lVar10 + lVar2 * 6 + 4) >> 5)) {
    uVar8 = 0;
    lVar15 = 0;
  }
  else {
    puVar17 = (ushort *)(lVar10 + lVar2 * 6 + 2);
    uVar1 = *puVar17;
    if ((uVar1 == 0xffff) || (bVar3 = *(byte *)(lVar10 + lVar2 * 6 + 5), uVar13 == bVar3 >> 5)) {
      uVar8 = 0;
      lVar15 = 1;
    }
    else {
      uVar6 = (undefined2)(param_2 >> 0x10);
      if (uVar1 <= param_3) {
        if (param_3 != 0xffff) {
          *param_5 = (short)param_2;
          param_5[1] = uVar6;
          param_5[2] = uVar5;
          *param_6 = param_3;
          return 1;
        }
        return 0;
      }
      *param_5 = (short)param_2;
      param_5[1] = uVar6;
      uVar8 = 1;
      param_5[2] = (ushort)(bVar3 >> 5);
      lVar15 = 1;
      *param_6 = *puVar17;
    }
  }
  lVar16 = lVar10 + lVar2 * 6;
  *(ushort *)(lVar16 + lVar15 * 2) = param_3;
  uVar1 = *(ushort *)(lVar16 + 2);
  uVar5 = *puVar12;
  *(byte *)(lVar16 + lVar15 + 4) = param_4 | (byte)(uVar9 << 5) | 0x10;
  if (uVar5 <= uVar1) {
    return uVar8;
  }
  *puVar12 = uVar1;
  *(ushort *)(lVar16 + 2) = uVar5;
  lVar10 = lVar10 + lVar2 * 6;
  uVar4 = *(undefined *)(lVar10 + 4);
  *(undefined *)(lVar10 + 4) = *(undefined *)(lVar10 + 5);
  *(undefined *)(lVar10 + 5) = uVar4;
  return uVar8;
}


