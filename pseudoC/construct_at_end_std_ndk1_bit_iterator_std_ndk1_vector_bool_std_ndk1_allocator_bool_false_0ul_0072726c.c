// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
// Entry Point: 0072726c
// Size: 440 bytes
// Signature: type __cdecl __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>(__bit_iterator param_1, __bit_iterator param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul> >::value, void>::type std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool>
   >::__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul>
   >(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false,
   0ul>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0ul>) */

type std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::
     __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
               (__bit_iterator param_1,__bit_iterator param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long *in_x2;
  __bit_iterator in_w3;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *__src;
  ulong *__dest;
  ulong uVar12;
  ulong *local_78;
  uint local_70;
  long local_68;
  uint local_60;
  ulong *local_58;
  uint local_50;
  long local_48;
  
  puVar10 = (undefined8 *)(ulong)param_1;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar11 = *(ulong **)(ulong)param_2;
  lVar8 = *in_x2;
  uVar3 = *(uint *)((ulong **)(ulong)param_2 + 1);
  uVar7 = (ulong)uVar3;
  uVar4 = *(uint *)(in_x2 + 1);
  uVar9 = puVar10[1];
  uVar12 = (uVar4 - uVar7) + (lVar8 - (long)puVar11) * 8;
  uVar1 = uVar12 + uVar9;
  puVar10[1] = uVar1;
  if ((uVar9 == 0) || (0x3f < (uVar1 - 1 ^ uVar9 - 1))) {
    puVar10 = (undefined8 *)*puVar10;
    if (uVar1 < 0x41) {
      *puVar10 = 0;
    }
    else {
      *(undefined8 *)((long)puVar10 + (uVar1 - 1 >> 3 & 0x1ffffffffffffff8)) = 0;
    }
  }
  else {
    puVar10 = (undefined8 *)*puVar10;
  }
  uVar2 = (uint)uVar9 & 0x3f;
  __dest = (ulong *)((long)puVar10 + (uVar9 >> 3 & 0x1ffffffffffffff8));
  if (uVar3 == uVar2) {
    if (0 < (long)uVar12) {
      __src = puVar11;
      if (uVar3 != 0) {
        uVar9 = (ulong)(0x40 - uVar3);
        uVar1 = uVar12;
        if (uVar9 <= uVar12) {
          uVar1 = uVar9;
        }
        uVar12 = uVar12 - uVar1;
        __src = puVar11 + 1;
        uVar9 = 0xffffffffffffffffU >> (uVar9 - uVar1 & 0x3f) & -1L << (uVar7 & 0x3f);
        *__dest = *__dest & (uVar9 ^ 0xffffffffffffffff) | *puVar11 & uVar9;
        __dest = (ulong *)((long)__dest + (uVar1 + uVar7 >> 3 & 0x1ffffffffffffff8));
      }
      uVar1 = uVar12 + 0x3f;
      if (-1 < (long)uVar12) {
        uVar1 = uVar12;
      }
      lVar8 = (long)uVar1 >> 6;
      pvVar6 = memmove(__dest,__src,lVar8 * 8);
      param_1 = (__bit_iterator)pvVar6;
      if (0 < (long)uVar12 % 0x40) {
        uVar12 = 0xffffffffffffffff >> (-((long)uVar12 % 0x40) & 0x3fU);
        __dest[lVar8] = __dest[lVar8] & (uVar12 ^ 0xffffffffffffffff) | __src[lVar8] & uVar12;
      }
    }
  }
  else {
    local_78 = __dest;
    local_70 = uVar2;
    local_68 = lVar8;
    local_60 = uVar4;
    local_58 = puVar11;
    local_50 = uVar3;
    param_1 = __copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
                        ((__ndk1 *)&local_58,(__bit_iterator)&local_68,(__bit_iterator)&local_78,
                         in_w3);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


