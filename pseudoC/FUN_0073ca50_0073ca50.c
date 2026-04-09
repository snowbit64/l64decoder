// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073ca50
// Entry Point: 0073ca50
// Size: 1024 bytes
// Signature: undefined FUN_0073ca50(void)


void FUN_0073ca50(long *param_1,ulong param_2,short param_3,short param_4,undefined2 param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar11 = *param_1;
  uVar4 = *(ushort *)(lVar11 + 0x30);
  if (uVar4 <= (ushort)param_2) {
    return;
  }
  if (uVar4 <= (ushort)(param_2 >> 0x10)) {
    return;
  }
  uVar5 = (int)param_2 - (uint)*(ushort *)(lVar11 + 0x32);
  uVar6 = param_2 >> 0x20 & 0xffff;
  if (((uVar5 & 0xffff) < 0xe) &&
     (uVar8 = (int)((param_2 & 0xffffffffffff) >> 0x10) - (uint)*(ushort *)(lVar11 + 0x34),
     (uVar8 & 0xffff) < 0xe)) {
    uVar7 = (ulong)uVar8 & 0xffff;
    uVar4 = (ushort)uVar5;
    uVar5 = (uint)*(ushort *)(lVar11 + 0x28 + uVar7 * 0xe0 + (ulong)uVar4 * 0x10 + uVar6 * 2 + 0xe);
    uVar8 = (uint)*(byte *)(lVar11 + 0x28 + uVar7 * 0x70 + (ulong)uVar4 * 8 + uVar6 + 0xc4e);
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x28);
    lVar1 = ((param_2 & 0xffffffffffff) >> 0x10 & 0xffff) * (ulong)uVar4 + (param_2 & 0xffff);
    uVar4 = *(ushort *)(lVar10 + lVar1 * 6);
    uVar5 = (uint)uVar4;
    if (uVar4 == 0xffff) {
      return;
    }
    bVar3 = *(byte *)(lVar10 + lVar1 * 6 + 4);
    uVar8 = (uint)bVar3;
    if ((uint)uVar6 != (uint)(bVar3 >> 5)) {
      uVar4 = *(ushort *)(lVar10 + lVar1 * 6 + 2);
      uVar5 = (uint)uVar4;
      if (uVar4 == 0xffff) {
        return;
      }
      bVar3 = *(byte *)(lVar10 + lVar1 * 6 + 5);
      uVar8 = (uint)bVar3;
      if ((uint)uVar6 != (uint)(bVar3 >> 5)) {
        return;
      }
    }
  }
  if ((uVar8 >> 4 & 1) == 0) {
    uVar2 = uVar5 + 0x80;
    fVar15 = 0.0;
    if (0xfffe < uVar2) {
      uVar2 = 0xffff;
    }
    if (((uVar8 & 0x1f ^ param_6) & 1) == 0) {
      uVar2 = uVar5;
    }
    switch(param_5) {
    case 1:
      if (*(short *)(lVar11 + 0x1380) != 0) {
        fVar15 = 0.0;
        sVar12 = 0;
        do {
          uVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar11 + 0x12a0),sVar12 + param_3,
                             param_4 - sVar12,1);
          sVar12 = sVar12 + 1;
          fVar13 = (float)NEON_fmadd((float)(ulong)(uVar5 & 0xff),0x3d71e3c8,0x3f800000);
          fVar14 = INFINITY;
          if ((uVar5 & 0xff) != 0xff) {
            fVar14 = fVar13;
          }
          fVar15 = fVar15 + fVar14;
        } while ((*(short *)(lVar11 + 0x1380) != sVar12) && (ABS(fVar15) != INFINITY));
      }
      break;
    case 3:
      if (*(short *)(lVar11 + 0x1380) != 0) {
        fVar15 = 0.0;
        sVar12 = 0;
        do {
          uVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar11 + 0x12a0),param_3 - sVar12,
                             param_4 - sVar12,3);
          sVar12 = sVar12 + 1;
          fVar13 = (float)NEON_fmadd((float)(ulong)(uVar5 & 0xff),0x3d71e3c8,0x3f800000);
          fVar14 = INFINITY;
          if ((uVar5 & 0xff) != 0xff) {
            fVar14 = fVar13;
          }
          fVar15 = fVar15 + fVar14;
        } while ((*(short *)(lVar11 + 0x1380) != sVar12) && (ABS(fVar15) != INFINITY));
      }
      break;
    case 5:
      if (*(short *)(lVar11 + 0x1380) != 0) {
        fVar15 = 0.0;
        sVar12 = 0;
        do {
          uVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar11 + 0x12a0),param_3 - sVar12,
                             sVar12 + param_4,5);
          sVar12 = sVar12 + 1;
          fVar13 = (float)NEON_fmadd((float)(ulong)(uVar5 & 0xff),0x3d71e3c8,0x3f800000);
          fVar14 = INFINITY;
          if ((uVar5 & 0xff) != 0xff) {
            fVar14 = fVar13;
          }
          fVar15 = fVar15 + fVar14;
        } while ((*(short *)(lVar11 + 0x1380) != sVar12) && (ABS(fVar15) != INFINITY));
      }
      break;
    case 7:
      if (*(short *)(lVar11 + 0x1380) != 0) {
        fVar15 = 0.0;
        sVar12 = 0;
        do {
          uVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar11 + 0x12a0),sVar12 + param_3,
                             sVar12 + param_4,7);
          sVar12 = sVar12 + 1;
          fVar13 = (float)NEON_fmadd((float)(ulong)(uVar5 & 0xff),0x3d71e3c8,0x3f800000);
          fVar14 = INFINITY;
          if ((uVar5 & 0xff) != 0xff) {
            fVar14 = fVar13;
          }
          fVar15 = fVar15 + fVar14;
        } while ((*(short *)(lVar11 + 0x1380) != sVar12) && (ABS(fVar15) != INFINITY));
      }
    }
    if (ABS(fVar15) != INFINITY) {
      fVar15 = fVar15 * *(float *)(*(long *)(lVar11 + 0x12a0) + 0x30) * 1.414214;
      fVar14 = fVar15 * 4.0;
      if ((param_6 & 1) == 0) {
        fVar14 = fVar15;
      }
      uVar5 = 0xffff;
      if (fVar14 <= 8191.75) {
        uVar5 = (uint)(fVar14 + 1048576.0) & 0xffff;
      }
      uVar5 = uVar5 + (uVar2 & 0xffff);
      if (0xfffe < uVar5) {
        uVar5 = 0xffff;
      }
      if ((uVar5 & 0xffff) < (uint)*(ushort *)param_1[1]) {
        pbVar9 = (byte *)param_1[2];
        *(ushort *)param_1[1] = (ushort)uVar5;
        *pbVar9 = (byte)param_6 & 1;
      }
    }
  }
  return;
}


