// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Destroy
// Entry Point: 00d9fb50
// Size: 60 bytes
// Signature: undefined __cdecl Destroy(MaskedOcclusionCulling * param_1)


/* MaskedOcclusionCulling::Destroy(MaskedOcclusionCulling*) */

void MaskedOcclusionCulling::Destroy(MaskedOcclusionCulling *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00d9fb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


