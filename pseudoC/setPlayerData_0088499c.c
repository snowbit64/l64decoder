// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPlayerData
// Entry Point: 0088499c
// Size: 16 bytes
// Signature: undefined __thiscall setPlayerData(DeerStateMoveTo * this, TransformGroup * param_1, float param_2)


/* DeerStateMoveTo::setPlayerData(TransformGroup*, float) */

void __thiscall
DeerStateMoveTo::setPlayerData(DeerStateMoveTo *this,TransformGroup *param_1,float param_2)

{
  *(TransformGroup **)(this + 0x28) = param_1;
  *(float *)(this + 0x30) = param_2 * param_2;
  return;
}


