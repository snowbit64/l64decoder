// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTrafficSystem
// Entry Point: 0072f474
// Size: 192 bytes
// Signature: undefined __thiscall setTrafficSystem(VehicleNavigationMapGenerator * this, TrafficSystem * param_1)


/* VehicleNavigationMapGenerator::setTrafficSystem(TrafficSystem*) */

void __thiscall
VehicleNavigationMapGenerator::setTrafficSystem
          (VehicleNavigationMapGenerator *this,TrafficSystem *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  TrafficSystem *pTVar4;
  
  pTVar4 = *(TrafficSystem **)(this + 0x260);
  if (pTVar4 != param_1) {
    if (pTVar4 != (TrafficSystem *)0x0) {
      lVar1 = *(long *)(pTVar4 + 0x40);
      lVar2 = *(long *)(pTVar4 + 0x48) - lVar1;
      if (lVar2 != 0) {
        uVar3 = 0;
        do {
          if (*(VehicleNavigationMapGenerator **)(lVar1 + uVar3 * 8) == this + 0x58) {
            __dest = (void *)(lVar1 + uVar3 * 8);
            __n = *(long *)(pTVar4 + 0x48) - (long)(void *)((long)__dest + 8);
            if (__n != 0) {
              memmove(__dest,(void *)((long)__dest + 8),__n);
            }
            *(size_t *)(pTVar4 + 0x48) = (long)__dest + __n;
            *(TrafficSystem **)(this + 0x260) = param_1;
            if (param_1 == (TrafficSystem *)0x0) {
              return;
            }
            goto LAB_0072f4d8;
          }
          uVar3 = (ulong)((int)uVar3 + 1);
        } while (uVar3 < (ulong)(lVar2 >> 3));
      }
    }
    *(TrafficSystem **)(this + 0x260) = param_1;
    if (param_1 != (TrafficSystem *)0x0) {
LAB_0072f4d8:
      DeleteNotifier::addDeleteListener
                ((DeleteNotifier *)(param_1 + 0x38),(IDeleteListener *)(this + 0x58));
      return;
    }
  }
  return;
}


