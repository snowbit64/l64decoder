// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00982ee4
// Size: 680 bytes
// Signature: undefined __thiscall insert(vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>> * this, __wrap_iter param_1, ConnectionShapeData * param_2)


/* std::__ndk1::vector<MeshSplitManager::ConnectionShapeData,
   std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>
   >::insert(std::__ndk1::__wrap_iter<MeshSplitManager::ConnectionShapeData const*>,
   MeshSplitManager::ConnectionShapeData&&) */

undefined8 * __thiscall
std::__ndk1::
vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
::insert(vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
         *this,__wrap_iter param_1,ConnectionShapeData *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *__src;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
  *local_60;
  long local_58;
  
  __src = (undefined8 *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    puVar10 = __src;
    if (__src == puVar1) {
      uVar8 = *(undefined8 *)(param_2 + 0xc);
      uVar13 = *(undefined8 *)(param_2 + 8);
      uVar12 = *(undefined8 *)param_2;
      *(undefined8 *)((long)__src + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)((long)__src + 0xc) = uVar8;
      __src[1] = uVar13;
      *__src = uVar12;
      *(long *)(this + 8) = (long)__src + 0x1c;
    }
    else {
      sVar4 = (long)puVar1 + (-0x1c - (long)__src);
      puVar3 = puVar1;
      for (puVar5 = (undefined8 *)((long)puVar1 - 0x1c); puVar5 < puVar1;
          puVar5 = (undefined8 *)((long)puVar5 + 0x1c)) {
        uVar8 = *(undefined8 *)((long)puVar5 + 0xc);
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        *(undefined8 *)((long)puVar3 + 0x14) = *(undefined8 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)puVar3 + 0xc) = uVar8;
        puVar3[1] = uVar13;
        *puVar3 = uVar12;
        puVar3 = (undefined8 *)((long)puVar3 + 0x1c);
      }
      *(undefined8 **)(this + 8) = puVar3;
      if (sVar4 != 0) {
        memmove((void *)((long)puVar1 - sVar4),__src,sVar4);
      }
      uVar8 = *(undefined8 *)(param_2 + 0xc);
      uVar13 = *(undefined8 *)(param_2 + 8);
      uVar12 = *(undefined8 *)param_2;
      *(undefined8 *)((long)__src + 0x14) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)((long)__src + 0xc) = uVar8;
      __src[1] = uVar13;
      *__src = uVar12;
    }
  }
  else {
    lVar11 = *(long *)this;
    uVar7 = ((long)puVar1 - lVar11 >> 2) * 0x6db6db6db6db6db7 + 1;
    if (0x924924924924924 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x10) - lVar11 >> 2;
    uVar9 = lVar6 * -0x2492492492492492;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    local_60 = this + 0x10;
    if (0x492492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar7 = 0x924924924924924;
    }
    if (uVar7 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0x924924924924924 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_80 = operator_new(uVar7 * 0x1c);
    }
    local_78 = (undefined8 *)((long)local_80 + ((long)__src - lVar11 >> 2) * 4);
    local_68 = (void *)((long)local_80 + uVar7 * 0x1c);
    local_70 = local_78;
                    /* try { // try from 00983064 to 0098306f has its CatchHandler @ 0098318c */
    __split_buffer<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&>
    ::push_back((__split_buffer<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&>
                 *)&local_80,param_2);
    puVar10 = local_78;
    sVar4 = (long)__src - (long)*(void **)this;
    local_78 = (undefined8 *)((long)local_78 - sVar4);
    if (0 < (long)sVar4) {
      memcpy(local_78,*(void **)this,sVar4);
    }
    lVar11 = *(long *)(this + 8);
    sVar4 = lVar11 - (long)__src;
    if (0 < (long)sVar4) {
      memcpy(local_70,__src,sVar4);
      local_70 = (undefined8 *)((long)local_70 + (sVar4 / 0x1c) * 0x1c);
      lVar11 = *(long *)(this + 8);
    }
    local_80 = *(void **)this;
    *(undefined8 **)this = local_78;
    *(undefined8 **)(this + 8) = local_70;
    uVar8 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_68;
    local_70 = (undefined8 *)lVar11;
    if (lVar11 - (long)local_80 != 0) {
      local_70 = (undefined8 *)
                 (lVar11 + (((lVar11 - (long)local_80) - 0x1cU) / 0x1c ^ 0xffffffffffffffff) * 0x1c)
      ;
    }
    local_78 = (undefined8 *)local_80;
    local_68 = (void *)uVar8;
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


