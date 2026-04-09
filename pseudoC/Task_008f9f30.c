// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Task
// Entry Point: 008f9f30
// Size: 4 bytes
// Signature: undefined __thiscall ~Task(Task * this)


/* ThreadPool::Task::~Task() */

void __thiscall ThreadPool::Task::~Task(Task *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8f9f34);
  (*pcVar1)();
}


