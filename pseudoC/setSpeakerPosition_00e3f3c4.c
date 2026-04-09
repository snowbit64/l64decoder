// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpeakerPosition
// Entry Point: 00e3f3c4
// Size: 64 bytes
// Signature: undefined __thiscall setSpeakerPosition(Soloud * this, uint param_1, float param_2, float param_3, float param_4)


/* SoLoud::Soloud::setSpeakerPosition(unsigned int, float, float, float) */

undefined8 __thiscall
SoLoud::Soloud::setSpeakerPosition
          (Soloud *this,uint param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  
  if (param_1 < *(uint *)(this + 0x20a4)) {
    uVar1 = param_1 * 3;
    *(float *)(this + (ulong)uVar1 * 4 + 0x347c) = param_2;
    *(float *)(this + (ulong)(uVar1 + 1) * 4 + 0x347c) = param_3;
    *(float *)(this + (ulong)(uVar1 + 2) * 4 + 0x347c) = param_4;
    return 0;
  }
  return 1;
}


