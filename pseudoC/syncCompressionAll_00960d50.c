// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncCompressionAll
// Entry Point: 00960d50
// Size: 580 bytes
// Signature: undefined __thiscall syncCompressionAll(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1)


/* MultiresTextureGpuUpdater::syncCompressionAll(ICommandBuffer*) */

void __thiscall
MultiresTextureGpuUpdater::syncCompressionAll
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 0x120);
  lVar6 = *(long *)(this + 0x128);
  local_80 = (void *)0x0;
  local_70 = (undefined8 *)0x0;
  if (lVar6 == lVar5) {
    local_80 = (void *)0x0;
    local_78 = (undefined8 *)0x0;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uVar8 = 0;
    do {
      if ((*(int *)(lVar5 + uVar8 * 0xf8 + 0x48) == 1) &&
         (lVar7 = *(long *)(this + 0x110), *(int *)(lVar7 + 0x1c) != 0)) {
        uVar9 = 0;
        lVar5 = lVar5 + uVar8 * 0xf8 + 0x70;
        do {
          if (*(int *)(lVar7 + 0x18) != 0) {
            uVar10 = 0;
            do {
              if (local_78 == local_70) {
                __n = (long)local_78 - (long)local_80;
                uVar1 = ((long)__n >> 3) + 1;
                if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00960f7c to 00960f8f has its CatchHandler @ 00960f9c */
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
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 00960eb0 to 00960eb3 has its CatchHandler @ 00960f98 */
                  __dest = operator_new(uVar1 << 3);
                }
                puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                local_78 = puVar2 + 1;
                *puVar2 = *(undefined8 *)(lVar5 + uVar10 * 8);
                if (0 < (long)__n) {
                  memcpy(__dest,local_80,__n);
                }
                local_70 = (undefined8 *)((long)__dest + uVar1 * 8);
                if (local_80 != (void *)0x0) {
                  operator_delete(local_80);
                }
              }
              else {
                *local_78 = *(undefined8 *)(lVar5 + uVar10 * 8);
                __dest = local_80;
                local_78 = local_78 + 1;
              }
              local_80 = __dest;
              lVar7 = *(long *)(this + 0x110);
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(lVar7 + 0x18));
          }
          uVar9 = uVar9 + 1;
          lVar5 = lVar5 + 0x20;
        } while (uVar9 < *(uint *)(lVar7 + 0x1c));
        lVar5 = *(long *)(this + 0x120);
        lVar6 = *(long *)(this + 0x128);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar9 = (lVar6 - lVar5 >> 3) * -0x1084210842108421;
    } while (uVar8 <= uVar9 && uVar9 - uVar8 != 0);
  }
                    /* try { // try from 00960f24 to 00960f3f has its CatchHandler @ 00960f94 */
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,0,0,(ulong)((long)local_78 - (long)local_80) >> 3,local_80,3,8);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


