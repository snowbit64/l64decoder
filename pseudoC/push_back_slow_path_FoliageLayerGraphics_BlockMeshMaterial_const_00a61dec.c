// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageLayerGraphics::BlockMeshMaterial_const&>
// Entry Point: 00a61dec
// Size: 600 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageLayerGraphics::BlockMeshMaterial_const&>(vector<FoliageLayerGraphics::BlockMeshMaterial,std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>> * this, BlockMeshMaterial * param_1)


/* void std::__ndk1::vector<FoliageLayerGraphics::BlockMeshMaterial,
   std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>
   >::__push_back_slow_path<FoliageLayerGraphics::BlockMeshMaterial
   const&>(FoliageLayerGraphics::BlockMeshMaterial const&) */

void __thiscall
std::__ndk1::
vector<FoliageLayerGraphics::BlockMeshMaterial,std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>>
::__push_back_slow_path<FoliageLayerGraphics::BlockMeshMaterial_const&>
          (vector<FoliageLayerGraphics::BlockMeshMaterial,std::__ndk1::allocator<FoliageLayerGraphics::BlockMeshMaterial>>
           *this,BlockMeshMaterial *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar7 * -0x79435e50d79435e5 + 1;
  if (0x1af286bca1af286 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar11 = lVar9 * 0xd79435e50d79436;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0xd79435e50d7942 < (ulong)(lVar9 * -0x79435e50d79435e5)) {
    uVar1 = 0x1af286bca1af286;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x1af286bca1af286 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x98);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  puVar13 = (undefined8 *)((long)pvVar4 + lVar7 * 8);
  puVar13[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar13[0xc] = uVar17;
  puVar13[9] = uVar14;
  puVar13[8] = uVar10;
  puVar13[0xb] = uVar16;
  puVar13[10] = uVar15;
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  puVar13[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar13[1] = uVar14;
  *puVar13 = uVar10;
  puVar13[3] = uVar16;
  puVar13[2] = uVar15;
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  puVar13[5] = *(undefined8 *)(param_1 + 0x28);
  puVar13[4] = uVar15;
  puVar13[7] = uVar14;
  puVar13[6] = uVar10;
                    /* try { // try from 00a61f00 to 00a61f03 has its CatchHandler @ 00a62044 */
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(puVar13 + 0xf),
             (vector *)(param_1 + 0x78));
  puVar2 = puVar13 + 0x13;
  pvVar8 = *(void **)this;
  pvVar5 = *(void **)(this + 8);
  *(undefined4 *)((long)pvVar4 + lVar7 * 8 + 0x90) = *(undefined4 *)(param_1 + 0x90);
  pvVar12 = pvVar8;
  if (pvVar5 != pvVar8) {
    do {
      uVar10 = *(undefined8 *)((long)pvVar5 + -0x68);
      pvVar12 = (void *)((long)pvVar5 + -0x98);
      uVar15 = *(undefined8 *)((long)pvVar5 + -0x70);
      uVar14 = *(undefined8 *)((long)pvVar5 + -0x78);
      uVar17 = *(undefined8 *)((long)pvVar5 + -0x80);
      uVar16 = *(undefined8 *)((long)pvVar5 + -0x88);
      uVar19 = *(undefined8 *)((long)pvVar5 + -0x90);
      uVar18 = *(undefined8 *)((long)pvVar5 + -0x98);
      puVar13[-0xc] = *(undefined8 *)((long)pvVar5 + -0x60);
      puVar13[-0xd] = uVar10;
      puVar13[-0xe] = uVar15;
      puVar13[-0xf] = uVar14;
      puVar13[-0x10] = uVar17;
      puVar13[-0x11] = uVar16;
      puVar13[-0x12] = uVar19;
      puVar13[-0x13] = uVar18;
      uVar14 = *(undefined8 *)((long)pvVar5 + -0x38);
      uVar16 = *(undefined8 *)((long)pvVar5 + -0x40);
      uVar15 = *(undefined8 *)((long)pvVar5 + -0x48);
      uVar18 = *(undefined8 *)((long)pvVar5 + -0x50);
      uVar17 = *(undefined8 *)((long)pvVar5 + -0x58);
      uVar10 = *(undefined8 *)((long)pvVar5 + -0x28);
      puVar13[-6] = *(undefined8 *)((long)pvVar5 + -0x30);
      puVar13[-7] = uVar14;
      puVar13[-8] = uVar16;
      puVar13[-9] = uVar15;
      puVar13[-10] = uVar18;
      puVar13[-0xb] = uVar17;
      puVar13[-5] = uVar10;
      puVar13[-4] = 0;
      puVar13[-3] = 0;
      puVar13[-2] = 0;
      puVar13[-4] = *(undefined8 *)((long)pvVar5 + -0x20);
      puVar13[-3] = *(undefined8 *)((long)pvVar5 + -0x18);
      puVar13[-2] = *(undefined8 *)((long)pvVar5 + -0x10);
      *(undefined8 *)((long)pvVar5 + -0x18) = 0;
      *(undefined8 *)((long)pvVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar5 + -0x20) = 0;
      *(undefined4 *)(puVar13 + -1) = *(undefined4 *)((long)pvVar5 + -8);
      puVar13 = puVar13 + -0x13;
      pvVar5 = pvVar12;
    } while (pvVar12 != pvVar8);
    pvVar8 = *(void **)(this + 8);
    pvVar12 = *(void **)this;
  }
  *(undefined8 **)this = puVar13;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x98);
  while (pvVar4 = pvVar8, pvVar4 != pvVar12) {
    pvVar5 = *(void **)((long)pvVar4 + -0x20);
    pvVar8 = (void *)((long)pvVar4 + -0x98);
    if (pvVar5 != (void *)0x0) {
      *(void **)((long)pvVar4 + -0x18) = pvVar5;
      operator_delete(pvVar5);
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


