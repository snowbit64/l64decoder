// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073c5e8
// Entry Point: 0073c5e8
// Size: 1128 bytes
// Signature: undefined FUN_0073c5e8(void)


void FUN_0073c5e8(long *param_1,ulong param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  uint local_64;
  
  lVar11 = *param_1;
  uVar4 = *(ushort *)(lVar11 + 0x30);
  if (uVar4 <= (ushort)param_3) {
    return;
  }
  if (uVar4 <= (ushort)(param_3 >> 0x10)) {
    return;
  }
  uVar13 = (int)param_3 - (uint)*(ushort *)(lVar11 + 0x32);
  uVar7 = param_3 & 0xffffffffffff;
  if (((uVar13 & 0xffff) < 0xe) &&
     (uVar6 = (int)(uVar7 >> 0x10) - (uint)*(ushort *)(lVar11 + 0x34), (uVar6 & 0xffff) < 0xe)) {
    uVar7 = (ulong)uVar6 & 0xffff;
    uVar10 = param_3 >> 0x20 & 0xffff;
    uVar1 = (ushort)uVar13;
    uVar13 = (uint)*(ushort *)
                    (lVar11 + 0x28 + uVar7 * 0xe0 + (ulong)uVar1 * 0x10 + uVar10 * 2 + 0xe);
    uVar14 = (uint)*(byte *)(lVar11 + 0x28 + uVar7 * 0x70 + (ulong)uVar1 * 8 + uVar10 + 0xc4e);
  }
  else {
    lVar2 = (uVar7 >> 0x10 & 0xffff) * (ulong)uVar4 + (param_3 & 0xffff);
    lVar8 = *(long *)(lVar11 + 0x28);
    uVar1 = *(ushort *)(lVar8 + lVar2 * 6);
    uVar13 = (uint)uVar1;
    if (uVar1 == 0xffff) {
      return;
    }
    bVar12 = *(byte *)(lVar8 + lVar2 * 6 + 4);
    uVar14 = (uint)bVar12;
    uVar6 = (uint)(uVar7 >> 0x20);
    if (uVar6 != bVar12 >> 5) {
      uVar1 = *(ushort *)(lVar8 + lVar2 * 6 + 2);
      uVar13 = (uint)uVar1;
      if (uVar1 == 0xffff) {
        return;
      }
      bVar12 = *(byte *)(lVar8 + lVar2 * 6 + 5);
      uVar14 = (uint)bVar12;
      if (uVar6 != bVar12 >> 5) {
        return;
      }
    }
  }
  if ((uVar14 >> 4 & 1) != 0) {
    return;
  }
  if ((uVar4 <= (ushort)param_2) || (uVar4 <= (ushort)(param_2 >> 0x10))) goto LAB_0073c96c;
  uVar6 = (int)param_2 - (uint)*(ushort *)(lVar11 + 0x32);
  uVar7 = param_2 >> 0x20 & 0xffff;
  if (((uVar6 & 0xffff) < 0xe) &&
     (uVar5 = (int)((param_2 & 0xffffffffffff) >> 0x10) - (uint)*(ushort *)(lVar11 + 0x34),
     (uVar5 & 0xffff) < 0xe)) {
    uVar10 = (ulong)uVar5 & 0xffff;
    uVar4 = (ushort)uVar6;
    uVar6 = (uint)*(byte *)(lVar11 + 0x28 + uVar10 * 0x70 + (ulong)uVar4 * 8 + uVar7 + 0xc4e);
    local_64 = (uint)*(ushort *)
                      (lVar11 + 0x28 + uVar10 * 0xe0 + (ulong)uVar4 * 0x10 + uVar7 * 2 + 0xe);
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x28);
    lVar2 = ((param_2 & 0xffffffffffff) >> 0x10 & 0xffff) * (ulong)uVar4 + (param_2 & 0xffff);
    local_64 = (uint)*(ushort *)(lVar8 + lVar2 * 6);
    if (local_64 == 0xffff) goto LAB_0073c96c;
    bVar12 = *(byte *)(lVar8 + lVar2 * 6 + 4);
    uVar6 = (uint)bVar12;
    if (((uint)uVar7 != (uint)(bVar12 >> 5)) &&
       ((local_64 = (uint)*(ushort *)(lVar8 + lVar2 * 6 + 2), local_64 == 0xffff ||
        (bVar12 = *(byte *)(lVar8 + lVar2 * 6 + 5), uVar6 = (uint)bVar12,
        (uint)uVar7 != (uint)(bVar12 >> 5))))) goto LAB_0073c96c;
  }
  if ((uVar6 >> 4 & 1) == 0) {
    if (local_64 <= uVar13) {
      return;
    }
    uVar7 = 0;
    bVar12 = 2;
    iVar15 = uVar13 - local_64;
    do {
      fVar16 = (float)FUN_0073ede0(param_1[3],param_4,param_5,param_6,
                                   *(undefined8 *)(lVar11 + 0x12a8 + uVar7 * 8));
      if (ABS(fVar16) == INFINITY) {
        return;
      }
      fVar16 = fVar16 * *(float *)(*(long *)(lVar11 + 0x12a0) + 0x2c);
      uVar3 = local_64 + iVar15 / 3;
      uVar5 = (uVar3 & 0xffff) + 0x80;
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      if (((uVar14 ^ param_7) & 1 | (uVar6 & 1 ^ param_7) & (uint)(uVar7 < 2)) == 0) {
        uVar5 = uVar3;
      }
      fVar17 = fVar16 * 4.0;
      if ((param_7 & 1) == 0) {
        fVar17 = fVar16;
      }
      uVar3 = 0xffff;
      if (fVar17 <= 8191.75) {
        uVar3 = (uint)(fVar17 + 1048576.0) & 0xffff;
      }
      uVar3 = uVar3 + (uVar5 & 0xffff);
      if (0xfffe < uVar3) {
        uVar3 = 0xffff;
      }
      if ((uVar3 & 0xffff) < (uint)*(ushort *)param_1[1]) {
        *(ushort *)param_1[1] = (ushort)uVar3;
        *(byte *)param_1[2] = bVar12 | (byte)param_7 & 1 | (byte)((param_6 & 1) << 3);
      }
      uVar7 = uVar7 + 1;
      bVar12 = bVar12 + 2;
      iVar15 = iVar15 + (uVar13 - local_64);
    } while (uVar7 != 3);
    return;
  }
