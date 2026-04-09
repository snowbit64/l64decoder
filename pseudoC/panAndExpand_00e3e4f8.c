// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: panAndExpand
// Entry Point: 00e3e4f8
// Size: 884 bytes
// Signature: undefined __thiscall panAndExpand(Soloud * this, AudioSourceInstance * param_1, float * param_2, uint param_3, uint param_4, AlignedFloatBuffer * param_5, uint param_6, bool param_7)


/* SoLoud::Soloud::panAndExpand(SoLoud::AudioSourceInstance*, float*, unsigned int, unsigned int,
   SoLoud::AlignedFloatBuffer&, unsigned int, bool) */

void __thiscall
SoLoud::Soloud::panAndExpand
          (Soloud *this,AudioSourceInstance *param_1,float *param_2,uint param_3,uint param_4,
          AlignedFloatBuffer *param_5,uint param_6,bool param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  uint uVar13;
  AudioSourceInstance *pAVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 local_a8 [4];
  float local_88 [8];
  long local_68;
  
  uVar17 = (ulong)param_6;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x4c);
  pfVar18 = *(float **)(this + (ulong)(uVar3 - 1) * 8 + (ulong)(param_6 - 1) * 0x40 + 0x2198);
  if (pfVar18 == (float *)0x0) goto LAB_00e3e838;
  fVar28 = (float)(ulong)param_3;
  if (param_6 != 0) {
    memcpy(local_88,param_1 + 0x15c,uVar17 << 2);
    if (param_6 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar17 & 0xfffffff8;
      puVar11 = local_a8 + 2;
      uVar15 = uVar9;
      pAVar14 = param_1;
      do {
        puVar5 = (undefined8 *)(pAVar14 + 0x24);
        uVar20 = *(undefined8 *)(pAVar14 + 0x1c);
        uVar15 = uVar15 - 8;
        puVar6 = (undefined8 *)(pAVar14 + 0x164);
        uVar22 = *(undefined8 *)(pAVar14 + 0x15c);
        uVar24 = *(undefined8 *)(pAVar14 + 0x34);
        uVar23 = *(undefined8 *)(pAVar14 + 0x2c);
        uVar27 = *(undefined8 *)(pAVar14 + 0x174);
        uVar26 = *(undefined8 *)(pAVar14 + 0x16c);
        pAVar14 = pAVar14 + 0x20;
        puVar11[-1] = CONCAT44(((float)((ulong)*puVar5 >> 0x20) - (float)((ulong)*puVar6 >> 0x20)) /
                               fVar28,((float)*puVar5 - (float)*puVar6) / fVar28);
        puVar11[-2] = CONCAT44(((float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar22 >> 0x20)) /
                               fVar28,((float)uVar20 - (float)uVar22) / fVar28);
        puVar11[1] = CONCAT44(((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar27 >> 0x20)) /
                              fVar28,((float)uVar24 - (float)uVar27) / fVar28);
        *puVar11 = CONCAT44(((float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar26 >> 0x20)) /
                            fVar28,((float)uVar23 - (float)uVar26) / fVar28);
        puVar11 = puVar11 + 4;
      } while (uVar15 != 0);
      if (uVar9 == uVar17) goto LAB_00e3e64c;
    }
    pAVar14 = param_1 + uVar9 * 4;
    lVar10 = uVar17 - uVar9;
    pfVar12 = (float *)((long)local_a8 + uVar9 * 4);
    do {
      pfVar1 = (float *)(pAVar14 + 0x15c);
      lVar10 = lVar10 + -1;
      pfVar2 = (float *)(pAVar14 + 0x1c);
      pAVar14 = pAVar14 + 4;
      *pfVar12 = (*pfVar2 - *pfVar1) / fVar28;
      pfVar12 = pfVar12 + 1;
    } while (lVar10 != 0);
  }
