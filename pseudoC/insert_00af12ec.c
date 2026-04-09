// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00af12ec
// Size: 736 bytes
// Signature: undefined __thiscall insert(vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>> * this, __wrap_iter param_1, Range * param_2)


/* std::__ndk1::vector<SubAllocator::Range, std::__ndk1::allocator<SubAllocator::Range>
   >::insert(std::__ndk1::__wrap_iter<SubAllocator::Range const*>, SubAllocator::Range&&) */

undefined8 * __thiscall
std::__ndk1::vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>>::insert
          (vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>> *this,
          __wrap_iter param_1,Range *param_2)

{
  undefined8 *__src;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>> *local_50;
  long local_48;
  undefined8 *puVar9;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = *(ulong *)this;
  puVar1 = *(undefined8 **)(this + 8);
  uVar11 = param_1 - uVar6;
  __src = (undefined8 *)(uVar6 + (uVar11 & 0xfffffffffffffff8));
  if (*(undefined8 **)(this + 0x10) <= puVar1) {
    uVar3 = ((long)((long)puVar1 - uVar6) >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)*(undefined8 **)(this + 0x10) - uVar6;
    uVar14 = (long)uVar6 >> 2;
    if (uVar3 <= uVar14) {
      uVar3 = uVar14;
    }
    local_50 = this + 0x10;
    if (0x7ffffffffffffff7 < uVar6) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar3 << 3);
    }
    local_68 = (undefined8 *)((long)local_70 + ((long)uVar11 >> 3) * 8);
    local_58 = (void *)((long)local_70 + uVar3 * 8);
    local_60 = local_68;
                    /* try { // try from 00af1410 to 00af141b has its CatchHandler @ 00af15cc */
    __split_buffer<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>&>::push_back
              ((__split_buffer<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>&> *)
               &local_70,param_2);
    puVar15 = local_68;
    sVar4 = (long)__src - (long)*(void **)this;
    local_68 = (undefined8 *)((long)local_68 - sVar4);
    if (0 < (long)sVar4) {
      memcpy(local_68,*(void **)this,sVar4);
    }
    lVar5 = *(long *)(this + 8);
    sVar4 = lVar5 - (long)__src;
    if (0 < (long)sVar4) {
      memcpy(local_60,__src,sVar4);
      local_60 = (undefined8 *)((long)local_60 + sVar4);
      lVar5 = *(long *)(this + 8);
    }
    local_70 = *(void **)this;
    *(undefined8 **)this = local_68;
    *(undefined8 **)(this + 8) = local_60;
    uVar7 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_58;
    local_60 = (undefined8 *)lVar5;
    if (lVar5 - (long)local_70 != 0) {
      local_60 = (undefined8 *)
                 (lVar5 + ((lVar5 - (long)local_70) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
    }
    local_68 = (undefined8 *)local_70;
    local_58 = (void *)uVar7;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
    goto LAB_00af1588;
  }
  puVar15 = __src;
  if (__src == puVar1) {
    *__src = *(undefined8 *)param_2;
    *(undefined8 **)(this + 8) = __src + 1;
    goto LAB_00af1588;
  }
  uVar3 = (long)puVar1 + (-8 - (long)__src);
  uVar14 = uVar3 & 0xfffffffffffffff8;
  puVar8 = (undefined8 *)((long)__src + uVar14);
  puVar13 = puVar1;
  if (puVar8 < puVar1) {
    uVar12 = uVar11 & 0xfffffffffffffff8;
    puVar13 = (undefined8 *)(uVar12 + uVar6 + uVar14 + 8);
    puVar10 = puVar1;
    if (puVar1 <= puVar13) {
      puVar10 = puVar13;
    }
    uVar14 = (long)puVar10 + (~uVar6 - (uVar12 + uVar14));
    puVar10 = puVar1;
    if (0x17 < uVar14) {
      puVar13 = (undefined8 *)(uVar12 + uVar6 + (uVar3 & 0xfffffffffffffff8) + 8);
      puVar9 = puVar1;
      if (puVar1 <= puVar13) {
        puVar9 = puVar13;
      }
      lVar5 = ((long)uVar3 >> 3) + ((long)uVar11 >> 3);
      uVar11 = (long)puVar9 + (~uVar6 - (uVar12 + (uVar3 & 0xfffffffffffffff8)));
      if (((undefined8 *)(uVar6 + (lVar5 + (uVar11 >> 3)) * 8 + 8) <= puVar1) ||
         ((undefined8 *)((long)puVar1 + (uVar11 & 0xfffffffffffffff8) + 8) <= puVar8)) {
        uVar11 = (uVar14 >> 3) + 1;
        puVar13 = puVar1 + 2;
        uVar14 = uVar11 & 0x3ffffffffffffffc;
        puVar10 = (undefined8 *)(uVar6 + lVar5 * 8 + 0x10);
        puVar8 = puVar8 + uVar14;
        uVar6 = uVar14;
        do {
          puVar9 = puVar10 + -1;
          uVar7 = puVar10[-2];
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          puVar10 = puVar10 + 4;
          uVar6 = uVar6 - 4;
          puVar13[-1] = *puVar9;
          puVar13[-2] = uVar7;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar6 != 0);
        puVar13 = puVar1 + uVar14;
        puVar10 = puVar1 + uVar14;
        if (uVar11 == uVar14) goto LAB_00af156c;
      }
    }
    do {
      puVar9 = puVar8 + 1;
      *puVar10 = *puVar8;
      puVar8 = puVar9;
      puVar13 = puVar10 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar9 < puVar1);
  }
LAB_00af156c:
  *(undefined8 **)(this + 8) = puVar13;
  if (uVar3 != 0) {
    memmove(puVar1 + -((long)uVar3 >> 3),__src,uVar3);
  }
  *__src = *(undefined8 *)param_2;
LAB_00af1588:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar15;
}


