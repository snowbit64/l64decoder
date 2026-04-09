// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOffset
// Entry Point: 0098b498
// Size: 76 bytes
// Signature: undefined __thiscall getOffset(PlayerCenteredCollisionHeightmap * this, float param_1, float param_2, int * param_3, int * param_4)


/* PlayerCenteredCollisionHeightmap::getOffset(float, float, int&, int&) */

void __thiscall
PlayerCenteredCollisionHeightmap::getOffset
          (PlayerCenteredCollisionHeightmap *this,float param_1,float param_2,int *param_3,
          int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)this);
  fVar2 = (float)NEON_fmadd(-fVar1 * fVar2,0x3f000000,param_1);
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 4));
  fVar3 = (float)NEON_fmadd(-fVar1 * fVar3,0x3f000000,param_2);
  *param_3 = (int)(fVar2 / fVar1 + 0.5);
  *param_4 = (int)(fVar3 / fVar1 + 0.5);
  return;
}


