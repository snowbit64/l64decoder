// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign
// Entry Point: 00d0e62c
// Size: 488 bytes
// Signature: undefined __thiscall assign(deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> * this, ulong param_1, ulong * param_2)


/* std::__ndk1::deque<unsigned long, std::__ndk1::allocator<unsigned long> >::assign(unsigned long,
   unsigned long const&) */

void __thiscall
std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::assign
          (deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,ulong param_1,
          ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong **ppuVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  uVar10 = *(ulong *)(this + 0x20);
  uVar9 = *(ulong *)(this + 0x28);
  lVar6 = *(long *)(this + 8);
  lVar8 = *(long *)(this + 0x10);
  ppuVar5 = (ulong **)(lVar6 + (uVar10 >> 6 & 0x3fffffffffffff8));
  if (param_1 <= uVar9) {
    if (lVar8 == lVar6) {
      puVar7 = (ulong *)0x0;
    }
    else {
      puVar7 = *ppuVar5 + (uVar10 & 0x1ff);
    }
    if (param_1 == 0) {
      uVar1 = uVar10 + uVar9;
    }
    else {
      puVar11 = *ppuVar5;
      do {
        puVar12 = puVar7 + 1;
        *puVar7 = *param_2;
        puVar7 = puVar12;
        if ((long)puVar12 - (long)puVar11 == 0x1000) {
          ppuVar5 = ppuVar5 + 1;
          puVar11 = *ppuVar5;
          puVar7 = puVar11;
        }
        param_1 = param_1 - 1;
      } while (param_1 != 0);
      uVar10 = *(ulong *)(this + 0x20);
      uVar9 = *(ulong *)(this + 0x28);
      uVar1 = uVar10 + uVar9;
    }
    lVar4 = lVar8 - lVar6;
    plVar3 = (long *)(lVar6 + (uVar1 >> 6 & 0x3fffffffffffff8));
    if (lVar4 == 0) {
      puVar11 = (ulong *)0x0;
      if (puVar7 == (ulong *)0x0) {
        return;
      }
    }
    else {
      puVar11 = (ulong *)(*plVar3 + (uVar1 & 0x1ff) * 8);
      if (puVar7 == puVar11) {
        return;
      }
    }
    lVar6 = (((long)puVar11 - *plVar3 >> 3) + ((long)plVar3 - (long)ppuVar5) * 0x40) -
            ((long)puVar7 - (long)*ppuVar5 >> 3);
    if (0 < lVar6) {
      lVar6 = uVar9 - lVar6;
      lVar2 = 0;
      if (lVar4 != 0) {
        lVar2 = lVar4 * 0x40 + -1;
      }
      *(long *)(this + 0x28) = lVar6;
      uVar10 = lVar2 - (uVar10 + lVar6);
      while (0x3ff < uVar10) {
        operator_delete(*(void **)(lVar8 + -8));
        lVar8 = *(long *)(this + 0x10) + -8;
        *(long *)(this + 0x10) = lVar8;
        lVar6 = 0;
        if (lVar8 - *(long *)(this + 8) != 0) {
          lVar6 = (lVar8 - *(long *)(this + 8)) * 0x40 + -1;
        }
        uVar10 = lVar6 - (*(long *)(this + 0x28) + *(long *)(this + 0x20));
      }
    }
    return;
  }
  if (lVar8 == lVar6) {
    puVar7 = (ulong *)0x0;
  }
  else {
    puVar7 = *ppuVar5 + (uVar10 & 0x1ff);
  }
  if (uVar9 != 0) {
    puVar11 = *ppuVar5;
    do {
      puVar12 = puVar7 + 1;
      *puVar7 = *param_2;
      if ((long)puVar12 - (long)puVar11 == 0x1000) {
        ppuVar5 = ppuVar5 + 1;
        puVar12 = *ppuVar5;
        puVar11 = puVar12;
      }
      uVar9 = uVar9 - 1;
      puVar7 = puVar12;
    } while (uVar9 != 0);
    __append(this,param_1 - *(long *)(this + 0x28),param_2);
    return;
  }
  __append(this,param_1,param_2);
  return;
}


