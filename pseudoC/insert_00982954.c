// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00982954
// Size: 556 bytes
// Signature: undefined __thiscall insert(vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>> * this, __wrap_iter param_1, pair * param_2)


/* std::__ndk1::vector<std::__ndk1::pair<unsigned int, MeshSplitManager::ConnectionData*>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int, MeshSplitManager::ConnectionData*> >
   >::insert(std::__ndk1::__wrap_iter<std::__ndk1::pair<unsigned int,
   MeshSplitManager::ConnectionData*> const*>, std::__ndk1::pair<unsigned int,
   MeshSplitManager::ConnectionData*>&&) */

undefined8 * __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>>
::insert(vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>>
         *this,__wrap_iter param_1,pair *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *__src;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>>
  *local_50;
  long local_48;
  
  __src = (undefined8 *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)this;
  puVar7 = *(undefined8 **)(this + 8);
  lVar14 = (long)__src - lVar6 >> 4;
  if (puVar7 < *(undefined8 **)(this + 0x10)) {
    puVar13 = __src;
    if (__src == puVar7) {
      uVar11 = *(undefined8 *)param_2;
      __src[1] = *(undefined8 *)(param_2 + 2);
      *__src = uVar11;
      *(undefined8 **)(this + 8) = __src + 2;
    }
    else {
      uVar8 = (long)puVar7 + (-0x10 - (long)__src);
      puVar3 = puVar7;
      for (puVar12 = (undefined8 *)((long)__src + (uVar8 & 0xfffffffffffffff0)); puVar12 < puVar7;
          puVar12 = puVar12 + 2) {
        uVar11 = *puVar12;
        puVar3[1] = puVar12[1];
        *puVar3 = uVar11;
        puVar3 = puVar3 + 2;
      }
      *(undefined8 **)(this + 8) = puVar3;
      if (uVar8 != 0) {
        puVar7 = puVar7 + -1;
        lVar9 = ((long)uVar8 >> 4) << 4;
        do {
          lVar1 = lVar9 + -0x10;
          *(pair *)(puVar7 + -1) = *(pair *)((long)__src + lVar9 + -0x10);
          *puVar7 = *(undefined8 *)((long)__src + lVar9 + -8);
          puVar7 = puVar7 + -2;
          lVar9 = lVar1;
        } while (lVar1 != 0);
      }
      *(pair *)__src = *param_2;
      *(undefined8 *)(lVar6 + lVar14 * 0x10 + 8) = *(undefined8 *)(param_2 + 2);
    }
  }
  else {
    uVar8 = ((long)puVar7 - lVar6 >> 4) + 1;
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined8 **)(this + 0x10) - lVar6;
    uVar10 = (long)uVar5 >> 3;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    local_50 = this + 0x10;
    if (0x7fffffffffffffef < uVar5) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar8 << 4);
    }
    local_68 = (undefined8 *)((long)local_70 + lVar14 * 0x10);
    local_58 = (void *)((long)local_70 + uVar8 * 0x10);
    local_60 = local_68;
                    /* try { // try from 00982a94 to 00982a9f has its CatchHandler @ 00982b80 */
    __split_buffer<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>&>
    ::push_back((__split_buffer<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>&>
                 *)&local_70,param_2);
    puVar13 = local_68;
    sVar4 = (long)__src - (long)*(void **)this;
    local_68 = (undefined8 *)((long)local_68 - sVar4);
    if (0 < (long)sVar4) {
      memcpy(local_68,*(void **)this,sVar4);
    }
    lVar6 = *(long *)(this + 8);
    sVar4 = lVar6 - (long)__src;
    if (0 < (long)sVar4) {
      memcpy(local_60,__src,sVar4);
      local_60 = (undefined8 *)((long)local_60 + sVar4);
      lVar6 = *(long *)(this + 8);
    }
    local_70 = *(void **)this;
    *(undefined8 **)this = local_68;
    *(undefined8 **)(this + 8) = local_60;
    uVar11 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_58;
    local_60 = (undefined8 *)lVar6;
    if (lVar6 - (long)local_70 != 0) {
      local_60 = (undefined8 *)
                 (lVar6 + ((lVar6 - (long)local_70) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
    }
    local_68 = (undefined8 *)local_70;
    local_58 = (void *)uVar11;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


