// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipCloseFileInZipRaw64
// Entry Point: 00e35afc
// Size: 1336 bytes
// Signature: undefined zipCloseFileInZipRaw64(void)


int zipCloseFileInZipRaw64(long param_1,ulong param_2,ulong param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 == 0) || (*(int *)(param_1 + 0x70) == 0)) {
    iVar6 = -0x66;
    goto LAB_00e35ffc;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
    do {
      if (*(int *)(param_1 + 0x98) == 0) {
        FUN_00e35a04(param_1);
        *(undefined4 *)(param_1 + 0x98) = 0x10000;
        *(long *)(param_1 + 0x90) = param_1 + 0x128;
      }
      iVar6 = *(int *)(param_1 + 0xa0);
      iVar5 = deflate(param_1 + 0x78,4);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + (*(int *)(param_1 + 0xa0) - iVar6);
    } while (iVar5 == 0);
    if (iVar5 == 1) goto LAB_00e35bc0;
LAB_00e35bd8:
    if (*(int *)(param_1 + 0x120) != 8) goto LAB_00e35c10;
LAB_00e35c08:
    if (*(int *)(param_1 + 0x124) != 0) goto LAB_00e35c10;
    iVar6 = deflateEnd(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    if (*(int *)(param_1 + 0x124) == 0) goto LAB_00e35c50;
LAB_00e35c18:
    uVar14 = *(long *)(param_1 + 0x10148) + (long)*(int *)(param_1 + 0x10178);
    if (0xfffffffe < uVar14) goto LAB_00e35c88;
LAB_00e35c6c:
    if ((0xfffffffe < param_2) || (0xfffffffe < *(ulong *)(param_1 + 0xf0))) goto LAB_00e35c88;
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar15 = param_3 >> 0x20;
    *(int *)(lVar8 + 0x10) = (int)param_3;
    if (uVar15 != 0) goto LAB_00e35ce0;
LAB_00e35cac:
    uVar13 = (undefined4)param_3;
    lVar8 = *(long *)(param_1 + 0xf8);
    if (uVar14 < 0xffffffff) goto LAB_00e35cf8;
LAB_00e35cbc:
    *(undefined4 *)(lVar8 + 0x14) = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  else {
LAB_00e35bc0:
    if (*(int *)(param_1 + 0xec) != 0) {
      iVar6 = FUN_00e35a04(param_1);
      iVar5 = -(uint)(iVar6 == -1);
      goto LAB_00e35bd8;
    }
    iVar5 = 0;
    if (*(int *)(param_1 + 0x120) == 8) goto LAB_00e35c08;
LAB_00e35c10:
    iVar6 = iVar5;
    if (*(int *)(param_1 + 0x124) != 0) goto LAB_00e35c18;
LAB_00e35c50:
    param_3 = *(ulong *)(param_1 + 0x10130);
    param_2 = *(ulong *)(param_1 + 0x10150);
    uVar14 = *(long *)(param_1 + 0x10148) + (long)*(int *)(param_1 + 0x10178);
    if (uVar14 < 0xffffffff) goto LAB_00e35c6c;
LAB_00e35c88:
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 4) = 0x2d;
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 6) = 0x2d;
    lVar8 = *(long *)(param_1 + 0xf8);
    uVar15 = param_3 >> 0x20;
    *(int *)(lVar8 + 0x10) = (int)param_3;
    if (uVar15 == 0) goto LAB_00e35cac;
LAB_00e35ce0:
    uVar13 = (undefined4)param_3;
    *(undefined4 *)(lVar8 + 0x10) = 0xffffffff;
    lVar8 = *(long *)(param_1 + 0xf8);
    if (0xfffffffe < uVar14) goto LAB_00e35cbc;
LAB_00e35cf8:
    *(int *)(lVar8 + 0x14) = (int)uVar14;
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  if (iVar5 == 1) {
    *(undefined2 *)(*(long *)(param_1 + 0xf8) + 0x24) = 1;
  }
  if (param_2 < 0xffffffff) {
    uVar10 = 0;
    *(int *)(*(long *)(param_1 + 0xf8) + 0x18) = (int)param_2;
  }
  else {
    uVar10 = 8;
    *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x18) = 0xffffffff;
  }
  uVar2 = uVar10 + 8;
  if (uVar14 < 0xffffffff) {
    uVar2 = uVar10;
  }
  uVar10 = uVar2 + 8;
  if (*(ulong *)(param_1 + 0xf0) < 0xffffffff) {
    uVar10 = uVar2;
  }
  if (uVar10 != 0) {
    uVar9 = (ulong)(uVar10 | 4);
    if (*(ulong *)(param_1 + 0x110) < uVar9) {
      iVar6 = -0x67;
      goto LAB_00e35ffc;
    }
    puVar1 = (undefined2 *)(*(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x108));
    puVar11 = (ulong *)(puVar1 + 2);
    *puVar1 = 1;
    *(char *)(puVar1 + 1) = (char)uVar10;
    *(undefined *)((long)puVar1 + 3) = 0;
    if (param_2 < 0xffffffff) {
      if (uVar14 < 0xffffffff) goto LAB_00e35db0;
LAB_00e35e18:
      *puVar11 = uVar14;
      uVar12 = *(ulong *)(param_1 + 0xf0);
      puVar11 = puVar11 + 1;
    }
    else {
      *puVar11 = param_2;
      puVar11 = (ulong *)(puVar1 + 6);
      if (0xfffffffe < uVar14) goto LAB_00e35e18;
LAB_00e35db0:
      uVar12 = *(ulong *)(param_1 + 0xf0);
    }
    if (0xfffffffe < uVar12) {
      *puVar11 = uVar12;
    }
    uVar12 = *(long *)(param_1 + 0x100) + uVar9;
    lVar8 = *(long *)(param_1 + 0xf8);
    *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + uVar9;
    *(ulong *)(param_1 + 0x100) = uVar12;
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) - uVar9;
    *(short *)(lVar8 + 0x1e) = (short)uVar12;
    if (0xffff < uVar12) {
      *(undefined2 *)(lVar8 + 0x1e) = 0xffff;
    }
  }
  if (iVar6 == 0) {
    iVar6 = FUN_00e342c0(param_1 + 0x60,*(undefined8 *)(param_1 + 0xf8),
                         *(undefined8 *)(param_1 + 0x108));
    free(*(void **)(param_1 + 0xf8));
    if (iVar6 == 0) {
      uVar7 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x58));
      lVar8 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),*(long *)(param_1 + 0xf0) + 0xe,0
                          );
      if (lVar8 == 0) {
        local_70._0_4_ = uVar13;
        if (uVar15 != 0) {
          local_70._0_4_ = 0xffffffff;
        }
        lVar8 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_70
                           ,4);
        iVar5 = -(uint)(lVar8 != 4);
        if ((0xfffffffe < param_2) || (0xfffffffe < uVar14)) goto LAB_00e35f50;
        if (lVar8 == 4) {
          local_70 = CONCAT44(local_70._4_4_,(int)uVar14);
          lVar8 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                             &local_70,4);
          if (lVar8 == 4) {
            local_70 = CONCAT44(local_70._4_4_,(int)param_2);
            lVar8 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                               &local_70,4);
            bVar4 = lVar8 == 4;
