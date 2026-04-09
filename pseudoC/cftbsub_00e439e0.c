// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftbsub
// Entry Point: 00e439e0
// Size: 476 bytes
// Signature: undefined __thiscall cftbsub(fftimpl * this, int param_1, float * param_2)


/* fftimpl::cftbsub(int, float*) */

undefined  [16] __thiscall fftimpl::cftbsub(fftimpl *this,int param_1,float *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  ulong in_d0;
  undefined8 in_register_00005008;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  puVar2 = (undefined8 *)(ulong)(uint)param_1;
  uVar1 = (uint)this;
  if ((int)uVar1 < 9) {
    if (uVar1 != 4) {
      if (uVar1 == 8) {
        fVar17 = *(float *)puVar2 + *(float *)(puVar2 + 2);
        fVar20 = *(float *)((long)puVar2 + 4) + *(float *)((long)puVar2 + 0x14);
        fVar3 = *(float *)puVar2 - *(float *)(puVar2 + 2);
        fVar9 = *(float *)((long)puVar2 + 4) - *(float *)((long)puVar2 + 0x14);
        fVar19 = *(float *)(puVar2 + 1) + *(float *)(puVar2 + 3);
        fVar21 = *(float *)((long)puVar2 + 0xc) + *(float *)((long)puVar2 + 0x1c);
        fVar11 = *(float *)((long)puVar2 + 0xc) - *(float *)((long)puVar2 + 0x1c);
        fVar13 = *(float *)(puVar2 + 1) - *(float *)(puVar2 + 3);
        fVar4 = fVar3 - fVar11;
        in_d0 = (ulong)(uint)fVar4;
        in_register_00005008 = 0;
        *(float *)puVar2 = fVar17 + fVar19;
        *(float *)((long)puVar2 + 4) = fVar20 + fVar21;
        *(float *)(puVar2 + 1) = fVar3 + fVar11;
        *(float *)((long)puVar2 + 0xc) = fVar9 - fVar13;
        *(float *)(puVar2 + 2) = fVar17 - fVar19;
        *(float *)((long)puVar2 + 0x14) = fVar20 - fVar21;
        *(float *)(puVar2 + 3) = fVar4;
        *(float *)((long)puVar2 + 0x1c) = fVar9 + fVar13;
      }
      auVar6._8_8_ = in_register_00005008;
      auVar6._0_8_ = in_d0;
      return auVar6;
    }
    fVar3 = (float)*puVar2;
    fVar9 = (float)puVar2[1];
    fVar4 = (float)((ulong)*puVar2 >> 0x20);
    fVar11 = (float)((ulong)puVar2[1] >> 0x20);
    auVar5._0_4_ = fVar3 - fVar9;
    auVar5._4_4_ = fVar4 - fVar11;
    auVar5._8_8_ = CONCAT44(fVar4 - fVar11,fVar3 - fVar9);
    puVar2[1] = auVar5._8_8_;
    *puVar2 = CONCAT44(fVar4 + fVar11,fVar3 + fVar9);
    return auVar5;
  }
  if (uVar1 < 0x21) {
    if (uVar1 == 0x20) {
      cftf161((float *)puVar2);
      auVar7._0_8_ = puVar2[1];
      uVar10 = puVar2[2];
      uVar12 = puVar2[3];
      uVar14 = puVar2[4];
      puVar2[1] = puVar2[0xf];
      puVar2[2] = puVar2[7];
      puVar2[0xf] = puVar2[8];
      uVar15 = puVar2[5];
      uVar16 = puVar2[6];
      puVar2[3] = puVar2[0xb];
      puVar2[4] = uVar12;
      uVar12 = puVar2[0xd];
      uVar18 = puVar2[0xe];
      puVar2[0xd] = puVar2[0xc];
      puVar2[0xe] = uVar14;
      puVar2[5] = uVar12;
      puVar2[6] = uVar15;
      uVar12 = puVar2[9];
      uVar14 = puVar2[10];
      puVar2[9] = uVar18;
      puVar2[10] = uVar16;
      puVar2[7] = uVar12;
      puVar2[8] = auVar7._0_8_;
      puVar2[0xb] = uVar14;
      puVar2[0xc] = uVar10;
      auVar7._8_8_ = 0;
      return auVar7;
    }
    cftf081((float *)puVar2);
    auVar8._0_8_ = puVar2[1];
    uVar10 = puVar2[2];
    puVar2[1] = puVar2[7];
    puVar2[2] = puVar2[3];
    puVar2[7] = puVar2[4];
    puVar2[3] = puVar2[5];
    puVar2[4] = auVar8._0_8_;
    puVar2[5] = puVar2[6];
    puVar2[6] = uVar10;
    auVar8._8_8_ = 0;
    return auVar8;
  }
  cftb1st(uVar1,(float *)puVar2);
  if (0x200 < uVar1) {
    cftrec4(uVar1,(float *)puVar2);
    auVar5 = bitrv2conj(uVar1,(float *)puVar2);
    return auVar5;
  }
  if (0x80 < uVar1) {
    cftleaf(uVar1,1,(float *)puVar2);
    auVar5 = bitrv2conj(uVar1,(float *)puVar2);
    return auVar5;
  }
  cftfx41(uVar1,(float *)puVar2);
  auVar5 = bitrv2conj(uVar1,(float *)puVar2);
  return auVar5;
}


