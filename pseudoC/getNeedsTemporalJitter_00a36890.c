// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedsTemporalJitter
// Entry Point: 00a36890
// Size: 48 bytes
// Signature: undefined __cdecl getNeedsTemporalJitter(POST_PROCESS_ANTI_ALIASING param_1, DLSS_QUALITY param_2, XESS_QUALITY param_3, FIDELITY_FX_SR_20 param_4)


/* RenderQueueUtil::getNeedsTemporalJitter(HardwareScalability::POST_PROCESS_ANTI_ALIASING,
   HardwareScalability::DLSS_QUALITY, HardwareScalability::XESS_QUALITY,
   HardwareScalability::FIDELITY_FX_SR_20) */

bool RenderQueueUtil::getNeedsTemporalJitter
               (POST_PROCESS_ANTI_ALIASING param_1,DLSS_QUALITY param_2,XESS_QUALITY param_3,
               FIDELITY_FX_SR_20 param_4)

{
  return ((param_1 != 0 || param_2 != 5) || param_3 != 4) || param_4 != 0;
}


