// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduced
// Entry Point: 00ce7c0c
// Size: 856 bytes
// Signature: undefined __cdecl Reduced(PolynomialMod2 * param_1)


/* CryptoPP::GF2NT::Reduced(CryptoPP::PolynomialMod2 const&) const */

SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *
CryptoPP::GF2NT::Reduced(PolynomialMod2 *param_1)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  SecBlock *in_x1;
  PolynomialMod2 *in_x2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *this;
  SecBlock aSStack_68 [8];
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((uint)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98)) < 0x20) {
    operator%((CryptoPP *)in_x1,param_1 + 0x70,in_x2);
    this = (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)
           (param_1 + 0x50);
                    /* try { // try from 00ce7c5c to 00ce7c67 has its CatchHandler @ 00ce7f6c */
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
              (this,aSStack_68);
    if (local_58 <= local_60) {
      local_60 = local_58;
    }
    for (; local_60 != 0; local_60 = local_60 - 1) {
      *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce7c90 to 00ce7c93 has its CatchHandler @ 00ce7f68 */
    UnalignedDeallocate(local_50);
    goto LAB_00ce7f34;
  }
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::SecBlock
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)aSStack_68
             ,in_x1);
  uVar2 = local_58;
  uVar12 = (ulong)*(uint *)(param_1 + 0x94);
  uVar6 = uVar12 + 0x1f >> 5;
  uVar3 = local_58 - 1;
  if (uVar3 < uVar6) {
    if (local_58 == uVar6) {
LAB_00ce7e14:
      if ((uVar12 & 0x1f) != 0) {
        uVar13 = -1 << (ulong)((uint)uVar12 & 0x1f);
        uVar11 = *(uint *)((long)local_50 + uVar3 * 4);
        uVar5 = uVar11 & uVar13;
        *(uint *)((long)local_50 + uVar3 * 4) = uVar11 & (uVar13 ^ 0xffffffff);
        lVar10 = (uVar3 - (*(uint *)(param_1 + 0x94) >> 5)) * 4;
        *(uint *)((long)local_50 + lVar10) =
             uVar5 >> (ulong)(*(uint *)(param_1 + 0x94) & 0x1f) ^ *(uint *)((long)local_50 + lVar10)
        ;
        uVar11 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98);
        if ((uVar11 & 0x1f) == 0) {
          uVar6 = -(ulong)(uVar11 >> 5);
        }
        else {
          lVar10 = (uVar3 - (uVar11 >> 5)) * 4;
          *(uint *)((long)local_50 + lVar10) =
               *(uint *)((long)local_50 + lVar10) ^ uVar5 >> (ulong)(uVar11 & 0x1f);
          uVar13 = *(uint *)(param_1 + 0x94) - *(int *)(param_1 + 0x98);
          uVar11 = uVar13 & 0x1f;
          if (uVar11 <= (*(uint *)(param_1 + 0x94) & 0x1f)) goto LAB_00ce7ec8;
          uVar6 = ~(ulong)(uVar13 >> 5);
          uVar5 = uVar5 << (ulong)(-uVar11 & 0x1f);
        }
        lVar10 = (uVar3 + uVar6) * 4;
        *(uint *)((long)local_50 + lVar10) = *(uint *)((long)local_50 + lVar10) ^ uVar5;
      }
    }
  }
  else {
    lVar10 = local_58 * 4;
    uVar6 = local_58;
    do {
      uVar4 = uVar6;
      lVar10 = lVar10 + -4;
      lVar9 = uVar4 * 4;
      uVar6 = (ulong)((uint)uVar12 >> 5);
      uVar5 = *(uint *)((long)local_50 + uVar4 * 4 + -4);
      if ((uVar12 & 0x1f) == 0) {
        lVar8 = lVar10 + uVar6 * -4;
        uVar11 = *(uint *)((long)local_50 + uVar4 * 4 + uVar6 * -4 + -4);
        uVar13 = uVar5;
      }
      else {
        lVar8 = lVar9 + uVar6 * -4;
        *(uint *)((long)local_50 + lVar8 + -4) =
             *(uint *)((long)local_50 + lVar8 + -4) ^ uVar5 >> (ulong)((uint)uVar12 & 0x1f);
        uVar6 = (ulong)(*(uint *)(param_1 + 0x94) >> 5);
        uVar11 = uVar5 << (ulong)(-(*(uint *)(param_1 + 0x94) & 0x1f) & 0x1f);
        lVar8 = (uVar3 + ~uVar6) * 4;
        uVar13 = *(uint *)((long)local_50 + lVar9 + uVar6 * -4 + -8);
      }
      *(uint *)((long)local_50 + lVar8) = uVar11 ^ uVar13;
      uVar11 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98) & 0x1f;
      uVar6 = (ulong)((uint)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98)) >> 5);
      if (uVar11 == 0) {
        lVar8 = lVar10 + uVar6 * -4;
        uVar11 = *(uint *)((long)local_50 + uVar4 * 4 + uVar6 * -4 + -4);
      }
      else {
        lVar8 = lVar9 + uVar6 * -4;
        *(uint *)((long)local_50 + lVar8 + -4) =
             *(uint *)((long)local_50 + lVar8 + -4) ^ uVar5 >> (ulong)uVar11;
        uVar6 = (ulong)((uint)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98)) >> 5);
        uVar11 = uVar5 << (ulong)(-(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x98) & 0x1fU) &
                                 0x1f);
        lVar8 = (uVar3 + ~uVar6) * 4;
        uVar5 = *(uint *)((long)local_50 + lVar9 + uVar6 * -4 + -8);
      }
      uVar3 = uVar3 - 1;
      *(uint *)((long)local_50 + lVar8) = uVar11 ^ uVar5;
      uVar12 = (ulong)*(uint *)(param_1 + 0x94);
      uVar7 = uVar12 + 0x1f >> 5;
      uVar6 = uVar4 - 1;
    } while (uVar7 <= uVar4 - 2);
    uVar3 = uVar4 - 2;
    if (uVar4 - 1 == uVar7) goto LAB_00ce7e14;
  }
LAB_00ce7ec8:
  uVar3 = *(ulong *)(param_1 + 0xb0);
  __s = *(void **)(param_1 + 0xb8);
  if (uVar3 != 0) {
    memset(__s,0,uVar3 << 2);
  }
  if (__s != local_50) {
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    memcpy(__s,local_50,uVar3 << 2);
  }
  if (local_58 <= local_60) {
    local_60 = local_58;
  }
  for (; local_60 != 0; local_60 = local_60 - 1) {
    *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce7f28 to 00ce7f2f has its CatchHandler @ 00ce7f64 */
  UnalignedDeallocate(local_50);
  this = (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *)
         (param_1 + 0xa0);
LAB_00ce7f34:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


