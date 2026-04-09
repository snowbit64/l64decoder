// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00b83a1c
// Size: 240 bytes
// Signature: undefined __thiscall allocate(BuddyAllocator * this, uint param_1, uint * param_2)


/* BuddyAllocator::allocate(unsigned int, unsigned int&) */

bool __thiscall BuddyAllocator::allocate(BuddyAllocator *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)(this + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((param_1 + uVar1) - 1) / uVar1;
  }
  uVar2 = uVar2 - 1 | uVar2 - 1 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 | uVar2 >> 0x10;
  uVar1 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    uVar1 = 1;
  }
  uVar8 = NEON_cnt((ulong)uVar1,1);
  uVar7 = NEON_uaddlv(uVar8,1);
  if ((int)CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) == 1) {
    bVar4 = (uVar1 & 0xffff0000) != 0;
    uVar2 = uVar1 >> 0x10;
    if (!bVar4) {
      uVar2 = uVar1;
    }
    uVar6 = (uint)bVar4;
    uVar1 = uVar6 << 4 | 8;
    uVar3 = uVar2 >> 8;
    if (uVar2 < 0x100) {
      uVar1 = uVar6 << 4;
      uVar3 = uVar2;
    }
    uVar2 = uVar1 | 4;
    uVar6 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar2 = uVar1;
      uVar6 = uVar3;
    }
    uVar1 = uVar2 | 2;
    uVar3 = uVar6 >> 2;
    if (uVar6 < 4) {
      uVar1 = uVar2;
      uVar3 = uVar6;
    }
    puVar5 = (uint *)findFreePageAtLevel(this,(uVar3 + uVar1) - 1);
  }
  else {
    puVar5 = (uint *)findFreePageAtLevel(this,0);
  }
  if (puVar5 != (uint *)0x0) {
    puVar5[2] = 2;
    *param_2 = *puVar5;
  }
  return puVar5 != (uint *)0x0;
}


