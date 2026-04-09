// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007961a8
// Entry Point: 007961a8
// Size: 40 bytes
// Signature: undefined FUN_007961a8(void)


void FUN_007961a8(float *param_1)

{
  DecalCullingStructure::setWorldProperties
            ((DecalCullingStructure *)(CullingManager::s_cullingManagerInstance + 0xd8),*param_1,
             param_1[4],param_1[8],param_1[0xc],(uint)param_1[0x10]);
  return;
}


