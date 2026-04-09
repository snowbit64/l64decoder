// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcFFT
// Entry Point: 00e37cb4
// Size: 264 bytes
// Signature: undefined calcFFT(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::calcFFT() */

long SoLoud::Soloud::calcFFT(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined auVar7 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined auVar16 [16];
  float local_1038 [512];
  undefined4 local_838 [256];
  undefined4 local_438 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::lockMutex(*(void **)(in_x0 + 8));
  }
  lVar3 = 0;
  lVar4 = 0;
  do {
    uVar6 = *(undefined4 *)(in_x0 + 0x2848 + lVar4);
    lVar1 = lVar4 + 4;
    *(undefined4 *)((long)local_1038 + lVar3 + 4) = 0;
    *(undefined4 *)((long)local_1038 + lVar3) = uVar6;
    *(undefined4 *)((long)local_838 + lVar4) = 0;
    *(undefined4 *)((long)local_438 + lVar4) = 0;
    lVar3 = lVar3 + 8;
    lVar4 = lVar1;
  } while (lVar1 != 0x400);
  *(undefined *)(in_x0 + 0x10) = 0;
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::unlockMutex(*(void **)(in_x0 + 8));
  }
  FFT::fft1024(local_1038);
  puVar5 = (undefined8 *)(in_x0 + 0x2c58);
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 0x40;
    fVar11 = *(float *)((long)local_1038 + lVar3 + 4);
    fVar8 = *(float *)((long)local_1038 + lVar3 + 8);
    fVar12 = *(float *)((long)local_1038 + lVar3 + 0xc);
    fVar9 = *(float *)((long)local_1038 + lVar3 + 0x10);
    fVar13 = *(float *)((long)local_1038 + lVar3 + 0x14);
    fVar10 = *(float *)((long)local_1038 + lVar3 + 0x18);
    fVar14 = *(float *)((long)local_1038 + lVar3 + 0x1c);
    auVar16._0_4_ =
         fVar11 * fVar11 +
         *(float *)((long)local_1038 + lVar3) * *(float *)((long)local_1038 + lVar3);
    auVar16._4_4_ = fVar12 * fVar12 + fVar8 * fVar8;
    auVar16._8_4_ = fVar13 * fVar13 + fVar9 * fVar9;
    auVar16._12_4_ = fVar14 * fVar14 + fVar10 * fVar10;
    fVar8 = *(float *)((long)local_1038 + lVar3 + 0x20);
    fVar12 = *(float *)((long)local_1038 + lVar3 + 0x24);
    fVar9 = *(float *)((long)local_1038 + lVar3 + 0x28);
    fVar13 = *(float *)((long)local_1038 + lVar3 + 0x2c);
    fVar10 = *(float *)((long)local_1038 + lVar3 + 0x30);
    fVar14 = *(float *)((long)local_1038 + lVar3 + 0x34);
    fVar11 = *(float *)((long)local_1038 + lVar3 + 0x38);
    fVar15 = *(float *)((long)local_1038 + lVar3 + 0x3c);
    auVar16 = NEON_fsqrt(auVar16,4);
    auVar7._4_4_ = fVar13 * fVar13 + fVar9 * fVar9;
    auVar7._0_4_ = fVar12 * fVar12 + fVar8 * fVar8;
    auVar7._8_4_ = fVar14 * fVar14 + fVar10 * fVar10;
    auVar7._12_4_ = fVar15 * fVar15 + fVar11 * fVar11;
    auVar7 = NEON_fsqrt(auVar7,4);
    puVar5[-1] = auVar16._8_8_;
    puVar5[-2] = auVar16._0_8_;
    puVar5[1] = auVar7._8_8_;
    *puVar5 = auVar7._0_8_;
    puVar5 = puVar5 + 4;
    lVar3 = lVar4;
  } while (lVar4 != 0x800);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return in_x0 + 0x2c48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


