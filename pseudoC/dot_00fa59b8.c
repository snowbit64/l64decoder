// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dot
// Entry Point: 00fa59b8
// Size: 700 bytes
// Signature: undefined __cdecl dot(Point64 * param_1)


/* btConvexHullInternal::Vertex::dot(btConvexHullInternal::Point64 const&) const */

void btConvexHullInternal::Vertex::dot(Point64 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong *in_x1;
  ulong *in_x8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (-1 < *(int *)(param_1 + 0x74)) {
    uVar9 = *in_x1 * (long)*(int *)(param_1 + 0x68) + in_x1[1] * (long)*(int *)(param_1 + 0x70) +
            in_x1[2] * (long)*(int *)(param_1 + 0x70);
    if ((long)uVar9 < 1) {
      if ((long)uVar9 < 0) {
        *(undefined4 *)(in_x8 + 4) = 0xffffffff;
        *in_x8 = -uVar9;
        in_x8[1] = -uVar9 >> 0x3f;
      }
      else {
        *(undefined4 *)(in_x8 + 4) = 0;
        *in_x8 = 0;
        in_x8[1] = 0;
      }
    }
    else {
      *in_x8 = uVar9;
      in_x8[1] = 0;
      *(undefined4 *)(in_x8 + 4) = 1;
    }
    in_x8[3] = 0;
    in_x8[2] = 1;
    *(undefined *)((long)in_x8 + 0x24) = 1;
    return;
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  uVar13 = *(ulong *)(param_1 + 0x30);
  uVar16 = *in_x1;
  uVar6 = in_x1[1];
  uVar9 = -uVar13;
  if (uVar15 != 0) {
    uVar9 = ~uVar13;
  }
  bVar8 = (long)uVar13 < 0;
  if (!bVar8) {
    uVar9 = uVar13;
  }
  uVar13 = -uVar15;
  if (!bVar8) {
    uVar13 = uVar15;
  }
  uVar15 = -uVar16;
  if ((long)uVar16 >= 0) {
    uVar15 = uVar16;
  }
  uVar10 = (uVar13 & 0xffffffff) * (uVar15 & 0xffffffff);
  uVar12 = (uVar13 & 0xffffffff) * (uVar15 >> 0x20);
  uVar17 = (uVar13 >> 0x20) * (uVar15 & 0xffffffff);
  uVar2 = (uVar12 & 0xffffffff) + (uVar17 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  uVar3 = uVar10 + uVar1;
  uVar5 = *(ulong *)(param_1 + 0x38);
  uVar7 = *(ulong *)(param_1 + 0x40);
  uVar9 = (uVar13 >> 0x20) * (uVar15 >> 0x20) + (uVar12 >> 0x20) + (uVar17 >> 0x20) + uVar9 * uVar15
          + (uVar2 >> 0x20);
  if (CARRY8(uVar10,uVar1)) {
    uVar9 = uVar9 + 1;
  }
  uVar15 = -uVar9;
  if (uVar3 != 0) {
    uVar15 = ~uVar9;
  }
  uVar13 = -uVar7;
  uVar1 = -uVar3;
  if ((long)uVar16 < 0 == bVar8) {
    uVar15 = uVar9;
    uVar1 = uVar3;
  }
  if (uVar5 != 0) {
    uVar13 = ~uVar7;
  }
  bVar8 = (long)uVar7 < 0;
  if (!bVar8) {
    uVar13 = uVar7;
  }
  uVar9 = -uVar5;
  if (!bVar8) {
    uVar9 = uVar5;
  }
  uVar16 = -uVar6;
  if ((long)uVar6 >= 0) {
    uVar16 = uVar6;
  }
  uVar17 = (uVar9 & 0xffffffff) * (uVar16 & 0xffffffff);
  uVar14 = (uVar9 & 0xffffffff) * (uVar16 >> 0x20);
  uVar12 = (uVar9 >> 0x20) * (uVar16 & 0xffffffff);
  uVar18 = in_x1[2];
  uVar3 = (uVar14 & 0xffffffff) + (uVar12 & 0xffffffff);
  uVar2 = uVar3 << 0x20;
  uVar5 = uVar17 + uVar2;
  uVar7 = *(ulong *)(param_1 + 0x48);
  uVar10 = *(ulong *)(param_1 + 0x50);
  uVar9 = (uVar9 >> 0x20) * (uVar16 >> 0x20) + (uVar14 >> 0x20) + (uVar12 >> 0x20) + uVar13 * uVar16
          + (uVar3 >> 0x20);
  if (CARRY8(uVar17,uVar2)) {
    uVar9 = uVar9 + 1;
  }
  uVar16 = -uVar9;
  if (uVar5 != 0) {
    uVar16 = ~uVar9;
  }
  uVar13 = -uVar10;
  uVar2 = -uVar5;
  if ((long)uVar6 < 0 == bVar8) {
    uVar16 = uVar9;
    uVar2 = uVar5;
  }
  if (uVar7 != 0) {
    uVar13 = ~uVar10;
  }
  bVar8 = (long)uVar10 < 0;
  if (!bVar8) {
    uVar13 = uVar10;
  }
  uVar9 = -uVar7;
  if (!bVar8) {
    uVar9 = uVar7;
  }
  uVar6 = -uVar18;
  if ((long)uVar18 >= 0) {
    uVar6 = uVar18;
  }
  uVar12 = (uVar9 & 0xffffffff) * (uVar6 & 0xffffffff);
  uVar17 = (uVar9 & 0xffffffff) * (uVar6 >> 0x20);
  uVar10 = (uVar9 >> 0x20) * (uVar6 & 0xffffffff);
  uVar5 = (uVar17 & 0xffffffff) + (uVar10 & 0xffffffff);
  uVar3 = uVar5 << 0x20;
  uVar7 = uVar12 + uVar3;
  uVar9 = (uVar9 >> 0x20) * (uVar6 >> 0x20) + (uVar17 >> 0x20) + (uVar10 >> 0x20) + uVar13 * uVar6 +
          (uVar5 >> 0x20);
  if (CARRY8(uVar12,uVar3)) {
    uVar9 = uVar9 + 1;
  }
  uVar13 = -uVar9;
  if (uVar7 != 0) {
    uVar13 = ~uVar9;
  }
  uVar6 = -uVar7;
  if ((long)uVar18 < 0 == bVar8) {
    uVar13 = uVar9;
    uVar6 = uVar7;
  }
  if (CARRY8(uVar2,uVar1)) {
    uVar15 = uVar15 + 1;
  }
  uVar9 = uVar6 + uVar2 + uVar1;
  lVar4 = uVar15 + uVar16;
  if (CARRY8(uVar6,uVar2 + uVar1)) {
    lVar4 = lVar4 + 1;
  }
  uVar13 = lVar4 + uVar13;
  if ((long)uVar13 < 0) {
    uVar16 = -uVar9;
    uVar15 = -uVar13;
    if (uVar9 != 0) {
      uVar15 = ~uVar13;
    }
    iVar11 = 1;
    *(undefined4 *)(in_x8 + 4) = 0xffffffff;
  }
  else {
    bVar8 = (uVar13 | uVar9) != 0;
    iVar11 = -(uint)bVar8;
    *(uint *)(in_x8 + 4) = (uint)bVar8;
    uVar15 = uVar13;
    uVar16 = uVar9;
  }
  uVar9 = *(ulong *)(param_1 + 0x60);
  *in_x8 = uVar16;
  in_x8[1] = uVar15;
  if ((long)uVar9 < 0) {
    uVar16 = *(ulong *)(param_1 + 0x58);
    uVar15 = -uVar9;
    *(int *)(in_x8 + 4) = iVar11;
    if (uVar16 != 0) {
      uVar15 = ~uVar9;
    }
    *(undefined *)((long)in_x8 + 0x24) = 0;
    in_x8[2] = -uVar16;
    in_x8[3] = uVar15;
    return;
  }
  uVar15 = *(ulong *)(param_1 + 0x60);
  uVar9 = *(ulong *)(param_1 + 0x58);
  *(undefined *)((long)in_x8 + 0x24) = 0;
  in_x8[3] = uVar15;
  in_x8[2] = uVar9;
  return;
}


