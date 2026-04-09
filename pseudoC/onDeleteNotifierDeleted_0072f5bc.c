// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDeleteNotifierDeleted
// Entry Point: 0072f5bc
// Size: 136 bytes
// Signature: undefined __thiscall onDeleteNotifierDeleted(VehicleNavigationMapGenerator * this, DeleteNotifier * param_1)


/* non-virtual thunk to VehicleNavigationMapGenerator::onDeleteNotifierDeleted(DeleteNotifier*) */

void __thiscall
VehicleNavigationMapGenerator::onDeleteNotifierDeleted
          (VehicleNavigationMapGenerator *this,DeleteNotifier *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x208);
  if (lVar4 != 0) {
    lVar1 = *(long *)(lVar4 + 0x40);
    lVar2 = *(long *)(lVar4 + 0x48) - lVar1;
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(VehicleNavigationMapGenerator **)(lVar1 + uVar3 * 8) == this) {
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
    *(undefined8 *)(this + 0x208) = 0;
  }
  return;
}


