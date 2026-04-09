// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_parameters
// Entry Point: 00e67aec
// Size: 748 bytes
// Signature: undefined silk_decode_parameters(void)


void silk_decode_parameters(long param_1,void *param_2,int param_3)

{
  void *__src;
  void *__dest;
  char *pcVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  short *psVar11;
  char *pcVar12;
  undefined8 *puVar13;
  short *psVar14;
  undefined2 *puVar15;
  long *plVar16;
  long lVar17;
  short *psVar18;
  ulong uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar27;
  short sVar28;
  undefined8 uVar26;
  short sVar29;
  undefined8 uVar30;
  short sVar32;
  short sVar33;
  undefined8 uVar31;
  short sVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 local_88 [4];
  long local_68 [5];
  
  lVar4 = tpidr_el0;
  local_68[4] = *(long *)(lVar4 + 0x28);
  silk_gains_dequant((long)param_2 + 0x10,param_1 + 0xac8,param_1 + 0x908,param_3 == 2,
                     *(undefined4 *)(param_1 + 0x914));
  silk_NLSF_decode(local_68,param_1 + 0xad0,*(undefined8 *)(param_1 + 0xac0));
  __src = (void *)((long)param_2 + 0x40);
  __dest = (void *)((long)param_2 + 0x20);
  silk_NLSF2A(__src,local_68,*(undefined4 *)(param_1 + 0x924),*(undefined4 *)(param_1 + 0x1060));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined *)(param_1 + 0xae7) = 4;
  }
  else {
    cVar3 = *(char *)(param_1 + 0xae7);
    if (cVar3 < '\x04') {
      uVar2 = *(uint *)(param_1 + 0x924);
      uVar6 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        if (uVar2 < 0x10) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar6 & 0xfffffff0;
          puVar10 = (undefined8 *)(param_1 + 0x938);
          puVar13 = local_88 + 2;
          plVar16 = local_68 + 2;
          iVar5 = (int)cVar3;
          uVar19 = uVar7;
          do {
            uVar30 = puVar10[-1];
            uVar26 = puVar10[-2];
            uVar35 = puVar10[1];
            uVar31 = *puVar10;
            uVar19 = uVar19 - 0x10;
            puVar10 = puVar10 + 4;
            lVar17 = plVar16[-1];
            lVar8 = plVar16[-2];
            lVar37 = plVar16[1];
            lVar36 = *plVar16;
            plVar16 = plVar16 + 4;
            sVar27 = (short)((ulong)uVar26 >> 0x10);
            sVar28 = (short)((ulong)uVar26 >> 0x20);
            sVar29 = (short)((ulong)uVar26 >> 0x30);
            sVar20 = (short)((ulong)uVar30 >> 0x10);
            sVar22 = (short)((ulong)uVar30 >> 0x20);
            sVar24 = (short)((ulong)uVar30 >> 0x30);
            sVar32 = (short)((ulong)uVar31 >> 0x10);
            sVar33 = (short)((ulong)uVar31 >> 0x20);
            sVar34 = (short)((ulong)uVar31 >> 0x30);
            sVar21 = (short)((ulong)uVar35 >> 0x10);
            sVar23 = (short)((ulong)uVar35 >> 0x20);
            sVar25 = (short)((ulong)uVar35 >> 0x30);
            puVar13[-1] = CONCAT26(sVar24 + (short)((uint)(((int)(short)((ulong)lVar17 >> 0x30) -
                                                           (int)sVar24) * iVar5) >> 2),
                                   CONCAT24(sVar22 + (short)((uint)(((int)(short)((ulong)lVar17 >>
                                                                                 0x20) - (int)sVar22
                                                                    ) * iVar5) >> 2),
                                            CONCAT22(sVar20 + (short)((uint)(((int)(short)((ulong)
                                                  lVar17 >> 0x10) - (int)sVar20) * iVar5) >> 2),
                                                  (short)uVar30 +
                                                  (short)((uint)(((int)(short)lVar17 -
                                                                 (int)(short)uVar30) * iVar5) >> 2))
                                           ));
            puVar13[-2] = CONCAT26(sVar29 + (short)((uint)(((int)(short)((ulong)lVar8 >> 0x30) -
                                                           (int)sVar29) * iVar5) >> 2),
                                   CONCAT24(sVar28 + (short)((uint)(((int)(short)((ulong)lVar8 >>
                                                                                 0x20) - (int)sVar28
                                                                    ) * iVar5) >> 2),
                                            CONCAT22(sVar27 + (short)((uint)(((int)(short)((ulong)
                                                  lVar8 >> 0x10) - (int)sVar27) * iVar5) >> 2),
                                                  (short)uVar26 +
                                                  (short)((uint)(((int)(short)lVar8 -
                                                                 (int)(short)uVar26) * iVar5) >> 2))
                                           ));
            puVar13[1] = CONCAT26(sVar25 + (short)((uint)(((int)(short)((ulong)lVar37 >> 0x30) -
                                                          (int)sVar25) * iVar5) >> 2),
                                  CONCAT24(sVar23 + (short)((uint)(((int)(short)((ulong)lVar37 >>
                                                                                0x20) - (int)sVar23)
                                                                  * iVar5) >> 2),
                                           CONCAT22(sVar21 + (short)((uint)(((int)(short)((ulong)
                                                  lVar37 >> 0x10) - (int)sVar21) * iVar5) >> 2),
                                                  (short)uVar35 +
                                                  (short)((uint)(((int)(short)lVar37 -
                                                                 (int)(short)uVar35) * iVar5) >> 2))
                                          ));
            *puVar13 = CONCAT26(sVar34 + (short)((uint)(((int)(short)((ulong)lVar36 >> 0x30) -
                                                        (int)sVar34) * iVar5) >> 2),
                                CONCAT24(sVar33 + (short)((uint)(((int)(short)((ulong)lVar36 >> 0x20
                                                                              ) - (int)sVar33) *
                                                                iVar5) >> 2),
                                         CONCAT22(sVar32 + (short)((uint)(((int)(short)((ulong)
                                                  lVar36 >> 0x10) - (int)sVar32) * iVar5) >> 2),
                                                  (short)uVar31 +
                                                  (short)((uint)(((int)(short)lVar36 -
                                                                 (int)(short)uVar31) * iVar5) >> 2))
                                        ));
            puVar13 = puVar13 + 4;
          } while (uVar19 != 0);
          if (uVar7 == uVar6) goto LAB_00e67c7c;
        }
        lVar17 = uVar7 * 2;
        lVar8 = uVar6 - uVar7;
        psVar11 = (short *)((long)local_88 + lVar17);
        psVar14 = (short *)((long)local_68 + lVar17);
        psVar18 = (short *)(lVar17 + param_1 + 0x928);
        do {
          lVar8 = lVar8 + -1;
          *psVar11 = *psVar18 + (short)((uint)(((int)*psVar14 - (int)*psVar18) * (int)cVar3) >> 2);
          psVar11 = psVar11 + 1;
          psVar14 = psVar14 + 1;
          psVar18 = psVar18 + 1;
        } while (lVar8 != 0);
      }
