// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystemDesc::Shape>
// Entry Point: 00a68550
// Size: 464 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystemDesc::Shape>(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> * this, Shape * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::Shape,
   std::__ndk1::allocator<FoliageSystemDesc::Shape>
   >::__push_back_slow_path<FoliageSystemDesc::Shape>(FoliageSystemDesc::Shape&&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::
__push_back_slow_path<FoliageSystemDesc::Shape>
          (vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *this,
          Shape *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  undefined4 *puVar12;
  void *pvVar13;
  void *pvVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = (long)uVar7 >> 4;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffffffffffdf < uVar7) {
    uVar1 = 0x7ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 5);
  }
  puVar12 = (undefined4 *)((long)pvVar4 + lVar10 * 0x20);
  *puVar12 = *(undefined4 *)param_1;
                    /* try { // try from 00a685fc to 00a68603 has its CatchHandler @ 00a68720 */
  vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::vector
            ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *)
             (puVar12 + 2),(vector *)(param_1 + 8));
  pvVar9 = *(void **)this;
  pvVar13 = *(void **)(this + 8);
  puVar2 = puVar12 + 8;
  pvVar11 = pvVar9;
  if (pvVar13 != pvVar9) {
    lVar10 = 0;
    do {
      *(undefined4 *)((long)puVar12 + lVar10 + -0x20) =
           *(undefined4 *)((long)pvVar13 + lVar10 + -0x20);
                    /* try { // try from 00a68634 to 00a68637 has its CatchHandler @ 00a68724 */
      vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::vector
                ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *)
                 ((long)puVar12 + lVar10 + -0x18),(vector *)((long)pvVar13 + lVar10 + -0x18));
      lVar10 = lVar10 + -0x20;
    } while ((void *)((long)pvVar13 + lVar10) != pvVar9);
    pvVar9 = *(void **)this;
    puVar12 = (undefined4 *)((long)puVar12 + lVar10);
    pvVar11 = *(void **)(this + 8);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x20);
  while (pvVar4 = pvVar11, pvVar4 != pvVar9) {
    pvVar13 = *(void **)((long)pvVar4 + -0x18);
    pvVar11 = (void *)((long)pvVar4 + -0x20);
    if (pvVar13 != (void *)0x0) {
      pvVar14 = pvVar13;
      pvVar6 = *(void **)((long)pvVar4 + -0x10);
      if (*(void **)((long)pvVar4 + -0x10) != pvVar13) {
        do {
          pvVar14 = (void *)((long)pvVar6 + -0x40);
          if ((*(byte *)((long)pvVar6 + -0x38) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -0x28));
          }
          pvVar6 = pvVar14;
        } while (pvVar14 != pvVar13);
        pvVar14 = *(void **)((long)pvVar4 + -0x18);
      }
      *(void **)((long)pvVar4 + -0x10) = pvVar13;
      operator_delete(pvVar14);
    }
  }
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


