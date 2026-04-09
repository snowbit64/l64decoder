// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseOcclusionCulling
// Entry Point: 00a19178
// Size: 48 bytes
// Signature: undefined releaseOcclusionCulling(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderList::releaseOcclusionCulling() */

void RenderList::releaseOcclusionCulling(void)

{
  long in_x0;
  
  OcclusionCullingManager::releaseOcclusionCulling
            ((OcclusionCullingManager *)OcclusionCullingManager::s_occlusionCullingManagerInstance,
             *(GsMaskedOcclusionCulling **)(in_x0 + 8));
  *(undefined8 *)(in_x0 + 8) = 0;
  return;
}