LAB_00e67c7c:
      silk_NLSF2A(__dest,local_88,uVar6,*(undefined4 *)(param_1 + 0x1060));
      goto LAB_00e67c8c;
    }
  }
  memcpy(__dest,__src,(long)*(int *)(param_1 + 0x924) << 1);
LAB_00e67c8c:
  memcpy((void *)(param_1 + 0x928),local_68,(long)*(int *)(param_1 + 0x924) << 1);
  if (*(int *)(param_1 + 0x1058) != 0) {
    silk_bwexpander(__dest,*(undefined4 *)(param_1 + 0x924),0xf852);
    silk_bwexpander(__src,*(undefined4 *)(param_1 + 0x924),0xf852);
  }
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    silk_decode_pitch(*(undefined2 *)(param_1 + 0xae2),*(undefined *)(param_1 + 0xae4),param_2,
                      *(undefined4 *)(param_1 + 0x90c),*(undefined4 *)(param_1 + 0x914));
    uVar6 = (ulong)*(uint *)(param_1 + 0x914);
    if (0 < (int)*(uint *)(param_1 + 0x914)) {
      puVar9 = (&silk_LTP_vq_ptrs_Q7)[*(char *)(param_1 + 0xae8)];
      pcVar12 = (char *)(param_1 + 0xacc);
      puVar15 = (undefined2 *)((long)param_2 + 0x68);
      do {
        uVar6 = uVar6 - 1;
        pcVar1 = puVar9 + (long)*pcVar12 * 5;
        puVar15[-4] = (short)((int)*pcVar1 << 7);
        puVar15[-3] = (short)((int)pcVar1[1] << 7);
        puVar15[-2] = (short)((int)pcVar1[2] << 7);
        puVar15[-1] = (short)((int)pcVar1[3] << 7);
        *puVar15 = (short)((int)pcVar1[4] << 7);
        pcVar12 = pcVar12 + 1;
        puVar15 = puVar15 + 5;
      } while (uVar6 != 0);
    }
    iVar5 = (int)(short)(&silk_LTPScales_table_Q14)[*(char *)(param_1 + 0xae9)];
  }
  else {
    memset(param_2,0,(long)*(int *)(param_1 + 0x914) << 2);
    memset((void *)((long)param_2 + 0x60),0,(long)*(int *)(param_1 + 0x914) * 10);
    iVar5 = 0;
    *(undefined *)(param_1 + 0xae8) = 0;
  }
  *(int *)((long)param_2 + 0x88) = iVar5;
  if (*(long *)(lVar4 + 0x28) == local_68[4]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


