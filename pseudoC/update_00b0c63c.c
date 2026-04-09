// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b0c63c
// Size: 120 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioDevice::update() */

void SoftAudioDevice::update(void)

{
  long in_x0;
  
  SoLoud::Soloud::set3dListenerPosition
            (*(Soloud **)(in_x0 + 8),*(float *)(in_x0 + 0x1b68),*(float *)(in_x0 + 0x1b6c),
             *(float *)(in_x0 + 0x1b70));
  SoLoud::Soloud::set3dListenerVelocity
            (*(Soloud **)(in_x0 + 8),*(float *)(in_x0 + 0x1b74),*(float *)(in_x0 + 0x1b78),
             *(float *)(in_x0 + 0x1b7c));
  SoLoud::Soloud::set3dListenerAt
            (*(Soloud **)(in_x0 + 8),*(float *)(in_x0 + 0x1b80),*(float *)(in_x0 + 0x1b84),
             *(float *)(in_x0 + 0x1b88));
  SoLoud::Soloud::set3dListenerUp
            (*(Soloud **)(in_x0 + 8),*(float *)(in_x0 + 0x1b8c),*(float *)(in_x0 + 0x1b90),
             *(float *)(in_x0 + 0x1b94));
  SoLoud::Soloud::update3dAudio();
  updateFadingOutSources();
  return;
}