LAB_0073c96c:
  fVar16 = (float)FUN_0073ede0(param_1[3],param_4,param_5,param_6,*(undefined8 *)(lVar11 + 0x12b8));
  if (ABS(fVar16) != INFINITY) {
    uVar6 = uVar13 + 0x80;
    if (0xfffe < uVar6) {
      uVar6 = 0xffff;
    }
    fVar16 = fVar16 * *(float *)(*(long *)(lVar11 + 0x12a0) + 0x2c);
    if (((uVar14 ^ param_7) & 1) == 0) {
      uVar6 = uVar13;
    }
    fVar17 = fVar16 * 4.0;
    if ((param_7 & 1) == 0) {
      fVar17 = fVar16;
    }
    uVar13 = 0xffff;
    if (fVar17 <= 8191.75) {
      uVar13 = (uint)(fVar17 + 1048576.0) & 0xffff;
    }
    uVar13 = uVar13 + uVar6;
    if (0xfffe < uVar13) {
      uVar13 = 0xffff;
    }
    if ((uVar13 & 0xffff) < (uint)*(ushort *)param_1[1]) {
      pbVar9 = (byte *)param_1[2];
      *(ushort *)param_1[1] = (ushort)uVar13;
      *pbVar9 = (byte)param_7 & 1 | (byte)((param_6 & 1) << 3) | 6;
    }
  }
  return;
}


