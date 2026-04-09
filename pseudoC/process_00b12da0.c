// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00b12da0
// Size: 120 bytes
// Signature: undefined __thiscall process(FDNReverbEffect * this, float * param_1, float * param_2, uint param_3)


/* FDNReverbEffect::process(float*, float*, unsigned int) */

void __thiscall
FDNReverbEffect::process(FDNReverbEffect *this,float *param_1,float *param_2,uint param_3)

{
  if (this[0x60] != (FDNReverbEffect)0x0) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x4c);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x44);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x3c);
    *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x34);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x54);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x5c);
    FDNReverb::setPreset(*(FDNReverb **)this,(Preset *)(this + 8));
    this[0x60] = (FDNReverbEffect)0x0;
  }
  FDNReverb::process(*(FDNReverb **)this,param_1,param_2,param_3);
  return;
}


