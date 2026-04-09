// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyAudioIntoBuffers
// Entry Point: 00c7354c
// Size: 584 bytes
// Signature: undefined __thiscall copyAudioIntoBuffers(TheoraVideoDecoder * this, float * * param_1, uint param_2, uint param_3)


/* TheoraVideoDecoder::copyAudioIntoBuffers(float**, unsigned int, unsigned int) */

undefined4 __thiscall
TheoraVideoDecoder::copyAudioIntoBuffers
          (TheoraVideoDecoder *this,float **param_1,uint param_2,uint param_3)

{
  float **ppfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  float **ppfVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  void **ppvVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 local_78;
  
  if (param_2 == 0) {
    local_78 = 0;
  }
  else {
    uVar14 = (ulong)param_3;
    ppvVar16 = *(void ***)(this + 0x120);
    uVar19 = 0;
    uVar15 = uVar14 & 0xfffffffe;
    local_78 = 0;
    do {
      if (ppvVar16 == (void **)0x0) {
        ppvVar16 = (void **)operator_new(0x10);
        uVar17 = *(uint *)(this + 0xfc);
                    /* try { // try from 00c735f4 to 00c735f7 has its CatchHandler @ 00c73794 */
        pvVar5 = operator_new__((ulong)uVar17 << 1);
        *ppvVar16 = pvVar5;
        uVar6 = 0;
        *(void ***)(this + 0x120) = ppvVar16;
        *(undefined4 *)(this + 0x128) = 0;
      }
      else {
        uVar17 = *(uint *)(this + 0xfc);
        uVar6 = *(uint *)(this + 0x128);
      }
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = (uVar17 - uVar6) / param_3;
      }
      uVar2 = param_2 - uVar19;
      if (uVar4 <= param_2 - uVar19) {
        uVar2 = uVar4;
      }
      if (uVar2 != 0) {
        uVar7 = 0;
        puVar8 = (undefined2 *)((long)*ppvVar16 + (ulong)uVar6 * 2);
        do {
          if (param_3 != 0) {
            uVar4 = uVar19 + (int)uVar7;
            if (param_3 == 1) {
              puVar9 = puVar8;
              uVar11 = 0;
            }
            else {
              puVar9 = puVar8 + uVar15;
              uVar11 = uVar15;
              ppfVar10 = param_1 + 1;
              do {
                ppfVar1 = ppfVar10 + -1;
                pfVar3 = *ppfVar10;
                ppfVar10 = ppfVar10 + 2;
                uVar11 = uVar11 - 2;
                uVar20 = NEON_smin(CONCAT44((int)(pfVar3[uVar4] * 32767.0),
                                            (int)((*ppfVar1)[uVar4] * 32767.0)),0x7fff00007fff,4);
                uVar20 = NEON_smax(uVar20,0xffff8000ffff8000,4);
                *puVar8 = (short)uVar20;
                puVar8[1] = (short)((ulong)uVar20 >> 0x20);
                puVar8 = puVar8 + 2;
              } while (uVar11 != 0);
              puVar8 = puVar9;
              uVar11 = uVar15;
              if (uVar15 == uVar14) goto LAB_00c73640;
            }
            lVar12 = uVar14 - uVar11;
            ppfVar10 = param_1 + uVar11;
            do {
              iVar13 = (int)((*ppfVar10)[uVar4] * 32767.0);
              if (0x7ffe < iVar13) {
                iVar13 = 0x7fff;
              }
              if (iVar13 == -0x8000 || iVar13 + 0x8000 < 0 != SCARRY4(iVar13,0x8000)) {
                iVar13 = -0x8000;
              }
              lVar12 = lVar12 + -1;
              puVar8 = puVar9 + 1;
              *puVar9 = (short)iVar13;
              puVar9 = puVar8;
              ppfVar10 = ppfVar10 + 1;
            } while (lVar12 != 0);
          }
LAB_00c73640:
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
      }
      uVar6 = uVar6 + uVar2 * param_3;
      *(uint *)(this + 0x128) = uVar6;
      if (uVar6 == uVar17) {
        do {
          pvVar18 = *(void **)(this + 0xb0);
          ppvVar16[1] = pvVar18;
          pvVar5 = (void *)FUN_00f275d0(pvVar18,ppvVar16);
        } while (pvVar18 != pvVar5);
        local_78 = 1;
        FUN_00f27700(1,this + 0xb8);
        ppvVar16 = (void **)0x0;
        *(undefined8 *)(this + 0x120) = 0;
      }
      uVar19 = uVar2 + uVar19;
    } while (uVar19 < param_2);
  }
  return local_78;
}


