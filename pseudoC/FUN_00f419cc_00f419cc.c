// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f419cc
// Entry Point: 00f419cc
// Size: 2448 bytes
// Signature: undefined FUN_00f419cc(void)


/* WARNING: Removing unreachable block (ram,0x00f41cb4) */
/* WARNING: Removing unreachable block (ram,0x00f41c74) */
/* WARNING: Removing unreachable block (ram,0x00f41bd4) */
/* WARNING: Removing unreachable block (ram,0x00f41be0) */
/* WARNING: Removing unreachable block (ram,0x00f41bf4) */
/* WARNING: Removing unreachable block (ram,0x00f41c80) */
/* WARNING: Removing unreachable block (ram,0x00f41c94) */
/* WARNING: Removing unreachable block (ram,0x00f41c98) */
/* WARNING: Removing unreachable block (ram,0x00f41cc0) */
/* WARNING: Removing unreachable block (ram,0x00f41cd8) */
/* WARNING: Removing unreachable block (ram,0x00f41ce4) */
/* WARNING: Removing unreachable block (ram,0x00f41cfc) */
/* WARNING: Removing unreachable block (ram,0x00f41f04) */
/* WARNING: Removing unreachable block (ram,0x00f41f08) */
/* WARNING: Removing unreachable block (ram,0x00f41f5c) */
/* WARNING: Removing unreachable block (ram,0x00f41f1c) */
/* WARNING: Removing unreachable block (ram,0x00f41f60) */
/* WARNING: Removing unreachable block (ram,0x00f41f78) */
/* WARNING: Removing unreachable block (ram,0x00f41fb0) */
/* WARNING: Removing unreachable block (ram,0x00f4205c) */
/* WARNING: Removing unreachable block (ram,0x00f41f90) */
/* WARNING: Removing unreachable block (ram,0x00f42068) */
/* WARNING: Removing unreachable block (ram,0x00f42070) */
/* WARNING: Removing unreachable block (ram,0x00f4207c) */
/* WARNING: Removing unreachable block (ram,0x00f42150) */
/* WARNING: Removing unreachable block (ram,0x00f42080) */
/* WARNING: Removing unreachable block (ram,0x00f4215c) */
/* WARNING: Removing unreachable block (ram,0x00f42168) */
/* WARNING: Removing unreachable block (ram,0x00f420b4) */
/* WARNING: Removing unreachable block (ram,0x00f42180) */
/* WARNING: Removing unreachable block (ram,0x00f42188) */
/* WARNING: Removing unreachable block (ram,0x00f42190) */
/* WARNING: Removing unreachable block (ram,0x00f421b0) */
/* WARNING: Removing unreachable block (ram,0x00f420cc) */
/* WARNING: Removing unreachable block (ram,0x00f42000) */
/* WARNING: Removing unreachable block (ram,0x00f420b8) */
/* WARNING: Removing unreachable block (ram,0x00f4200c) */
/* WARNING: Removing unreachable block (ram,0x00f42014) */
/* WARNING: Removing unreachable block (ram,0x00f420c0) */
/* WARNING: Removing unreachable block (ram,0x00f42020) */
/* WARNING: Removing unreachable block (ram,0x00f420d8) */
/* WARNING: Removing unreachable block (ram,0x00f42024) */
/* WARNING: Removing unreachable block (ram,0x00f420e4) */
/* WARNING: Removing unreachable block (ram,0x00f420f0) */
/* WARNING: Removing unreachable block (ram,0x00f42058) */
/* WARNING: Removing unreachable block (ram,0x00f42108) */
/* WARNING: Removing unreachable block (ram,0x00f42110) */
/* WARNING: Removing unreachable block (ram,0x00f42118) */
/* WARNING: Removing unreachable block (ram,0x00f42138) */
/* WARNING: Removing unreachable block (ram,0x00f421d0) */
/* WARNING: Removing unreachable block (ram,0x00f41f94) */

