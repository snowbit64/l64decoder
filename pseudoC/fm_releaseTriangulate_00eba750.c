// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_releaseTriangulate
// Entry Point: 00eba750
// Size: 20 bytes
// Signature: undefined __cdecl fm_releaseTriangulate(fm_Triangulate * param_1)


/* FLOAT_MATH::fm_releaseTriangulate(FLOAT_MATH::fm_Triangulate*) */

void FLOAT_MATH::fm_releaseTriangulate(fm_Triangulate *param_1)

{
  if (param_1 != (fm_Triangulate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eba75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x18))();
    return;
  }
  return;
}


