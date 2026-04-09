// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cacheMergedShadowQueueItem
// Entry Point: 00a564e8
// Size: 8 bytes
// Signature: undefined __thiscall cacheMergedShadowQueueItem(MergedShadowGroup * this, MergedShadowQueueItem * param_1)


/* LightSource::MergedShadowGroup::cacheMergedShadowQueueItem(MergedShadowQueueItem*) */

void __thiscall
LightSource::MergedShadowGroup::cacheMergedShadowQueueItem
          (MergedShadowGroup *this,MergedShadowQueueItem *param_1)

{
  *(MergedShadowQueueItem **)(this + 0x20) = param_1;
  return;
}


