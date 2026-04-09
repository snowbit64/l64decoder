// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlaneTest
// Entry Point: 00f9b9d8
// Size: 80 bytes
// Signature: undefined __cdecl PlaneTest(btPlane * param_1, btVector3 * param_2)


/* PlaneTest(btPlane const&, btVector3 const&) */

undefined PlaneTest(btPlane *param_1,btVector3 *param_2)

{
  undefined uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)param_2,
                            (float)*(undefined8 *)(param_1 + 4) *
                            (float)*(undefined8 *)(param_2 + 4));
  fVar2 = fVar2 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) + *(float *)(param_1 + 0x10);
  uVar1 = 2;
  if (fVar2 <= planetestepsilon) {
    uVar1 = fVar2 < -planetestepsilon;
  }
  return uVar1;
}


