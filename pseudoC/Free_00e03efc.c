// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Free
// Entry Point: 00e03efc
// Size: 32 bytes
// Signature: undefined __thiscall Free(MemPoolT<80> * this, void * param_1)


/* tinyxml2::MemPoolT<80>::Free(void*) */

void __thiscall tinyxml2::MemPoolT<80>::Free(MemPoolT<80> *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0x68);
    *(void **)(this + 0x68) = param_1;
  }
  return;
}


