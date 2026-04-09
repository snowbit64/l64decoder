// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playWalkSoundAtPosition
// Entry Point: 00897e88
// Size: 568 bytes
// Signature: undefined __thiscall playWalkSoundAtPosition(PedestrianSystem * this, Vector3 * param_1)


/* PedestrianSystem::playWalkSoundAtPosition(Vector3 const&) */

void __thiscall PedestrianSystem::playWalkSoundAtPosition(PedestrianSystem *this,Vector3 *param_1)

{
  long lVar1;
  TransformGroup **ppTVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *__dest;
  long lVar8;
  undefined4 *__src;
  undefined4 *puVar9;
  ulong __n;
  ulong uVar10;
  PedestrianSystem *pPVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  if (*(uint *)(this + 0x25908) != 0) {
    puVar9 = (undefined4 *)0x0;
    uVar10 = 0;
    pPVar11 = this + 0x23b90;
    __src = (undefined4 *)0x0;
    puVar13 = (undefined4 *)0x0;
    do {
      __dest = __src;
      puVar12 = puVar13;
                    /* try { // try from 00897f20 to 00897f73 has its CatchHandler @ 008980d0 */
      if (((*(long *)(pPVar11 + -0x10) != 0) && (*pPVar11 != (PedestrianSystem)0x0)) &&
         (uVar7 = AudioSource::isPlaying(), (uVar7 & 1) == 0)) {
        if (puVar13 == puVar9) {
          __n = (long)puVar9 - (long)__src;
          uVar7 = ((long)__n >> 2) + 1;
          if (uVar7 >> 0x3e != 0) {
                    /* try { // try from 008980a8 to 008980bb has its CatchHandler @ 008980c8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar7 <= (ulong)((long)__n >> 1)) {
            uVar7 = (long)__n >> 1;
          }
          if (0x7ffffffffffffffb < __n) {
            uVar7 = 0x3fffffffffffffff;
          }
          if (uVar7 == 0) {
            __dest = (undefined4 *)0x0;
          }
          else {
            if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = (undefined4 *)operator_new(uVar7 << 2);
          }
          puVar12 = __dest + ((long)__n >> 2) + 1;
          __dest[(long)__n >> 2] = (int)uVar10;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          puVar9 = __dest + uVar7;
          if (__src != (undefined4 *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          puVar12 = puVar13 + 1;
          *puVar13 = (int)uVar10;
        }
      }
      uVar10 = uVar10 + 1;
      pPVar11 = pPVar11 + 0x20;
      __src = __dest;
      puVar13 = puVar12;
    } while (uVar10 < *(uint *)(this + 0x25908));
    if (__dest != puVar12) {
                    /* try { // try from 00897fd4 to 00897fdb has its CatchHandler @ 008980c0 */
      iVar6 = MathUtil::getRandomMinMax(0,(int)((ulong)((long)puVar12 - (long)__dest) >> 2) + -1);
      uVar3 = __dest[iVar6];
      lVar1 = (ulong)uVar3 * 0x20;
      lVar5 = lVar1 + 0x23b8c;
      if (this[0x25977] != (PedestrianSystem)0x0) {
        lVar5 = lVar1 + 0x23b88;
      }
      uVar14 = *(undefined4 *)(this + lVar5);
                    /* try { // try from 00898010 to 00898063 has its CatchHandler @ 008980c4 */
      ScenegraphNode::setVisibility
                (*(ScenegraphNode **)(this + (ulong)*(uint *)(this + 0x2596c) * 0x20 + 0x23b80),
                 false);
      ppTVar2 = (TransformGroup **)(this + (ulong)uVar3 * 0x20 + 0x23b80);
      TransformGroup::setTranslation(*ppTVar2,param_1);
      ScenegraphNode::setVisibility((ScenegraphNode *)*ppTVar2,true);
      (**(code **)(*(long *)(*ppTVar2 + 0x158) + 0x18))(uVar14,0,0,*ppTVar2 + 0x158,1,0);
      *(uint *)(this + 0x2596c) = uVar3;
    }
    if (__dest != (undefined4 *)0x0) {
      operator_delete(__dest);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


