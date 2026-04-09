// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadCentralDirectoryRecord
// Entry Point: 00e333ec
// Size: 2680 bytes
// Signature: undefined LoadCentralDirectoryRecord(void)


void LoadCentralDirectoryRecord(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int local_bc;
  byte local_a8 [8];
  ulong local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  lVar11 = call_zseek64(param_1,uVar16,0,2);
  if (lVar11 == 0) {
    uVar12 = call_ztell64(param_1,uVar16);
    uVar15 = uVar12;
    if (0xfffe < uVar12) {
      uVar15 = 0xffff;
    }
    pvVar13 = malloc(0x404);
    if (pvVar13 != (void *)0x0) {
      uVar18 = 4;
      do {
        if (uVar15 <= uVar18) {
LAB_00e336c0:
          free(pvVar13);
          break;
        }
        uVar21 = uVar18 + 0x400;
        uVar18 = uVar15;
        if (uVar21 <= uVar15) {
          uVar18 = uVar21;
        }
        uVar21 = uVar18;
        if (0x403 < uVar18) {
          uVar21 = 0x404;
        }
        lVar11 = call_zseek64(param_1,uVar16,uVar12 - uVar18,0);
        if ((lVar11 != 0) ||
           (uVar14 = (**(code **)(param_1 + 8))
                               (*(undefined8 *)(param_1 + 0x38),uVar16,pvVar13,uVar21),
           uVar14 != uVar21)) goto LAB_00e336c0;
        if ((uVar21 & 0x7fc) != 0) {
          uVar21 = (ulong)((int)uVar21 - 4);
          do {
            if ((((*(char *)((long)pvVar13 + uVar21) == 'P') &&
                 (*(char *)((long)pvVar13 + uVar21 + 1) == 'K')) &&
                (*(char *)((long)pvVar13 + uVar21 + 2) == '\x06')) &&
               (*(char *)((long)pvVar13 + uVar21 + 3) == '\a')) {
              lVar11 = (uVar12 - uVar18) + (uVar21 & 0xffffffff);
              if (lVar11 != 0) {
                free(pvVar13);
                lVar11 = call_zseek64(param_1,uVar16,lVar11,0);
                if ((((lVar11 != 0) || (iVar3 = FUN_00e33e64(param_1,uVar16,&local_70), iVar3 != 0))
                    || ((iVar3 = FUN_00e33e64(param_1,uVar16,&local_70), iVar3 != 0 ||
                        ((local_70 != 0 ||
                         (iVar3 = FUN_00e34010(param_1,uVar16,&local_78), iVar3 != 0)))))) ||
                   ((iVar3 = FUN_00e33e64(param_1,uVar16,&local_70), uVar15 = local_78, iVar3 != 0
                    || ((((local_70 != 1 ||
                          (lVar11 = call_zseek64(param_1,uVar16,local_78,0), lVar11 != 0)) ||
                         (iVar3 = FUN_00e33e64(param_1,uVar16,&local_70), iVar3 != 0)) ||
                        ((local_70 != 0x6064b50 || (uVar15 == 0)))))))) goto LAB_00e336c8;
                lVar11 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),uVar15,0);
                uVar4 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
                uVar5 = FUN_00e34010(param_1,*(undefined8 *)(param_1 + 0x58),local_a8);
                uVar16 = *(undefined8 *)(param_1 + 0x58);
                iVar3 = (**(code **)(param_1 + 8))
                                  (*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
                if (((iVar3 == 1) ||
                    (iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16),
                    iVar3 == 0)) &&
                   ((iVar3 = (**(code **)(param_1 + 8))
                                       (*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1),
                    iVar3 == 1 ||
                    (iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16),
                    iVar3 == 0)))) {
                  local_bc = -(uint)((uVar5 | uVar4) != 0 || lVar11 != 0);
                }
                else {
                  local_bc = -1;
                }
                uVar16 = *(undefined8 *)(param_1 + 0x58);
                iVar3 = (**(code **)(param_1 + 8))
                                  (*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
                if (((iVar3 != 1) &&
                    (iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16),
                    iVar3 != 0)) ||
                   ((iVar3 = (**(code **)(param_1 + 8))
                                       (*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1),
                    iVar3 != 1 &&
                    (iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16),
                    iVar3 != 0)))) {
                  local_bc = -1;
                }
                iVar3 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_88);
                iVar6 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_90);
                iVar7 = FUN_00e34010(param_1,*(undefined8 *)(param_1 + 0x58),&local_98);
                iVar8 = FUN_00e34010(param_1,*(undefined8 *)(param_1 + 0x58),&local_a0);
                lVar20 = local_88;
                lVar11 = local_90;
                uVar21 = local_98;
                uVar12 = local_a0;
                iVar9 = FUN_00e34010(param_1,*(undefined8 *)(param_1 + 0x58),&local_70);
                iVar10 = FUN_00e34010(param_1,*(undefined8 *)(param_1 + 0x58),&local_78);
                uVar18 = local_70 + local_78;
                if (((((uVar15 < uVar18) || (iVar10 != 0)) || (iVar9 != 0)) ||
                    (((uVar12 != uVar21 || (lVar11 != 0)) ||
                     ((lVar20 != 0 || ((iVar8 != 0 || (iVar7 != 0)))))))) ||
                   ((iVar6 != 0 ||
                    ((iVar3 != 0 || (uVar14 = local_78, uVar21 = local_70, local_bc != 0))))))
                goto LAB_00e33dcc;
                goto LAB_00e33d3c;
              }
              break;
            }
            bVar1 = 0 < (long)uVar21;
            uVar21 = uVar21 - 1;
          } while (bVar1);
        }
      } while( true );
    }
  }