LAB_00e3e64c:
  fVar19 = *(float *)(param_1 + 0x17c);
  fVar28 = (*(float *)(param_1 + 0x40) - fVar19) / fVar28;
  if ((fVar19 != 0.0) || (fVar28 != 0.0)) {
    if ((param_6 != 0) && ((param_3 != 0 && (uVar3 != 0)))) {
      uVar13 = 0;
      uVar15 = 0;
      lVar10 = *(long *)param_5;
      do {
        fVar21 = local_88[uVar15];
        fVar25 = *(float *)((long)local_a8 + uVar15 * 4);
        if ((fVar21 != 0.0) || (fVar25 != 0.0)) {
          uVar7 = 0;
          lVar16 = lVar10;
          pfVar12 = pfVar18;
          do {
            fVar30 = *pfVar12;
            if (fVar30 != 0.0) {
              fVar29 = fVar21 * fVar30;
              lVar8 = 0;
              fVar31 = fVar19;
              do {
                fVar32 = fVar31 * *(float *)(lVar16 + lVar8);
                fVar31 = fVar28 + fVar31;
                uVar33 = NEON_fmadd(fVar32,fVar29,
                                    *(undefined4 *)((long)param_2 + lVar8 + (ulong)uVar13 * 4));
                fVar29 = fVar25 * fVar30 + fVar29;
                *(undefined4 *)((long)param_2 + lVar8 + (ulong)uVar13 * 4) = uVar33;
                lVar8 = lVar8 + 4;
              } while ((ulong)param_3 * 4 - lVar8 != 0);
            }
            uVar7 = uVar7 + 1;
            lVar16 = lVar16 + (ulong)param_4 * 4;
            pfVar12 = pfVar12 + 1;
          } while (uVar7 != uVar3);
        }
        pfVar18 = pfVar18 + uVar3;
        uVar15 = uVar15 + 1;
        uVar13 = uVar13 + param_4;
      } while (uVar15 != uVar17);
    }
    if (((param_7) && (param_3 != 0)) && (uVar3 != 0)) {
      uVar13 = 0;
      lVar10 = *(long *)param_5;
      pfVar18 = *(float **)(this + (ulong)(uVar3 - 1) * 8 + 0x2198);
      do {
        fVar21 = *pfVar18;
        if (fVar21 != 0.0) {
          fVar30 = fVar21 * 0.0;
          lVar16 = 0;
          fVar25 = fVar19;
          do {
            fVar31 = fVar25 * *(float *)(lVar10 + lVar16);
            fVar25 = fVar28 + fVar25;
            uVar33 = NEON_fmadd(fVar31,fVar21,
                                *(undefined4 *)
                                 ((long)param_2 + lVar16 + (ulong)(param_6 * param_4) * 4));
            fVar21 = fVar30 + fVar21;
            *(undefined4 *)((long)param_2 + lVar16 + (ulong)(param_6 * param_4) * 4) = uVar33;
            lVar16 = lVar16 + 4;
          } while ((ulong)param_3 * 4 - lVar16 != 0);
        }
        uVar13 = uVar13 + 1;
        lVar10 = lVar10 + (ulong)param_4 * 4;
        pfVar18 = pfVar18 + 1;
      } while (uVar13 != uVar3);
    }
  }
  if (param_6 != 0) {
    if (param_6 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar17 & 0xfffffffc;
      uVar15 = uVar9;
      pAVar14 = param_1;
      do {
        uVar15 = uVar15 - 4;
        *(undefined8 *)(pAVar14 + 0x164) = *(undefined8 *)(pAVar14 + 0x24);
        *(undefined8 *)(pAVar14 + 0x15c) = *(undefined8 *)(pAVar14 + 0x1c);
        pAVar14 = pAVar14 + 0x10;
      } while (uVar15 != 0);
      if (uVar9 == uVar17) goto LAB_00e3e830;
    }
    pAVar14 = param_1 + uVar9 * 4;
    lVar10 = uVar17 - uVar9;
    do {
      lVar10 = lVar10 + -1;
      *(undefined4 *)(pAVar14 + 0x15c) = *(undefined4 *)(pAVar14 + 0x1c);
      pAVar14 = pAVar14 + 4;
    } while (lVar10 != 0);
  }
LAB_00e3e830:
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x40);
LAB_00e3e838:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


