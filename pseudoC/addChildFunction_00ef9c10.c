// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addChildFunction
// Entry Point: 00ef9c10
// Size: 532 bytes
// Signature: undefined __thiscall addChildFunction(BytecodeBuilder * this, uint param_1)


/* Luau::BytecodeBuilder::addChildFunction(unsigned int) */

ulong __thiscall Luau::BytecodeBuilder::addChildFunction(BytecodeBuilder *this,uint param_1)

{
  ulong uVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  void *__dest;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  void *__src;
  
  if ((*(ulong *)(this + 0x198) != 0) && (uVar12 = *(uint *)(this + 0x1a0), uVar12 != param_1)) {
    uVar10 = (ulong)param_1;
    uVar8 = *(long *)(this + 400) - 1;
    uVar7 = 0;
    do {
      uVar10 = uVar8 & uVar10;
      uVar4 = *(uint *)(*(long *)(this + 0x188) + uVar10 * 8);
      if (uVar4 == param_1) {
        uVar10 = (ulong)*(ushort *)(*(long *)(this + 0x188) + uVar10 * 8 + 4);
        goto LAB_00ef9dd4;
      }
      uVar1 = uVar7 + 1;
      uVar10 = uVar10 + uVar7 + 1;
      uVar7 = uVar1;
    } while (uVar4 != uVar12 && uVar1 < uVar8 || uVar4 != uVar12 && uVar1 == uVar8);
  }
  uVar10 = *(long *)(this + 0x70) - (long)*(void **)(this + 0x68);
  if ((uVar10 & 0x3fffe0000) == 0) {
    lVar6 = *(long *)(this + 400);
    if ((ulong)(lVar6 * 3) >> 2 <= *(ulong *)(this + 0x198)) {
      detail::
      DenseHashTable<unsigned_int,std::__ndk1::pair<unsigned_int,short>,std::__ndk1::pair<unsigned_int_const,short>,Luau::detail::ItemInterfaceMap<unsigned_int,short>,std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>>
      ::rehash();
      lVar6 = *(long *)(this + 400);
    }
    lVar5 = *(long *)(this + 0x188);
    uVar7 = lVar6 - 1U & (ulong)param_1;
    uVar10 = uVar10 >> 2;
    puVar9 = (uint *)(lVar5 + uVar7 * 8);
    uVar12 = *puVar9;
    if (uVar12 != *(uint *)(this + 0x1a0)) {
      lVar11 = 1;
      do {
        if (uVar12 == param_1) goto LAB_00ef9d24;
        uVar7 = uVar7 + lVar11;
        lVar11 = lVar11 + 1;
        uVar7 = uVar7 & lVar6 - 1U;
        puVar9 = (uint *)(lVar5 + uVar7 * 8);
        uVar12 = *puVar9;
      } while (uVar12 != *(uint *)(this + 0x1a0));
    }
    lVar6 = *(long *)(this + 0x198);
    *puVar9 = param_1;
    *(long *)(this + 0x198) = lVar6 + 1;
LAB_00ef9d24:
    puVar9 = *(uint **)(this + 0x70);
    puVar3 = *(uint **)(this + 0x78);
    *(short *)(lVar5 + uVar7 * 8 + 4) = (short)uVar10;
    if (puVar9 == puVar3) {
      __src = *(void **)(this + 0x68);
      uVar8 = (long)puVar9 - (long)__src;
      lVar6 = (long)uVar8 >> 2;
      uVar7 = lVar6 + 1;
      if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar7 <= (ulong)((long)uVar8 >> 1)) {
        uVar7 = (long)uVar8 >> 1;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar7 = 0x3fffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest = (void *)0x0;
        puVar9 = (uint *)(lVar6 * 4);
        pvVar2 = (void *)0x0;
        *puVar9 = param_1;
      }
      else {
        if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar7 << 2);
        puVar9 = (uint *)((long)__dest + lVar6 * 4);
        pvVar2 = (void *)((long)__dest + uVar7 * 4);
        *puVar9 = param_1;
      }
      if (0 < (long)uVar8) {
        memcpy(__dest,__src,uVar8);
      }
      *(void **)(this + 0x68) = __dest;
      *(uint **)(this + 0x70) = puVar9 + 1;
      *(void **)(this + 0x78) = pvVar2;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar9 = param_1;
      *(uint **)(this + 0x70) = puVar9 + 1;
    }
  }
  else {
    uVar10 = 0xffff;
  }
LAB_00ef9dd4:
  return uVar10 & 0xffffffff;
}


