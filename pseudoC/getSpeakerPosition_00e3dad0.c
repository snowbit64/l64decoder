// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSpeakerPosition
// Entry Point: 00e3dad0
// Size: 72 bytes
// Signature: undefined __thiscall getSpeakerPosition(Soloud * this, uint param_1, float * param_2, float * param_3, float * param_4)


/* SoLoud::Soloud::getSpeakerPosition(unsigned int, float&, float&, float&) */

undefined8 __thiscall
SoLoud::Soloud::getSpeakerPosition
          (Soloud *this,uint param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  
  if (param_1 < *(uint *)(this + 0x20a4)) {
    uVar1 = param_1 * 3;
    *param_2 = *(float *)(this + (ulong)uVar1 * 4 + 0x347c);
    *param_3 = *(float *)(this + (ulong)(uVar1 + 1) * 4 + 0x347c);
    *param_4 = *(float *)(this + (ulong)(uVar1 + 2) * 4 + 0x347c);
    return 0;
  }
  return 1;
}


