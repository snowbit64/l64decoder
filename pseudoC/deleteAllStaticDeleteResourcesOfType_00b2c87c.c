// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteAllStaticDeleteResourcesOfType
// Entry Point: 00b2c87c
// Size: 188 bytes
// Signature: undefined __thiscall deleteAllStaticDeleteResourcesOfType(ResourceManager * this, uint param_1)


/* ResourceManager::deleteAllStaticDeleteResourcesOfType(unsigned int) */

void __thiscall
ResourceManager::deleteAllStaticDeleteResourcesOfType(ResourceManager *this,uint param_1)

{
  size_t __n;
  uint uVar1;
  int iVar2;
  long **__dest;
  long *plVar3;
  
  Mutex::enterCriticalSection();
  for (__dest = *(long ***)(this + 0x30); __dest != *(long ***)(this + 0x38); __dest = __dest + 1) {
    while( true ) {
      plVar3 = *__dest;
      uVar1 = Resource::getResourceType();
      if (uVar1 != param_1) break;
      iVar2 = FUN_00f27700(0xffffffff,plVar3 + 1);
      if (iVar2 < 2) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      __n = *(long *)(this + 0x38) - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(long ***)(this + 0x38) = (long **)((long)__dest + __n);
      if (__dest == (long **)((long)__dest + __n)) goto LAB_00b2c920;
    }
  }
LAB_00b2c920:
  Mutex::leaveCriticalSection();
  return;
}


