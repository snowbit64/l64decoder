// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00d0f09c
// Size: 472 bytes
// Signature: undefined __thiscall __append(deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1, uint * param_2)


/* std::__ndk1::deque<unsigned int, std::__ndk1::allocator<unsigned int> >::__append(unsigned long,
   unsigned int const&) */

void __thiscall
std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
          (deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1,
          uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint **ppuVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint **ppuVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar7 = *(long *)(this + 8);
  lVar9 = *(long *)(this + 0x10);
  lVar5 = *(long *)(this + 0x28);
  lVar2 = 0;
  if (lVar9 - lVar7 != 0) {
    lVar2 = (lVar9 - lVar7) * 0x80 + -1;
  }
  uVar15 = lVar5 + *(long *)(this + 0x20);
  if (lVar2 - uVar15 < param_1) {
    __add_back_capacity(this,param_1 - (lVar2 - uVar15));
    lVar5 = *(long *)(this + 0x28);
    lVar7 = *(long *)(this + 8);
    lVar9 = *(long *)(this + 0x10);
    uVar15 = *(long *)(this + 0x20) + lVar5;
  }
  ppuVar6 = (uint **)(lVar7 + (uVar15 >> 7 & 0x1fffffffffffff8));
  if (lVar9 == lVar7) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = *ppuVar6 + (uVar15 & 0x3ff);
  }
  if (param_1 != 0) {
    uVar15 = param_1 + ((long)puVar8 - (long)*ppuVar6 >> 2);
    if ((long)uVar15 < 1) {
      uVar10 = 0x3ff - uVar15;
      uVar15 = (ulong)~(uint)uVar10;
      uVar10 = -(uVar10 >> 7 & 0x1fffffffffffff8);
    }
    else {
      uVar10 = uVar15 >> 7 & 0x1fffffffffffff8;
    }
    ppuVar11 = (uint **)((long)ppuVar6 + uVar10);
    puVar1 = *ppuVar11 + (uVar15 & 0x3ff);
    if (puVar8 != puVar1) {
      do {
        puVar12 = puVar1;
        if (ppuVar6 != ppuVar11) {
          puVar12 = *ppuVar6 + 0x400;
        }
        if (puVar8 != puVar12) {
          uVar15 = (long)puVar12 + (-4 - (long)puVar8);
          puVar13 = puVar8;
          if ((uVar15 < 0x1c) ||
             ((puVar8 < param_2 + 1 &&
              (param_2 < (uint *)((long)puVar8 + (uVar15 & 0xfffffffffffffffc) + 4))))) {
LAB_00d0f21c:
            do {
              puVar14 = puVar13 + 1;
              *puVar13 = *param_2;
              puVar13 = puVar14;
            } while (puVar14 != puVar12);
          }
          else {
            uVar3 = *param_2;
            uVar15 = (uVar15 >> 2) + 1;
            puVar4 = (undefined8 *)(puVar8 + 4);
            uVar16 = uVar15 & 0x7ffffffffffffff8;
            uVar10 = uVar16;
            do {
              puVar4[-1] = CONCAT44(uVar3,uVar3);
              puVar4[-2] = CONCAT44(uVar3,uVar3);
              puVar4[1] = CONCAT44(uVar3,uVar3);
              *puVar4 = CONCAT44(uVar3,uVar3);
              puVar4 = puVar4 + 4;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
            puVar13 = puVar8 + uVar16;
            if (uVar15 != uVar16) goto LAB_00d0f21c;
          }
          lVar5 = lVar5 + ((long)puVar12 - (long)puVar8 >> 2);
        }
        if (ppuVar6 == ppuVar11) break;
        ppuVar6 = ppuVar6 + 1;
        puVar8 = *ppuVar6;
      } while (puVar8 != puVar1);
      *(long *)(this + 0x28) = lVar5;
      return;
    }
  }
  return;
}


