// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cacheMergedShadowQueueItem
// Entry Point: 00a564dc
// Size: 12 bytes
// Signature: undefined __thiscall cacheMergedShadowQueueItem(LightSource * this, MergedShadowQueueItem * param_1)


/* LightSource::cacheMergedShadowQueueItem(MergedShadowQueueItem*) */

void __thiscall
LightSource::cacheMergedShadowQueueItem(LightSource *this,MergedShadowQueueItem *param_1)

{
  *(MergedShadowQueueItem **)(*(long *)(this + 0x158) + 0x20) = param_1;
  return;
}


