// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 008775d8
// Size: 516 bytes
// Signature: undefined __thiscall __append(vector<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>> * this, ulong param_1)


/* std::__ndk1::vector<ObstacleWallDetector, std::__ndk1::allocator<ObstacleWallDetector>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>>::__append
          (vector<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>> *this,
          ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ObstacleWallDetector *this_00;
  ObstacleWallDetector *pOVar8;
  ObstacleWallDetector *pOVar9;
  ObstacleWallDetector *pOVar10;
  ObstacleWallDetector *pOVar11;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pOVar8 = *(ObstacleWallDetector **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pOVar8 >> 4) * -0x34115b1e5f75270d) < param_1) {
    lVar6 = (long)pOVar8 - *(long *)this >> 4;
    uVar1 = lVar6 * -0x34115b1e5f75270d + param_1;
    if (0x456c797dd49c34 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar7 = lVar5 * -0x6822b63cbeea4e1a;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x22b63cbeea4e19 < (ulong)(lVar5 * -0x34115b1e5f75270d)) {
      uVar1 = 0x456c797dd49c34;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x456c797dd49c34 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x3b0);
    }
    this_00 = (ObstacleWallDetector *)((long)pvVar3 + lVar6 * 0x10);
    lVar6 = param_1 * 0x3b0;
    pOVar9 = this_00 + lVar6;
    pOVar8 = this_00;
    do {
                    /* try { // try from 00877718 to 0087771f has its CatchHandler @ 008777ec */
      ObstacleWallDetector::ObstacleWallDetector(pOVar8);
      pOVar8 = pOVar8 + 0x3b0;
      lVar6 = lVar6 + -0x3b0;
    } while (lVar6 != 0);
    pOVar8 = *(ObstacleWallDetector **)this;
    pOVar10 = *(ObstacleWallDetector **)(this + 8);
    pOVar11 = pOVar8;
    if (pOVar10 != pOVar8) {
      do {
        this_00 = this_00 + -0x3b0;
        pOVar10 = pOVar10 + -0x3b0;
                    /* try { // try from 00877744 to 0087774f has its CatchHandler @ 008777dc */
        ObstacleWallDetector::ObstacleWallDetector(this_00,pOVar10);
      } while (pOVar10 != pOVar8);
      pOVar8 = *(ObstacleWallDetector **)(this + 8);
      pOVar11 = *(ObstacleWallDetector **)this;
    }
    *(ObstacleWallDetector **)this = this_00;
    *(ObstacleWallDetector **)(this + 8) = pOVar9;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x3b0);
    while (pOVar8 != pOVar11) {
      pOVar8 = pOVar8 + -0x3b0;
      ObstacleWallDetector::~ObstacleWallDetector(pOVar8);
    }
    if (pOVar11 != (ObstacleWallDetector *)0x0) {
      operator_delete(pOVar11);
    }
  }
  else {
    pOVar9 = pOVar8;
    if (param_1 != 0) {
      pOVar9 = pOVar8 + param_1 * 0x3b0;
      lVar6 = param_1 * 0x3b0;
      do {
                    /* try { // try from 008776d4 to 008776db has its CatchHandler @ 008777e4 */
        ObstacleWallDetector::ObstacleWallDetector(pOVar8);
        pOVar8 = pOVar8 + 0x3b0;
        lVar6 = lVar6 + -0x3b0;
      } while (lVar6 != 0);
    }
    *(ObstacleWallDetector **)(this + 8) = pOVar9;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


