// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009b2ce0
// Size: 508 bytes
// Signature: undefined __thiscall __append(vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>> * this, ulong param_1)


/* std::__ndk1::vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>>
::__append(vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar8 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar8 >> 6) < param_1) {
    lVar10 = (long)puVar8 - *(long *)this >> 6;
    uVar1 = lVar10 + param_1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = *(long *)(this + 0x10) - *(long *)this;
    uVar7 = (long)uVar6 >> 5;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffffffffffbf < uVar6) {
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
    puVar11 = (undefined8 *)((long)pvVar4 + lVar10 * 0x40);
    puVar2 = puVar11 + param_1 * 8;
    puVar9 = puVar11;
    do {
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      *(undefined *)(puVar9 + 4) = 1;
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar2);
    puVar9 = *(undefined8 **)this;
    if (puVar8 != puVar9) {
      do {
        puVar12 = puVar8 + -8;
        puVar11[-8] = *puVar12;
                    /* try { // try from 009b2e08 to 009b2e0b has its CatchHandler @ 009b2ee0 */
        btAlignedObjectArray<btCollisionObject*>::btAlignedObjectArray
                  ((btAlignedObjectArray<btCollisionObject*> *)(puVar11 + -7),
                   (btAlignedObjectArray *)(puVar8 + -7));
        uVar14 = puVar8[-2];
        uVar13 = puVar8[-3];
        puVar11[-1] = puVar8[-1];
        puVar11[-2] = uVar14;
        puVar11[-3] = uVar13;
        puVar11 = puVar11 + -8;
        puVar8 = puVar12;
      } while (puVar12 != puVar9);
      puVar8 = *(undefined8 **)this;
    }
    puVar9 = *(undefined8 **)(this + 8);
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x40);
    for (; puVar9 != puVar8; puVar9 = puVar9 + -8) {
      if (((void *)puVar9[-5] != (void *)0x0) && (*(char *)(puVar9 + -4) != '\0')) {
                    /* try { // try from 009b2e88 to 009b2e8b has its CatchHandler @ 009b2edc */
        btAlignedFreeInternal((void *)puVar9[-5]);
      }
      *(undefined *)(puVar9 + -4) = 1;
      puVar9[-5] = 0;
      *(undefined8 *)((long)puVar9 + -0x34) = 0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      operator_delete(puVar8);
    }
  }
  else {
    puVar9 = puVar8;
    if (param_1 != 0) {
      puVar9 = puVar8 + param_1 * 8;
      do {
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        *(undefined *)(puVar8 + 4) = 1;
        puVar8 = puVar8 + 8;
      } while (puVar8 != puVar9);
    }
    *(undefined8 **)(this + 8) = puVar9;
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


