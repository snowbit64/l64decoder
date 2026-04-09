// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free
// Entry Point: 00d5b36c
// Size: 128 bytes
// Signature: undefined __thiscall free(MyMicroAllocator * this, void * param_1, MemoryChunk * param_2)


/* HACD::MyMicroAllocator::free(void*, HACD::MemoryChunk*) */

void __thiscall
HACD::MyMicroAllocator::free(MyMicroAllocator *this,void *param_1,MemoryChunk *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(void **)(param_2 + 0x20) = param_1;
  plVar3 = *(long **)(this + 0x10);
  *(undefined8 *)param_1 = uVar2;
  *(int *)(param_2 + 0x18) = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (*param_2 != (MemoryChunk)0x0)) {
    (**(code **)(*(long *)(this + 8) + 8))(this + 8,param_2);
    (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_2 + 8));
    *param_2 = (MemoryChunk)0x0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  return;
}


