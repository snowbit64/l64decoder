// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unregisterAgent
// Entry Point: 0072d8f8
// Size: 120 bytes
// Signature: undefined __thiscall unregisterAgent(VehicleNavigationMapGenerator * this, VehicleNavigationAgentEntity * param_1)


/* VehicleNavigationMapGenerator::unregisterAgent(VehicleNavigationAgentEntity*) */

void __thiscall
VehicleNavigationMapGenerator::unregisterAgent
          (VehicleNavigationMapGenerator *this,VehicleNavigationAgentEntity *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x120);
  lVar2 = *(long *)(this + 0x128);
  if (lVar1 != lVar2) {
    lVar3 = 0;
    do {
      if (*(VehicleNavigationAgentEntity **)(lVar1 + lVar3) == param_1) {
        __dest = (void *)(lVar1 + lVar3);
        __n = lVar2 - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x128) = (long)__dest + __n;
        return;
      }
      lVar3 = lVar3 + 8;
    } while (lVar1 + lVar3 != lVar2);
  }
  return;
}


