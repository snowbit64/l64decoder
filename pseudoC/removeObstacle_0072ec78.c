// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeObstacle
// Entry Point: 0072ec78
// Size: 320 bytes
// Signature: undefined __thiscall removeObstacle(VehicleNavigationMapGenerator * this, ulonglong param_1)


/* VehicleNavigationMapGenerator::removeObstacle(unsigned long long) */

void __thiscall
VehicleNavigationMapGenerator::removeObstacle(VehicleNavigationMapGenerator *this,ulonglong param_1)

{
  ulong uVar1;
  DynamicAvoidance *this_00;
  void *pvVar2;
  void *__dest;
  ulonglong *puVar3;
  ulong __n;
  
  this_00 = *(DynamicAvoidance **)(this + 0x140);
  if (this_00 == (DynamicAvoidance *)0x0) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    if (this_00[0x88] == (DynamicAvoidance)0x0) {
      puVar3 = *(ulonglong **)(this + 0x220);
      if (puVar3 != *(ulonglong **)(this + 0x228)) {
        *puVar3 = param_1;
        *(ulonglong **)(this + 0x220) = puVar3 + 1;
        return;
      }
      pvVar2 = *(void **)(this + 0x218);
      __n = (long)puVar3 - (long)pvVar2;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 2)) {
        uVar1 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
      }
      puVar3 = (ulonglong *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar3 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,pvVar2,__n);
      }
      *(void **)(this + 0x218) = __dest;
      *(ulonglong **)(this + 0x220) = puVar3 + 1;
      *(void **)(this + 0x228) = (void *)((long)__dest + uVar1 * 8);
      param_1 = (ulonglong)pvVar2;
      if (pvVar2 == (void *)0x0) {
        return;
      }
      goto LAB_0072eccc;
    }
    DynamicAvoidance::removeObstacle(this_00,(Obstacle *)param_1);
  }
  pvVar2 = *(void **)param_1;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 8) = pvVar2;
    operator_delete(pvVar2);
  }
LAB_0072eccc:
  operator_delete((void *)param_1);
  return;
}


