// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueueSingleThreadedConsumer
// Entry Point: 00b354b8
// Size: 56 bytes
// Signature: undefined __thiscall ~LockFreeQueueSingleThreadedConsumer(LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Command> * this)


/* LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Command>::~LockFreeQueueSingleThreadedConsumer()
    */

void __thiscall
LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Command>::
~LockFreeQueueSingleThreadedConsumer
          (LockFreeQueueSingleThreadedConsumer<ThreadedFileReader::Command> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 8) = *puVar1;
    operator_delete(puVar1);
    puVar1 = *(undefined8 **)(this + 8);
  }
  return;
}


