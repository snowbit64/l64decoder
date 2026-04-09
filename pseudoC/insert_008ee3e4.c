// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 008ee3e4
// Size: 576 bytes
// Signature: undefined __thiscall insert(vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>> * this, __wrap_iter param_1, pair * param_2)


/* std::__ndk1::vector<std::__ndk1::pair<unsigned int, BaseTerrainSyncer::SpanSetPair>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, BaseTerrainSyncer::SpanSetPair> >
   >::insert(std::__ndk1::__wrap_iter<std::__ndk1::pair<unsigned int,
   BaseTerrainSyncer::SpanSetPair> const*>, std::__ndk1::pair<unsigned int,
   BaseTerrainSyncer::SpanSetPair>&&) */

undefined8 * __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>>
::insert(vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>>
         *this,__wrap_iter param_1,pair *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *__src;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>>
  *local_50;
  long local_48;
  
  __src = (undefined8 *)(ulong)param_1;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)this;
  puVar1 = *(undefined8 **)(this + 8);
  lVar14 = (long)__src - lVar7 >> 5;
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    puVar13 = __src;
    if (__src == puVar1) {
      uVar16 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_2 + 4);
      __src[1] = *(undefined8 *)(param_2 + 2);
      *__src = uVar16;
      __src[3] = uVar15;
      __src[2] = uVar11;
      *(undefined8 **)(this + 8) = __src + 4;
    }
    else {
      uVar8 = (long)puVar1 + (-0x20 - (long)__src);
      puVar4 = puVar1;
      for (puVar12 = (undefined8 *)((long)__src + (uVar8 & 0xffffffffffffffe0)); puVar12 < puVar1;
          puVar12 = puVar12 + 4) {
        uVar16 = *puVar12;
        uVar15 = puVar12[3];
        uVar11 = puVar12[2];
        puVar4[1] = puVar12[1];
        *puVar4 = uVar16;
        puVar4[3] = uVar15;
        puVar4[2] = uVar11;
        puVar4 = puVar4 + 4;
      }
      *(undefined8 **)(this + 8) = puVar4;
      if (uVar8 != 0) {
        lVar9 = ((long)uVar8 >> 5) << 5;
        do {
          lVar2 = lVar9 + -0x20;
          *(pair *)(puVar1 + -4) = *(pair *)((long)__src + lVar9 + -0x20);
          uVar15 = *(undefined8 *)((long)__src + lVar9 + -0x10);
          uVar11 = *(undefined8 *)((long)__src + lVar9 + -0x18);
          puVar1[-1] = *(undefined8 *)((long)__src + lVar9 + -8);
          puVar1[-2] = uVar15;
          puVar1[-3] = uVar11;
          lVar9 = lVar2;
          puVar1 = puVar1 + -4;
        } while (lVar2 != 0);
      }
      lVar7 = lVar7 + lVar14 * 0x20;
      *(pair *)__src = *param_2;
      uVar15 = *(undefined8 *)(param_2 + 4);
      uVar11 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(lVar7 + 0x10) = uVar15;
      *(undefined8 *)(lVar7 + 8) = uVar11;
    }
  }
  else {
    uVar8 = ((long)puVar1 - lVar7 >> 5) + 1;
    if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)*(undefined8 **)(this + 0x10) - lVar7;
    uVar10 = (long)uVar6 >> 4;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    local_50 = this + 0x10;
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar8 << 5);
    }
    local_68 = (undefined8 *)((long)local_70 + lVar14 * 0x20);
    local_58 = (void *)((long)local_70 + uVar8 * 0x20);
    local_60 = local_68;
                    /* try { // try from 008ee538 to 008ee543 has its CatchHandler @ 008ee624 */
    __split_buffer<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>&>
    ::push_back((__split_buffer<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>&>
                 *)&local_70,param_2);
    puVar13 = local_68;
    sVar5 = (long)__src - (long)*(void **)this;
    local_68 = (undefined8 *)((long)local_68 - sVar5);
    if (0 < (long)sVar5) {
      memcpy(local_68,*(void **)this,sVar5);
    }
    lVar7 = *(long *)(this + 8);
    sVar5 = lVar7 - (long)__src;
    if (0 < (long)sVar5) {
      memcpy(local_60,__src,sVar5);
      local_60 = (undefined8 *)((long)local_60 + sVar5);
      lVar7 = *(long *)(this + 8);
    }
    local_70 = *(void **)this;
    *(undefined8 **)this = local_68;
    *(undefined8 **)(this + 8) = local_60;
    uVar11 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_58;
    local_60 = (undefined8 *)lVar7;
    if (lVar7 - (long)local_70 != 0) {
      local_60 = (undefined8 *)
                 (lVar7 + ((lVar7 - (long)local_70) - 0x20U >> 5 ^ 0xffffffffffffffff) * 0x20);
    }
    local_68 = (undefined8 *)local_70;
    local_58 = (void *)uVar11;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


