// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign
// Entry Point: 00d0e814
// Size: 444 bytes
// Signature: undefined __thiscall assign(deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1, uint * param_2)


/* std::__ndk1::deque<unsigned int, std::__ndk1::allocator<unsigned int> >::assign(unsigned long,
   unsigned int const&) */

void __thiscall
std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign
          (deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1,
          uint *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint **ppuVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  
  uVar7 = *(ulong *)(this + 0x20);
  uVar4 = *(ulong *)(this + 0x28);
  lVar3 = *(long *)(this + 8);
  lVar9 = *(long *)(this + 0x10);
  ppuVar5 = (uint **)(lVar3 + (uVar7 >> 7 & 0x1fffffffffffff8));
  if (uVar4 < param_1) {
    if (lVar9 == lVar3) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = *ppuVar5 + (uVar7 & 0x3ff);
    }
    if (uVar4 != 0) {
      puVar10 = *ppuVar5;
      uVar7 = uVar4;
      do {
        puVar11 = puVar8 + 1;
        *puVar8 = *param_2;
        if ((long)puVar11 - (long)puVar10 == 0x1000) {
          ppuVar5 = ppuVar5 + 1;
          puVar11 = *ppuVar5;
          puVar10 = puVar11;
        }
        uVar7 = uVar7 - 1;
        puVar8 = puVar11;
      } while (uVar7 != 0);
    }
    __append(this,param_1 - uVar4,param_2);
    return;
  }
  if (lVar9 == lVar3) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = *ppuVar5 + (uVar7 & 0x3ff);
  }
  if (param_1 != 0) {
    puVar11 = *ppuVar5;
    puVar10 = puVar8;
    do {
      puVar8 = puVar10 + 1;
      *puVar10 = *param_2;
      if ((long)puVar8 - (long)puVar11 == 0x1000) {
        ppuVar5 = ppuVar5 + 1;
        puVar8 = *ppuVar5;
        puVar11 = puVar8;
      }
      param_1 = param_1 - 1;
      puVar10 = puVar8;
    } while (param_1 != 0);
  }
  plVar1 = (long *)(lVar3 + (uVar7 + uVar4 >> 7 & 0x1fffffffffffff8));
  lVar3 = lVar9 - lVar3;
  if (lVar3 == 0) {
    puVar10 = (uint *)0x0;
    if (puVar8 == (uint *)0x0) {
      return;
    }
  }
  else {
    puVar10 = (uint *)(*plVar1 + (uVar7 + uVar4 & 0x3ff) * 4);
    if (puVar8 == puVar10) {
      return;
    }
  }
  lVar6 = (((long)puVar10 - *plVar1 >> 2) + ((long)plVar1 - (long)ppuVar5) * 0x80) -
          ((long)puVar8 - (long)*ppuVar5 >> 2);
  if (0 < lVar6) {
    lVar6 = uVar4 - lVar6;
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 * 0x80 + -1;
    }
    *(long *)(this + 0x28) = lVar6;
    uVar7 = lVar2 - (uVar7 + lVar6);
    while (0x7ff < uVar7) {
      operator_delete(*(void **)(lVar9 + -8));
      lVar9 = *(long *)(this + 0x10) + -8;
      *(long *)(this + 0x10) = lVar9;
      lVar3 = 0;
      if (lVar9 - *(long *)(this + 8) != 0) {
        lVar3 = (lVar9 - *(long *)(this + 8)) * 0x80 + -1;
      }
      uVar7 = lVar3 - (*(long *)(this + 0x28) + *(long *)(this + 0x20));
    }
  }
  return;
}


