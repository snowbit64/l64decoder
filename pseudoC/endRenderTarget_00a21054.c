// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endRenderTarget
// Entry Point: 00a21054
// Size: 16 bytes
// Signature: undefined __thiscall endRenderTarget(RenderQueue * this, ICommandBuffer * param_1)


/* RenderQueue::endRenderTarget(ICommandBuffer*) const */

void __thiscall RenderQueue::endRenderTarget(RenderQueue *this,ICommandBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a21060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  return;
}


