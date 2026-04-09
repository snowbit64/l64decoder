// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encode
// Entry Point: 00cf98bc
// Size: 788 bytes
// Signature: undefined __thiscall Encode(Integer * this, BufferedTransformation * param_1, ulong param_2, Signedness param_3)


/* CryptoPP::Integer::Encode(CryptoPP::BufferedTransformation&, unsigned long,
   CryptoPP::Integer::Signedness) const */

void __thiscall
CryptoPP::Integer::Encode
          (Integer *this,BufferedTransformation *param_1,ulong param_2,Signedness param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 local_b8;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined8 local_88;
  ulong local_78;
  ulong local_70;
  void *local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_3 == 0) || (*(int *)(this + 0x28) != 1)) {
    if (param_2 != 0) {
      uVar11 = (int)param_2 * 8;
      uVar7 = param_2 - 1;
      do {
        uVar11 = uVar11 - 8;
        if (uVar7 >> 2 < *(ulong *)(this + 0x18)) {
          uVar5 = (undefined)
                  (*(uint *)(*(long *)(this + 0x20) + (uVar7 & 0xfffffffffffffffc)) >>
                  (ulong)(uVar11 & 0x18));
        }
        else {
          uVar5 = 0;
        }
        local_88 = (undefined **)CONCAT71(local_88._1_7_,uVar5);
        (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_88,1,0,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0xffffffffffffffff);
    }
  }
  else {
    iVar6 = (int)*(ulong *)(this + 0x18) * -4;
    uVar7 = *(ulong *)(this + 0x18);
    do {
      if (uVar7 == 0) goto LAB_00cf99dc;
      uVar10 = uVar7 - 1;
      lVar1 = uVar7 * 4;
      iVar6 = iVar6 + 4;
      uVar7 = uVar10;
    } while (*(int *)(*(long *)(this + 0x20) + -4 + lVar1) == 0);
    if ((int)uVar10 == -1) {
LAB_00cf99dc:
      uVar7 = 0;
    }
    else {
      uVar11 = *(uint *)(*(long *)(this + 0x20) + (uVar10 & 0xffffffff) * 4);
      if (uVar11 != 0) {
        uVar8 = 0;
        uVar9 = 0x20;
        do {
          uVar3 = uVar8 + uVar9 >> 1;
          uVar2 = uVar3;
          if (uVar11 >> (ulong)(uVar3 & 0x1f) != 0) {
            uVar2 = uVar9;
            uVar8 = uVar3;
          }
          uVar9 = uVar2;
        } while (8 < uVar2 - uVar8);
        uVar11 = uVar2 >> 3;
      }
      uVar7 = (ulong)(uVar11 - iVar6);
    }
    uVar10 = param_2;
    if (param_2 <= uVar7) {
      uVar10 = uVar7;
    }
    uVar7 = uVar10 * 8 + 0x20;
    uVar12 = uVar7 >> 5;
    Integer((Integer *)&local_b8,0,uVar12);
    if (uVar7 < 0x120) {
      uVar7 = (ulong)(uint)(&DAT_005443f4)[uVar12];
    }
    else if (uVar7 < 0x220) {
      uVar7 = 0x10;
    }
    else if (uVar7 < 0x420) {
      uVar7 = 0x20;
    }
    else if (uVar7 < 0x820) {
      uVar7 = 0x40;
    }
    else {
      uVar11 = 0;
      uVar7 = 0x40;
      do {
        uVar9 = uVar11 + (uint)uVar7 >> 1;
        uVar8 = uVar9;
        if (uVar12 - 1 >> ((ulong)uVar9 & 0x3f) != 0) {
          uVar8 = (uint)uVar7;
          uVar11 = uVar9;
        }
        uVar7 = (ulong)uVar8;
      } while (1 < uVar8 - uVar11);
      uVar7 = 1L << (uVar7 & 0x3f);
    }
                    /* try { // try from 00cf9a8c to 00cf9a8f has its CatchHandler @ 00cf9bdc */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              (aSStack_b0,uVar7);
    *(uint *)((long)local_98 + (uVar10 & 0x1ffffffffffffffc)) =
         *(uint *)((long)local_98 + (uVar10 & 0x1ffffffffffffffc)) |
         1 << (ulong)((uint)(uVar10 * 8) & 0x18);
                    /* try { // try from 00cf9ab4 to 00cf9ac3 has its CatchHandler @ 00cf9bd8 */
    Plus((Integer *)&local_b8);
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    local_b8 = &PTR__Integer_0100c890;
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cf9afc to 00cf9aff has its CatchHandler @ 00cf9bd4 */
    UnalignedDeallocate(local_98);
    if (param_2 != 0) {
      uVar11 = (int)param_2 * 8;
      uVar7 = param_2 - 1;
      do {
        uVar11 = uVar11 - 8;
        if (uVar7 >> 2 < local_70) {
          uVar5 = (undefined)
                  (*(uint *)((long)local_68 + (uVar7 & 0xfffffffffffffffc)) >>
                  (ulong)(uVar11 & 0x18));
        }
        else {
          uVar5 = 0;
        }
        local_b8 = (undefined **)CONCAT71(local_b8._1_7_,uVar5);
                    /* try { // try from 00cf9b44 to 00cf9b5b has its CatchHandler @ 00cf9be8 */
        (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_b8,1,0,1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0xffffffffffffffff);
    }
    local_88 = &PTR__Integer_0100c890;
    if (local_70 <= local_78) {
      local_78 = local_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00cf9b9c to 00cf9b9f has its CatchHandler @ 00cf9bd0 */
    UnalignedDeallocate(local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


