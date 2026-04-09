// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_releaseVertexIndex
// Entry Point: 00eb7b0c
// Size: 20 bytes
// Signature: undefined __cdecl fm_releaseVertexIndex(fm_VertexIndex * param_1)


/* FLOAT_MATH::fm_releaseVertexIndex(FLOAT_MATH::fm_VertexIndex*) */

void FLOAT_MATH::fm_releaseVertexIndex(fm_VertexIndex *param_1)

{
  if (param_1 != (fm_VertexIndex *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eb7b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x50))();
    return;
  }
  return;
}


