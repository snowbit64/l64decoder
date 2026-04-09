// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 008a82bc
// Size: 436 bytes
// Signature: int __thiscall operator()(uniform_int_distribution<int> * this, mersenne_twister_engine * param_1, param_type * param_2)


/* int 
   std::__ndk1::uniform_int_distribution<int>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::mersenne_twister_engine<unsigned
   long, 32ul, 624ul, 397ul, 31ul, 2567483615ul, 11ul, 4294967295ul, 7ul, 2636928640ul, 15ul,
   4022730752ul, 18ul, 1812433253ul>&, std::__ndk1::uniform_int_distribution<int>::param_type
   const&) */

int __thiscall
std::__ndk1::uniform_int_distribution<int>::operator()
          (uniform_int_distribution<int> *this,mersenne_twister_engine *param_1,param_type *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  mersenne_twister_engine *local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  long lStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  iVar6 = *(int *)param_2;
  if (*(int *)(param_2 + 4) - iVar6 == 0) goto LAB_008a8448;
  uVar2 = (*(int *)(param_2 + 4) - iVar6) + 1;
  local_80 = param_1;
  if (uVar2 == 0) {
    uStack_70 = 0x20;
    local_78 = 0x20;
    lStack_60 = 1;
    local_68 = 1;
    uStack_50 = 0;
    local_58 = 0x100000000;
    uStack_40 = 0x1ffffffff;
    local_48 = 0xffffffff;
    iVar6 = __independent_bits_engine<std::__ndk1::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,unsigned_int>
            ::__eval((integral_constant)&local_80);
    goto LAB_008a8448;
  }
  lVar3 = 0x1f;
  if ((uVar2 << (ulong)((uint)LZCOUNT(uVar2) & 0x1f) & 0x7fffffff) != 0) {
    lVar3 = 0x20;
  }
  local_78 = lVar3 - LZCOUNT(uVar2);
  local_68 = local_78 >> 5;
  if ((local_78 & 0x1f) != 0) {
    local_68 = local_68 + 1;
  }
  uStack_70 = 0;
  if (local_68 != 0) {
    uStack_70 = local_78 / local_68;
  }
  local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
  if (0x3f < uStack_70) {
    local_58 = 0;
  }
  uVar4 = 0;
  if (local_68 != 0) {
    uVar4 = local_58 / local_68;
  }
  if (uVar4 < 0x100000000 - local_58) {
    local_68 = local_68 + 1;
    uStack_70 = 0;
    if (local_68 != 0) {
      uStack_70 = local_78 / local_68;
    }
    if (uStack_70 < 0x40) {
      local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
      goto LAB_008a8374;
    }
    bVar1 = false;
    local_58 = 0;
    lStack_60 = local_68 + (uStack_70 * local_68 - local_78);
    uStack_50 = 0;
  }
  else {
LAB_008a8374:
    uVar4 = 0;
    if (local_68 != 0) {
      uVar4 = local_78 / local_68;
    }
    bVar1 = uStack_70 < 0x3f;
    lStack_60 = local_68 + (uVar4 * local_68 - local_78);
    uStack_50 = 0;
    if (uStack_70 < 0x3f) {
      uStack_50 = -1L << (uStack_70 + 1 & 0x3f) & 0x100000000;
    }
  }
  local_48 = 0;
  if (uStack_70 != 0) {
    local_48 = 0xffffffffffffffff >> (-uStack_70 & 0x3f);
  }
  uStack_40 = 0xffffffffffffffff >> (0x3f - uStack_70 & 0x3f);
  if (!bVar1) {
    uStack_40 = 0xffffffffffffffff;
  }
  do {
    uVar7 = __independent_bits_engine<std::__ndk1::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>,unsigned_int>
            ::__eval((integral_constant)&local_80);
  } while (uVar2 <= uVar7);
  iVar6 = *(int *)param_2 + uVar7;
LAB_008a8448:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


