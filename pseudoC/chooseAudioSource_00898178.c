// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: chooseAudioSource
// Entry Point: 00898178
// Size: 680 bytes
// Signature: undefined __thiscall chooseAudioSource(PedestrianSystem * this, SimulatedPedestrian * param_1, Vector3 * param_2)


/* PedestrianSystem::chooseAudioSource(SimulatedPedestrian*, Vector3 const&) */

void __thiscall
PedestrianSystem::chooseAudioSource
          (PedestrianSystem *this,SimulatedPedestrian *param_1,Vector3 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int *__dest;
  long lVar6;
  long lVar7;
  int *__src;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  int *piVar10;
  int *piVar11;
  long lVar12;
  undefined4 uVar13;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(param_1 + 0x50);
  if ((lVar12 != 0) && (lVar7 = *(long *)(lVar12 + 0x48), *(long *)(lVar12 + 0x50) != lVar7)) {
    uVar8 = 0;
    piVar9 = (int *)0x0;
    puVar1 = (uint *)(this + 0x25968);
    __src = (int *)0x0;
    piVar11 = (int *)0x0;
    do {
      iVar5 = *(int *)(lVar7 + uVar8 * 4);
      __dest = __src;
      piVar10 = piVar11;
      if (*(int *)(this + (long)iVar5 * 0x20 + 0x23b7c) == 2 ||
          *(int *)(this + (long)iVar5 * 0x20 + 0x23b7c) == *(int *)(param_1 + 0x6c)) {
        if (piVar11 == piVar9) {
          __n = (long)piVar11 - (long)__src;
          uVar2 = ((long)__n >> 2) + 1;
          if (uVar2 >> 0x3e != 0) {
                    /* try { // try from 00898400 to 0089841b has its CatchHandler @ 00898448 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar2 <= (ulong)((long)__n >> 1)) {
            uVar2 = (long)__n >> 1;
          }
          if (0x7ffffffffffffffb < __n) {
            uVar2 = 0x3fffffffffffffff;
          }
          if (uVar2 == 0) {
            __dest = (int *)0x0;
          }
          else {
            if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00898280 to 00898283 has its CatchHandler @ 00898438 */
            __dest = (int *)operator_new(uVar2 << 2);
          }
          piVar10 = __dest + ((long)__n >> 2) + 1;
          __dest[(long)__n >> 2] = iVar5;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          piVar9 = __dest + uVar2;
          if (__src != (int *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          piVar10 = piVar11 + 1;
          *piVar11 = iVar5;
        }
      }
      lVar7 = *(long *)(lVar12 + 0x48);
      uVar8 = (ulong)((int)uVar8 + 1);
      __src = __dest;
      piVar11 = piVar10;
    } while (uVar8 < (ulong)(*(long *)(lVar12 + 0x50) - lVar7 >> 2));
    if (__dest == piVar10) {
      if (__dest == (int *)0x0) goto LAB_008983c4;
    }
    else {
                    /* try { // try from 00898300 to 0089831b has its CatchHandler @ 00898420 */
      ScenegraphNode::setVisibility
                (*(ScenegraphNode **)(this + (ulong)*puVar1 * 0x20 + 0x23b80),false);
      iVar5 = MathUtil::getRandomMinMax(0,(int)((ulong)((long)piVar10 - (long)__dest) >> 2) + -1);
      uVar3 = __dest[iVar5];
      lVar12 = (ulong)uVar3 * 0x20 + 0x23b8c;
      if (this[0x25977] != (PedestrianSystem)0x0) {
        lVar12 = (ulong)uVar3 * 0x20 + 0x23b88;
      }
      *puVar1 = uVar3;
      uVar13 = *(undefined4 *)(this + lVar12);
                    /* try { // try from 00898354 to 008983af has its CatchHandler @ 0089842c */
      TransformGroup::setTranslation
                (*(TransformGroup **)(this + (ulong)uVar3 * 0x20 + 0x23b80),param_2);
      ScenegraphNode::setVisibility
                (*(ScenegraphNode **)(this + (ulong)*puVar1 * 0x20 + 0x23b80),true);
      (**(code **)(*(long *)(*(long *)(this + (ulong)*puVar1 * 0x20 + 0x23b80) + 0x158) + 0x18))
                (uVar13,0,0,*(long *)(this + (ulong)*puVar1 * 0x20 + 0x23b80) + 0x158,1,0);
    }
    operator_delete(__dest);
  }
LAB_008983c4:
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


