// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThreadPool
// Entry Point: 008f5d0c
// Size: 72 bytes
// Signature: undefined __thiscall ThreadPool(ThreadPool * this)


/* ThreadPool::ThreadPool() */

void __thiscall ThreadPool::ThreadPool(ThreadPool *this)

{
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 008f5d30 to 008f5d3b has its CatchHandler @ 008f5d68 */
  Mutex::Mutex((Mutex *)(this + 0x60),true);
                    /* try { // try from 008f5d40 to 008f5d47 has its CatchHandler @ 008f5d54 */
  Semaphore::Semaphore((Semaphore *)(this + 0x88),0);
  return;
}


