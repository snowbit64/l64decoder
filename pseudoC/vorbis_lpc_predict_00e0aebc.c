// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_lpc_predict
// Entry Point: 00e0aebc
// Size: 504 bytes
// Signature: undefined vorbis_lpc_predict(void)


void vorbis_lpc_predict(long param_1,void *param_2,uint param_3,void *param_4,ulong param_5)

{
  undefined (*pauVar1) [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  undefined (*pauVar6) [16];
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  void *__s;
  ulong uVar15;
  float fVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined8 uVar19;
  float afStack_60 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  uVar15 = (ulong)(int)param_3;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar2 = -((uVar15 + param_5) * 4 + 0xf & 0xfffffffffffffff0);
  __s = (void *)((long)afStack_60 + lVar2);
  if (param_2 == (void *)0x0) {
    if (0 < (int)param_3) {
      memset(__s,0,uVar15 << 2);
    }
  }
  else if (0 < (int)param_3) {
    memcpy(__s,param_2,uVar15 << 2);
  }
  if (0 < (long)param_5) {
    if ((int)param_3 < 1) {
      memset(__s,0,param_5 << 2);
      memset(param_4,0,param_5 << 2);
    }
    else {
      uVar7 = 0;
      uVar8 = uVar15 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar2);
      uVar10 = uVar15;
      do {
        fVar16 = 0.0;
        uVar11 = uVar7;
        uVar13 = uVar15;
        if (param_3 < 8) {
LAB_00e0b03c:
          puVar14 = (undefined4 *)(param_1 + -4 + uVar13 * 4);
          do {
            lVar2 = uVar11 * 4;
            uVar11 = uVar11 + 1;
            fVar16 = (float)NEON_fmsub(*(undefined4 *)((long)__s + lVar2),*puVar14,fVar16);
            puVar14 = puVar14 + -1;
          } while (uVar10 != uVar11);
        }
        else {
          fVar16 = 0.0;
          uVar11 = uVar7 + uVar8;
          pauVar6 = (undefined (*) [16])(param_1 + uVar15 * 4 + -0x10);
          puVar12 = puVar9;
          uVar13 = uVar8;
          do {
            uVar13 = uVar13 - 8;
            auVar5 = *(undefined (*) [16])(puVar12 + -2);
            puVar4 = puVar12 + 1;
            uVar19 = *puVar12;
            puVar12 = puVar12 + 4;
            auVar17 = NEON_rev64(*pauVar6,4);
            auVar17 = NEON_ext(auVar17,auVar17,8,1);
            pauVar1 = pauVar6 + -1;
            pauVar6 = pauVar6 + -2;
            auVar18 = NEON_rev64(*pauVar1,4);
            auVar18 = NEON_ext(auVar18,auVar18,8,1);
            fVar16 = fVar16 + auVar17._0_4_ * -auVar5._0_4_ + auVar17._4_4_ * -auVar5._4_4_ +
                     auVar17._8_4_ * -auVar5._8_4_ + auVar17._12_4_ * -auVar5._12_4_ +
                     auVar18._0_4_ * -(float)uVar19 +
                     auVar18._4_4_ * -(float)((ulong)uVar19 >> 0x20) +
                     auVar18._8_4_ * -(float)*puVar4 +
                     auVar18._12_4_ * -(float)((ulong)*puVar4 >> 0x20);
          } while (uVar13 != 0);
          uVar13 = uVar15 & 7;
          if (uVar8 != uVar15) goto LAB_00e0b03c;
        }
        *(float *)((long)param_4 + uVar7 * 4) = fVar16;
        uVar7 = uVar7 + 1;
        *(float *)((long)__s + uVar10 * 4) = fVar16;
        uVar10 = uVar10 + 1;
        puVar9 = (undefined8 *)((long)puVar9 + 4);
      } while (uVar7 != param_5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


