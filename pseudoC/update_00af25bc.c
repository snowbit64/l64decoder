// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00af25bc
// Size: 736 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdsProvider::update() */

void GiantsAdsProvider::update(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  void *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(in_x0 + 0x151) != '\0') && ((*(byte *)(in_x0 + 0x150) & 1) == 0)) {
    lVar2 = Watch::getCurrentTicks();
    dVar11 = (double)Watch::convertTicksToMs(lVar2 - *(long *)(in_x0 + 0x158));
    if (2000.0 < dVar11) {
      *(undefined *)(in_x0 + 0x151) = 0;
      *(undefined4 *)(in_x0 + 0x150) = 1;
      Event::post();
    }
  }
  if ((*(char *)(in_x0 + 0x1b9) != '\0') && ((*(byte *)(in_x0 + 0x1b8) & 1) == 0)) {
    lVar2 = Watch::getCurrentTicks();
    dVar11 = (double)Watch::convertTicksToMs(lVar2 - *(long *)(in_x0 + 0x1c0));
    if (120000.0 < dVar11) {
      *(undefined *)(in_x0 + 0x1b9) = 0;
      *(undefined4 *)(in_x0 + 0x1b8) = 1;
      Event::post();
    }
  }
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(in_x0 + 0x138);
  lVar7 = *(long *)(in_x0 + 0x140);
  if (lVar2 != lVar7) {
    local_68 = 0;
    local_60 = 0;
    local_70 = (void *)0x0;
    lVar8 = *(long *)(in_x0 + 0xa8) - *(long *)(in_x0 + 0xa0);
    if (lVar8 != 0) {
      if (lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar2 = ((lVar8 >> 3) - 1U >> 6) + 1;
      local_70 = operator_new(lVar2 * 8);
      local_68 = 0;
      local_60 = lVar2;
      FUN_00af6bb0(&local_70,lVar8 >> 3,0);
      lVar2 = *(long *)(in_x0 + 0x138);
      lVar7 = *(long *)(in_x0 + 0x140);
    }
    if ((int)((ulong)(lVar7 - lVar2) >> 3) * -0x33333333 != 0) {
      uVar9 = 0;
      do {
        lVar7 = *(long *)(in_x0 + 0xa8) - *(long *)(in_x0 + 0xa0);
        if (lVar7 != 0) {
          lVar8 = lVar2 + uVar9 * 0x28;
          uVar10 = 0;
          do {
            puVar3 = *(undefined4 **)(*(long *)(in_x0 + 0xa0) + uVar10 * 8);
            if (((*(ulong *)(lVar8 + 4) ^ *(ulong *)(puVar3 + 1) |
                 *(ulong *)(lVar8 + 0xc) ^ *(ulong *)(puVar3 + 3)) == 0) &&
               (*(int *)(lVar8 + 0x14) == puVar3[5])) {
              puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28);
              *puVar3 = *puVar5;
                    /* try { // try from 00af27ac to 00af27af has its CatchHandler @ 00af289c */
              GiantsAdPlacement::setContent
                        ((GiantsAdPlacement *)puVar3,*(uchar **)(puVar5 + 8),puVar5[6]);
              uVar6 = uVar10 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)((long)local_70 + uVar6) =
                   *(ulong *)((long)local_70 + uVar6) | 1L << (uVar10 & 0x3f);
              lVar2 = *(long *)(in_x0 + 0x138);
              goto LAB_00af271c;
            }
            uVar10 = (ulong)((int)uVar10 + 1);
          } while (uVar10 < (ulong)(lVar7 >> 3));
        }
        pvVar4 = *(void **)(lVar2 + uVar9 * 0x28 + 0x20);
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
          lVar2 = *(long *)(in_x0 + 0x138);
        }
        *(undefined4 *)(lVar2 + uVar9 * 0x28 + 0x18) = 0;
LAB_00af271c:
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)((int)((ulong)(*(long *)(in_x0 + 0x140) - lVar2) >> 3) * -0x33333333));
    }
    lVar7 = *(long *)(in_x0 + 0xa0);
    lVar8 = *(long *)(in_x0 + 0xa8);
    if (lVar8 != lVar7) {
      uVar9 = 0;
      do {
        if ((*(ulong *)((long)local_70 + (uVar9 >> 3 & 0x1ffffffffffffff8)) >> (uVar9 & 0x3f) & 1)
            == 0) {
          puVar3 = *(undefined4 **)(lVar7 + uVar9 * 8);
          *puVar3 = 0xffffffff;
                    /* try { // try from 00af2838 to 00af2843 has its CatchHandler @ 00af28a0 */
          GiantsAdPlacement::setContent((GiantsAdPlacement *)puVar3,(uchar *)0x0,0);
          lVar7 = *(long *)(in_x0 + 0xa0);
          lVar8 = *(long *)(in_x0 + 0xa8);
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)(lVar8 - lVar7 >> 3));
      lVar2 = *(long *)(in_x0 + 0x138);
    }
    *(long *)(in_x0 + 0x140) = lVar2;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


