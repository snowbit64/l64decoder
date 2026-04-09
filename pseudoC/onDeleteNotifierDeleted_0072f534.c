// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDeleteNotifierDeleted
// Entry Point: 0072f534
// Size: 136 bytes
// Signature: undefined __cdecl onDeleteNotifierDeleted(DeleteNotifier * param_1)


/* VehicleNavigationMapGenerator::onDeleteNotifierDeleted(DeleteNotifier*) */

void VehicleNavigationMapGenerator::onDeleteNotifierDeleted(DeleteNotifier *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x260);
  if (lVar4 != 0) {
    lVar1 = *(long *)(lVar4 + 0x40);
    lVar2 = *(long *)(lVar4 + 0x48) - lVar1;
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(DeleteNotifier **)(lVar1 + uVar3 * 8) == param_1 + 0x58) {
          __dest = (void *)(lVar1 + uVar3 * 8);
          __n = *(long *)(lVar4 + 0x48) - (long)(void *)((long)__dest + 8);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 8),__n);
          }
          *(size_t *)(lVar4 + 0x48) = (long)__dest + __n;
          break;
        }
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (uVar3 < (ulong)(lVar2 >> 3));
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return;
}


