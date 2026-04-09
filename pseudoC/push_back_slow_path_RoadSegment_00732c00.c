// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<RoadSegment>
// Entry Point: 00732c00
// Size: 544 bytes
// Signature: void __thiscall __push_back_slow_path<RoadSegment>(vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> * this, RoadSegment * param_1)


/* void std::__ndk1::vector<RoadSegment, std::__ndk1::allocator<RoadSegment>
   >::__push_back_slow_path<RoadSegment>(RoadSegment&&) */

void __thiscall
std::__ndk1::vector<RoadSegment,std::__ndk1::allocator<RoadSegment>>::
__push_back_slow_path<RoadSegment>
          (vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> *this,RoadSegment *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RoadSegment RVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar7 = (*(long *)(this + 8) - *(long *)this) / 0x50;
  uVar1 = lVar7 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar14 = lVar13 * -0x6666666666666666;
  if (uVar1 <= uVar14) {
    uVar1 = uVar14;
  }
  if (0x199999999999998 < (ulong)(lVar13 * -0x3333333333333333)) {
    uVar1 = 0x333333333333333;
  }
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar9 = operator_new(uVar1 * 0x50);
  RVar6 = param_1[0x18];
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 8);
  puVar15 = (undefined8 *)((long)pvVar9 + lVar7 * 0x50);
  uVar12 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *puVar15 = uVar12;
  *(RoadSegment *)(puVar15 + 3) = RVar6;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar15[2] = uVar19;
  puVar15[1] = uVar18;
  uVar19 = *(undefined8 *)(param_1 + 0x28);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pvVar3 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  puVar15[6] = uVar12;
  puVar15[7] = uVar5;
  pvVar2 = (void *)((long)pvVar9 + uVar1 * 0x50);
  puVar15[8] = 0;
  puVar15[9] = 0;
  puVar15[8] = uVar17;
  puVar15[9] = uVar4;
  puVar15[5] = uVar19;
  puVar15[4] = uVar18;
  if (pvVar10 == pvVar3) {
    *(undefined8 **)this = puVar15;
    *(undefined8 **)(this + 8) = puVar15 + 10;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar13 = 0;
    do {
      lVar8 = lVar13 + lVar7 * 0x50;
      lVar16 = lVar13 + -0x50;
      uVar17 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x50);
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x50) = 0;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x50) = uVar17;
      uVar12 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x40);
      uVar17 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x48);
      *(undefined *)((long)pvVar9 + lVar8 + -0x38) = *(undefined *)((long)pvVar10 + lVar13 + -0x38);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x40) = uVar12;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x48) = uVar17;
      uVar17 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x28);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x30) =
           *(undefined8 *)((long)pvVar10 + lVar13 + -0x30);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x28) = uVar17;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x20) =
           *(undefined8 *)((long)pvVar10 + lVar13 + -0x20);
      uVar17 = *(undefined8 *)((long)pvVar10 + lVar13 + -0x10);
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x28) = 0;
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x20) = 0;
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x30) = 0;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x18) =
           *(undefined8 *)((long)pvVar10 + lVar13 + -0x18);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x10) = uVar17;
      *(undefined8 *)((long)pvVar9 + lVar8 + -8) = *(undefined8 *)((long)pvVar10 + lVar13 + -8);
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x18) = 0;
      *(undefined8 *)((long)pvVar10 + lVar13 + -0x10) = 0;
      *(undefined8 *)((long)pvVar10 + lVar13 + -8) = 0;
      lVar13 = lVar16;
    } while ((void *)((long)pvVar10 + lVar16) != pvVar3);
    *(void **)(this + 0x10) = pvVar2;
    pvVar3 = *(void **)this;
    pvVar2 = *(void **)(this + 8);
    *(long *)this = (long)pvVar9 + lVar16 + lVar7 * 0x50;
    *(undefined8 **)(this + 8) = puVar15 + 10;
    while (pvVar2 != pvVar3) {
      pvVar10 = *(void **)((long)pvVar2 + -0x18);
      if (pvVar10 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x10) = pvVar10;
        operator_delete(pvVar10);
      }
      pvVar10 = *(void **)((long)pvVar2 + -0x30);
      if (pvVar10 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x28) = pvVar10;
        operator_delete(pvVar10);
      }
      plVar11 = *(long **)((long)pvVar2 + -0x50);
      pvVar10 = (void *)((long)pvVar2 + -0x50);
      *(undefined8 *)((long)pvVar2 + -0x50) = 0;
      pvVar2 = pvVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


