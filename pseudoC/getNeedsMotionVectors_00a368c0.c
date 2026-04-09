// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedsMotionVectors
// Entry Point: 00a368c0
// Size: 52 bytes
// Signature: undefined __cdecl getNeedsMotionVectors(POST_PROCESS_ANTI_ALIASING param_1, DLSS_QUALITY param_2, XESS_QUALITY param_3, FIDELITY_FX_SR_20 param_4, VALAR_SHADING_RATE_QUALITY param_5)


/* RenderQueueUtil::getNeedsMotionVectors(HardwareScalability::POST_PROCESS_ANTI_ALIASING,
   HardwareScalability::DLSS_QUALITY, HardwareScalability::XESS_QUALITY,
   HardwareScalability::FIDELITY_FX_SR_20, HardwareScalability::VALAR_SHADING_RATE_QUALITY) */

bool RenderQueueUtil::getNeedsMotionVectors
               (POST_PROCESS_ANTI_ALIASING param_1,DLSS_QUALITY param_2,XESS_QUALITY param_3,
               FIDELITY_FX_SR_20 param_4,VALAR_SHADING_RATE_QUALITY param_5)

{
  return ((param_1 != 0 || param_2 != 5) || param_3 != 4) || (param_5 | param_4) != 0;
}


