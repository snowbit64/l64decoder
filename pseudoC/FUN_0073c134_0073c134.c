// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073c134
// Entry Point: 0073c134
// Size: 1204 bytes
// Signature: undefined FUN_0073c134(void)


void FUN_0073c134(long *param_1,ulong param_2,ushort param_3,ushort param_4,undefined2 param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar12 = *param_1;
  uVar3 = *(ushort *)(lVar12 + 0x30);
  if (uVar3 <= (ushort)param_2) {
    return;
  }
  if (uVar3 <= (ushort)(param_2 >> 0x10)) {
    return;
  }
  uVar7 = (int)param_2 - (uint)*(ushort *)(lVar12 + 0x32);
  uVar6 = param_2 >> 0x20 & 0xffff;
  if (((uVar7 & 0xffff) < 0xe) &&
     (uVar9 = (int)((param_2 & 0xffffffffffff) >> 0x10) - (uint)*(ushort *)(lVar12 + 0x34),
     (uVar9 & 0xffff) < 0xe)) {
    uVar8 = (ulong)uVar9 & 0xffff;
    uVar3 = (ushort)uVar7;
    uVar7 = (uint)*(ushort *)(lVar12 + 0x28 + uVar8 * 0xe0 + (ulong)uVar3 * 0x10 + uVar6 * 2 + 0xe);
    uVar9 = (uint)*(byte *)(lVar12 + 0x28 + uVar8 * 0x70 + (ulong)uVar3 * 8 + uVar6 + 0xc4e);
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x28);
    lVar1 = ((param_2 & 0xffffffffffff) >> 0x10 & 0xffff) * (ulong)uVar3 + (param_2 & 0xffff);
    uVar3 = *(ushort *)(lVar11 + lVar1 * 6);
    uVar7 = (uint)uVar3;
    if (uVar3 == 0xffff) {
      return;
    }
    bVar5 = *(byte *)(lVar11 + lVar1 * 6 + 4);
    uVar9 = (uint)bVar5;
    if ((uint)uVar6 != (uint)(bVar5 >> 5)) {
      uVar3 = *(ushort *)(lVar11 + lVar1 * 6 + 2);
      uVar7 = (uint)uVar3;
      if (uVar3 == 0xffff) {
        return;
      }
      bVar5 = *(byte *)(lVar11 + lVar1 * 6 + 5);
      uVar9 = (uint)bVar5;
      if ((uint)uVar6 != (uint)(bVar5 >> 5)) {
        return;
      }
    }
  }
  if ((uVar9 >> 4 & 1) == 0) {
    uVar2 = uVar7 + 0x80;
    if (0xfffe < uVar2) {
      uVar2 = 0xffff;
    }
    fVar16 = 0.0;
    if (((uVar9 & 0x1f ^ param_6) & 1) == 0) {
      uVar2 = uVar7;
    }
    switch(param_5) {
    case 0:
      if (*(short *)(lVar12 + 0x1380) != 0) {
        fVar16 = 0.0;
        sVar13 = 0;
        do {
          bVar4 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),sVar13 + param_3,
                             param_4,0);
          bVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),sVar13 + param_3,
                             param_4 + 1,0);
          if (bVar4 <= bVar5) {
            bVar5 = bVar4;
          }
          sVar13 = sVar13 + 1;
          fVar14 = (float)NEON_fmadd((float)(ulong)(uint)bVar5,0x3d71e3c8,0x3f800000);
          fVar15 = INFINITY;
          if (bVar5 != 0xff) {
            fVar15 = fVar14;
          }
          fVar16 = fVar16 + fVar15;
        } while ((*(short *)(lVar12 + 0x1380) != sVar13) && (ABS(fVar16) != INFINITY));
      }
      break;
    case 2:
      if (*(short *)(lVar12 + 0x1380) != 0) {
        fVar16 = 0.0;
        sVar13 = 0;
        do {
          bVar4 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3,
                             param_4 - sVar13,2);
          bVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3 + 1,
                             param_4 - sVar13,2);
          if (bVar4 <= bVar5) {
            bVar5 = bVar4;
          }
          sVar13 = sVar13 + 1;
          fVar14 = (float)NEON_fmadd((float)(ulong)(uint)bVar5,0x3d71e3c8,0x3f800000);
          fVar15 = INFINITY;
          if (bVar5 != 0xff) {
            fVar15 = fVar14;
          }
          fVar16 = fVar16 + fVar15;
        } while ((*(short *)(lVar12 + 0x1380) != sVar13) && (ABS(fVar16) != INFINITY));
      }
      break;
    case 4:
      if (*(short *)(lVar12 + 0x1380) != 0) {
        fVar16 = 0.0;
        sVar13 = 0;
        do {
          bVar4 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3 - sVar13,
                             param_4,4);
          bVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3 - sVar13,
                             param_4 - 1,4);
          if (bVar4 <= bVar5) {
            bVar5 = bVar4;
          }
          sVar13 = sVar13 + 1;
          fVar14 = (float)NEON_fmadd((float)(ulong)(uint)bVar5,0x3d71e3c8,0x3f800000);
          fVar15 = INFINITY;
          if (bVar5 != 0xff) {
            fVar15 = fVar14;
          }
          fVar16 = fVar16 + fVar15;
        } while ((*(short *)(lVar12 + 0x1380) != sVar13) && (ABS(fVar16) != INFINITY));
      }
      break;
    case 6:
      if (*(short *)(lVar12 + 0x1380) != 0) {
        fVar16 = 0.0;
        sVar13 = 0;
        do {
          bVar4 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3,
                             sVar13 + param_4,6);
          bVar5 = VehicleNavigationGridAdapter::getCellCost
                            (*(VehicleNavigationGridAdapter **)(lVar12 + 0x12a0),param_3 - 1,
                             sVar13 + param_4,6);
          if (bVar4 <= bVar5) {
            bVar5 = bVar4;
          }
          sVar13 = sVar13 + 1;
          fVar14 = (float)NEON_fmadd((float)(ulong)(uint)bVar5,0x3d71e3c8,0x3f800000);
          fVar15 = INFINITY;
          if (bVar5 != 0xff) {
            fVar15 = fVar14;
          }
          fVar16 = fVar16 + fVar15;
        } while ((*(short *)(lVar12 + 0x1380) != sVar13) && (ABS(fVar16) != INFINITY));
      }
    }
    if (ABS(fVar16) != INFINITY) {
      fVar16 = fVar16 * *(float *)(*(long *)(lVar12 + 0x12a0) + 0x30);
      fVar15 = fVar16 * 4.0;
      if ((param_6 & 1) == 0) {
        fVar15 = fVar16;
      }
      uVar7 = 0xffff;
      if (fVar15 <= 8191.75) {
        uVar7 = (uint)(fVar15 + 1048576.0) & 0xffff;
      }
      uVar7 = uVar7 + (uVar2 & 0xffff);
      if (0xfffe < uVar7) {
        uVar7 = 0xffff;
      }
      if ((uVar7 & 0xffff) < (uint)*(ushort *)param_1[1]) {
        pbVar10 = (byte *)param_1[2];
        *(ushort *)param_1[1] = (ushort)uVar7;
        *pbVar10 = (byte)param_6 & 1;
      }
    }
  }
  return;
}


