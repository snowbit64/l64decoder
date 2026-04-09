// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueueSingleThreadedConsumer
// Entry Point: 00b3552c
// Size: 76 bytes
// Signature: undefined __thiscall ~LockFreeQueueSingleThreadedConsumer(LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Buffer> * this)


/* LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Buffer>::~LockFreeQueueSingleThreadedConsumer()
    */

void __thiscall
LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Buffer>::
~LockFreeQueueSingleThreadedConsumer
          (LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Buffer> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar2[1];
    *(undefined8 *)(this + 8) = *puVar2;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(puVar2);
    puVar2 = *(undefined8 **)(this + 8);
  }
  return;
}


