// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LockFreeQueue
// Entry Point: 00b35578
// Size: 84 bytes
// Signature: undefined __thiscall ~LockFreeQueue(LockFreeQueue<ThreadedFileReader::Buffer> * this)


/* LockFreeQueue<ThreadedFileReader::Buffer>::~LockFreeQueue() */

void __thiscall
LockFreeQueue<ThreadedFileReader::Buffer>::~LockFreeQueue
          (LockFreeQueue<ThreadedFileReader::Buffer> *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)this;
    *(undefined8 *)this = *puVar2;
    if ((void *)puVar2[1] != (void *)0x0) {
      operator_delete__((void *)puVar2[1]);
    }
    operator_delete(puVar2);
    lVar1 = *(long *)this;
  }
  return;
}


