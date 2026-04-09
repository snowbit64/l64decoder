// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a191a8
// Size: 24 bytes
// Signature: undefined __cdecl executeTask(uint param_1)


/* RenderList::OcclusionCullingTask::executeTask(unsigned int) */

void RenderList::OcclusionCullingTask::executeTask(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  occluderRendering(*(RenderList **)(uVar1 + 0xe8),(float *)(uVar1 + 0x28),(float *)(uVar1 + 0x68),
                    (float *)(uVar1 + 0xa8));
  return;
}


