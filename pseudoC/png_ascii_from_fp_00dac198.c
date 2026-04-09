// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_ascii_from_fp
// Entry Point: 00dac198
// Size: 1648 bytes
// Signature: undefined png_ascii_from_fp(void)


/* WARNING: Removing unreachable block (ram,0x00dac3d4) */

void png_ascii_from_fp(double param_1,undefined8 param_2,undefined4 *param_3,ulong param_4,
                      uint param_5)

{
  int iVar1;
  byte bVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  long lVar7;
  bool bVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_a0;
  undefined4 local_98;
  undefined2 local_94 [6];
  long local_88;
  
  lVar7 = tpidr_el0;
  uVar13 = 0xf;
  if (param_5 != 0) {
    uVar13 = param_5;
  }
  local_88 = *(long *)(lVar7 + 0x28);
  if (0xf < uVar13) {
    uVar13 = 0x10;
  }
  if (param_4 < uVar13 + 5) goto LAB_00dac7f4;
  puVar17 = param_3;
  if (param_1 < 0.0) {
    param_1 = -param_1;
    param_4 = param_4 - 1;
    puVar17 = (undefined4 *)((long)param_3 + 1);
    *(undefined *)param_3 = 0x2d;
  }
  if ((param_1 < 2.225073858507201e-308) || (1.797693134862316e+308 < param_1)) {
    if (param_1 < 2.225073858507201e-308) {
      *(undefined2 *)puVar17 = 0x30;
    }
    else {
      *puVar17 = 0x666e69;
    }
    goto LAB_00dac760;
  }
  frexp(param_1,&local_98);
  uVar22 = local_98;
  uVar14 = local_98 * 0x4d;
  uVar21 = (int)uVar14 >> 8;
  local_98 = uVar21;
  if ((int)uVar22 < 0) {
    dVar24 = 0.0;
    if (0xfffeccff < uVar14) {
      uVar21 = -uVar21;
      goto LAB_00dac2c8;
    }
LAB_00dac324:
    do {
      uVar21 = local_98 + 1;
      if (local_98 == 0xfffffffe || (int)(local_98 + 2) < 0 != SCARRY4(local_98,2)) {
        dVar26 = 0.0;
        if (0xfffffecc < uVar21) {
          uVar14 = ~local_98;
LAB_00dac34c:
          dVar26 = 10.0;
          dVar25 = 1.0;
          do {
            dVar27 = 1.0;
            if ((uVar14 & 1) != 0) {
              dVar27 = dVar26;
            }
            dVar26 = dVar26 * dVar26;
            dVar25 = dVar25 * dVar27;
            bVar8 = 1 < (int)uVar14;
            uVar14 = (int)uVar14 >> 1;
          } while (bVar8);
          dVar26 = 1.0 / dVar25;
          if ((int)(local_98 + 1) < 0 == SCARRY4(local_98,1)) {
            dVar26 = dVar25;
          }
          if (1.797693134862316e+308 < dVar26) break;
        }
        dVar24 = dVar26;
        local_98 = uVar21;
        if (dVar24 < 2.225073858507201e-308) goto LAB_00dac324;
      }
      else {
        uVar14 = uVar21;
        if (uVar21 != 0) goto LAB_00dac34c;
        dVar24 = 1.0;
        local_98 = uVar21;
      }
      local_98 = uVar21;
    } while (dVar24 < param_1);
  }
  else {
    dVar24 = 1.0;
    if (uVar14 < 0x100) {
      if (1.0 < param_1) goto LAB_00dac324;
    }
    else {
LAB_00dac2c8:
      dVar24 = 10.0;
      dVar26 = 1.0;
      do {
        dVar25 = 1.0;
        if ((uVar21 & 1) != 0) {
          dVar25 = dVar24;
        }
        dVar24 = dVar24 * dVar24;
        dVar26 = dVar26 * dVar25;
        bVar8 = 1 < (int)uVar21;
        uVar21 = (int)uVar21 >> 1;
      } while (bVar8);
      dVar24 = 1.0 / dVar26;
      if (-1 < (int)uVar22) {
        dVar24 = dVar26;
      }
      if (dVar24 < 2.225073858507201e-308 || dVar24 < param_1) goto LAB_00dac324;
    }
  }
  param_1 = param_1 / dVar24;
  if (1.0 <= param_1) {
    do {
      param_1 = param_1 / 10.0;
      local_98 = local_98 + 1;
    } while (1.0 <= param_1);
  }
  if (local_98 < 0xfffffffe) {
    iVar19 = 0;
  }
  else {
    iVar19 = -local_98;
    local_98 = 0;
  }
  uVar21 = 0;
  iVar23 = iVar19;
  do {
    iVar1 = iVar19 + 1;
    if (iVar1 + uVar21 < iVar23 + uVar13) {
      param_1 = modf(param_1 * 10.0,&local_a0);
LAB_00dac534:
      iVar20 = iVar19;
      if (local_a0 != 0.0) {
joined_r0x00dac55c:
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          puVar18 = puVar17;
          if (local_98 != 0xffffffff) {
            if (local_98 == 0) {
              puVar18 = (undefined4 *)((long)puVar17 + 1);
              *(undefined *)puVar17 = 0x2e;
              param_4 = param_4 - 1;
            }
            local_98 = local_98 - 1;
          }
          puVar17 = (undefined4 *)((long)puVar18 + 1);
          *(undefined *)puVar18 = 0x30;
        }
        goto LAB_00dac5c4;
      }
      if (uVar21 == 0) {
        iVar23 = iVar23 + 1;
      }
      iVar19 = iVar1;
      if (iVar23 + uVar13 <= uVar21 + iVar1) break;
    }
    else {
      local_a0 = (double)(long)(param_1 * 10.0 + 0.5);
      param_1 = 0.0;
      if (local_a0 <= 9.0) goto LAB_00dac534;
      if (iVar19 != 0) {
        param_1 = 0.0;
        iVar19 = iVar19 + -1;
        iVar23 = iVar23 - (uint)(uVar21 == 0);
        local_a0 = 1.0;
        iVar20 = iVar19;
        goto joined_r0x00dac55c;
      }
      uVar14 = local_98;
      if (uVar21 != 0) {
        do {
          uVar22 = uVar21;
          puVar18 = (undefined4 *)((long)puVar17 + -1);
          bVar2 = *(byte *)puVar18;
          if (uVar14 == 0xffffffff) {
            uVar11 = (uint)bVar2;
            if (uVar11 == 0x2e) {
              puVar18 = (undefined4 *)((long)puVar17 + -2);
              bVar2 = *(byte *)puVar18;
              uVar14 = 1;
              param_4 = param_4 + 1;
              goto LAB_00dac4d8;
            }
            uVar14 = 0xffffffff;
            puVar17 = puVar18;
          }
          else {
            uVar14 = uVar14 + 1;
LAB_00dac4d8:
            uVar11 = (uint)bVar2;
            local_98 = uVar14;
            puVar17 = puVar18;
          }
          local_a0 = (double)(uVar11 - 0x2f);
        } while ((uVar22 != 1) && (uVar21 = uVar22 - 1, 0x38 < uVar11));
        uVar21 = uVar22 - 1;
        if (uVar11 < 0x39) goto LAB_00dac534;
      }
      if (local_98 == 0xffffffff) {
        puVar17 = (undefined4 *)((long)puVar17 + -1);
        if (*(char *)puVar17 == '.') {
          param_4 = param_4 + 1;
          local_98 = 1;
          goto LAB_00dac5b0;
        }
      }
      else {
        local_98 = local_98 + 1;
LAB_00dac5b0:
      }
      param_1 = 0.0;
      iVar20 = 0;
      local_a0 = 1.0;
LAB_00dac5c4:
      puVar18 = puVar17;
      if (local_98 != 0xffffffff) {
        if (local_98 == 0) {
          puVar18 = (undefined4 *)((long)puVar17 + 1);
          *(undefined *)puVar17 = 0x2e;
          param_4 = param_4 - 1;
        }
        local_98 = local_98 - 1;
      }
      iVar19 = 0;
      uVar21 = (uVar21 - iVar23) + iVar20 + 1;
      iVar23 = 0;
      puVar17 = (undefined4 *)((long)puVar18 + 1);
      *(char *)puVar18 = (char)(int)local_a0 + '0';
      if (uVar13 <= uVar21) break;
    }
  } while (2.225073858507201e-308 < param_1);
  if (local_98 + 1 < 4) {
    uVar13 = local_98 - 1;
    bVar8 = (int)local_98 < 1;
    local_98 = uVar13;
    if (bVar8) {
      *(undefined *)puVar17 = 0;
    }
    else {
      do {
        puVar18 = (undefined4 *)((long)puVar17 + 1);
        *(undefined *)puVar17 = 0x30;
        uVar13 = local_98 - 1;
        bVar8 = 0 < (int)local_98;
        puVar17 = puVar18;
        local_98 = uVar13;
      } while (bVar8);
      *(undefined *)puVar18 = 0;
    }
    goto LAB_00dac760;
  }
  puVar9 = (undefined2 *)((long)puVar17 + 1);
  *(undefined *)puVar17 = 0x45;
  param_4 = param_4 + ~(ulong)uVar21;
  if ((int)local_98 < 0) {
    param_4 = param_4 - 1;
    *(undefined *)((long)puVar17 + 1) = 0x2d;
    puVar9 = (undefined2 *)((long)puVar17 + 2);
    uVar13 = -local_98;
    puVar10 = puVar9;
    if (uVar13 != 0) goto LAB_00dac694;
LAB_00dac758:
    if (param_4 == 0) {
LAB_00dac7f4:
                    /* WARNING: Subroutine does not return */
      png_error(param_2,"ASCII conversion buffer too small");
    }
  }
  else {
    puVar10 = puVar9;
    uVar13 = local_98;
    if (local_98 == 0) goto LAB_00dac758;
LAB_00dac694:
    uVar16 = 0;
    do {
      uVar21 = (int)uVar16 + 1;
      uVar12 = (ulong)uVar21;
      *(byte *)((long)local_94 + uVar16) = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
      bVar8 = 9 < uVar13;
      uVar16 = uVar12;
      uVar13 = uVar13 / 10;
    } while (bVar8);
    if (param_4 <= uVar12) goto LAB_00dac7f4;
    puVar9 = puVar10;
    if (uVar21 != 0) {
      if ((3 < uVar21) &&
         (((undefined2 *)((long)local_94 + uVar12) <= puVar10 ||
          ((undefined2 *)((long)puVar10 + uVar12) <= local_94)))) {
        puVar9 = (undefined2 *)((long)puVar10 + (uVar12 & 0xfffffffc));
        puVar15 = (undefined *)((long)local_94 + (uVar12 - 2));
        uVar16 = uVar12 & 0xfffffffc;
        puVar10 = puVar10 + 1;
        do {
          uVar3 = *puVar15;
          uVar16 = uVar16 - 4;
          uVar4 = puVar15[1];
          uVar5 = puVar15[-2];
          uVar6 = puVar15[-1];
          puVar15 = puVar15 + -4;
          *(undefined *)((long)puVar10 + -1) = uVar3;
          *(undefined *)(puVar10 + -1) = uVar4;
          *(undefined *)((long)puVar10 + 1) = uVar5;
          *(undefined *)puVar10 = uVar6;
          puVar10 = puVar10 + 2;
        } while (uVar16 != 0);
        bVar8 = (uVar12 & 0xfffffffc) == uVar12;
        puVar10 = puVar9;
        uVar12 = uVar12 & 3;
        if (bVar8) goto LAB_00dac75c;
      }
      do {
        uVar16 = uVar12 - 1;
        puVar9 = (undefined2 *)((long)puVar10 + 1);
        *(undefined *)puVar10 = *(undefined *)((long)local_94 + (uVar12 - 1));
        puVar10 = puVar9;
        uVar12 = uVar16;
      } while (uVar16 != 0);
    }
  }
LAB_00dac75c:
  *(undefined *)puVar9 = 0;
LAB_00dac760:
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


