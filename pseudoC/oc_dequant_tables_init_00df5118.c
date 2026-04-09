// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_dequant_tables_init
// Entry Point: 00df5118
// Size: 1612 bytes
// Signature: undefined oc_dequant_tables_init(void)


void oc_dequant_tables_init(long param_1,long param_2,long param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined8 *puVar22;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  uVar19 = 0;
  local_70 = *(long *)(lVar9 + 0x28);
  do {
    lVar16 = param_3 + uVar19 * 0x18;
    uVar14 = (ulong)*(uint *)(lVar16 + 0x140);
    if (-1 < (int)*(uint *)(lVar16 + 0x140)) {
      uVar12 = 0;
      iVar13 = 0;
LAB_00df51ec:
      puVar22 = (undefined8 *)(*(long *)(lVar16 + 0x150) + uVar12 * 0x40);
      uStack_a8 = puVar22[1];
      local_b0 = *puVar22;
      uVar10 = local_b0;
      uStack_98 = puVar22[3];
      uStack_a0 = puVar22[2];
      uStack_88 = puVar22[5];
      local_90 = puVar22[4];
      uStack_78 = puVar22[7];
      uStack_80 = puVar22[6];
      if (uVar12 == (uVar14 & 0xffffffff)) {
        iVar15 = iVar13 + 1;
      }
      else {
        iVar15 = *(int *)(*(long *)(lVar16 + 0x148) + uVar12 * 4) + iVar13;
      }
      lVar20 = (long)iVar13;
      iVar5 = iVar15;
      if (iVar15 <= iVar13 + 1) {
        iVar5 = iVar13 + 1;
      }
      local_b0._0_1_ = (byte)*puVar22;
      uVar7 = (uint)(byte)local_b0 * (uint)*(ushort *)(param_3 + lVar20 * 2);
      local_b0 = uVar10;
      do {
        if (param_2 != 0) {
          *(uint *)(param_2 + lVar20 * 4) = uVar7 / 0xa0;
        }
        uVar3 = uVar7 / 0x19 & 0xffffc;
        puVar22 = (undefined8 *)(param_1 + lVar20 * 0x30 + uVar19 * 0x10);
        if (uVar3 < 0x11) {
          uVar3 = 0x10;
        }
        uVar4 = 0x1000;
        if (uVar7 < 0x19064) {
          uVar4 = (short)uVar3;
        }
        puVar21 = (undefined2 *)*puVar22;
        lVar17 = 1;
        *puVar21 = uVar4;
        do {
          uVar3 = (uint)*(byte *)((long)&local_b0 + (ulong)(byte)OC_FZIG_ZAG[lVar17]) *
                  (uint)*(ushort *)(param_3 + lVar20 * 2 + 0x80);
          uVar7 = uVar3 / 0x19 & 0xffffc;
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          uVar4 = 0x1000;
          if (uVar3 < 0x19064) {
            uVar4 = (short)uVar7;
          }
          puVar21[lVar17] = uVar4;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x40);
        if ((int)uVar19 != 0) {
          iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30),0x80);
          if (iVar11 == 0) {
            lVar17 = 0;
          }
          else {
            if (((uVar19 & 0xffffffff) == 1) ||
               (iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30 + 0x10),0x80),
               iVar11 != 0)) goto LAB_00df5394;
            lVar17 = 1;
          }
          *puVar22 = *(undefined8 *)(param_1 + lVar20 * 0x30 + lVar17 * 0x10);
        }
LAB_00df5394:
        lVar20 = lVar20 + 1;
        if (iVar15 <= lVar20) goto LAB_00df51cc;
        lVar17 = 0;
        lVar18 = *(long *)(lVar16 + 0x150);
        iVar11 = *(int *)(*(long *)(lVar16 + 0x148) + uVar12 * 4);
        iVar6 = iVar11 << 1;
        do {
          pbVar2 = (byte *)(lVar18 + uVar12 * 0x40 + lVar17);
          uVar8 = 0;
          if (iVar6 != 0) {
            uVar8 = (undefined)
                    ((int)(iVar11 + ((iVar15 - (int)lVar20) * (uint)*pbVar2 +
                                    ((int)lVar20 - iVar13) * (uint)pbVar2[0x40]) * 2) / iVar6);
          }
          *(undefined *)((long)&local_b0 + lVar17) = uVar8;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x40);
        uVar7 = (uint)(byte)local_b0 * (uint)*(ushort *)(param_3 + lVar20 * 2);
      } while( true );
    }
