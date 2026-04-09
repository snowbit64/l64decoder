// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Task
// Entry Point: 008f9e00
// Size: 36 bytes
// Signature: undefined __thiscall ~Task(Task * this)


/* ThreadPool::Task::~Task() */

void __thiscall ThreadPool::Task::~Task(Task *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


