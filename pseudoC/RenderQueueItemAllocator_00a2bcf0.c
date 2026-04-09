// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderQueueItemAllocator
// Entry Point: 00a2bcf0
// Size: 104 bytes
// Signature: undefined __thiscall RenderQueueItemAllocator(RenderQueueItemAllocator * this, TempData * param_1)


/* RenderQueueItemAllocator::RenderQueueItemAllocator(RenderQueueItemAllocator::TempData&) */

void __thiscall
RenderQueueItemAllocator::RenderQueueItemAllocator(RenderQueueItemAllocator *this,TempData *param_1)

{
  *(undefined8 *)this = 0;
  *(TempData **)(this + 0x50) = param_1;
  *(TempData **)(this + 0x58) = param_1 + 0x18;
  *(TempData **)(this + 0x60) = param_1 + 0x30;
  *(TempData **)(this + 0x68) = param_1 + 0x48;
  *(TempData **)(this + 0x70) = param_1 + 0x60;
  *(TempData **)(this + 0x78) = param_1 + 0x78;
  *(TempData **)(this + 0x80) = param_1 + 0x90;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  return;
}


