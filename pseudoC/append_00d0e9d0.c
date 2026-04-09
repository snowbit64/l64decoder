// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00d0e9d0
// Size: 468 bytes
// Signature: undefined __thiscall __append(deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> * this, ulong param_1, ulong * param_2)


/* std::__ndk1::deque<unsigned long, std::__ndk1::allocator<unsigned long> >::__append(unsigned
   long, unsigned long const&) */

void __thiscall
std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__append
          (deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *this,ulong param_1,
          ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong **ppuVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong **ppuVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar5 = *(long *)(this + 8);
  lVar10 = *(long *)(this + 0x10);
  lVar7 = *(long *)(this + 0x28);
  lVar2 = 0;
  if (lVar10 - lVar5 != 0) {
    lVar2 = (lVar10 - lVar5) * 0x40 + -1;
  }
  uVar14 = lVar7 + *(long *)(this + 0x20);
  if (lVar2 - uVar14 < param_1) {
    __add_back_capacity(this,param_1 - (lVar2 - uVar14));
    lVar7 = *(long *)(this + 0x28);
    lVar5 = *(long *)(this + 8);
    lVar10 = *(long *)(this + 0x10);
    uVar14 = *(long *)(this + 0x20) + lVar7;
  }
  ppuVar4 = (ulong **)(lVar5 + (uVar14 >> 6 & 0x3fffffffffffff8));
  if (lVar10 == lVar5) {
    puVar6 = (ulong *)0x0;
  }
  else {
    puVar6 = *ppuVar4 + (uVar14 & 0x1ff);
  }
  if (param_1 != 0) {
    uVar14 = param_1 + ((long)puVar6 - (long)*ppuVar4 >> 3);
    if ((long)uVar14 < 1) {
      uVar11 = 0x1ff - uVar14;
      uVar14 = (ulong)~(uint)uVar11;
      uVar11 = -(uVar11 >> 6 & 0x3fffffffffffff8);
    }
    else {
      uVar11 = uVar14 >> 6 & 0x3fffffffffffff8;
    }
    ppuVar12 = (ulong **)((long)ppuVar4 + uVar11);
    puVar1 = *ppuVar12 + (uVar14 & 0x1ff);
    if (puVar6 != puVar1) {
      do {
        puVar13 = puVar1;
        if (ppuVar4 != ppuVar12) {
          puVar13 = *ppuVar4 + 0x200;
        }
        if (puVar6 == puVar13) {
          *(long *)(this + 0x28) = lVar7;
        }
        else {
          uVar14 = (long)puVar13 + (-8 - (long)puVar6);
          puVar8 = puVar6;
          if ((uVar14 < 0x18) ||
             ((puVar6 < param_2 + 1 &&
              (param_2 < (ulong *)((long)puVar6 + (uVar14 & 0xfffffffffffffff8) + 8))))) {
LAB_00d0eb44:
            do {
              puVar9 = puVar8 + 1;
              *puVar8 = *param_2;
              puVar8 = puVar9;
            } while (puVar9 != puVar13);
          }
          else {
            uVar3 = *param_2;
            uVar14 = (uVar14 >> 3) + 1;
            puVar8 = puVar6 + 2;
            uVar15 = uVar14 & 0x3ffffffffffffffc;
            uVar11 = uVar15;
            do {
              puVar8[-1] = uVar3;
              puVar8[-2] = uVar3;
              puVar8[1] = uVar3;
              *puVar8 = uVar3;
              puVar8 = puVar8 + 4;
              uVar11 = uVar11 - 4;
            } while (uVar11 != 0);
            puVar8 = puVar6 + uVar15;
            if (uVar14 != uVar15) goto LAB_00d0eb44;
          }
          lVar7 = *(long *)(this + 0x28) + ((long)puVar13 - (long)puVar6 >> 3);
          *(long *)(this + 0x28) = lVar7;
        }
        if (ppuVar4 == ppuVar12) {
          return;
        }
        ppuVar4 = ppuVar4 + 1;
        puVar6 = *ppuVar4;
      } while (puVar6 != puVar1);
    }
  }
  return;
}