LAB_00e336c8:
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  lVar11 = call_zseek64(param_1,uVar16,0,2);
  uVar15 = 0;
  if (lVar11 == 0) {
    uVar18 = call_ztell64(param_1,uVar16);
    uVar12 = uVar18;
    if (0xfffe < uVar18) {
      uVar12 = 0xffff;
    }
    pvVar13 = malloc(0x404);
    if (pvVar13 != (void *)0x0) {
      uVar21 = 4;
      do {
        if (uVar12 <= uVar21) {
LAB_00e337e4:
          uVar15 = 0;
LAB_00e337e8:
          free(pvVar13);
          goto LAB_00e337f8;
        }
        uVar15 = uVar21 + 0x400;
        uVar21 = uVar12;
        if (uVar15 <= uVar12) {
          uVar21 = uVar15;
        }
        uVar15 = uVar21;
        if (0x403 < uVar21) {
          uVar15 = 0x404;
        }
        lVar11 = call_zseek64(param_1,uVar16,uVar18 - uVar21,0);
        if ((lVar11 != 0) ||
           (uVar14 = (**(code **)(param_1 + 8))
                               (*(undefined8 *)(param_1 + 0x38),uVar16,pvVar13,uVar15),
           uVar14 != uVar15)) goto LAB_00e337e4;
        if ((uVar15 & 0x7fc) != 0) {
          uVar15 = (ulong)((int)uVar15 - 4);
          do {
            if ((((*(char *)((long)pvVar13 + uVar15) == 'P') &&
                 (*(char *)((long)pvVar13 + uVar15 + 1) == 'K')) &&
                (*(char *)((long)pvVar13 + uVar15 + 2) == '\x05')) &&
               (*(char *)((long)pvVar13 + uVar15 + 3) == '\x06')) {
              uVar15 = (uVar18 - uVar21) + (uVar15 & 0xffffffff);
              if (uVar15 != 0) goto LAB_00e337e8;
              break;
            }
            bVar1 = 0 < (long)uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar1);
        }
      } while( true );
    }
    uVar15 = 0;
  }
LAB_00e337f8:
  lVar11 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),uVar15,0);
  iVar3 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
  if (iVar6 == 1) {
    uVar12 = local_70 & 0xff;
    lVar20 = uVar12 << 8;
LAB_00e33874:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
    if (iVar6 == 1) {
      lVar20 = (local_70 & 0xff) << 8;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar6 != 0) goto LAB_00e338b4;
    }
    lVar20 = lVar20 + uVar12;
    iVar3 = -(uint)(iVar3 != 0 || lVar11 != 0);
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar12 = 0;
    if (iVar6 == 0) {
      lVar20 = 0;
      goto LAB_00e33874;
    }
LAB_00e338b4:
    lVar20 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  local_88 = lVar20;
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
  if (iVar6 == 1) {
    uVar12 = local_70 & 0xff;
    lVar11 = uVar12 << 8;
LAB_00e33914:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
    if (iVar6 == 1) {
      lVar11 = (local_70 & 0xff) << 8;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar6 != 0) goto LAB_00e33954;
    }
    lVar11 = lVar11 + uVar12;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar12 = 0;
    if (iVar6 == 0) {
      lVar11 = 0;
      goto LAB_00e33914;
    }
