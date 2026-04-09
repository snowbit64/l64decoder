// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_realloc
// Entry Point: 00d5bd00
// Size: 188 bytes
// Signature: undefined __thiscall heap_realloc(MyHeapManager * this, void * param_1, ulong param_2)


/* HACD::MyHeapManager::heap_realloc(void*, unsigned long) */

void * __thiscall HACD::MyHeapManager::heap_realloc(MyHeapManager *this,void *param_1,ulong param_2)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  
  lVar1 = (**(code **)(**(long **)(this + 0x10) + 0x10))();
  if (lVar1 != 0) {
    pvVar2 = (void *)(**(code **)(*(long *)this + 0x18))(this,param_2);
    __n = (ulong)*(uint *)(lVar1 + 0x28);
    if (param_2 <= *(uint *)(lVar1 + 0x28)) {
      __n = param_2;
    }
    memcpy(pvVar2,param_1,__n);
    (**(code **)(**(long **)(this + 0x10) + 8))(*(long **)(this + 0x10),param_1,lVar1);
    return pvVar2;
  }
  pvVar2 = realloc(param_1,param_2);
  return pvVar2;
}


