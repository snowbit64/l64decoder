// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finish
// Entry Point: 009077a0
// Size: 8 bytes
// Signature: undefined __thiscall finish(I3DLoadStreamingCallback * this, uint param_1, TransformGroup * param_2, FailedReason param_3)


/* I3DManager::I3DLoadStreamingCallback::finish(unsigned int, TransformGroup*,
   IStreamingCallback::FailedReason) */

void __thiscall
I3DManager::I3DLoadStreamingCallback::finish
          (I3DLoadStreamingCallback *this,uint param_1,TransformGroup *param_2,FailedReason param_3)

{
  finishStreaming(*(I3DManager **)(this + 8),param_1,param_2,param_3);
  return;
}


