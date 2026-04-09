// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncRenderAll
// Entry Point: 00960800
// Size: 532 bytes
// Signature: undefined __thiscall syncRenderAll(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1)


/* MultiresTextureGpuUpdater::syncRenderAll(ICommandBuffer*) */

void __thiscall
MultiresTextureGpuUpdater::syncRenderAll(MultiresTextureGpuUpdater *this,ICommandBuffer *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 0x120);
  lVar5 = *(long *)(this + 0x128);
  local_80 = (void *)0x0;
  local_70 = (undefined8 *)0x0;
  if (lVar5 == lVar6) {
    local_80 = (void *)0x0;
    local_78 = (undefined8 *)0x0;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uVar7 = 0;
    uVar9 = *(uint *)(this + 0x28);
    do {
      if (*(int *)(lVar6 + uVar7 * 0xf8 + 0x48) == 1 && uVar9 != 0) {
        uVar8 = 0;
        lVar6 = lVar6 + uVar7 * 0xf8 + 0x50;
        do {
          if (local_78 == local_70) {
            __n = (long)local_78 - (long)local_80;
            uVar1 = ((long)__n >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009609fc to 00960a0f has its CatchHandler @ 00960a1c */
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
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 0096092c to 0096092f has its CatchHandler @ 00960a18 */
              __dest = operator_new(uVar1 << 3);
            }
            puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
            local_78 = puVar2 + 1;
            *puVar2 = *(undefined8 *)(lVar6 + uVar8 * 8);
            if (0 < (long)__n) {
              memcpy(__dest,local_80,__n);
            }
            local_70 = (undefined8 *)((long)__dest + uVar1 * 8);
            if (local_80 != (void *)0x0) {
              operator_delete(local_80);
              uVar9 = *(uint *)(this + 0x28);
            }
          }
          else {
            *local_78 = *(undefined8 *)(lVar6 + uVar8 * 8);
            __dest = local_80;
            local_78 = local_78 + 1;
          }
          local_80 = __dest;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
        lVar6 = *(long *)(this + 0x120);
        lVar5 = *(long *)(this + 0x128);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar8 = (lVar5 - lVar6 >> 3) * -0x1084210842108421;
    } while (uVar7 <= uVar8 && uVar8 - uVar7 != 0);
  }
                    /* try { // try from 009609a4 to 009609bf has its CatchHandler @ 00960a14 */
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,(ulong)((long)local_78 - (long)local_80) >> 3,local_80,0,0,0,1);
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


