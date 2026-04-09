// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ThreadPoolTaskManager
// Entry Point: 00ba4140
// Size: 92 bytes
// Signature: undefined __thiscall ThreadPoolTaskManager(ThreadPoolTaskManager * this, ThreadPool * param_1)


/* ThreadPoolTaskManager::ThreadPoolTaskManager(ThreadPool*) */

void __thiscall
ThreadPoolTaskManager::ThreadPoolTaskManager(ThreadPoolTaskManager *this,ThreadPool *param_1)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 00ba416c to 00ba4177 has its CatchHandler @ 00ba41ac */
  Mutex::Mutex((Mutex *)(this + 0x40),true);
                    /* try { // try from 00ba417c to 00ba4183 has its CatchHandler @ 00ba419c */
  Semaphore::Semaphore((Semaphore *)(this + 0x68),0);
  *(ThreadPool **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  return;
}


