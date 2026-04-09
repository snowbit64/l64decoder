// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFadingOutLocked
// Entry Point: 00b1065c
// Size: 76 bytes
// Signature: undefined updateFadingOutLocked(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::updateFadingOutLocked() */

undefined8 SoftAudioSource::updateFadingOutLocked(void)

{
  int iVar1;
  long in_x0;
  undefined8 uVar2;
  
  if (*(uint *)(in_x0 + 0xcc) == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = SoLoud::Soloud::getVoiceFromHandle(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 0xcc));
    if (iVar1 == -1) {
      uVar2 = 1;
      *(undefined4 *)(in_x0 + 0xcc) = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


