// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioSourceQueue
// Entry Point: 00a17bd4
// Size: 64 bytes
// Signature: undefined __thiscall AudioSourceQueue(AudioSourceQueue * this, SharedRenderArgs * param_1)


/* AudioSourceQueue::AudioSourceQueue(SharedRenderArgs&) */

void __thiscall AudioSourceQueue::AudioSourceQueue(AudioSourceQueue *this,SharedRenderArgs *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(SharedRenderArgs **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x28) = 0x40;
  pvVar1 = operator_new__(0x400);
  *(undefined4 *)(this + 0x18) = 0;
  *(void **)(this + 0x30) = pvVar1;
  return;
}