LAB_00e35fbc:
            iVar6 = -(uint)!bVar4;
            goto LAB_00e35fd0;
          }
        }
LAB_00e35fc4:
        iVar6 = -1;
      }
      else {
        iVar5 = -1;
        if ((0xfffffffe < param_2) || (iVar6 = -1, 0xfffffffe < uVar14)) {
LAB_00e35f50:
          if (*(long *)(param_1 + 0x10140) == 0) {
            iVar6 = -0x67;
          }
          else {
            lVar8 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),
                                 *(long *)(param_1 + 0x10140) + 4,0);
            iVar6 = -1;
            if ((lVar8 == 0) && (iVar5 == 0)) {
              local_70 = param_2;
              lVar8 = (**(code **)(param_1 + 0x10))
                                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                 &local_70,8);
              if (lVar8 == 8) {
                local_70 = uVar14;
                lVar8 = (**(code **)(param_1 + 0x10))
                                  (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                                   &local_70,8);
                bVar4 = lVar8 == 8;
                goto LAB_00e35fbc;
              }
              goto LAB_00e35fc4;
            }
          }
        }
      }
LAB_00e35fd0:
      lVar8 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),uVar7,0);
      if (lVar8 != 0) {
        iVar6 = -1;
      }
    }
  }
  else {
    free(*(void **)(param_1 + 0xf8));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x10190) = *(long *)(param_1 + 0x10190) + 1;
LAB_00e35ffc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


