// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OcclusionCullingTask
// Entry Point: 00a1b66c
// Size: 64 bytes
// Signature: undefined __thiscall ~OcclusionCullingTask(OcclusionCullingTask * this)


/* RenderList::OcclusionCullingTask::~OcclusionCullingTask() */

void __thiscall RenderList::OcclusionCullingTask::~OcclusionCullingTask(OcclusionCullingTask *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


