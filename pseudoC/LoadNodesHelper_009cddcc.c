// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadNodesHelper
// Entry Point: 009cddcc
// Size: 360 bytes
// Signature: undefined __thiscall LoadNodesHelper(LoadNodesHelper * this, uint param_1, int * param_2, bool param_3)


/* ProceduralPlacementManager::LoadNodesHelper::LoadNodesHelper(unsigned int, int*, bool) */

void __thiscall
ProceduralPlacementManager::LoadNodesHelper::LoadNodesHelper
          (LoadNodesHelper *this,uint param_1,int *param_2,bool param_3)

{
  ulong uVar1;
  int *piVar2;
  void *__dest;
  int *piVar3;
  void *__src;
  ulong __n;
  long lVar4;
  
  *this = (LoadNodesHelper)param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)(this + 8) = (void *)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(LoadNodesHelper **)(this + 0x20) = this + 0x28;
  *(undefined8 *)(this + 0x30) = 0;
  if (param_1 != 0) {
    piVar3 = (int *)0x0;
    lVar4 = (ulong)param_1 - 1;
    do {
      __src = *(void **)(this + 8);
      __n = (long)piVar3 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 009cdf20 to 009cdf33 has its CatchHandler @ 009cdf3c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009cde8c to 009cde8f has its CatchHandler @ 009cdf38 */
        __dest = operator_new(uVar1 << 2);
      }
      piVar3 = (int *)((long)__dest + ((long)__n >> 2) * 4);
      *piVar3 = *param_2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 8) = __dest;
      *(int **)(this + 0x10) = piVar3 + 1;
      *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      while( true ) {
        if (lVar4 == 0) goto LAB_009cdef4;
        piVar2 = *(int **)(this + 0x10);
        piVar3 = *(int **)(this + 0x18);
        param_2 = param_2 + 1;
        lVar4 = lVar4 + -1;
        if (piVar2 == piVar3) break;
        *piVar2 = *param_2;
        *(int **)(this + 0x10) = piVar2 + 1;
      }
    } while( true );
  }
LAB_009cdef4:
                    /* try { // try from 009cdef4 to 009cdeff has its CatchHandler @ 009cdf34 */
  loadTransformGroups(this,(TransformGroup *)0x0);
  return;
}


