// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystemDesc::Lod>
// Entry Point: 00a687fc
// Size: 368 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystemDesc::Lod>(vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> * this, Lod * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::Lod, std::__ndk1::allocator<FoliageSystemDesc::Lod>
   >::__push_back_slow_path<FoliageSystemDesc::Lod>(FoliageSystemDesc::Lod&&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
__push_back_slow_path<FoliageSystemDesc::Lod>
          (vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *this,
          Lod *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar11;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = (long)uVar7 >> 5;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffffffffffbf < uVar7) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 6);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = (undefined8 *)((long)pvVar4 + lVar13 * 0x40);
  uVar9 = *(undefined8 *)param_1;
  puVar3 = *(undefined8 **)this;
  puVar10 = *(undefined8 **)(this + 8);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x40);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  puVar2[2] = uVar15;
  puVar2[1] = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x35);
  uVar14 = *(undefined8 *)(param_1 + 0x2d);
  *puVar2 = uVar9;
  puVar2[3] = uVar12;
  puVar2[5] = uVar17;
  puVar2[4] = uVar16;
  *(undefined8 *)((long)puVar2 + 0x35) = uVar15;
  *(undefined8 *)((long)puVar2 + 0x2d) = uVar14;
  puVar5 = puVar2;
  if (puVar10 == puVar3) {
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    do {
      puVar11 = puVar10 + -8;
      puVar6 = puVar5 + -8;
      *puVar6 = *puVar11;
      uVar12 = puVar10[-6];
      uVar9 = puVar10[-7];
      puVar5[-5] = puVar10[-5];
      puVar5[-6] = uVar12;
      puVar5[-7] = uVar9;
      uVar9 = *(undefined8 *)((long)puVar10 + -0x13);
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      uVar14 = puVar10[-3];
      uVar12 = puVar10[-4];
      puVar10[-7] = 0;
      *(undefined8 *)((long)puVar5 + -0xb) = *(undefined8 *)((long)puVar10 + -0xb);
      *(undefined8 *)((long)puVar5 + -0x13) = uVar9;
      puVar5[-3] = uVar14;
      puVar5[-4] = uVar12;
      puVar5 = puVar6;
      puVar10 = puVar11;
    } while (puVar11 != puVar3);
    puVar3 = *(undefined8 **)this;
    puVar10 = *(undefined8 **)(this + 8);
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar4;
    while (puVar2 = puVar10, puVar2 != puVar3) {
      puVar10 = puVar2 + -8;
      if ((*(byte *)(puVar2 + -7) & 1) != 0) {
        operator_delete((void *)puVar2[-5]);
      }
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}


