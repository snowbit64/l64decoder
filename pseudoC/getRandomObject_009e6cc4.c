// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomObject
// Entry Point: 009e6cc4
// Size: 456 bytes
// Signature: undefined getRandomObject(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRule::getRandomObject() */

void ProceduralPlacementRule::getRandomObject(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long in_x0;
  void *__dest;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong __n;
  ulong uVar10;
  long lVar11;
  void *local_80;
  long *local_78;
  long *local_70;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x68);
  lVar8 = *(long *)(in_x0 + 0x70);
  local_80 = (void *)0x0;
  local_70 = (long *)0x0;
  if (lVar8 == lVar9) {
    uVar6 = 0;
  }
  else {
    local_78 = (long *)0x0;
    uVar10 = 0;
    do {
      lVar11 = *(long *)(lVar9 + uVar10 * 8);
      if (0 < *(int *)(lVar11 + 8)) {
        iVar5 = 0;
        do {
          if (local_78 == local_70) {
            __n = (long)local_78 - (long)local_80;
            uVar1 = ((long)__n >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 009e6e74 to 009e6e87 has its CatchHandler @ 009e6e94 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar1 <= (ulong)((long)__n >> 2)) {
              uVar1 = (long)__n >> 2;
            }
            if (0x7ffffffffffffff7 < __n) {
              uVar1 = 0x1fffffffffffffff;
            }
            if (uVar1 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 009e6dac to 009e6daf has its CatchHandler @ 009e6e90 */
              __dest = operator_new(uVar1 << 3);
            }
            plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
            local_78 = plVar2 + 1;
            *plVar2 = lVar11;
            if (0 < (long)__n) {
              memcpy(__dest,local_80,__n);
            }
            local_70 = (long *)((long)__dest + uVar1 * 8);
            if (local_80 != (void *)0x0) {
              operator_delete(local_80);
            }
          }
          else {
            *local_78 = lVar11;
            __dest = local_80;
            local_78 = local_78 + 1;
          }
          local_80 = __dest;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar11 + 8));
        lVar9 = *(long *)(in_x0 + 0x68);
        lVar8 = *(long *)(in_x0 + 0x70);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar8 - lVar9 >> 3));
    if ((long)local_78 - (long)local_80 == 0) {
      uVar6 = 0;
      uVar4 = 0;
      if (local_80 == (void *)0x0) goto LAB_009e6e44;
    }
    else {
                    /* try { // try from 009e6e10 to 009e6e13 has its CatchHandler @ 009e6e8c */
      iVar5 = PCGRand::getBiasedRandomUpToAndExcluding
                        ((PCGRand *)(in_x0 + 0x80),
                         (uint)((ulong)((long)local_78 - (long)local_80) >> 3));
      uVar4 = *(undefined8 *)((long)local_80 + (long)iVar5 * 8);
    }
    uVar6 = uVar4;
    operator_delete(local_80);
  }
LAB_009e6e44:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


