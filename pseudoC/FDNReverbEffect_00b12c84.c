// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FDNReverbEffect
// Entry Point: 00b12c84
// Size: 108 bytes
// Signature: undefined __thiscall FDNReverbEffect(FDNReverbEffect * this, float param_1)


/* FDNReverbEffect::FDNReverbEffect(float) */

void __thiscall FDNReverbEffect::FDNReverbEffect(FDNReverbEffect *this,float param_1)

{
  FDNReverb *this_00;
  
  *(undefined8 *)(this + 0x10) = 0x3f8000003f800000;
  *(undefined8 *)(this + 8) = 0x3f8000003f000000;
  *(undefined8 *)(this + 0x20) = 0x3f8000003ba3d70a;
  *(undefined8 *)(this + 0x18) = 0x3dcccccd3f800000;
  *(undefined8 *)(this + 0x28) = 0x459c40003c23d70a;
  *(undefined4 *)(this + 0x30) = 0x437a0000;
  this_00 = (FDNReverb *)operator_new(0x158);
                    /* try { // try from 00b12cd4 to 00b12cdb has its CatchHandler @ 00b12cf0 */
  FDNReverb::FDNReverb(this_00,param_1);
  *(FDNReverb **)this = this_00;
  return;
}


