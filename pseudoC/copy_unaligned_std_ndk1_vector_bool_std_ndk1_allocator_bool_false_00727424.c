// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
// Entry Point: 00727424
// Size: 572 bytes
// Signature: __bit_iterator __thiscall __copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>(__ndk1 * this, __bit_iterator param_1, __bit_iterator param_2, __bit_iterator param_3)


/* std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false, 0>
   std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false>(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0>) */

__bit_iterator __thiscall
std::__ndk1::__copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
          (__ndk1 *this,__bit_iterator param_1,__bit_iterator param_2,__bit_iterator param_3)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong **in_x8;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  ppuVar5 = (ulong **)(ulong)param_2;
  puVar8 = *(ulong **)this;
  uVar7 = *(uint *)(this + 8);
  uVar6 = ((ulong)*(uint *)((long *)(ulong)param_1 + 1) +
          (*(long *)(ulong)param_1 - (long)puVar8) * 8) - (ulong)uVar7;
  if ((long)uVar6 < 1) {
    uVar7 = *(uint *)(ppuVar5 + 1);
  }
  else {
    if (uVar7 == 0) {
      uVar12 = (ulong)*(uint *)(ppuVar5 + 1);
    }
    else {
      uVar2 = *(uint *)(ppuVar5 + 1);
      uVar12 = (ulong)(0x40 - uVar7);
      uVar14 = uVar6;
      if (uVar12 <= uVar6) {
        uVar14 = uVar12;
      }
      uVar9 = (ulong)(0x40 - uVar2);
      puVar3 = *ppuVar5;
      uVar13 = uVar9;
      if (uVar14 <= uVar9) {
        uVar13 = uVar14;
      }
      uVar10 = 0xffffffffffffffffU >> (uVar12 - uVar14 & 0x3f) & -1L << ((ulong)uVar7 & 0x3f) &
               *puVar8;
      uVar4 = uVar10 << ((ulong)(uVar2 - uVar7) & 0x3f);
      if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
        uVar4 = uVar10 >> ((ulong)(uVar7 - uVar2) & 0x3f);
      }
      uVar6 = uVar6 - uVar14;
      puVar8 = (ulong *)((long)puVar3 + (uVar13 + uVar2 >> 3 & 0x1ffffffffffffff8));
      uVar7 = uVar2 + (int)uVar13 & 0x3f;
      uVar12 = (ulong)uVar7;
      uVar14 = uVar14 - uVar13;
      *puVar3 = *puVar3 & (0xffffffffffffffffU >> (uVar9 - uVar13 & 0x3f) &
                           -1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffff) | uVar4;
      *ppuVar5 = puVar8;
      *(uint *)(ppuVar5 + 1) = uVar7;
      if (0 < (long)uVar14) {
        uVar7 = *(uint *)(this + 8);
        uVar9 = *puVar8;
        *(int *)(ppuVar5 + 1) = (int)uVar14;
        uVar12 = uVar14 & 0xffffffff;
        *puVar8 = uVar10 >> (uVar13 + uVar7 & 0x3f) |
                  uVar9 & (0xffffffffffffffffU >> (-uVar14 & 0x3f) ^ 0xffffffffffffffff);
      }
      puVar8 = (ulong *)(*(long *)this + 8);
      *(ulong **)this = puVar8;
    }
    uVar7 = (uint)uVar12;
    uVar13 = (ulong)(0x40 - uVar7);
    uVar14 = -1L << (uVar12 & 0x3f);
    if (0x3f < (long)uVar6) {
      uVar9 = uVar6;
      do {
        puVar3 = *ppuVar5;
        uVar10 = *puVar8;
        *puVar3 = *puVar3 & ~uVar14 | uVar10 << (uVar12 & 0x3f);
        uVar6 = uVar9 - 0x40;
        puVar3 = puVar3 + 1;
        uVar4 = *puVar3;
        *ppuVar5 = puVar3;
        puVar8 = (ulong *)(*(long *)this + 8);
        *puVar3 = uVar4 & uVar14 | uVar10 >> (uVar13 & 0x3f);
        *(ulong **)this = puVar8;
        bVar1 = 0x7f < uVar9;
        uVar9 = uVar6;
      } while (bVar1);
    }
    if (0 < (long)uVar6) {
      uVar9 = uVar13;
      if (uVar6 <= uVar13) {
        uVar9 = uVar6;
      }
      this = (__ndk1 *)*ppuVar5;
      uVar10 = *(ulong *)this;
      uVar4 = *puVar8 & 0xffffffffffffffffU >> (-uVar6 & 0x3f);
      uVar7 = uVar7 + (int)uVar9 & 0x3f;
      puVar8 = (ulong *)((long)this + (uVar9 + uVar12 >> 3 & 0x1ffffffffffffff8));
      lVar11 = uVar6 - uVar9;
      *(uint *)(ppuVar5 + 1) = uVar7;
      *ppuVar5 = puVar8;
      *(ulong *)this =
           uVar10 & (0xffffffffffffffffU >> (uVar13 - uVar9 & 0x3f) & uVar14 ^ 0xffffffffffffffff) |
           uVar4 << (uVar12 & 0x3f);
      if (0 < lVar11) {
        uVar6 = *puVar8;
        uVar7 = (uint)lVar11;
        *(uint *)(ppuVar5 + 1) = uVar7;
        *puVar8 = uVar6 & (0xffffffffffffffffU >> (-lVar11 & 0x3fU) ^ 0xffffffffffffffff) |
                  uVar4 >> (uVar9 & 0x3f);
      }
    }
  }
  puVar8 = *ppuVar5;
  *(uint *)(in_x8 + 1) = uVar7;
  *in_x8 = puVar8;
  return (__bit_iterator)this;
}


