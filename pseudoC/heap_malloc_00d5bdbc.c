// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_malloc
// Entry Point: 00d5bdbc
// Size: 52 bytes
// Signature: undefined __thiscall heap_malloc(MyHeapManager * this, ulong param_1)


/* non-virtual thunk to HACD::MyHeapManager::heap_malloc(unsigned long) */

void __thiscall HACD::MyHeapManager::heap_malloc(MyHeapManager *this,ulong param_1)

{
  if (param_1 < 0x101) {
                    /* WARNING: Could not recover jumptable at 0x00d5bddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 8))();
    return;
  }
  malloc(param_1);
  return;
}


