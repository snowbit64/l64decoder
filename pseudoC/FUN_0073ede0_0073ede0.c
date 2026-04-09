// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073ede0
// Entry Point: 0073ede0
// Size: 2492 bytes
// Signature: undefined FUN_0073ede0(void)


undefined4 FUN_0073ede0(long *param_1,short param_2,short param_3,ushort param_4,float *param_5)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  byte bVar7;
  VehicleNavigationGridAdapter *pVVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  
  uVar15 = 0;
  if (param_4 < 8) {
    lVar13 = *param_1;
    uVar1 = (param_4 & 1) + param_4 & 7;
    uVar4 = param_4 & 6 | 1;
    uVar3 = (uint)*(ushort *)(lVar13 + 0x1380) << 1;
    switch(param_4) {
    case 0:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = param_3 - (short)uVar11;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              if (cVar2 == '\x03') {
                uVar9 = (short)uVar12 + param_2;
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073ef7c:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar4;
LAB_0073ef74:
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (pVVar8,(short)uVar12 + param_2,uVar10,uVar9);
                  goto LAB_0073ef7c;
                }
                if (cVar2 == '\x01') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar1;
                  goto LAB_0073ef74;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 1:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = (short)uVar11 + param_2;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              sVar5 = (short)uVar12;
              if (cVar2 == '\x03') {
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   param_3 - sVar5,uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   param_3 - sVar5,uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f018:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     param_3 - sVar5,uVar4);
                  goto LAB_0073f018;
                }
                if (cVar2 == '\x01') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     param_3 - sVar5,uVar1);
                  goto LAB_0073f018;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 2:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = param_2 - (short)uVar11;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              sVar5 = (short)uVar12;
              if (cVar2 == '\x03') {
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   param_3 - sVar5,uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   param_3 - sVar5,uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f138:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     param_3 - sVar5,uVar4);
                  goto LAB_0073f138;
                }
                if (cVar2 == '\x01') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     param_3 - sVar5,uVar1);
                  goto LAB_0073f138;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 3:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = param_3 - (short)uVar11;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              if (cVar2 == '\x03') {
                uVar9 = param_2 - (short)uVar12;
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f2dc:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar4;
LAB_0073f2d4:
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (pVVar8,param_2 - (short)uVar12,uVar10,uVar9);
                  goto LAB_0073f2dc;
                }
                if (cVar2 == '\x01') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar1;
                  goto LAB_0073f2d4;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 4:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = (short)uVar11 + param_3;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              if (cVar2 == '\x03') {
                uVar9 = param_2 - (short)uVar12;
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f3fc:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar4;
LAB_0073f3f4:
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (pVVar8,param_2 - (short)uVar12,uVar10,uVar9);
                  goto LAB_0073f3fc;
                }
                if (cVar2 == '\x01') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar1;
                  goto LAB_0073f3f4;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 5:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = param_2 - (short)uVar11;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              sVar5 = (short)uVar12;
              if (cVar2 == '\x03') {
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   sVar5 + param_3,uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   sVar5 + param_3,uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f498:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     sVar5 + param_3,uVar4);
                  goto LAB_0073f498;
                }
                if (cVar2 == '\x01') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     sVar5 + param_3,uVar1);
                  goto LAB_0073f498;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 6:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = (short)uVar11 + param_2;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              sVar5 = (short)uVar12;
              if (cVar2 == '\x03') {
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   sVar5 + param_3,uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                   sVar5 + param_3,uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f5b8:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     sVar5 + param_3,uVar4);
                  goto LAB_0073f5b8;
                }
                if (cVar2 == '\x01') {
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar10,
                                     sVar5 + param_3,uVar1);
                  goto LAB_0073f5b8;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
      break;
    case 7:
      if ((uVar3 & 0xffff) != 0) {
        uVar15 = 0;
        uVar11 = 0;
        do {
          uVar10 = (short)uVar11 + param_3;
          uVar12 = uVar11;
          do {
            fVar16 = *param_5;
            if (fVar16 != 0.0) {
              cVar2 = *(char *)(param_5 + 1);
              if (cVar2 == '\x03') {
                uVar9 = (short)uVar12 + param_2;
                bVar6 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar1);
                bVar7 = VehicleNavigationGridAdapter::getCellCost
                                  (*(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0),uVar9,uVar10,
                                   uVar4);
                if (bVar7 <= bVar6) {
                  bVar7 = bVar6;
                }
LAB_0073f75c:
                if (bVar7 == 0xff) {
                  return 0x7f800000;
                }
              }
              else {
                if (cVar2 == '\x02') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar4;
LAB_0073f754:
                  bVar7 = VehicleNavigationGridAdapter::getCellCost
                                    (pVVar8,(short)uVar12 + param_2,uVar10,uVar9);
                  goto LAB_0073f75c;
                }
                if (cVar2 == '\x01') {
                  pVVar8 = *(VehicleNavigationGridAdapter **)(lVar13 + 0x12a0);
                  uVar9 = uVar1;
                  goto LAB_0073f754;
                }
                bVar7 = 0;
              }
              uVar14 = NEON_fmadd((float)(ulong)bVar7,0x3d71e3c8,0x3f800000);
              uVar15 = NEON_fmadd(uVar14,fVar16,uVar15);
            }
            uVar12 = uVar12 + 1;
            param_5 = param_5 + 2;
          } while ((uVar12 & 0xffff) != (uVar3 & 0xffff));
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) != (uVar3 & 0xffff));
      }
    }
  }
  return uVar15;
}