LAB_00e33954:
    lVar11 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  local_90 = lVar11;
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
  if (iVar6 == 1) {
    uVar18 = local_70 & 0xff;
    lVar17 = uVar18 << 8;
LAB_00e339ac:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
    if (iVar6 == 1) {
      lVar17 = (local_70 & 0xff) << 8;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar6 != 0) goto LAB_00e339ec;
    }
    uVar18 = lVar17 + uVar18;
    local_98 = uVar18;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    uVar18 = 0;
    if (iVar6 == 0) {
      lVar17 = 0;
      goto LAB_00e339ac;
    }
LAB_00e339ec:
    uVar18 = 0;
    iVar3 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
  if (iVar6 == 1) {
    uVar12 = local_70 & 0xff;
    lVar17 = uVar12 << 8;
LAB_00e33a44:
    iVar6 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,&local_70,1);
    if (iVar6 == 1) {
      lVar17 = (local_70 & 0xff) << 8;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar6 != 0) goto LAB_00e33a80;
    }
    uVar12 = lVar17 + uVar12;
    local_a0 = uVar12;
    local_80 = uVar12;
    iVar6 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
    if (iVar6 == 0) goto LAB_00e33ae8;
LAB_00e33aa0:
    uVar21 = 0;
    iVar6 = -1;
    iVar3 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
    if (iVar3 != 0) goto LAB_00e33abc;
LAB_00e33b18:
    local_78 = local_80;
    uVar14 = local_80;
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    if (iVar6 == 0) {
      uVar12 = 0;
      lVar17 = 0;
      goto LAB_00e33a44;
    }
LAB_00e33a80:
    uVar12 = 0;
    iVar3 = -1;
    local_80 = 0;
    iVar6 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
    if (iVar6 != 0) goto LAB_00e33aa0;
LAB_00e33ae8:
    uVar21 = local_80;
    iVar6 = -0x67;
    if ((lVar20 == 0 && lVar11 == 0) && uVar12 == uVar18) {
      iVar6 = iVar3;
    }
    local_70 = local_80;
    iVar3 = FUN_00e33e64(param_1,*(undefined8 *)(param_1 + 0x58),&local_80);
    if (iVar3 == 0) goto LAB_00e33b18;
LAB_00e33abc:
    uVar14 = 0;
    iVar6 = -1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  iVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_a8,1);
  if (iVar3 == 1) {
    uVar19 = (ulong)local_a8[0];
    lVar11 = uVar19 << 8;
LAB_00e33b68:
    iVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),uVar16,local_a8,1);
    if (iVar3 == 1) {
      lVar11 = (ulong)local_a8[0] << 8;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
      if (iVar3 != 0) goto LAB_00e33dcc;
    }
    uVar18 = uVar21 + uVar14;
    if ((uVar18 <= uVar15) && (iVar6 == 0)) {
      lVar11 = lVar11 + uVar19;
      if (lVar11 != 0) {
        pvVar13 = malloc(lVar11 + 1);
        *(void **)(param_1 + 0x10198) = pvVar13;
        if (pvVar13 != (void *)0x0) {
          lVar11 = (**(code **)(param_1 + 8))
                             (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                              pvVar13,lVar11);
          *(undefined *)(*(long *)(param_1 + 0x10198) + lVar11) = 0;
        }
      }
LAB_00e33d3c:
      lVar20 = uVar15 - uVar18;
      *(long *)(param_1 + 0x10188) = lVar20;
      pvVar13 = malloc(0xff0);
      lVar11 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),lVar20 + uVar14,0);
      iVar3 = -(uint)(lVar11 != 0);
      if ((uVar21 != 0) && (lVar11 == 0)) {
        while( true ) {
          uVar15 = uVar21;
          if (0xfef < uVar21) {
            uVar15 = 0xff0;
          }
          uVar18 = (**(code **)(param_1 + 8))
                             (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),
                              pvVar13,uVar15);
          if (uVar18 != uVar15) break;
          iVar3 = FUN_00e342c0(param_1 + 0x60,pvVar13,uVar15);
          uVar21 = uVar21 - uVar15;
          if ((uVar21 == 0) || (iVar3 != 0)) goto LAB_00e33e18;
        }
        iVar3 = -1;
      }
LAB_00e33e18:
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
      }
      *(long *)(param_1 + 0x10180) = lVar20;
      *(ulong *)(param_1 + 0x10190) = uVar12;
      lVar11 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x58),lVar20 + uVar14,0);
      if (lVar11 != 0) {
        iVar3 = -1;
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e33e60;
    }
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),uVar16);
    if (iVar3 == 0) {
      uVar19 = 0;
      lVar11 = 0;
      goto LAB_00e33b68;
    }
  }
LAB_00e33dcc:
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58));
  iVar3 = -1;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00e33e60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


