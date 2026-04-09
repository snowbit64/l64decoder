// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncOccluderRendering
// Entry Point: 00a18df4
// Size: 80 bytes
// Signature: undefined __thiscall syncOccluderRendering(RenderList * this, RenderStats * param_1)


/* RenderList::syncOccluderRendering(RenderStats&) */

void __thiscall RenderList::syncOccluderRendering(RenderList *this,RenderStats *param_1)

{
  if (this[0x10] != (RenderList)0x0) {
    if (*(int *)(this + 0x148) != 0) {
      ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)(this + 0x140),false);
    }
    this[0x10] = (RenderList)0x0;
  }
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x1c);
  return;
}


