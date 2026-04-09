// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildGroups
// Entry Point: 00b7fe08
// Size: 448 bytes
// Signature: undefined __thiscall buildGroups(IndexedTriangleSetBuilder * this, vector * param_1)


/* IndexedTriangleSetBuilder::buildGroups(std::__ndk1::vector<IndexedTriangleSetBuilder::Group,
   std::__ndk1::allocator<IndexedTriangleSetBuilder::Group> >&) */

void __thiscall
IndexedTriangleSetBuilder::buildGroups(IndexedTriangleSetBuilder *this,vector *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  IndexedTriangleSetBuilder *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = this;
  std::__ndk1::
  __sort<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
            (*(Triangle **)(this + 0x18),*(Triangle **)(this + 0x20),(TriangleSorter *)&local_70);
  lVar5 = *(long *)(this + 0x18);
  uVar8 = (uint)((ulong)(*(long *)(this + 0x20) - lVar5) >> 4);
  if (uVar8 == 0) {
LAB_00b7ff7c:
    if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar9 = 0;
  do {
    uVar10 = uVar9;
    uVar2 = uVar8;
    if (uVar8 < uVar9 + 1) {
      uVar2 = uVar9 + 1;
    }
    do {
      uVar10 = uVar10 + 1;
      uVar11 = uVar2;
      if (uVar8 <= uVar10) break;
      uVar11 = uVar10;
    } while (*(int *)(lVar5 + (ulong)uVar10 * 0x10 + 0xc) ==
             *(int *)(lVar5 + (ulong)uVar9 * 0x10 + 0xc));
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
      *puVar3 = CONCAT44(uVar11 - uVar9,uVar9);
      *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    }
    else {
      __src = *(void **)param_1;
      __n = (long)puVar3 - (long)__src;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar6 = (long)*(undefined8 **)(param_1 + 0x10) - (long)__src;
      uVar7 = (long)uVar6 >> 2;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar6) {
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
      puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar3 = CONCAT44(uVar11 - uVar9,uVar9);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)param_1 = __dest;
      *(undefined8 **)(param_1 + 8) = puVar3 + 1;
      *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    if (uVar8 <= uVar11) goto LAB_00b7ff7c;
    lVar5 = *(long *)(this + 0x18);
    uVar9 = uVar11;
  } while( true );
}


