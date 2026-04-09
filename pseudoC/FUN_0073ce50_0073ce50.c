// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073ce50
// Entry Point: 0073ce50
// Size: 1112 bytes
// Signature: undefined FUN_0073ce50(void)


void FUN_0073ce50(long *param_1,ulong param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  float fVar16;
  float fVar17;
  uint local_74;
  
  lVar12 = *param_1;
  uVar5 = *(ushort *)(lVar12 + 0x30);
  if (uVar5 <= (ushort)param_3) {
    return;
  }
  if (uVar5 <= (ushort)(param_3 >> 0x10)) {
    return;
  }
  uVar13 = (int)param_3 - (uint)*(ushort *)(lVar12 + 0x32);
  uVar8 = param_3 & 0xffffffffffff;
  if (((uVar13 & 0xffff) < 0xe) &&
     (uVar7 = (int)(uVar8 >> 0x10) - (uint)*(ushort *)(lVar12 + 0x34), (uVar7 & 0xffff) < 0xe)) {
    uVar8 = (ulong)uVar7 & 0xffff;
    uVar11 = param_3 >> 0x20 & 0xffff;
    uVar1 = (ushort)uVar13;
    uVar13 = (uint)*(ushort *)
                    (lVar12 + 0x28 + uVar8 * 0xe0 + (ulong)uVar1 * 0x10 + uVar11 * 2 + 0xe);
    uVar14 = (uint)*(byte *)(lVar12 + 0x28 + uVar8 * 0x70 + (ulong)uVar1 * 8 + uVar11 + 0xc4e);
  }
  else {
    lVar2 = (uVar8 >> 0x10 & 0xffff) * (ulong)uVar5 + (param_3 & 0xffff);
    lVar9 = *(long *)(lVar12 + 0x28);
    uVar1 = *(ushort *)(lVar9 + lVar2 * 6);
    uVar13 = (uint)uVar1;
    if (uVar1 == 0xffff) {
      return;
    }
    bVar15 = *(byte *)(lVar9 + lVar2 * 6 + 4);
    uVar14 = (uint)bVar15;
    uVar7 = (uint)(uVar8 >> 0x20);
    if (uVar7 != bVar15 >> 5) {
      uVar1 = *(ushort *)(lVar9 + lVar2 * 6 + 2);
      uVar13 = (uint)uVar1;
      if (uVar1 == 0xffff) {
        return;
      }
      bVar15 = *(byte *)(lVar9 + lVar2 * 6 + 5);
      uVar14 = (uint)bVar15;
      if (uVar7 != bVar15 >> 5) {
        return;
      }
    }
  }
  if ((uVar14 >> 4 & 1) != 0) {
    return;
  }
  if ((uVar5 <= (ushort)param_2) || (uVar5 <= (ushort)(param_2 >> 0x10))) goto LAB_0073d1c0;
  uVar7 = (int)param_2 - (uint)*(ushort *)(lVar12 + 0x32);
  uVar8 = param_2 >> 0x20 & 0xffff;
  if (((uVar7 & 0xffff) < 0xe) &&
     (uVar6 = (int)((param_2 & 0xffffffffffff) >> 0x10) - (uint)*(ushort *)(lVar12 + 0x34),
     (uVar6 & 0xffff) < 0xe)) {
    uVar11 = (ulong)uVar6 & 0xffff;
    uVar5 = (ushort)uVar7;
    uVar7 = (uint)*(byte *)(lVar12 + 0x28 + uVar11 * 0x70 + (ulong)uVar5 * 8 + uVar8 + 0xc4e);
    local_74 = (uint)*(ushort *)
                      (lVar12 + 0x28 + uVar11 * 0xe0 + (ulong)uVar5 * 0x10 + uVar8 * 2 + 0xe);
  }
  else {
    lVar9 = *(long *)(lVar12 + 0x28);
    lVar2 = ((param_2 & 0xffffffffffff) >> 0x10 & 0xffff) * (ulong)uVar5 + (param_2 & 0xffff);
    local_74 = (uint)*(ushort *)(lVar9 + lVar2 * 6);
    if (local_74 == 0xffff) goto LAB_0073d1c0;
    bVar15 = *(byte *)(lVar9 + lVar2 * 6 + 4);
    uVar7 = (uint)bVar15;
    if (((uint)uVar8 != (uint)(bVar15 >> 5)) &&
       ((local_74 = (uint)*(ushort *)(lVar9 + lVar2 * 6 + 2), local_74 == 0xffff ||
        (bVar15 = *(byte *)(lVar9 + lVar2 * 6 + 5), uVar7 = (uint)bVar15,
        (uint)uVar8 != (uint)(bVar15 >> 5))))) goto LAB_0073d1c0;
  }
  if ((uVar7 >> 4 & 1) == 0) {
    uVar8 = 0;
    bVar15 = 2;
    iVar3 = uVar13 - local_74;
    do {
      fVar16 = (float)FUN_0073ede0(param_1[3],param_4,param_5,param_6,
                                   *(undefined8 *)(lVar12 + 0x12c0 + uVar8 * 8));
      if (ABS(fVar16) == INFINITY) {
        return;
      }
      fVar16 = fVar16 * *(float *)(*(long *)(lVar12 + 0x12a0) + 0x2c);
      uVar4 = local_74 + iVar3 / 3;
      uVar6 = (uVar4 & 0xffff) + 0x80;
      if (0xfffe < uVar6) {
        uVar6 = 0xffff;
      }
      if (((uVar14 ^ param_7) & 1 | (uVar7 & 1 ^ param_7) & (uint)(uVar8 < 2)) == 0) {
        uVar6 = uVar4;
      }
      fVar17 = fVar16 * 4.0;
      if ((param_7 & 1) == 0) {
        fVar17 = fVar16;
      }
      uVar4 = 0xffff;
      if (fVar17 <= 8191.75) {
        uVar4 = (uint)(fVar17 + 1048576.0) & 0xffff;
      }
      uVar4 = uVar4 + (uVar6 & 0xffff);
      if (0xfffe < uVar4) {
        uVar4 = 0xffff;
      }
      if ((uVar4 & 0xffff) < (uint)*(ushort *)param_1[1]) {
        *(ushort *)param_1[1] = (ushort)uVar4;
        *(byte *)param_1[2] = bVar15 | (byte)param_7 & 1 | ((byte)(param_6 << 3) ^ 0xff) & 8;
      }
      uVar8 = uVar8 + 1;
      iVar3 = iVar3 + (uVar13 - local_74);
      bVar15 = bVar15 + 2;
    } while (uVar8 != 3);
    return;
  }
LAB_0073d1c0:
  fVar16 = (float)FUN_0073ede0(param_1[3],param_4,param_5,param_6,*(undefined8 *)(lVar12 + 0x12d0));
  if (ABS(fVar16) != INFINITY) {
    uVar7 = uVar13 + 0x80;
    if (0xfffe < uVar7) {
      uVar7 = 0xffff;
    }
    fVar16 = fVar16 * *(float *)(*(long *)(lVar12 + 0x12a0) + 0x2c);
    if (((uVar14 ^ param_7) & 1) == 0) {
      uVar7 = uVar13;
    }
    fVar17 = fVar16 * 4.0;
    if ((param_7 & 1) == 0) {
      fVar17 = fVar16;
    }
    uVar13 = 0xffff;
    if (fVar17 <= 8191.75) {
      uVar13 = (uint)(fVar17 + 1048576.0) & 0xffff;
    }
    uVar13 = uVar13 + uVar7;
    if (0xfffe < uVar13) {
      uVar13 = 0xffff;
    }
    if ((uVar13 & 0xffff) < (uint)*(ushort *)param_1[1]) {
      pbVar10 = (byte *)param_1[2];
      *(ushort *)param_1[1] = (ushort)uVar13;
      *pbVar10 = ((byte)param_7 & 1 | (byte)((param_6 & 1) << 3)) ^ 0xe;
    }
  }
  return;
}


