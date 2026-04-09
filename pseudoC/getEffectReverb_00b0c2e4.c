// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEffectReverb
// Entry Point: 00b0c2e4
// Size: 276 bytes
// Signature: undefined __thiscall getEffectReverb(SoftAudioDevice * this, uint param_1, AudioReverbDesc * param_2)


/* SoftAudioDevice::getEffectReverb(unsigned int, AudioReverbDesc&) */

void __thiscall
SoftAudioDevice::getEffectReverb(SoftAudioDevice *this,uint param_1,AudioReverbDesc *param_2)

{
  FDNReverbEffect *this_00;
  undefined4 uVar1;
  
  if (*(long *)(this + (ulong)param_1 * 0x18 + 0xea0) != 0) {
    this_00 = *(FDNReverbEffect **)(this + (ulong)param_1 * 0x18 + 0xea8);
    SoLoud::Soloud::lockAudioMutex();
    uVar1 = FDNReverbEffect::getParameter(this_00,0);
    *(undefined4 *)(param_2 + 8) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,1);
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,2);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,3);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,4);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,5);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,6);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,7);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,8);
    *(undefined4 *)(param_2 + 0x38) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,9);
    *(undefined4 *)(param_2 + 0x5c) = uVar1;
    uVar1 = FDNReverbEffect::getParameter(this_00,10);
    *(undefined4 *)(param_2 + 0x60) = uVar1;
    SoLoud::Soloud::unlockAudioMutex();
    return;
  }
  return;
}


