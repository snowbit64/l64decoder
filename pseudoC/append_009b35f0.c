// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009b35f0
// Size: 592 bytes
// Signature: undefined __thiscall __append(vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>> * this, ulong param_1)


/* std::__ndk1::vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>>
::__append(vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  OverlapPointCloudShapesData *pOVar10;
  OverlapPointCloudShapesData *pOVar11;
  OverlapPointCloudShapesData *pOVar12;
  undefined8 *puVar13;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar6 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar6 >> 4) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    lVar5 = (long)puVar6 - *(long *)this >> 4;
    uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + param_1;
    if (0x1745d1745d1745d < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0xba2e8ba2e8ba2d < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x1745d1745d1745d;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x1745d1745d1745d < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0xb0);
    }
    puVar9 = (undefined8 *)((long)pvVar3 + lVar5 * 0x10);
    puVar13 = puVar9 + param_1 * 0x16;
    puVar6 = puVar9;
    do {
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      *(undefined *)(puVar6 + 4) = 1;
      *(undefined *)(puVar6 + 8) = 1;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6 = puVar6 + 0x16;
    } while (puVar6 != puVar13);
    pOVar10 = *(OverlapPointCloudShapesData **)this;
    pOVar11 = *(OverlapPointCloudShapesData **)(this + 8);
    pOVar12 = pOVar10;
    if (pOVar11 != pOVar10) {
      do {
        puVar9 = puVar9 + -0x16;
        pOVar11 = pOVar11 + -0xb0;
                    /* try { // try from 009b37a0 to 009b37af has its CatchHandler @ 009b3840 */
        allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>::
        construct<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData_const&>
                  ((allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData> *)
                   (this + 0x10),(OverlapPointCloudShapesData *)puVar9,pOVar11);
      } while (pOVar11 != pOVar10);
      pOVar10 = *(OverlapPointCloudShapesData **)(this + 8);
      pOVar12 = *(OverlapPointCloudShapesData **)this;
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar13;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0xb0);
    while (pOVar10 != pOVar12) {
      pOVar10 = pOVar10 + -0xb0;
      FUN_009b213c((allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData> *)
                   (this + 0x10),pOVar10);
    }
    if (pOVar12 != (OverlapPointCloudShapesData *)0x0) {
      operator_delete(pOVar12);
    }
  }
  else {
    puVar9 = puVar6;
    if (param_1 != 0) {
      puVar9 = puVar6 + param_1 * 0x16;
      do {
        puVar6[0x13] = 0;
        puVar6[0x12] = 0;
        puVar6[0x15] = 0;
        puVar6[0x14] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
        *(undefined *)(puVar6 + 4) = 1;
        *(undefined *)(puVar6 + 8) = 1;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x14] = 0;
        puVar6 = puVar6 + 0x16;
      } while (puVar6 != puVar9);
    }
    *(undefined8 **)(this + 8) = puVar9;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


