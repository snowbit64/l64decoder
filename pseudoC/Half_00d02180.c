// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Half
// Entry Point: 00d02180
// Size: 776 bytes
// Signature: undefined __thiscall Half(ModularArithmetic * this, Integer * param_1)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::ModularArithmetic::Half(CryptoPP::Integer const&) const */

Integer * __thiscall CryptoPP::ModularArithmetic::Half(ModularArithmetic *this,Integer *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  Integer *this_00;
  uint *__dest;
  uint *puVar9;
  ulong uVar10;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x18);
  if (uVar10 == *(ulong *)(this + 0x30)) {
    __dest = *(uint **)(this + 0x68);
    this_00 = (Integer *)(this + 0x48);
    puVar9 = *(uint **)(this + 0x38);
    if (__dest != *(uint **)(param_1 + 0x20)) {
      memcpy(__dest,*(uint **)(param_1 + 0x20),uVar10 << 2);
    }
    if (uVar10 != 0) {
      lVar5 = uVar10 - 1;
      uVar7 = *__dest;
      if (uVar10 < 3) {
        if ((uVar7 & 1) == 0) {
          lVar5 = uVar10 - 1;
          uVar7 = __dest[lVar5];
          __dest[lVar5] = uVar7 >> 1;
          if (lVar5 == 0) goto LAB_00d02330;
          __dest[uVar10 - 2] = (uint)(CONCAT44(uVar7,__dest[uVar10 - 2]) >> 1);
          lVar6 = *(long *)(lVar6 + 0x28);
        }
        else {
          uVar3 = (ulong)uVar7 + (ulong)*puVar9;
          *__dest = (uint)uVar3;
          lVar8 = uVar10 - 1;
          uVar3 = (ulong)__dest[1] + (uVar3 >> 0x20) + (ulong)puVar9[1];
          __dest[1] = (uint)uVar3;
          uVar7 = __dest[lVar8];
          __dest[lVar8] = uVar7 >> 1;
          if (lVar8 != 0) {
            __dest[uVar10 - 2] = (uint)(CONCAT44(uVar7,__dest[uVar10 - 2]) >> 1);
          }
          __dest[lVar5] = __dest[lVar5] + ((uint)(uVar3 >> 1) & 0x80000000);
          lVar6 = *(long *)(lVar6 + 0x28);
        }
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar7 = 0;
          do {
            uVar3 = uVar10 - 1;
            uVar2 = uVar7 | __dest[uVar10 - 1] >> 1;
            uVar7 = __dest[uVar10 - 1] << 0x1f;
            __dest[uVar10 - 1] = uVar2;
            uVar10 = uVar3;
          } while (uVar3 != 0);
          goto LAB_00d02330;
        }
        uVar3 = (ulong)uVar7 + (ulong)*puVar9;
        *__dest = (uint)uVar3;
        uVar3 = (ulong)__dest[1] + (uVar3 >> 0x20) + (ulong)puVar9[1];
        __dest[1] = (uint)uVar3;
        lVar8 = 0;
        do {
          uVar3 = (uVar3 >> 0x20) + (ulong)__dest[lVar8 + 2] + (ulong)puVar9[lVar8 + 2];
          uVar1 = lVar8 + 4;
          __dest[lVar8 + 2] = (uint)uVar3;
          uVar3 = (ulong)__dest[lVar8 + 3] + (uVar3 >> 0x20) + (ulong)puVar9[lVar8 + 3];
          __dest[lVar8 + 3] = (uint)uVar3;
          lVar8 = lVar8 + 2;
        } while (uVar1 < uVar10);
        uVar7 = 0;
        do {
          uVar1 = uVar10 - 1;
          uVar2 = uVar7 | __dest[uVar10 - 1] >> 1;
          uVar7 = __dest[uVar10 - 1] << 0x1f;
          __dest[uVar10 - 1] = uVar2;
          uVar10 = uVar1;
        } while (uVar1 != 0);
        __dest[lVar5] = __dest[lVar5] + (int)(uVar3 >> 0x20) * -0x80000000;
        lVar6 = *(long *)(lVar6 + 0x28);
      }
      if (lVar6 == local_48) {
        return this_00;
      }
      goto LAB_00d02484;
    }
  }
  else {
    if ((uVar10 == 0) || ((**(byte **)(param_1 + 0x20) & 1) == 0)) {
      bVar4 = true;
      Integer::operator>>(param_1,1);
    }
    else {
      Integer::Plus(param_1);
                    /* try { // try from 00d02298 to 00d022a7 has its CatchHandler @ 00d02488 */
      Integer::operator>>((Integer *)local_a8,1);
      bVar4 = false;
    }
    this_00 = (Integer *)(this + 0x78);
                    /* try { // try from 00d022b0 to 00d022bb has its CatchHandler @ 00d02498 */
    Integer::operator=(this_00,(Integer *)local_78);
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    local_78[0] = &PTR__Integer_0100c890;
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00d022f4 to 00d022f7 has its CatchHandler @ 00d02494 */
    UnalignedDeallocate(local_58);
    if (!bVar4) {
      local_a8[0] = &PTR__Integer_0100c890;
      if (uStack_90 <= local_98) {
        local_98 = uStack_90;
      }
      for (; local_98 != 0; local_98 = local_98 - 1) {
        *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
      }
                    /* try { // try from 00d0232c to 00d0232f has its CatchHandler @ 00d02490 */
      UnalignedDeallocate(local_88);
    }
  }
LAB_00d02330:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return this_00;
  }
LAB_00d02484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


