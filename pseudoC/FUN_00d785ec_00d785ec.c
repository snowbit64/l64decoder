// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d785ec
// Entry Point: 00d785ec
// Size: 1476 bytes
// Signature: undefined FUN_00d785ec(void)


void FUN_00d785ec(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  
  lVar12 = param_1[0x4a];
  iVar8 = *(int *)((long)param_1 + 0x1fc);
  if (*(char *)((long)param_1 + 0x129) == '\0') {
    if ((((iVar8 != 0) || (*(int *)((long)param_1 + 0x204) != 0)) || (*(int *)(param_1 + 0x41) != 0)
        ) || (((*(char *)(param_1 + 0x25) != '\0' || (*(int *)(param_1 + 0x40) < 0x40)) &&
              (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x43))))) {
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x7d;
      (**(code **)(lVar9 + 8))(param_1,0xffffffff);
    }
    pcVar3 = FUN_00d7b10c;
    if (*(int *)(param_1 + 0x43) != 0x3f) {
      pcVar3 = FUN_00d7abc4;
    }
    *(code **)(lVar12 + 8) = pcVar3;
    if (0 < *(int *)(param_1 + 0x34)) {
      lVar9 = 0;
      do {
        lVar7 = param_1[lVar9 + 0x35];
        lVar11 = (long)*(int *)(lVar7 + 0x14);
        FUN_00d798d4(param_1,1,lVar11,lVar12 + lVar11 * 8 + 0x70);
        if (*(int *)(param_1 + 0x43) != 0) {
          lVar11 = (long)*(int *)(lVar7 + 0x18);
          FUN_00d798d4(param_1,0,lVar11,lVar12 + lVar11 * 8 + 0x90);
        }
        *(undefined4 *)(lVar12 + 0x2c + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x34));
    }
    if (0 < *(int *)(param_1 + 0x3a)) {
      lVar9 = 0;
      do {
        lVar11 = lVar12 + 0x150 + lVar9 * 8;
        lVar7 = param_1[(long)*(int *)((long)param_1 + lVar9 * 4 + 0x1d4) + 0x35];
        iVar8 = *(int *)(lVar7 + 0x1c);
        *(undefined8 *)(lVar11 + -0xa0) =
             *(undefined8 *)(lVar12 + (long)*(int *)(lVar7 + 0x14) * 8 + 0x70);
        uVar15 = (uint)*(byte *)(lVar7 + 0x34);
        *(undefined8 *)(lVar11 + -0x50) = *(undefined8 *)(lVar12 + (long)iVar8 * 8 + 0x90);
        if (uVar15 != 0) {
          iVar8 = *(int *)(lVar7 + 0x24);
          iVar5 = *(int *)(lVar7 + 0x28);
          uVar15 = 1;
          switch(*(undefined4 *)(param_1 + 0x43)) {
          case 0:
            goto switchD_00d78824_caseD_0;
          default:
            uVar15 = 7;
            if (0xfffffff7 < iVar5 - 9U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 7;
            if (0xfffffff7 < iVar8 - 9U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_00548a04 + (ulong)uVar15 * 0x20;
            break;
          case 3:
            uVar15 = iVar5 - 1;
            if (iVar5 - 3U < 0xfffffffe) {
              uVar15 = 1;
            }
            uVar13 = iVar8 - 1;
            if (iVar8 - 3U < 0xfffffffe) {
              uVar13 = 1;
            }
            puVar14 = &DAT_004c51c0 + (ulong)uVar15 * 8;
            break;
          case 8:
            uVar15 = 2;
            if (0xfffffffc < iVar5 - 4U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 2;
            if (0xfffffffc < iVar8 - 4U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_005487e8 + (ulong)uVar15 * 0xc;
            break;
          case 0xf:
            uVar15 = 3;
            if (0xfffffffb < iVar5 - 5U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 3;
            if (0xfffffffb < iVar8 - 5U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_0054880c + (ulong)uVar15 * 0x10;
            break;
          case 0x18:
            uVar15 = 4;
            if (0xfffffffa < iVar5 - 6U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 4;
            if (0xfffffffa < iVar8 - 6U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_0054884c + (ulong)uVar15 * 0x14;
            break;
          case 0x23:
            uVar15 = 5;
            if (0xfffffff9 < iVar5 - 7U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 5;
            if (0xfffffff9 < iVar8 - 7U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_005488b0 + (ulong)uVar15 * 0x18;
            break;
          case 0x30:
            uVar15 = 6;
            if (0xfffffff8 < iVar5 - 8U) {
              uVar15 = iVar5 - 1;
            }
            uVar13 = 6;
            if (0xfffffff8 < iVar8 - 8U) {
              uVar13 = iVar8 - 1;
            }
            puVar14 = &UNK_00548940 + (ulong)uVar15 * 0x1c;
          }
          uVar15 = *(int *)(puVar14 + (ulong)uVar13 * 4) + 1;
        }
switchD_00d78824_caseD_0:
        *(uint *)(lVar12 + 0x150 + lVar9 * 4) = uVar15;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x3a));
    }
    goto LAB_00d78b4c;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar8 == 0) {
    if (iVar5 == 0) goto LAB_00d7891c;
LAB_00d7893c:
    lVar9 = *param_1;
    *(int *)(lVar9 + 0x2c) = iVar8;
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    lVar11 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x11;
    *(undefined4 *)(lVar11 + 0x30) = uVar4;
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
    *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(param_1 + 0x41);
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar5 < iVar8) || (*(int *)(param_1 + 0x43) < iVar5)) || (*(int *)(param_1 + 0x34) != 1))
    goto LAB_00d7893c;
LAB_00d7891c:
    if (*(int *)((long)param_1 + 0x204) == 0) {
      iVar5 = *(int *)(param_1 + 0x41);
    }
    else {
      iVar5 = *(int *)((long)param_1 + 0x204) + -1;
      if (iVar5 != *(int *)(param_1 + 0x41)) goto LAB_00d7893c;
    }
    if (0xd < iVar5) goto LAB_00d7893c;
  }
  iVar8 = *(int *)(param_1 + 0x34);
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      lVar11 = param_1[0x16];
      iVar8 = *(int *)(param_1[lVar9 + 0x35] + 4);
      iVar5 = *(int *)((long)param_1 + 0x1fc);
      if ((iVar5 == 0) || (-1 < *(int *)(lVar11 + (long)iVar8 * 0x100))) {
        if (iVar5 <= *(int *)(param_1 + 0x40)) goto LAB_00d789dc;
      }
      else {
        lVar7 = *param_1;
        *(int *)(lVar7 + 0x2c) = iVar8;
        lVar6 = *param_1;
        *(undefined4 *)(lVar7 + 0x28) = 0x76;
        *(undefined4 *)(lVar6 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar5 = *(int *)((long)param_1 + 0x1fc);
        if (iVar5 <= *(int *)(param_1 + 0x40)) {
LAB_00d789dc:
          lVar11 = lVar11 + (long)iVar8 * 0x100;
          lVar7 = (long)iVar5;
          do {
            uVar15 = *(uint *)(lVar11 + lVar7 * 4);
            if (*(uint *)((long)param_1 + 0x204) != (uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)))
            {
              lVar6 = *param_1;
              *(int *)(lVar6 + 0x2c) = iVar8;
              lVar10 = *param_1;
              *(undefined4 *)(lVar6 + 0x28) = 0x76;
              *(int *)(lVar10 + 0x30) = (int)lVar7;
              (**(code **)(*param_1 + 8))(param_1,0xffffffff);
            }
            *(undefined4 *)(lVar11 + lVar7 * 4) = *(undefined4 *)(param_1 + 0x41);
            bVar1 = lVar7 < *(int *)(param_1 + 0x40);
            lVar7 = lVar7 + 1;
          } while (bVar1);
        }
      }
      iVar8 = *(int *)(param_1 + 0x34);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  iVar5 = *(int *)((long)param_1 + 0x1fc);
  pcVar3 = FUN_00d78bdc;
  if (iVar5 != 0) {
    pcVar3 = FUN_00d78ec8;
  }
  pcVar2 = FUN_00d791d0;
  if (iVar5 != 0) {
    pcVar2 = FUN_00d7938c;
  }
  if (*(int *)((long)param_1 + 0x204) != 0) {
    pcVar3 = pcVar2;
  }
  *(code **)(lVar12 + 8) = pcVar3;
  if (0 < iVar8) {
    lVar9 = 0;
    lVar11 = param_1[0x35];
    if (iVar5 == 0) goto LAB_00d78b00;
    do {
      lVar7 = lVar12 + (long)*(int *)(lVar11 + 0x18) * 8;
      FUN_00d798d4(param_1,0,(long)*(int *)(lVar11 + 0x18),lVar7 + 0x48);
      *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)(lVar7 + 0x48);
      lVar7 = lVar9;
      while( true ) {
        *(undefined4 *)(lVar12 + 0x2c + lVar7 * 4) = 0;
        lVar9 = lVar7 + 1;
        if (*(int *)(param_1 + 0x34) <= lVar9) goto LAB_00d78b48;
        lVar11 = param_1[lVar7 + 0x36];
        if (*(int *)((long)param_1 + 0x1fc) != 0) break;
LAB_00d78b00:
        lVar7 = lVar9;
        if (*(int *)((long)param_1 + 0x204) == 0) {
          FUN_00d798d4(param_1,1,(long)*(int *)(lVar11 + 0x14),
                       lVar12 + (long)*(int *)(lVar11 + 0x14) * 8 + 0x48);
        }
      }
    } while( true );
  }
LAB_00d78b48:
  *(undefined4 *)(lVar12 + 0x28) = 0;
LAB_00d78b4c:
  uVar4 = *(undefined4 *)((long)param_1 + 0x15c);
  *(undefined4 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined *)(lVar12 + 0x3c) = 0;
  *(undefined4 *)(lVar12 + 0x40) = uVar4;
  return;
}


