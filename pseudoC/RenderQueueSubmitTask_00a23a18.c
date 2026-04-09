// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderQueueSubmitTask
// Entry Point: 00a23a18
// Size: 64 bytes
// Signature: undefined __thiscall ~RenderQueueSubmitTask(RenderQueueSubmitTask * this)


/* RenderQueue::RenderQueueSubmitTask::~RenderQueueSubmitTask() */

void __thiscall
RenderQueue::RenderQueueSubmitTask::~RenderQueueSubmitTask(RenderQueueSubmitTask *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


