// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res2_forward
// Entry Point: 00e18024
// Size: 624 bytes
// Signature: undefined res2_forward(void)


undefined8
res2_forward(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
            uint param_6,undefined8 param_7)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x48);
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 + 1;
  }
  local_70 = _vorbis_block_alloc(param_2,(long)(int)param_6 * (long)((int)uVar2 >> 1) * 4);
  if ((int)param_6 < 1) goto LAB_00e1825c;
  uVar15 = (ulong)(int)param_6;
  if ((int)uVar3 < 2) {
    if (param_6 < 8) {
      lVar16 = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = uVar15 & 0xfffffffffffffff8;
      lVar16 = 0;
      lVar11 = 0;
      pauVar17 = (undefined (*) [16])(param_5 + 0x10);
      lVar25 = 0;
      lVar27 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar30 = 0;
      lVar31 = 0;
      uVar18 = uVar19;
      do {
        pauVar1 = pauVar17 + -1;
        auVar33 = *pauVar17;
        pauVar17 = pauVar17 + 2;
        uVar18 = uVar18 - 8;
        auVar32 = NEON_cmtst(*pauVar1,*pauVar1,4);
        auVar33 = NEON_cmtst(auVar33,auVar33,4);
        lVar25 = lVar25 + (ulong)(auVar32[8] & 1);
        lVar27 = lVar27 + (ulong)(auVar32[12] & 1);
        lVar16 = lVar16 + (ulong)(auVar32[0] & 1);
        lVar11 = lVar11 + (ulong)(auVar32[4] & 1);
        lVar30 = lVar30 + (ulong)(auVar33[8] & 1);
        lVar31 = lVar31 + (ulong)(auVar33[12] & 1);
        lVar28 = lVar28 + (ulong)(auVar33[0] & 1);
        lVar29 = lVar29 + (ulong)(auVar33[4] & 1);
      } while (uVar18 != 0);
      lVar16 = lVar28 + lVar16 + lVar30 + lVar25 + lVar29 + lVar11 + lVar31 + lVar27;
      if (uVar19 == uVar15) goto LAB_00e18240;
    }
    lVar11 = uVar15 - uVar19;
    piVar20 = (int *)(param_5 + uVar19 * 4);
    do {
      if (*piVar20 != 0) {
        lVar16 = lVar16 + 1;
      }
      lVar11 = lVar11 + -1;
      piVar20 = piVar20 + 1;
    } while (lVar11 != 0);
  }
  else {
    uVar19 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    lVar16 = 0;
    uVar21 = uVar19 & 0xfffffffffffffff8;
    uVar18 = 0;
    puVar22 = (undefined8 *)(local_70 + 0x10);
    do {
      iVar4 = *(int *)(param_5 + uVar18 * 4);
      uVar7 = *(ulong *)(param_4 + uVar18 * 8);
      if (((uint)((int)uVar2 >> 1) < 8 || param_6 != 1) ||
         ((local_70 + uVar18 * 4 < uVar7 + uVar19 * 4 && (uVar7 < local_70 + (uVar18 + uVar19) * 4))
         )) {
        uVar9 = uVar18;
        uVar13 = 0;
LAB_00e1812c:
        puVar10 = (undefined4 *)(local_70 + uVar9 * 4);
        lVar11 = uVar19 - uVar13;
        puVar8 = (undefined4 *)(uVar7 + uVar13 * 4);
        do {
          lVar11 = lVar11 + -1;
          *puVar10 = *puVar8;
          puVar10 = puVar10 + uVar15;
          puVar8 = puVar8 + 1;
        } while (lVar11 != 0);
      }
      else {
        uVar9 = uVar18 + uVar21 * uVar15;
        puVar12 = (undefined8 *)(uVar7 + 0x10);
        puVar14 = puVar22;
        uVar13 = uVar21;
        do {
          puVar6 = puVar12 + -1;
          uVar23 = puVar12[-2];
          uVar26 = puVar12[1];
          uVar24 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar13 = uVar13 - 8;
          puVar14[-1] = *puVar6;
          puVar14[-2] = uVar23;
          puVar14[1] = uVar26;
          *puVar14 = uVar24;
          puVar14 = puVar14 + uVar15 * 4;
        } while (uVar13 != 0);
        uVar13 = uVar21;
        if (uVar21 != uVar19) goto LAB_00e1812c;
      }
      lVar16 = lVar16 + (ulong)(iVar4 != 0);
      uVar18 = uVar18 + 1;
      puVar22 = (undefined8 *)((long)puVar22 + 4);
    } while (uVar18 != uVar15);
  }
LAB_00e18240:
  if (lVar16 != 0) {
    FUN_00e16ff4(param_1,param_3,&local_70,1,param_7);
  }
LAB_00e1825c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