undefined8 * FUN_00f419cc(long param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  float **ppfVar19;
  float **ppfVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 *puVar25;
  long lVar26;
  uint *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  ulong uVar37;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined auStack_f0 [4];
  undefined8 local_ec;
  long local_e0;
  char local_d8 [8];
  undefined auStack_d0 [4];
  undefined8 local_cc;
  long local_c0;
  char local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if (((DAT_02125650 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_02125650), iVar13 != 0)) {
    DAT_02125628 = 0;
    DAT_02125620 = 0;
    DAT_0212561c = 0x3f800000;
    DAT_02125630 = 1.0;
    DAT_02125634._0_4_ = 0.0;
    DAT_02125634._4_4_ = 0;
    DAT_0212563c._0_4_ = 0.0;
    DAT_0212563c._4_4_ = 0.0;
    DAT_02125644._0_4_ = 1.0;
    DAT_02125644._4_4_ = 0;
    __cxa_guard_release(&DAT_02125650);
  }
  fVar12 = (float)DAT_02125644;
  fVar11 = DAT_0212563c._4_4_;
  fVar10 = (float)DAT_0212563c;
  fVar9 = (float)DAT_02125634;
  fVar8 = DAT_02125630;
  uVar15 = DAT_02125620;
  uVar6 = DAT_0212561c;
  uVar2 = *(uint *)(param_2 + 4);
  uVar17 = (ulong)uVar2;
  if ((int)uVar2 < 2) {
    puVar25 = *(undefined8 **)(param_2 + 0x10);
  }
  else {
    if (param_3 < (int)uVar2) {
      ppfVar19 = *(float ***)(param_2 + 0x10);
      pfVar21 = *ppfVar19;
      fVar29 = pfVar21[3];
      fVar31 = pfVar21[4];
      fVar30 = *pfVar21;
      uVar33 = *(undefined8 *)(pfVar21 + 1);
      uVar32 = *(undefined8 *)(pfVar21 + 5);
      fVar28 = pfVar21[7];
      lVar22 = uVar17 - 1;
      ppfVar20 = ppfVar19;
      do {
        ppfVar20 = ppfVar20 + 1;
        pfVar21 = *ppfVar20;
        lVar22 = lVar22 + -1;
        fVar30 = (float)NEON_fminnm(fVar30,*pfVar21);
        if (fVar31 <= pfVar21[4]) {
          fVar31 = pfVar21[4];
        }
        uVar33 = NEON_fminnm(uVar33,*(undefined8 *)(pfVar21 + 1),4);
        uVar32 = NEON_fmaxnm(uVar32,*(undefined8 *)(pfVar21 + 5),4);
      } while (lVar22 != 0);
      local_d8[0] = '\x01';
      local_b8 = '\x01';
      local_ec = 0;
      local_cc = 0;
      fVar7 = DAT_02125628._4_4_;
      local_e0 = 0;
      local_c0 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      do {
        pfVar21 = *ppfVar19;
        fVar36 = -(((float)uVar32 + (float)uVar33) * 0.5) +
                 ((float)*(undefined8 *)(pfVar21 + 5) + (float)*(undefined8 *)(pfVar21 + 1)) * 0.5;
        fVar38 = -(((float)((ulong)uVar32 >> 0x20) + (float)((ulong)uVar33 >> 0x20)) * 0.5) +
                 ((float)((ulong)*(undefined8 *)(pfVar21 + 5) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(pfVar21 + 1) >> 0x20)) * 0.5;
        fVar34 = (float)NEON_fnmsub(pfVar21[4] + *pfVar21,0x3f000000,(fVar31 + fVar30) * 0.5);
        fVar35 = (float)NEON_fmadd(uVar6,fVar34,(float)uVar15 * fVar36);
        uVar37 = NEON_fcmgt(CONCAT44(fVar8 * fVar36 + fVar7 * fVar34 + fVar9 * fVar38,
                                     fVar11 * fVar36 + fVar10 * fVar34 + fVar12 * fVar38),0,4);
        uVar17 = uVar17 - 1;
        piVar24 = (int *)((ulong)&local_108 |
                         (ulong)(0.0 < fVar35 + (float)((ulong)uVar15 >> 0x20) * fVar38) << 2);
        uVar23 = (ulong)&local_108 | (uVar37 & 1) << 2;
        uVar37 = (ulong)&local_108 | (uVar37 >> 0x20 & 1) << 2;
        iVar13 = *(int *)(uVar23 + 0x10);
        iVar3 = *(int *)(uVar37 + 8);
        *piVar24 = *piVar24 + 1;
        *(int *)(uVar23 + 0x10) = iVar13 + 1;
        *(int *)(uVar37 + 8) = iVar3 + 1;
        ppfVar19 = ppfVar19 + 1;
      } while (uVar17 != 0);
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar2 = ((int)uVar2 >> 1) + 1;
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      local_e0 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10);
      local_ec = CONCAT44(uVar2,(undefined4)local_ec);
      uVar16 = *(uint *)(param_2 + 4);
      local_d8[0] = '\x01';
      uVar2 = uVar16;
      if ((int)uVar16 < 0) {
        uVar2 = uVar16 + 1;
      }
      if (1 < (int)uVar16) {
        uVar2 = (int)uVar2 >> 1;
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        local_c0 = (*(code *)PTR_FUN_01048e38)
                             (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10)
        ;
        local_b8 = '\x01';
        local_cc = CONCAT44(uVar2,(undefined4)local_cc);
        uVar16 = *(uint *)(param_2 + 4);
      }
      if (0 < (int)uVar16) {
        uVar17 = 0;
        do {
          uVar23 = uVar17 & 1;
          lVar26 = *(long *)(param_2 + 0x10);
          lVar22 = uVar23 * 0x20;
          uVar2 = *(uint *)(&local_ec + uVar23 * 4);
          puVar27 = (uint *)((long)&local_ec + lVar22 + 4);
          if (uVar2 == *puVar27) {
            uVar4 = uVar2 << 1;
            if (uVar2 == 0) {
              uVar4 = 1;
            }
            if ((int)uVar2 < (int)uVar4) {
              if (uVar4 == 0) {
                lVar14 = 0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                lVar14 = (*(code *)PTR_FUN_01048e38)
                                   (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3
                                    ,0x10);
              }
              plVar1 = (long *)(local_d8 + uVar23 * 0x20 + -8);
              if (0 < (int)uVar2) {
                lVar18 = 0;
                do {
                  *(undefined8 *)(lVar14 + lVar18) = *(undefined8 *)(*plVar1 + lVar18);
                  lVar18 = lVar18 + 8;
                } while ((ulong)uVar2 * 8 - lVar18 != 0);
              }
              if ((*plVar1 != 0) && (local_d8[uVar23 * 0x20] != '\0')) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
              *plVar1 = lVar14;
              *puVar27 = uVar4;
              local_d8[uVar23 * 0x20] = '\x01';
            }
          }
          lVar14 = uVar17 * 8;
          uVar17 = uVar17 + 1;
          *(undefined8 *)(*(long *)(local_d8 + lVar22 + -8) + (long)(int)uVar2 * 8) =
               *(undefined8 *)(lVar26 + lVar14);
          *(uint *)((ulong)(auStack_f0 + lVar22) | 4) = uVar2 + 1;
        } while (uVar17 != uVar16);
      }
      puVar25 = *(undefined8 **)(param_1 + 8);
      if (puVar25 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar25 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar25[6] = 0;
        puVar25[1] = 0;
        *puVar25 = 0;
        puVar25[3] = 0;
        puVar25[2] = 0;
        puVar25[5] = 0;
        puVar25[4] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      puVar25[4] = 0;
      puVar25[5] = 0;
      *(float *)((long)puVar25 + 0xc) = fVar29;
      puVar25[6] = 0;
      *(float *)puVar25 = fVar30;
      *(undefined8 *)((long)puVar25 + 4) = uVar33;
      *(float *)(puVar25 + 2) = fVar31;
      *(undefined8 *)((long)puVar25 + 0x14) = uVar32;
      *(float *)((long)puVar25 + 0x1c) = fVar28;
      uVar15 = FUN_00f419cc(param_1,auStack_f0,param_3);
      puVar25[5] = uVar15;
      uVar15 = FUN_00f419cc(param_1,auStack_d0,param_3);
      puVar25[6] = uVar15;
      *(undefined8 **)(puVar25[5] + 0x20) = puVar25;
      *(undefined8 **)(puVar25[6] + 0x20) = puVar25;
      if ((local_c0 != 0) && (local_b8 != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      if ((local_e0 != 0) && (local_d8[0] != '\0')) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      goto LAB_00f41c1c;
    }
    FUN_00f416ac(param_1);
    puVar25 = *(undefined8 **)(param_2 + 0x10);
  }
  puVar25 = (undefined8 *)*puVar25;
LAB_00f41c1c:
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar25;
}


