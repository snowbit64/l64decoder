// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlaneProject
// Entry Point: 00f9b228
// Size: 56 bytes
// Signature: undefined __cdecl PlaneProject(btPlane * param_1, btVector3 * param_2)


/* PlaneProject(btPlane const&, btVector3 const&) */

undefined4 PlaneProject(btPlane *param_1,btVector3 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                     *(float *)param_1 * *(float *)param_2);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),uVar1);
  fVar2 = fVar2 + *(float *)(param_1 + 0x10);
  uVar1 = NEON_fmsub(fVar2,*(float *)param_1,*(float *)param_2);
  NEON_fmsub(fVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  NEON_fmsub(fVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  return uVar1;
}


