// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncBlitAll
// Entry Point: 0095fd40
// Size: 696 bytes
// Signature: undefined __thiscall syncBlitAll(MultiresTextureGpuUpdater * this, ICommandBuffer * param_1, bool param_2)


/* MultiresTextureGpuUpdater::syncBlitAll(ICommandBuffer*, bool) */

void __thiscall
MultiresTextureGpuUpdater::syncBlitAll
          (MultiresTextureGpuUpdater *this,ICommandBuffer *param_1,bool param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong __n;
  ulong uVar10;
  void *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 auStack_88 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(*(long *)(this + 0x110) + 0x18);
  if (uVar2 != 0) {
    lVar4 = 0;
    lVar5 = *(long *)(this + 0x118);
    puVar7 = auStack_88;
    do {
      lVar6 = *(long *)(lVar5 + 0xe0) + lVar4;
      lVar4 = lVar4 + 0x10;
      *puVar7 = *(undefined8 *)(lVar6 + 0x80);
      puVar7 = puVar7 + 1;
    } while ((ulong)uVar2 * 0x10 - lVar4 != 0);
  }
  (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar2,auStack_88,0,0,0,0);
  lVar4 = *(long *)(this + 0x120);
  lVar5 = *(long *)(this + 0x128);
  local_a0 = (void *)0x0;
  local_90 = (undefined8 *)0x0;
  if (lVar5 == lVar4) {
    local_a0 = (void *)0x0;
    local_98 = (undefined8 *)0x0;
  }
  else {
    local_98 = (undefined8 *)0x0;
    uVar8 = 0;
    do {
      if (((*(int *)(lVar4 + uVar8 * 0xf8 + 0x48) == 1) || (param_2)) &&
         (lVar6 = *(long *)(this + 0x110), *(int *)(lVar6 + 0x1c) != 0)) {
        uVar9 = 0;
        lVar4 = lVar4 + uVar8 * 0xf8 + 0x70;
        do {
          if (*(int *)(lVar6 + 0x18) != 0) {
            uVar10 = 0;
            do {
              if (local_98 == local_90) {
                __n = (long)local_98 - (long)local_a0;
                uVar1 = ((long)__n >> 3) + 1;
                if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 0095ffe0 to 0095fff3 has its CatchHandler @ 00960000 */
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
                    /* try { // try from 0095ff14 to 0095ff17 has its CatchHandler @ 0095fffc */
                  __dest = operator_new(uVar1 << 3);
                }
                puVar7 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                local_98 = puVar7 + 1;
                *puVar7 = *(undefined8 *)(lVar4 + uVar10 * 8);
                if (0 < (long)__n) {
                  memcpy(__dest,local_a0,__n);
                }
                local_90 = (undefined8 *)((long)__dest + uVar1 * 8);
                if (local_a0 != (void *)0x0) {
                  operator_delete(local_a0);
                }
              }
              else {
                *local_98 = *(undefined8 *)(lVar4 + uVar10 * 8);
                __dest = local_a0;
                local_98 = local_98 + 1;
              }
              local_a0 = __dest;
              lVar6 = *(long *)(this + 0x110);
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(lVar6 + 0x18));
          }
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x20;
        } while (uVar9 < *(uint *)(lVar6 + 0x1c));
        lVar4 = *(long *)(this + 0x120);
        lVar5 = *(long *)(this + 0x128);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar9 = (lVar5 - lVar4 >> 3) * -0x1084210842108421;
    } while (uVar8 <= uVar9 && uVar9 - uVar8 != 0);
  }
                    /* try { // try from 0095ff88 to 0095ffa3 has its CatchHandler @ 0095fff8 */
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,0,0,(ulong)((long)local_98 - (long)local_a0) >> 3,local_a0,1,8);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


