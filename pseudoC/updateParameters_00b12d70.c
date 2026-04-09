// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParameters
// Entry Point: 00b12d70
// Size: 48 bytes
// Signature: undefined updateParameters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FDNReverbEffect::updateParameters() */

void FDNReverbEffect::updateParameters(void)

{
  FDNReverb **in_x0;
  
  in_x0[4] = *(FDNReverb **)((long)in_x0 + 0x4c);
  in_x0[3] = *(FDNReverb **)((long)in_x0 + 0x44);
  in_x0[2] = *(FDNReverb **)((long)in_x0 + 0x3c);
  in_x0[1] = *(FDNReverb **)((long)in_x0 + 0x34);
  in_x0[5] = *(FDNReverb **)((long)in_x0 + 0x54);
  *(undefined4 *)(in_x0 + 6) = *(undefined4 *)((long)in_x0 + 0x5c);
  FDNReverb::setPreset(*in_x0,(Preset *)(in_x0 + 1));
  return;
}


