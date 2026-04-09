// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play3dClocked
// Entry Point: 00e3bbdc
// Size: 768 bytes
// Signature: undefined __thiscall play3dClocked(Soloud * this, double param_1, AudioSource * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, uint param_10)


/* SoLoud::Soloud::play3dClocked(double, SoLoud::AudioSource&, float, float, float, float, float,
   float, float, unsigned int) */

uint __thiscall
SoLoud::Soloud::play3dClocked
          (Soloud *this,double param_1,AudioSource *param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,uint param_10)

{
  uint uVar1;
  AudioSource AVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  uint local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar4 = play(this,param_2,param_9,0.0,1.0,true,param_10);
  lockAudioMutex();
  uVar5 = getVoiceFromHandle(this,uVar4);
  local_a4 = uVar5;
  if ((int)uVar5 < 0) {
    unlockAudioMutex();
  }
  else {
    plVar11 = (long *)(this + (ulong)uVar5 * 8 + 0xa0);
    lVar8 = *plVar11;
    uStack_9c = 0;
    *(uint *)(this + (ulong)uVar5 * 0x78 + 0x3550) = uVar4;
    *(uint *)(lVar8 + 0x14) = *(uint *)(lVar8 + 0x14) | 4;
    local_a0 = uVar4;
    puVar6 = (uint *)voiceGroupHandleToArray(this,uVar4);
    puVar7 = &local_a0;
    if (puVar6 != (uint *)0x0) {
      puVar7 = puVar6;
    }
    uVar10 = *puVar7;
    while (uVar10 != 0) {
      puVar7 = puVar7 + 1;
      if (((uVar10 & 0xfff) != 0) &&
         (uVar9 = (ulong)((uVar10 & 0xfff) - 1), *(uint *)(this + uVar9 * 0x78 + 0x3550) == uVar10))
      {
        *(float *)(this + uVar9 * 0x78 + 0x34e0) = param_3;
        *(float *)(this + uVar9 * 0x78 + 0x34e4) = param_4;
        *(float *)(this + uVar9 * 0x78 + 0x34e8) = param_5;
        *(float *)(this + uVar9 * 0x78 + 0x34ec) = param_6;
        *(float *)(this + uVar9 * 0x78 + 0x34f0) = param_7;
        *(float *)(this + uVar9 * 0x78 + 0x34f4) = param_8;
      }
      uVar10 = *puVar7;
    }
    dVar16 = *(double *)(this + 0x2110);
    if (dVar16 == 0.0) {
      *(double *)(this + 0x2110) = param_1;
    }
    unlockAudioMutex();
    if (dVar16 == 0.0) {
      uVar10 = 0;
      AVar2 = param_2[8];
    }
    else {
      dVar14 = (double)NEON_ucvtf((ulong)*(uint *)(this + 0x20a0));
      uVar10 = (uint)((param_1 - dVar16) * dVar14);
      AVar2 = param_2[8];
    }
    if (((byte)AVar2 >> 4 & 1) != 0) {
      uVar12 = NEON_fmadd(param_3,param_3,param_4 * param_4);
      fVar13 = (float)NEON_fmadd(param_5,param_5,uVar12);
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
      uVar10 = uVar10 + (int)((SQRT(fVar13) / *(float *)(this + 0x3478)) * fVar15);
    }
    update3dVoices(this,&local_a4,1);
    lockAudioMutex();
    updateVoiceRelativePlaySpeed(this,uVar5);
    lVar8 = *plVar11;
    *(undefined4 *)(lVar8 + 0x1c) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x352c);
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3530);
    *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3534);
    *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3538);
    *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x353c);
    *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3540);
    *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3544);
    *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(this + (ulong)uVar5 * 0x78 + 0x3548);
    updateVoiceVolume(this,uVar5);
    lVar8 = *plVar11;
    uVar1 = *(uint *)(lVar8 + 0x14);
    *(float *)(lVar8 + 0x17c) = *(float *)(lVar8 + 0x40);
    *(undefined8 *)(lVar8 + 0x164) = *(undefined8 *)(lVar8 + 0x24);
    *(undefined8 *)(lVar8 + 0x15c) = *(undefined8 *)(lVar8 + 0x1c);
    *(undefined8 *)(lVar8 + 0x174) = *(undefined8 *)(lVar8 + 0x34);
    *(undefined8 *)(lVar8 + 0x16c) = *(undefined8 *)(lVar8 + 0x2c);
    if (0.004 <= *(float *)(lVar8 + 0x40)) {
      *(uint *)(lVar8 + 0x14) = uVar1 & 0xffffffef;
    }
    else {
      *(uint *)(lVar8 + 0x14) = uVar1 | 0x10;
      if ((uVar1 >> 5 & 1) != 0) {
        stopVoice(this,uVar5);
      }
    }
    this[0x224f0] = (Soloud)0x1;
    unlockAudioMutex();
    setDelaySamples(this,uVar4,uVar10);
    setPause(this,uVar4,false);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


