// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00cfc5fc
// Size: 764 bytes
// Signature: undefined __cdecl Divide(uint * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::Integer::Divide(unsigned int&, CryptoPP::Integer&, CryptoPP::Integer const&, unsigned
   int) */

void CryptoPP::Integer::Divide(uint *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  void *__s;
  DivideByZero *this;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_4 == 0) {
    this = (DivideByZero *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cfc8d8 to 00cfc8db has its CatchHandler @ 00cfc8fc */
    DivideByZero::DivideByZero(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&DivideByZero::typeinfo,Exception::~Exception);
  }
  if ((param_4 & param_4 - 1) == 0) {
    uVar6 = 0;
    uVar10 = 0x20;
    do {
      uVar2 = uVar6 + uVar10 >> 1;
      uVar3 = uVar2;
      if (param_4 >> (ulong)(uVar2 & 0x1f) != 0) {
        uVar3 = uVar10;
        uVar6 = uVar2;
      }
      uVar10 = uVar3;
    } while (1 < uVar3 - uVar6);
    operator>>(param_3,(ulong)(uVar3 - 1));
                    /* try { // try from 00cfc684 to 00cfc68f has its CatchHandler @ 00cfc910 */
    operator=(param_2,(Integer *)local_98);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00cfc6c8 to 00cfc6cb has its CatchHandler @ 00cfc8f8 */
    UnalignedDeallocate(local_78);
    uVar6 = **(uint **)(param_3 + 0x20) & param_4 - 1;
LAB_00cfc6d8:
    *param_1 = uVar6;
  }
  else {
    uVar7 = *(ulong *)(param_3 + 0x18);
    do {
      uVar14 = uVar7;
      if (uVar14 == 0) {
        uVar14 = 0;
        uVar7 = 0;
        goto LAB_00cfc728;
      }
      uVar7 = uVar14 - 1;
    } while (*(int *)(*(long *)(param_3 + 0x20) + -4 + uVar14 * 4) == 0);
    uVar7 = uVar14 & 0xffffffff;
    if (uVar7 < 9) {
LAB_00cfc728:
      uVar7 = (ulong)(uint)(&DAT_005443f4)[uVar7];
    }
    else if (uVar7 < 0x11) {
      uVar7 = 0x10;
    }
    else if (uVar7 < 0x21) {
      uVar7 = 0x20;
    }
    else if (uVar7 < 0x41) {
      uVar7 = 0x40;
    }
    else {
      uVar6 = 0;
      uVar9 = 0x40;
      do {
        uVar3 = uVar6 + (uint)uVar9 >> 1;
        uVar10 = uVar3;
        if (uVar7 - 1 >> ((ulong)uVar3 & 0x3f) != 0) {
          uVar10 = (uint)uVar9;
          uVar6 = uVar3;
        }
        uVar9 = (ulong)uVar10;
      } while (1 < uVar10 - uVar6);
      uVar7 = 1L << (uVar9 & 0x3f);
    }
    uVar9 = *(ulong *)(param_2 + 0x18);
    __s = *(void **)(param_2 + 0x20);
    if (uVar9 == uVar7) {
LAB_00cfc774:
      *(ulong *)(param_2 + 0x18) = uVar7;
      *(void **)(param_2 + 0x20) = __s;
      if (__s != (void *)0x0) {
        memset(__s,0,uVar7 << 2);
      }
      *(undefined8 *)(param_2 + 0x10) = 0x3fffffffffffffff;
      lVar12 = *(long *)(param_3 + 0x20);
      *param_1 = 0;
      if ((int)uVar14 != 0) goto LAB_00cfc79c;
LAB_00cfc828:
      if (*(int *)(param_3 + 0x28) == 1) {
        *(undefined4 *)(param_2 + 0x28) = 1;
        goto LAB_00cfc840;
      }
    }
    else {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)((long)__s + uVar9 * 4 + -4) = 0;
      }
      UnalignedDeallocate(__s);
      AllocatorBase<unsigned_int>::CheckSize(uVar7);
      if (uVar7 != 0) {
        __s = (void *)UnalignedAllocate(uVar7 << 2);
        goto LAB_00cfc774;
      }
      *(ulong *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0x3fffffffffffffff;
      lVar12 = *(long *)(param_3 + 0x20);
      *param_1 = 0;
      if ((int)uVar14 == 0) goto LAB_00cfc828;
LAB_00cfc79c:
      lVar13 = *(long *)(param_2 + 0x20);
      lVar8 = 0;
      uVar7 = (ulong)param_4;
      lVar11 = (uVar14 & 0xffffffff) << 2;
      do {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = (undefined4)(((ulong)*(uint *)(lVar12 + -4 + lVar11) | lVar8 << 0x20) / uVar7);
        }
        *(undefined4 *)(lVar13 + -4 + lVar11) = uVar4;
        puVar1 = (undefined4 *)(lVar12 + -4 + lVar11);
        lVar11 = lVar11 + -4;
        uVar14 = CONCAT44(*param_1,*puVar1);
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar14 / uVar7;
        }
        lVar8 = uVar14 - uVar9 * uVar7;
        *param_1 = (uint)lVar8;
      } while (lVar11 != 0);
      if (*(int *)(param_3 + 0x28) == 1) {
        *(undefined4 *)(param_2 + 0x28) = 1;
        if (lVar8 == 0) goto LAB_00cfc840;
        operator--(param_2);
        uVar6 = param_4 - *param_1;
        goto LAB_00cfc6d8;
      }
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
LAB_00cfc840:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


