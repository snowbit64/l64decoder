// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VoiceAutoLevelDetector
// Entry Point: 00b19af4
// Size: 92 bytes
// Signature: undefined __thiscall VoiceAutoLevelDetector(VoiceAutoLevelDetector * this, float param_1, float param_2, float param_3)


/* VoiceAutoLevelDetector::VoiceAutoLevelDetector(float, float, float) */

void __thiscall
VoiceAutoLevelDetector::VoiceAutoLevelDetector
          (VoiceAutoLevelDetector *this,float param_1,float param_2,float param_3)

{
  double dVar1;
  
  dVar1 = pow(10.0,(double)param_1 / 10.0);
  *(undefined4 *)(this + 4) = 0;
  *(float *)(this + 8) = param_2;
  *(float *)(this + 0xc) = param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(float *)this = (float)dVar1;
  return;
}


