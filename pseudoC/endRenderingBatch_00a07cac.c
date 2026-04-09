// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endRenderingBatch
// Entry Point: 00a07cac
// Size: 4 bytes
// Signature: undefined __cdecl endRenderingBatch(RenderStats * param_1, bool param_2)


/* RenderController::endRenderingBatch(RenderStats&, bool) */

void RenderController::endRenderingBatch(RenderStats *param_1,bool param_2)

{
  bool in_w2;
  
  doRendering((RenderController *)param_1,(RenderStats *)(ulong)param_2,in_w2);
  return;
}


