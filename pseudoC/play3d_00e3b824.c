// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play3d
// Entry Point: 00e3b824
// Size: 728 bytes
// Signature: undefined __thiscall play3d(Soloud * this, AudioSource * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, bool param_10, uint param_11)


/* SoLoud::Soloud::play3d(SoLoud::AudioSource&, float, float, float, float, float, float, float,
   float, bool, unsigned int) */

uint __thiscall
SoLoud::Soloud::play3d
          (Soloud *this,AudioSource *param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6,float param_7,float param_8,float param_9,bool param_10,uint param_11)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  uint local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  uVar3 = play(this,param_1,param_8,0.0,param_9,true,param_11);
  lockAudioMutex();
  uVar4 = getVoiceFromHandle(this,uVar3);
  local_a4 = uVar4;
  if ((int)uVar4 < 0) {
    unlockAudioMutex();
  }
  else {
    plVar10 = (long *)(this + (ulong)uVar4 * 8 + 0xa0);
    lVar7 = *plVar10;
    uStack_9c = 0;
    *(uint *)(this + (ulong)uVar4 * 0x78 + 0x3550) = uVar3;
    *(uint *)(lVar7 + 0x14) = *(uint *)(lVar7 + 0x14) | 4;
    local_a0 = uVar3;
    puVar5 = (uint *)voiceGroupHandleToArray(this,uVar3);
    puVar6 = &local_a0;
    if (puVar5 != (uint *)0x0) {
      puVar6 = puVar5;
    }
    uVar9 = *puVar6;
    while (uVar9 != 0) {
      puVar6 = puVar6 + 1;
      if (((uVar9 & 0xfff) != 0) &&
         (uVar8 = (ulong)((uVar9 & 0xfff) - 1), *(uint *)(this + uVar8 * 0x78 + 0x3550) == uVar9)) {
        *(float *)(this + uVar8 * 0x78 + 0x34e0) = param_2;
        *(float *)(this + uVar8 * 0x78 + 0x34e4) = param_3;
        *(float *)(this + uVar8 * 0x78 + 0x34e8) = param_4;
        *(float *)(this + uVar8 * 0x78 + 0x34ec) = param_5;
        *(float *)(this + uVar8 * 0x78 + 0x34f0) = param_6;
        *(float *)(this + uVar8 * 0x78 + 0x34f4) = param_7;
      }
      uVar9 = *puVar6;
    }
    if (((byte)param_1[8] >> 4 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      if ((*(byte *)(*plVar10 + 0x14) >> 3 & 1) == 0) {
        param_2 = param_2 - *(float *)(this + 0x3448);
        param_3 = param_3 - *(float *)(this + 0x344c);
        param_4 = param_4 - *(float *)(this + 0x3450);
      }
      uVar11 = NEON_fmadd(param_2,param_2,param_3 * param_3);
      fVar12 = (float)NEON_fmadd(param_4,param_4,uVar11);
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
      uVar9 = (uint)((SQRT(fVar12) / *(float *)(this + 0x3478)) * fVar13);
    }
    update3dVoices(this,&local_a4,1);
    updateVoiceRelativePlaySpeed(this,uVar4);
    lVar7 = *plVar10;
    *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x352c);
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3530);
    *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3534);
    *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3538);
    *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x353c);
    *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3540);
    *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3544);
    *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(this + (ulong)uVar4 * 0x78 + 0x3548);
    updateVoiceVolume(this,uVar4);
    lVar7 = *plVar10;
    uVar1 = *(uint *)(lVar7 + 0x14);
    *(float *)(lVar7 + 0x17c) = *(float *)(lVar7 + 0x40);
    *(undefined8 *)(lVar7 + 0x164) = *(undefined8 *)(lVar7 + 0x24);
    *(undefined8 *)(lVar7 + 0x15c) = *(undefined8 *)(lVar7 + 0x1c);
    *(undefined8 *)(lVar7 + 0x174) = *(undefined8 *)(lVar7 + 0x34);
    *(undefined8 *)(lVar7 + 0x16c) = *(undefined8 *)(lVar7 + 0x2c);
    if (0.004 <= *(float *)(lVar7 + 0x40)) {
      *(uint *)(lVar7 + 0x14) = uVar1 & 0xffffffef;
    }
    else {
      *(uint *)(lVar7 + 0x14) = uVar1 | 0x10;
      if ((uVar1 >> 5 & 1) != 0) {
        stopVoice(this,uVar4);
      }
    }
    this[0x224f0] = (Soloud)0x1;
    unlockAudioMutex();
    setDelaySamples(this,uVar3,uVar9);
    setPause(this,uVar3,param_10);
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


