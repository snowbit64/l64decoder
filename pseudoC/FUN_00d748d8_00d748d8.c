// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d748d8
// Entry Point: 00d748d8
// Size: 1048 bytes
// Signature: undefined FUN_00d748d8(void)


void FUN_00d748d8(long *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code **ppcVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  
  lVar14 = param_1[0x4a];
  iVar7 = *(int *)((long)param_1 + 0x1fc);
  if (*(char *)((long)param_1 + 0x129) == '\0') {
    if ((((iVar7 != 0) || (*(int *)((long)param_1 + 0x204) != 0)) || (*(int *)(param_1 + 0x41) != 0)
        ) || ((*(int *)(param_1 + 0x40) < 0x40 &&
              (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x43))))) {
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x7d;
      (**(code **)(lVar10 + 8))(param_1,0xffffffff);
    }
    iVar7 = *(int *)(param_1 + 0x34);
    *(code **)(lVar14 + 8) = FUN_00d75414;
    goto joined_r0x00d74b20;
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if (iVar7 == 0) {
    if (iVar6 == 0) goto LAB_00d74980;
LAB_00d749a0:
    lVar10 = *param_1;
    *(int *)(lVar10 + 0x2c) = iVar7;
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    lVar13 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x11;
    *(undefined4 *)(lVar13 + 0x30) = uVar2;
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
    *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(param_1 + 0x41);
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar6 < iVar7) || (*(int *)(param_1 + 0x43) < iVar6)) || (*(int *)(param_1 + 0x34) != 1))
    goto LAB_00d749a0;
LAB_00d74980:
    if (*(int *)((long)param_1 + 0x204) == 0) {
      iVar6 = *(int *)(param_1 + 0x41);
    }
    else {
      iVar6 = *(int *)((long)param_1 + 0x204) + -1;
      if (iVar6 != *(int *)(param_1 + 0x41)) goto LAB_00d749a0;
    }
    if (0xd < iVar6) goto LAB_00d749a0;
  }
  iVar7 = *(int *)(param_1 + 0x34);
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      lVar13 = param_1[0x16];
      iVar7 = *(int *)(param_1[lVar10 + 0x35] + 4);
      iVar6 = *(int *)((long)param_1 + 0x1fc);
      if ((iVar6 == 0) || (-1 < *(int *)(lVar13 + (long)iVar7 * 0x100))) {
        if (iVar6 <= *(int *)(param_1 + 0x40)) goto LAB_00d74a40;
      }
      else {
        lVar9 = *param_1;
        *(int *)(lVar9 + 0x2c) = iVar7;
        lVar8 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x76;
        *(undefined4 *)(lVar8 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar6 = *(int *)((long)param_1 + 0x1fc);
        if (iVar6 <= *(int *)(param_1 + 0x40)) {
LAB_00d74a40:
          lVar13 = lVar13 + (long)iVar7 * 0x100;
          lVar9 = (long)iVar6;
          do {
            uVar3 = *(uint *)(lVar13 + lVar9 * 4);
            if (*(uint *)((long)param_1 + 0x204) != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) {
              lVar8 = *param_1;
              *(int *)(lVar8 + 0x2c) = iVar7;
              lVar11 = *param_1;
              *(undefined4 *)(lVar8 + 0x28) = 0x76;
              *(int *)(lVar11 + 0x30) = (int)lVar9;
              (**(code **)(*param_1 + 8))(param_1,0xffffffff);
            }
            *(undefined4 *)(lVar13 + lVar9 * 4) = *(undefined4 *)(param_1 + 0x41);
            bVar1 = lVar9 < *(int *)(param_1 + 0x40);
            lVar9 = lVar9 + 1;
          } while (bVar1);
        }
      }
      iVar7 = *(int *)(param_1 + 0x34);
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  if (*(int *)((long)param_1 + 0x204) == 0) {
    if (*(int *)((long)param_1 + 0x1fc) == 0) {
      *(code **)(lVar14 + 8) = FUN_00d74cf4;
    }
    else {
      *(code **)(lVar14 + 8) = FUN_00d74f44;
    }
  }
  else if (*(int *)((long)param_1 + 0x1fc) == 0) {
    *(code **)(lVar14 + 8) = FUN_00d75190;
  }
  else {
    *(code **)(lVar14 + 8) = FUN_00d75244;
  }
joined_r0x00d74b20:
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      lVar13 = param_1[lVar10 + 0x35];
      if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_00d74bc4:
        uVar3 = *(uint *)(lVar13 + 0x14);
        if (0xf < uVar3) {
          lVar9 = *param_1;
          *(uint *)(lVar9 + 0x2c) = uVar3;
          ppcVar12 = (code **)*param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x32;
          (**ppcVar12)(param_1);
        }
        puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar3 * 8 + 0x50);
        puVar5 = (undefined8 *)*puVar15;
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar15 = puVar5;
        }
        lVar9 = lVar14 + lVar10 * 4;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        cVar4 = *(char *)((long)param_1 + 0x129);
        *(undefined4 *)(lVar9 + 0x2c) = 0;
        *(undefined4 *)(lVar9 + 0x3c) = 0;
        if (cVar4 == '\0') {
          iVar7 = *(int *)(param_1 + 0x43);
        }
        else {
          iVar7 = *(int *)((long)param_1 + 0x1fc);
        }
        if (iVar7 != 0) {
LAB_00d74c6c:
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (0xf < uVar3) {
            lVar13 = *param_1;
            *(uint *)(lVar13 + 0x2c) = uVar3;
            ppcVar12 = (code **)*param_1;
            *(undefined4 *)(lVar13 + 0x28) = 0x32;
            (**ppcVar12)(param_1);
          }
          puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar3 * 8 + 0xd0);
          puVar5 = (undefined8 *)*puVar15;
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
            *puVar15 = puVar5;
          }
          puVar5[0x1d] = 0;
          puVar5[0x1c] = 0;
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0;
          puVar5[0x19] = 0;
          puVar5[0x18] = 0;
          puVar5[0x1b] = 0;
          puVar5[0x1a] = 0;
          puVar5[0x15] = 0;
          puVar5[0x14] = 0;
          puVar5[0x17] = 0;
          puVar5[0x16] = 0;
          puVar5[0x11] = 0;
          puVar5[0x10] = 0;
          puVar5[0x13] = 0;
          puVar5[0x12] = 0;
          puVar5[0xd] = 0;
          puVar5[0xc] = 0;
          puVar5[0xf] = 0;
          puVar5[0xe] = 0;
          puVar5[9] = 0;
          puVar5[8] = 0;
          puVar5[0xb] = 0;
          puVar5[10] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5[3] = 0;
          puVar5[2] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00d74c6c;
        if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_00d74bc4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x34));
  }
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  uVar2 = *(undefined4 *)((long)param_1 + 0x15c);
  *(undefined4 *)(lVar14 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar14 + 0x4c) = uVar2;
  return;
}


