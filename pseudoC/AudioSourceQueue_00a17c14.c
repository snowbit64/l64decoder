// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSourceQueue
// Entry Point: 00a17c14
// Size: 64 bytes
// Signature: undefined __thiscall ~AudioSourceQueue(AudioSourceQueue * this)


/* AudioSourceQueue::~AudioSourceQueue() */

void __thiscall AudioSourceQueue::~AudioSourceQueue(AudioSourceQueue *this)

{
  void *pvVar1;
  
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


