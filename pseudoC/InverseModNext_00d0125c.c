// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseModNext
// Entry Point: 00d0125c
// Size: 1208 bytes
// Signature: undefined __cdecl InverseModNext(Integer * param_1)


/* CryptoPP::Integer::InverseModNext(CryptoPP::Integer const&) const */

void CryptoPP::Integer::InverseModNext(Integer *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  Integer *in_x1;
  Integer *in_x8;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong local_70;
  uint *local_68;
  int local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)(in_x1 + 0x18);
  if ((lVar10 != 0) && ((**(byte **)(in_x1 + 0x20) & 1) != 0)) {
    puVar9 = (uint *)(lVar10 << 2);
    local_b0 = (uint *)0x3fffffffffffffff;
    local_a8 = puVar9;
    AllocatorBase<unsigned_int>::CheckSize((ulong)puVar9);
    if (puVar9 != (uint *)0x0) {
      puVar9 = (uint *)UnalignedAllocate(lVar10 << 4);
    }
                    /* try { // try from 00d01310 to 00d0131b has its CatchHandler @ 00d017b4 */
    local_a0 = puVar9;
    Integer((Integer *)local_88,0,*(ulong *)(in_x1 + 0x18));
    uVar5 = AlmostInverse(local_68,puVar9,*(uint **)(param_1 + 0x20),*(ulong *)(param_1 + 0x18),
                          *(uint **)(in_x1 + 0x20),*(ulong *)(in_x1 + 0x18));
    DivideByPower2Mod(local_68,local_68,uVar5 & 0xffffffff,*(uint **)(in_x1 + 0x20),
                      *(ulong *)(in_x1 + 0x18));
                    /* try { // try from 00d01348 to 00d01353 has its CatchHandler @ 00d017a4 */
    Integer(in_x8,(Integer *)local_88);
    if (local_70 <= local_78) {
      local_78 = local_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      local_68[local_78 - 1] = 0;
    }
                    /* try { // try from 00d01378 to 00d0137f has its CatchHandler @ 00d017a0 */
    UnalignedDeallocate(local_68);
    puVar3 = local_b0;
    if (local_a8 <= local_b0) {
      puVar3 = local_a8;
    }
    for (; puVar3 != (uint *)0x0; puVar3 = (uint *)((long)puVar3 + -1)) {
      puVar9[(long)puVar3 + -1] = 0;
    }
                    /* try { // try from 00d013a4 to 00d013ab has its CatchHandler @ 00d0179c */
    UnalignedDeallocate(puVar9);
    goto LAB_00d0167c;
  }
  if ((*(int *)(in_x1 + 0x28) == 1) || (**(int **)(in_x1 + 0x20) != 0)) {
LAB_00d012bc:
    if ((*(long *)(param_1 + 0x18) == 0) || ((**(byte **)(param_1 + 0x20) & 1) == 0))
    goto LAB_00d012d0;
    iVar4 = Compare(param_1,(Integer *)&DAT_02120840);
    if (iVar4 != 0) {
      Modulo(in_x1);
                    /* try { // try from 00d013d4 to 00d013e3 has its CatchHandler @ 00d01788 */
      InverseModNext((Integer *)&local_b8);
      puVar9 = local_a8;
      if (local_a0 <= local_a8) {
        puVar9 = local_a0;
      }
      local_b8 = &PTR__Integer_0100c890;
      for (; puVar9 != (uint *)0x0; puVar9 = (uint *)((long)puVar9 + -1)) {
        *(undefined4 *)((long)local_98 + (long)puVar9 * 4 + -4) = 0;
      }
                    /* try { // try from 00d0141c to 00d0141f has its CatchHandler @ 00d01784 */
      UnalignedDeallocate(local_98);
      if ((local_60 == 1) || (uVar5 = local_70, *local_68 != 0)) {
LAB_00d01438:
                    /* try { // try from 00d01438 to 00d01447 has its CatchHandler @ 00d01774 */
        Minus(param_1);
                    /* try { // try from 00d01448 to 00d01457 has its CatchHandler @ 00d01760 */
        Times(in_x1);
        DataMemoryBarrier(2,3);
        if ((DAT_02120808 & 1) == 0) {
          DAT_02120978 = Baseline_MultiplyTop2;
          DAT_02120980 = Baseline_MultiplyTop4;
          DAT_021208a0 = Baseline_Multiply2;
          DAT_021208a8 = Baseline_Multiply4;
          DAT_021208b0 = Baseline_Multiply8;
          DAT_02120930 = Baseline_MultiplyBottom2;
          DAT_02120938 = Baseline_MultiplyBottom4;
          DAT_02120940 = Baseline_MultiplyBottom8;
          DAT_021208e8 = Baseline_Square2;
          DAT_021208f0 = Baseline_Square4;
          DAT_021208f8 = Baseline_Square8;
          DAT_02120988 = Baseline_MultiplyTop8;
          DAT_021208c0 = Baseline_Multiply16;
          DAT_02120950 = Baseline_MultiplyBottom16;
          DAT_02120908 = Baseline_Square16;
          DAT_02120998 = Baseline_MultiplyTop16;
          DAT_02120808 = 1;
          DataMemoryBarrier(2,3);
        }
                    /* try { // try from 00d01540 to 00d01547 has its CatchHandler @ 00d01750 */
        puVar6 = (undefined8 *)UnalignedAllocate(8);
        *puVar6 = 1;
                    /* try { // try from 00d01560 to 00d0156f has its CatchHandler @ 00d01740 */
        Plus((Integer *)local_e8);
                    /* try { // try from 00d01570 to 00d0157f has its CatchHandler @ 00d01730 */
        DividedBy((Integer *)&local_b8);
        local_b8 = &PTR__Integer_0100c890;
        puVar9 = local_a8;
        if (local_a0 <= local_a8) {
          puVar9 = local_a0;
        }
        for (; puVar9 != (uint *)0x0; puVar9 = (uint *)((long)puVar9 + -1)) {
          *(undefined4 *)((long)local_98 + (long)puVar9 * 4 + -4) = 0;
        }
                    /* try { // try from 00d015b0 to 00d015b3 has its CatchHandler @ 00d0172c */
        UnalignedDeallocate(local_98);
        lVar10 = 2;
        do {
          lVar1 = lVar10 + -1;
          *(undefined4 *)((long)puVar6 + lVar10 * 4 + -4) = 0;
          lVar10 = lVar1;
        } while (lVar1 != 0);
                    /* try { // try from 00d015d8 to 00d015df has its CatchHandler @ 00d01728 */
        UnalignedDeallocate(puVar6);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d01610 to 00d01613 has its CatchHandler @ 00d01724 */
        UnalignedDeallocate(local_c8);
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00d01644 to 00d01647 has its CatchHandler @ 00d01720 */
        UnalignedDeallocate(local_f8);
      }
      else {
        do {
          if (uVar5 == 0) goto LAB_00d016fc;
          uVar8 = uVar5 - 1;
          lVar10 = uVar5 - 1;
          uVar5 = uVar8;
        } while (local_68[lVar10] == 0);
        if ((int)uVar8 != -1) goto LAB_00d01438;
LAB_00d016fc:
                    /* try { // try from 00d016fc to 00d0170b has its CatchHandler @ 00d01714 */
        Integer(in_x8,(Integer *)&DAT_02120810);
      }
      local_88[0] = &PTR__Integer_0100c890;
      if (local_70 <= local_78) {
        local_78 = local_70;
      }
      for (; local_78 != 0; local_78 = local_78 - 1) {
        local_68[local_78 - 1] = 0;
      }
                    /* try { // try from 00d01678 to 00d0167b has its CatchHandler @ 00d01780 */
      UnalignedDeallocate(local_68);
      goto LAB_00d0167c;
    }
    puVar6 = &DAT_02120840;
  }
  else {
    do {
      if (lVar10 == 0) goto LAB_00d012d0;
      lVar7 = lVar10 + -1;
      lVar1 = lVar10 + -1;
      lVar10 = lVar7;
    } while ((*(int **)(in_x1 + 0x20))[lVar1] == 0);
    if ((int)lVar7 != -1) goto LAB_00d012bc;
LAB_00d012d0:
    puVar6 = &DAT_02120810;
  }
  Integer(in_x8,(Integer *)puVar6);
LAB_00d0167c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


