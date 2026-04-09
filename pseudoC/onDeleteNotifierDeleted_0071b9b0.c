// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDeleteNotifierDeleted
// Entry Point: 0071b9b0
// Size: 228 bytes
// Signature: undefined __cdecl onDeleteNotifierDeleted(DeleteNotifier * param_1)


/* TrafficSystem::onDeleteNotifierDeleted(DeleteNotifier*) */

void TrafficSystem::onDeleteNotifierDeleted(DeleteNotifier *param_1)

{
  uint *puVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  size_t __n;
  VehicleNavigationMapGenerator *pVVar4;
  TrafficVehicle *this;
  ulong uVar5;
  
  pVVar4 = *(VehicleNavigationMapGenerator **)(param_1 + 0x7268);
  if (pVVar4 != (VehicleNavigationMapGenerator *)0x0) {
    puVar1 = (uint *)(param_1 + 0x4d18);
    if (*puVar1 != 0) {
      TrafficVehicle::deleteNavigationObstacle((TrafficVehicle *)(param_1 + 0x4d20),pVVar4);
      if (1 < *puVar1) {
        uVar5 = 1;
        this = (TrafficVehicle *)(param_1 + 0x50c8);
        do {
          TrafficVehicle::deleteNavigationObstacle
                    (this,*(VehicleNavigationMapGenerator **)(param_1 + 0x7268));
          uVar5 = uVar5 + 1;
          this = this + 0x3a8;
        } while (uVar5 < *puVar1);
      }
      pVVar4 = *(VehicleNavigationMapGenerator **)(param_1 + 0x7268);
    }
    lVar2 = *(long *)(pVVar4 + 0x40);
    lVar3 = *(long *)(pVVar4 + 0x48) - lVar2;
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        if (*(DeleteNotifier **)(lVar2 + uVar5 * 8) == param_1 + 0x58) {
          __dest = (void *)(lVar2 + uVar5 * 8);
          __n = *(long *)(pVVar4 + 0x48) - (long)(void *)((long)__dest + 8);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 8),__n);
          }
          *(size_t *)(pVVar4 + 0x48) = (long)__dest + __n;
          break;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)(lVar3 >> 3));
    }
  }
  *(undefined8 *)(param_1 + 0x7268) = 0;
  return;
}


