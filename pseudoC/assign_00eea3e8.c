// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign
// Entry Point: 00eea3e8
// Size: 572 bytes
// Signature: undefined __thiscall assign(vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> * this, ulong param_1, uint * param_2)


/* std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >::assign(unsigned long,
   unsigned int const&) */

void __thiscall
std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign
          (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this,ulong param_1,
          uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar4 = *(ulong *)(this + 0x10);
  puVar6 = *(uint **)this;
  if ((ulong)((long)(uVar4 - (long)puVar6) >> 2) < param_1) {
    if (puVar6 != (uint *)0x0) {
      *(uint **)(this + 8) = puVar6;
      operator_delete(puVar6);
      uVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x3e != 0) {
LAB_00eea61c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = param_1;
    if (param_1 <= (ulong)((long)uVar4 >> 1)) {
      uVar7 = (long)uVar4 >> 1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 >> 0x3e != 0) goto LAB_00eea61c;
    puVar2 = (uint *)operator_new(uVar7 * 4);
    uVar1 = *param_2;
    uVar4 = param_1 - 1 & 0x3fffffffffffffff;
    *(uint **)this = puVar2;
    *(uint **)(this + 0x10) = puVar2 + uVar7;
    puVar6 = puVar2;
    if (6 < uVar4) {
      uVar4 = uVar4 + 1;
      puVar5 = (undefined8 *)(puVar2 + 4);
      uVar9 = uVar4 & 0x7ffffffffffffff8;
      uVar7 = uVar9;
      do {
        puVar5[-1] = CONCAT44(uVar1,uVar1);
        puVar5[-2] = CONCAT44(uVar1,uVar1);
        puVar5[1] = CONCAT44(uVar1,uVar1);
        *puVar5 = CONCAT44(uVar1,uVar1);
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
      puVar6 = puVar2 + uVar9;
      if (uVar4 == uVar9) goto LAB_00eea4d0;
    }
    do {
      puVar3 = puVar6 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar3;
    } while (puVar3 != puVar2 + param_1);
LAB_00eea4d0:
    *(uint **)(this + 8) = puVar2 + param_1;
    return;
  }
  puVar2 = *(uint **)(this + 8);
  uVar7 = (long)puVar2 - (long)puVar6 >> 2;
  uVar4 = uVar7;
  if (param_1 <= uVar7) {
    uVar4 = param_1;
  }
  if (uVar4 != 0) {
    puVar3 = puVar6;
    uVar9 = uVar4;
    if ((7 < uVar4) && ((param_2 + 1 <= puVar6 || (puVar6 + uVar4 <= param_2)))) {
      uVar10 = uVar4 & 0xfffffffffffffff8;
      uVar1 = *param_2;
      uVar9 = uVar4 & 7;
      puVar5 = (undefined8 *)(puVar6 + 4);
      uVar11 = uVar10;
      do {
        puVar5[-1] = CONCAT44(uVar1,uVar1);
        puVar5[-2] = CONCAT44(uVar1,uVar1);
        puVar5[1] = CONCAT44(uVar1,uVar1);
        *puVar5 = CONCAT44(uVar1,uVar1);
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
      puVar3 = puVar6 + uVar10;
      if (uVar4 == uVar10) goto LAB_00eea560;
    }
    do {
      uVar9 = uVar9 - 1;
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    } while (uVar9 != 0);
  }
LAB_00eea560:
  if (param_1 <= uVar7) {
    *(uint **)(this + 8) = puVar6 + param_1;
    return;
  }
  puVar6 = puVar2;
  if (param_1 - uVar7 != 0) {
    lVar8 = param_1 * 4 - ((long)puVar2 - (long)puVar6 & 0xfffffffffffffffcU);
    puVar6 = puVar2 + (param_1 - uVar7);
    uVar4 = lVar8 - 4;
    if ((0x1b < uVar4) && ((param_2 + 1 <= puVar2 || ((uint *)(lVar8 + (long)puVar2) <= param_2))))
    {
      uVar1 = *param_2;
      uVar4 = (uVar4 >> 2) + 1;
      uVar9 = uVar4 & 0x7ffffffffffffff8;
      puVar5 = (undefined8 *)(puVar2 + 4);
      uVar7 = uVar9;
      do {
        puVar5[-1] = CONCAT44(uVar1,uVar1);
        puVar5[-2] = CONCAT44(uVar1,uVar1);
        puVar5[1] = CONCAT44(uVar1,uVar1);
        *puVar5 = CONCAT44(uVar1,uVar1);
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
      puVar2 = puVar2 + uVar9;
      if (uVar4 == uVar9) goto LAB_00eea5f0;
    }
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = *param_2;
      puVar2 = puVar3;
    } while (puVar3 != puVar6);
  }
LAB_00eea5f0:
  *(uint **)(this + 8) = puVar6;
  return;
}


