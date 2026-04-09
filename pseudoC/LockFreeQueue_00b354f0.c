// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueue
// Entry Point: 00b354f0
// Size: 60 bytes
// Signature: undefined __thiscall ~LockFreeQueue(LockFreeQueue<ThreadedFileReader::Command> * this)


/* LockFreeQueue<ThreadedFileReader::Command>::~LockFreeQueue() */

void __thiscall
LockFreeQueue<ThreadedFileReader::Command>::~LockFreeQueue
          (LockFreeQueue<ThreadedFileReader::Command> *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  while (lVar2 != 0) {
    puVar1 = *(undefined8 **)this;
    *(undefined8 *)this = *puVar1;
    operator_delete(puVar1);
    lVar2 = *(long *)this;
  }
  return;
}


