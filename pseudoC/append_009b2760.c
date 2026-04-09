// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009b2760
// Size: 588 bytes
// Signature: undefined __thiscall __append(vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>> * this, ulong param_1)


/* std::__ndk1::vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>>
::__append(vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 4) * -0x3333333333333333) < param_1) {
    lVar6 = (long)puVar8 - *(long *)this >> 4;
    uVar1 = lVar6 * -0x3333333333333333 + param_1;
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar1 = 0x333333333333333;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x50);
    }
    puVar10 = (undefined8 *)((long)pvVar3 + lVar6 * 0x10);
    puVar9 = puVar10 + param_1 * 10;
    puVar11 = puVar10;
    do {
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      *(undefined *)(puVar11 + 9) = 1;
      puVar11 = puVar11 + 10;
    } while (puVar11 != puVar9);
    puVar11 = *(undefined8 **)this;
    if (puVar8 != puVar11) {
      lVar6 = 0;
      do {
        uVar16 = *(undefined8 *)((long)puVar8 + lVar6 + -0x48);
        uVar15 = *(undefined8 *)((long)puVar8 + lVar6 + -0x50);
        uVar14 = *(undefined8 *)((long)puVar8 + lVar6 + -0x38);
        uVar13 = *(undefined8 *)((long)puVar8 + lVar6 + -0x40);
        uVar12 = *(undefined8 *)((long)puVar8 + lVar6 + -0x34);
        *(undefined8 *)((long)puVar10 + lVar6 + -0x2c) =
             *(undefined8 *)((long)puVar8 + lVar6 + -0x2c);
        *(undefined8 *)((long)puVar10 + lVar6 + -0x34) = uVar12;
        *(undefined8 *)((long)puVar10 + lVar6 + -0x48) = uVar16;
        *(undefined8 *)((long)puVar10 + lVar6 + -0x50) = uVar15;
        *(undefined8 *)((long)puVar10 + lVar6 + -0x38) = uVar14;
        *(undefined8 *)((long)puVar10 + lVar6 + -0x40) = uVar13;
                    /* try { // try from 009b28e0 to 009b28e3 has its CatchHandler @ 009b29b0 */
        btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::
        btAlignedObjectArray
                  ((btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *)
                   ((long)puVar10 + lVar6 + -0x20),
                   (btAlignedObjectArray *)((long)puVar8 + lVar6 + -0x20));
        lVar6 = lVar6 + -0x50;
      } while ((undefined8 *)((long)puVar8 + lVar6) != puVar11);
      puVar8 = *(undefined8 **)this;
      puVar10 = (undefined8 *)((long)puVar10 + lVar6);
    }
    puVar11 = *(undefined8 **)(this + 8);
    *(undefined8 **)this = puVar10;
    *(undefined8 **)(this + 8) = puVar9;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x50);
    for (; puVar11 != puVar8; puVar11 = puVar11 + -10) {
      if (((void *)puVar11[-2] != (void *)0x0) && (*(char *)(puVar11 + -1) != '\0')) {
                    /* try { // try from 009b2950 to 009b2953 has its CatchHandler @ 009b29ac */
        btAlignedFreeInternal((void *)puVar11[-2]);
      }
      *(undefined *)(puVar11 + -1) = 1;
      puVar11[-2] = 0;
      *(undefined8 *)((long)puVar11 + -0x1c) = 0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      operator_delete(puVar8);
    }
  }
  else {
    puVar11 = puVar8;
    if (param_1 != 0) {
      puVar11 = puVar8 + param_1 * 10;
      do {
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        *(undefined *)(puVar8 + 9) = 1;
        puVar8 = puVar8 + 10;
      } while (puVar8 != puVar11);
    }
    *(undefined8 **)(this + 8) = puVar11;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


