// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adfe28
// Entry Point: 00adfe28
// Size: 1064 bytes
// Signature: undefined FUN_00adfe28(void)


undefined8
FUN_00adfe28(long param_1,ushort *param_2,ushort *param_3,int *param_4,long param_5,byte *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    plVar14 = (long *)(*(long *)(param_1 + 0x40) + 0xc0);
    do {
      if (*(int *)(plVar14 + -0x18) == *param_4) {
        uVar2 = param_4[0x57];
        if (uVar2 != 0) {
          *(uint *)(param_5 + 0x148) = uVar2;
          pvVar8 = calloc((ulong)uVar2,0x170);
          *(void **)(param_5 + 0x150) = pvVar8;
          if (pvVar8 == (void *)0x0) {
            return 3;
          }
          if (*(int *)(plVar14 + -2) != 0) {
            uVar9 = FUN_00adfe28(param_1,0,*plVar14,*(undefined8 *)(param_4 + 0x58),pvVar8);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            uVar15 = 0;
            lVar11 = 0x60;
            lVar12 = 0x170;
            lVar13 = 0x168;
            while (uVar15 = uVar15 + 1, uVar15 < *(uint *)(plVar14 + -2)) {
              lVar1 = *plVar14 + lVar11;
              lVar11 = lVar11 + 0x60;
              uVar9 = FUN_00adfe28(param_1,0,lVar1,*(long *)(param_4 + 0x58) + lVar13,
                                   *(long *)(param_5 + 0x150) + lVar12);
              lVar12 = lVar12 + 0x170;
              lVar13 = lVar13 + 0x168;
              if ((int)uVar9 != 0) {
                return uVar9;
              }
            }
          }
        }
        cVar4 = *(char *)(param_3 + 1);
        cVar5 = *(char *)((long)param_3 + 3);
        *(long *)(param_5 + 8) = plVar14[-0xf];
        uVar2 = (((*param_3 & 0xff00) << 0x10) >> 8 | (uint)*param_3 << 0x18) >> 0x10;
        if (cVar4 != '\0') {
          uVar2 = uVar2 | 2;
        }
        if (cVar5 != '\0') {
          uVar2 = uVar2 | 4;
        }
        if (*(char *)(param_3 + 2) != '\0') {
          uVar2 = uVar2 | 8;
        }
        if (*(char *)((long)param_3 + 5) != '\0') {
          uVar2 = uVar2 | 0x10;
        }
        if (*(char *)(param_3 + 3) != '\0') {
          uVar2 = uVar2 | 0x20;
        }
        if (*(char *)((long)param_3 + 7) != '\0') {
          uVar2 = uVar2 | 0x40;
        }
        if (*(char *)(param_3 + 4) != '\0') {
          uVar2 = uVar2 | 0x80;
        }
        if (*(char *)((long)param_3 + 9) != '\0') {
          uVar2 = uVar2 | 0x200;
        }
        *(uint *)(param_5 + 0x20) = uVar2;
        if (param_2 != (ushort *)0x0) {
          uVar7 = (((*param_2 & 0xff00) << 0x10) >> 8 | (uint)*param_2 << 0x18) >> 0x10;
          if (*(char *)(param_2 + 1) != '\0') {
            uVar7 = uVar7 | 2;
          }
          if (*(char *)((long)param_2 + 3) != '\0') {
            uVar7 = uVar7 | 4;
          }
          if (*(char *)(param_2 + 2) != '\0') {
            uVar7 = uVar7 | 8;
          }
          if (*(char *)((long)param_2 + 5) != '\0') {
            uVar7 = uVar7 | 0x10;
          }
          if (*(char *)(param_2 + 3) != '\0') {
            uVar7 = uVar7 | 0x20;
          }
          if (*(char *)((long)param_2 + 7) != '\0') {
            uVar7 = uVar7 | 0x40;
          }
          if (*(char *)(param_2 + 4) != '\0') {
            uVar7 = uVar7 | 0x80;
          }
          if (*(char *)((long)param_2 + 9) != '\0') {
            uVar7 = uVar7 | 0x200;
          }
          *(uint *)(param_5 + 0x20) = uVar7 | uVar2;
        }
        *(undefined4 *)(param_5 + 0x24) = *(undefined4 *)(param_3 + 0x2c);
        uVar16 = *(undefined8 *)(param_4 + 0xb);
        uVar9 = *(undefined8 *)(param_4 + 9);
        *(undefined8 *)(param_5 + 0x38) = *(undefined8 *)(param_4 + 0xd);
        *(undefined8 *)(param_5 + 0x30) = uVar16;
        *(undefined8 *)(param_5 + 0x28) = uVar9;
        if (param_4[1] == 0x1c) {
          memcpy((void *)(param_5 + 0x40),param_4 + 0x15,0x108);
        }
        bVar6 = *(byte *)((long)param_3 + 5);
        *(int **)(param_5 + 0x160) = param_4;
        uVar2 = *(uint *)(param_5 + 0x14);
        *param_6 = *param_6 | bVar6;
        if ((uVar2 | 2) != 3) {
          return 0;
        }
        iVar10 = param_4[9];
        uVar2 = param_4[7];
        if ((uVar2 >> 8 & 1) == 0) {
          if ((uVar2 >> 3 & 1) != 0) {
            if (iVar10 == 0x20) {
              iVar10 = 100;
            }
            else {
              if (iVar10 != 0x40) {
                return 0;
              }
              iVar10 = 0x70;
            }
            goto LAB_00ae0244;
          }
          if ((uVar2 & 6) == 0) {
            if ((uVar2 >> 0x1c & 1) == 0) {
              return 6;
            }
            iVar10 = 0;
            goto LAB_00ae0244;
          }
          if (iVar10 == 0x40) {
            iVar10 = 0x6e;
          }
          else {
            if (iVar10 != 0x20) {
              return 0;
            }
            iVar10 = 0x62;
          }
        }
        else {
          iVar3 = param_4[0xb];
          if ((uVar2 >> 3 & 1) != 0) {
            if (iVar10 == 0x40) {
              if (2 < iVar3 - 2U) {
                return 0;
              }
              iVar10 = (iVar3 - 2U) * 3 + 0x73;
            }
            else {
              if ((iVar10 != 0x20) || (2 < iVar3 - 2U)) {
                return 0;
              }
              iVar10 = (iVar3 - 2U) * 3 + 0x67;
            }
            goto LAB_00ae0244;
          }
          if ((uVar2 & 6) == 0) {
            return 6;
          }
          if (iVar10 == 0x40) {
            if (iVar3 == 4) {
              iVar10 = 0x77;
            }
            else if (iVar3 == 3) {
              iVar10 = 0x74;
            }
            else {
              if (iVar3 != 2) {
                return 0;
              }
              iVar10 = 0x71;
            }
          }
          else {
            if (iVar10 != 0x20) {
              return 0;
            }
            if (iVar3 == 4) {
              iVar10 = 0x6b;
            }
            else if (iVar3 == 3) {
              iVar10 = 0x68;
            }
            else {
              if (iVar3 != 2) {
                return 0;
              }
              iVar10 = 0x65;
            }
          }
        }
        if (param_4[10] != 0) {
          iVar10 = iVar10 + 1;
        }
LAB_00ae0244:
        *(int *)(param_5 + 0x158) = iVar10;
        return 0;
      }
      plVar14 = plVar14 + 0x19;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return 0xc;
}


