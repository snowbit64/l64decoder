// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_malloc
// Entry Point: 00d5bc74
// Size: 52 bytes
// Signature: undefined __thiscall heap_malloc(MyHeapManager * this, ulong param_1)


/* HACD::MyHeapManager::heap_malloc(unsigned long) */

void __thiscall HACD::MyHeapManager::heap_malloc(MyHeapManager *this,ulong param_1)

{
  if (param_1 < 0x101) {
                    /* WARNING: Could not recover jumptable at 0x00d5bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(this + 0x10))();
    return;
  }
  malloc(param_1);
  return;
}