LAB_00df5188:
    uVar19 = uVar19 + 1;
  } while (uVar19 != 3);
  uVar19 = 0;
  while( true ) {
    lVar16 = param_3 + uVar19 * 0x18;
    uVar14 = (ulong)*(uint *)(lVar16 + 0x188);
    if (-1 < (int)*(uint *)(lVar16 + 0x188)) break;
LAB_00df542c:
    uVar19 = uVar19 + 1;
    if (uVar19 == 3) {
      if (*(long *)(lVar9 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  uVar12 = 0;
  iVar13 = 0;
LAB_00df5494:
  puVar22 = (undefined8 *)(*(long *)(lVar16 + 0x198) + uVar12 * 0x40);
  uStack_a8 = puVar22[1];
  local_b0 = *puVar22;
  uVar10 = local_b0;
  uStack_98 = puVar22[3];
  uStack_a0 = puVar22[2];
  uStack_88 = puVar22[5];
  local_90 = puVar22[4];
  uStack_78 = puVar22[7];
  uStack_80 = puVar22[6];
  if (uVar12 == (uVar14 & 0xffffffff)) {
    iVar15 = iVar13 + 1;
  }
  else {
    iVar15 = *(int *)(*(long *)(lVar16 + 400) + uVar12 * 4) + iVar13;
  }
  lVar20 = (long)iVar13;
  iVar5 = iVar15;
  if (iVar15 <= iVar13 + 1) {
    iVar5 = iVar13 + 1;
  }
  local_b0._0_1_ = (byte)*puVar22;
  uVar7 = (uint)(byte)local_b0 * (uint)*(ushort *)(param_3 + lVar20 * 2);
  local_b0 = uVar10;
  do {
    if (param_2 != 0) {
      *(uint *)(param_2 + lVar20 * 4) = uVar7 / 0xa0;
    }
    uVar3 = uVar7 / 0x19 & 0xffffc;
    if (uVar3 < 0x21) {
      uVar3 = 0x20;
    }
    uVar4 = 0x1000;
    if (uVar7 < 0x19064) {
      uVar4 = (short)uVar3;
    }
    puVar22 = (undefined8 *)(param_1 + lVar20 * 0x30 + uVar19 * 0x10 + 8);
    puVar21 = (undefined2 *)*puVar22;
    lVar17 = 1;
    *puVar21 = uVar4;
    do {
      uVar3 = (uint)*(byte *)((long)&local_b0 + (ulong)(byte)OC_FZIG_ZAG[lVar17]) *
              (uint)*(ushort *)(param_3 + lVar20 * 2 + 0x80);
      uVar7 = uVar3 / 0x19 & 0xffffc;
      if (uVar7 < 0x11) {
        uVar7 = 0x10;
      }
      uVar4 = 0x1000;
      if (uVar3 < 0x19064) {
        uVar4 = (short)uVar7;
      }
      puVar21[lVar17] = uVar4;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x40);
    iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30),0x80);
    if (iVar11 == 0) {
      lVar17 = 0;
LAB_00df5680:
      lVar18 = 0;
LAB_00df568c:
      *puVar22 = *(undefined8 *)(param_1 + lVar20 * 0x30 + lVar17 * 0x10 + lVar18 * 8);
    }
    else {
      iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30 + 0x10),0x80);
      if (iVar11 == 0) {
        lVar17 = 1;
        goto LAB_00df5680;
      }
      iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30 + 0x20),0x80);
      if (iVar11 == 0) {
        lVar17 = 2;
        goto LAB_00df5680;
      }
      if ((int)uVar19 != 0) {
        iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30 + 8),0x80);
        if (iVar11 == 0) {
          lVar17 = 0;
          lVar18 = 1;
        }
        else {
          if (((uVar19 & 0xffffffff) == 1) ||
             (iVar11 = memcmp(puVar21,*(void **)(param_1 + lVar20 * 0x30 + 0x18),0x80), iVar11 != 0)
             ) goto LAB_00df569c;
          lVar18 = 1;
          lVar17 = 1;
        }
        goto LAB_00df568c;
      }
    }
LAB_00df569c:
    lVar20 = lVar20 + 1;
    if (iVar15 <= lVar20) goto LAB_00df5474;
    lVar17 = 0;
    iVar11 = *(int *)(*(long *)(lVar16 + 400) + uVar12 * 4);
    lVar18 = *(long *)(lVar16 + 0x198);
    iVar6 = iVar11 << 1;
    do {
      pbVar2 = (byte *)(lVar18 + uVar12 * 0x40 + lVar17);
      uVar8 = 0;
      if (iVar6 != 0) {
        uVar8 = (undefined)
                ((int)(iVar11 + ((iVar15 - (int)lVar20) * (uint)*pbVar2 +
                                ((int)lVar20 - iVar13) * (uint)pbVar2[0x40]) * 2) / iVar6);
      }
      *(undefined *)((long)&local_b0 + lVar17) = uVar8;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x40);
    uVar7 = (uint)(byte)local_b0 * (uint)*(ushort *)(param_3 + lVar20 * 2);
  } while( true );
LAB_00df51cc:
  uVar14 = (ulong)*(int *)(lVar16 + 0x140);
  bVar1 = (long)uVar14 <= (long)uVar12;
  uVar12 = uVar12 + 1;
  iVar13 = iVar5;
  if (bVar1) goto LAB_00df5188;
  goto LAB_00df51ec;
LAB_00df5474:
  uVar14 = (ulong)*(int *)(lVar16 + 0x188);
  bVar1 = (long)uVar14 <= (long)uVar12;
  uVar12 = uVar12 + 1;
  iVar13 = iVar5;
  if (bVar1) goto LAB_00df542c;
  goto LAB_00df5494;
}


