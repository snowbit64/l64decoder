// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: excess
// Entry Point: 00b61ee8
// Size: 52 bytes
// Signature: undefined __thiscall excess(EnclosingSphere * this, Vector3F32 * param_1)


/* BoundingVolumeFactory::EnclosingSphere::excess(BoundingVolumeFactory::Vector3F32 const&) const */

undefined4 __thiscall
BoundingVolumeFactory::EnclosingSphere::excess(EnclosingSphere *this,Vector3F32 *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  
  pfVar1 = *(float **)(this + 0xd0);
  uVar2 = NEON_fnmsub(*(float *)param_1 - *pfVar1,*(float *)param_1 - *pfVar1,
                      *(undefined4 *)(this + 0xd8));
  uVar2 = NEON_fmadd(*(float *)(param_1 + 4) - pfVar1[1],*(float *)(param_1 + 4) - pfVar1[1],uVar2);
  uVar2 = NEON_fmadd(*(float *)(param_1 + 8) - pfVar1[2],*(float *)(param_1 + 8) - pfVar1[2],uVar2);
  return uVar2;
}


