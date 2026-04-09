// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcFFT
// Entry Point: 00e3a9d8
// Size: 256 bytes
// Signature: undefined calcFFT(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Bus::calcFFT() */

long SoLoud::Bus::calcFFT(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined auVar8 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined auVar17 [16];
  float local_1038 [512];
  undefined4 local_838 [256];
  undefined4 local_438 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(in_x0 + 0xa0) != 0) && (*(long *)(in_x0 + 0x78) != 0)) {
    Soloud::lockAudioMutex();
    lVar6 = *(long *)(in_x0 + 0xa0);
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar7 = *(undefined4 *)(lVar6 + 0x238 + lVar4);
      lVar1 = lVar4 + 4;
      *(undefined4 *)((long)local_1038 + lVar3 + 4) = 0;
      *(undefined4 *)((long)local_1038 + lVar3) = uVar7;
      *(undefined4 *)((long)local_838 + lVar4) = 0;
      *(undefined4 *)((long)local_438 + lVar4) = 0;
      lVar3 = lVar3 + 8;
      lVar4 = lVar1;
    } while (lVar1 != 0x400);
    Soloud::unlockAudioMutex();
    FFT::fft1024(local_1038);
    puVar5 = (undefined8 *)(in_x0 + 0xbc);
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 0x40;
      fVar12 = *(float *)((long)local_1038 + lVar3 + 4);
      fVar9 = *(float *)((long)local_1038 + lVar3 + 8);
      fVar13 = *(float *)((long)local_1038 + lVar3 + 0xc);
      fVar10 = *(float *)((long)local_1038 + lVar3 + 0x10);
      fVar14 = *(float *)((long)local_1038 + lVar3 + 0x14);
      fVar11 = *(float *)((long)local_1038 + lVar3 + 0x18);
      fVar15 = *(float *)((long)local_1038 + lVar3 + 0x1c);
      auVar17._0_4_ =
           fVar12 * fVar12 +
           *(float *)((long)local_1038 + lVar3) * *(float *)((long)local_1038 + lVar3);
      auVar17._4_4_ = fVar13 * fVar13 + fVar9 * fVar9;
      auVar17._8_4_ = fVar14 * fVar14 + fVar10 * fVar10;
      auVar17._12_4_ = fVar15 * fVar15 + fVar11 * fVar11;
      fVar9 = *(float *)((long)local_1038 + lVar3 + 0x20);
      fVar13 = *(float *)((long)local_1038 + lVar3 + 0x24);
      fVar10 = *(float *)((long)local_1038 + lVar3 + 0x28);
      fVar14 = *(float *)((long)local_1038 + lVar3 + 0x2c);
      fVar11 = *(float *)((long)local_1038 + lVar3 + 0x30);
      fVar15 = *(float *)((long)local_1038 + lVar3 + 0x34);
      fVar12 = *(float *)((long)local_1038 + lVar3 + 0x38);
      fVar16 = *(float *)((long)local_1038 + lVar3 + 0x3c);
      auVar17 = NEON_fsqrt(auVar17,4);
      auVar8._4_4_ = fVar14 * fVar14 + fVar10 * fVar10;
      auVar8._0_4_ = fVar13 * fVar13 + fVar9 * fVar9;
      auVar8._8_4_ = fVar15 * fVar15 + fVar11 * fVar11;
      auVar8._12_4_ = fVar16 * fVar16 + fVar12 * fVar12;
      auVar8 = NEON_fsqrt(auVar8,4);
      puVar5[-1] = auVar17._8_8_;
      puVar5[-2] = auVar17._0_8_;
      puVar5[1] = auVar8._8_8_;
      *puVar5 = auVar8._0_8_;
      puVar5 = puVar5 + 4;
      lVar3 = lVar4;
    } while (lVar4 != 0x800);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return in_x0 + 0xac;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


