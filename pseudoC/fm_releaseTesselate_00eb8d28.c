// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_releaseTesselate
// Entry Point: 00eb8d28
// Size: 20 bytes
// Signature: undefined __cdecl fm_releaseTesselate(fm_Tesselate * param_1)


/* FLOAT_MATH::fm_releaseTesselate(FLOAT_MATH::fm_Tesselate*) */

void FLOAT_MATH::fm_releaseTesselate(fm_Tesselate *param_1)

{
  if (param_1 != (fm_Tesselate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eb8d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))();
    return;
  }
  return;
}


