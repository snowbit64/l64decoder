// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPlayerData
// Entry Point: 008841b4
// Size: 16 bytes
// Signature: undefined __thiscall setPlayerData(DeerStateIdle * this, TransformGroup * param_1, float param_2)


/* DeerStateIdle::setPlayerData(TransformGroup*, float) */

void __thiscall
DeerStateIdle::setPlayerData(DeerStateIdle *this,TransformGroup *param_1,float param_2)

{
  *(TransformGroup **)(this + 0x28) = param_1;
  *(float *)(this + 0x30) = param_2 * param_2;
  return;
}


