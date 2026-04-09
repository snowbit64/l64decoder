// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onInitialize
// Entry Point: 007140a4
// Size: 880 bytes
// Signature: undefined onInitialize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTRandomSelector::onInitialize() */

undefined8 BTRandomSelector::onInitialize(void)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  long in_x0;
  int *__dest;
  int *piVar4;
  void *__dest_00;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  code *local_80 [2];
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = (int)((ulong)(*(long *)(in_x0 + 0x30) - *(long *)(in_x0 + 0x28)) >> 3);
  if (iVar3 < 1) {
    piVar5 = (int *)0x0;
    __dest = (int *)0x0;
  }
  else {
    iVar9 = 0;
    piVar10 = (int *)0x0;
    piVar4 = (int *)0x0;
    piVar8 = (int *)0x0;
    do {
      __dest = piVar4;
      piVar5 = piVar8;
      if (iVar9 != *(int *)(in_x0 + 100)) {
        if (piVar8 == piVar10) {
          uVar7 = (long)piVar8 - (long)piVar4;
          uVar1 = ((long)uVar7 >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 007143f4 to 0071440f has its CatchHandler @ 0071442c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
            uVar1 = (long)uVar7 >> 1;
          }
          if (0x7ffffffffffffffb < uVar7) {
            uVar1 = 0x3fffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (int *)0x0;
          }
          else {
            if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00714174 to 00714177 has its CatchHandler @ 0071441c */
            __dest = (int *)operator_new(uVar1 << 2);
          }
          piVar5 = __dest + ((long)uVar7 >> 2) + 1;
          __dest[(long)uVar7 >> 2] = iVar9;
          if (0 < (long)uVar7) {
            memcpy(__dest,piVar4,uVar7);
          }
          piVar10 = __dest + uVar1;
          if (piVar4 != (int *)0x0) {
            operator_delete(piVar4);
          }
        }
        else {
          piVar5 = piVar8 + 1;
          *piVar8 = iVar9;
        }
      }
      iVar9 = iVar9 + 1;
      piVar4 = __dest;
      piVar8 = piVar5;
    } while (iVar3 != iVar9);
  }
  piVar10 = *(int **)(in_x0 + 0x48);
  iVar3 = *(int *)(in_x0 + 100);
  *(int **)(in_x0 + 0x50) = piVar10;
  if (iVar3 != -1) {
    if (piVar10 == *(int **)(in_x0 + 0x58)) {
                    /* try { // try from 00714208 to 0071420f has its CatchHandler @ 00714414 */
      piVar4 = (int *)operator_new(4);
      *piVar4 = iVar3;
      *(int **)(in_x0 + 0x48) = piVar4;
      *(int **)(in_x0 + 0x50) = piVar4 + 1;
      *(int **)(in_x0 + 0x58) = piVar4 + 1;
      if (piVar10 != (int *)0x0) {
        operator_delete(piVar10);
      }
    }
    else {
      *piVar10 = iVar3;
      *(int **)(in_x0 + 0x50) = piVar10 + 1;
    }
  }
  while (__dest != piVar5) {
                    /* try { // try from 007142dc to 0071434b has its CatchHandler @ 00714438 */
    iVar3 = MathUtil::getRandomMinMax(0,(int)((ulong)((long)piVar5 - (long)__dest) >> 2) + -1);
    piVar4 = *(int **)(in_x0 + 0x50);
    piVar10 = __dest + iVar3;
    if (piVar4 == *(int **)(in_x0 + 0x58)) {
      piVar8 = *(int **)(in_x0 + 0x48);
      uVar7 = (long)piVar4 - (long)piVar8;
      uVar1 = ((long)uVar7 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 007143d8 to 007143eb has its CatchHandler @ 00714434 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
        uVar1 = (long)uVar7 >> 1;
      }
      if (0x7ffffffffffffffb < uVar7) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest_00 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest_00 = operator_new(uVar1 << 2);
      }
      piVar4 = (int *)((long)__dest_00 + ((long)uVar7 >> 2) * 4);
      *piVar4 = *piVar10;
      if (0 < (long)uVar7) {
        memcpy(__dest_00,piVar8,uVar7);
      }
      *(void **)(in_x0 + 0x48) = __dest_00;
      *(int **)(in_x0 + 0x50) = piVar4 + 1;
      *(void **)(in_x0 + 0x58) = (void *)((long)__dest_00 + uVar1 * 4);
      if (piVar8 != (int *)0x0) {
        operator_delete(piVar8);
      }
    }
    else {
      *piVar4 = *piVar10;
      *(int **)(in_x0 + 0x50) = piVar4 + 1;
    }
    __n = (long)piVar5 - (long)(piVar10 + 1);
    if (__n != 0) {
      memmove(piVar10,piVar10 + 1,__n);
    }
    piVar5 = (int *)((long)piVar10 + __n);
  }
  if (*(long *)(in_x0 + 0x48) == *(long *)(in_x0 + 0x50)) {
    uVar6 = 2;
    *(undefined4 *)(in_x0 + 0x60) = 0xffffffff;
  }
  else {
    piVar5 = (int *)(*(long *)(in_x0 + 0x50) + -4);
    iVar3 = *piVar5;
    *(int **)(in_x0 + 0x50) = piVar5;
    *(int *)(in_x0 + 0x60) = iVar3;
    if (iVar3 == -1) {
      uVar6 = 2;
    }
    else {
      local_70 = 0;
      local_80[0] = onChildCompleteCallback;
                    /* try { // try from 00714270 to 00714277 has its CatchHandler @ 00714418 */
      BehaviorTree::insert
                (*(BehaviorTree **)(in_x0 + 0x40),
                 *(BTBehavior **)(*(long *)(in_x0 + 0x28) + (long)iVar3 * 8),
                 (BTTaskObserver *)local_80);
      uVar6 = 1;
    }
  }
  if (__dest != (int *)0x0) {
    operator_delete(__dest);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


