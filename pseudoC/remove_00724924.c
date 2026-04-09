// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove
// Entry Point: 00724924
// Size: 264 bytes
// Signature: undefined __thiscall remove(HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> * this, uint * param_1)


/* HashTable<unsigned int, DynamicAvoidance::ObstacleHash>::remove(unsigned int const&) */

void __thiscall
HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
          (HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *this,uint *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(ulong *)(this + 0x40);
  lVar1 = *(long *)(this + 0x20);
  uVar2 = uVar3 & *(ulong *)(*(long *)(this + 8) + (ulong)*param_1 * 0x20 + 0x18);
  uVar6 = *(uint *)(lVar1 + uVar2 * 8 + 4);
  if (uVar6 + 1 < 2) {
    if (uVar6 != 0) goto LAB_007249bc;
  }
  else {
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      uVar2 = uVar2 + 1 & uVar3;
      uVar6 = *(uint *)(lVar1 + uVar2 * 8 + 4);
    } while ((uVar6 != 0xffffffff && uVar7 <= uVar6) && (uVar6 == 0xffffffff || uVar6 != uVar7));
    if (uVar6 != uVar7) goto LAB_007249bc;
  }
  do {
    if (*(uint *)(lVar1 + uVar2 * 8) == *param_1) goto LAB_007249f4;
    uVar6 = uVar6 + 1;
    uVar2 = uVar2 + 1 & uVar3;
  } while (uVar6 == *(uint *)(lVar1 + uVar2 * 8 + 4));
LAB_007249bc:
  uVar2 = *(long *)(this + 0x28) - lVar1 >> 3;
LAB_007249f4:
  while (uVar5 = uVar2 + 1 & uVar3, 1 < *(int *)(lVar1 + uVar5 * 8 + 4) + 1U) {
    *(undefined8 *)(lVar1 + uVar2 * 8) = *(undefined8 *)(lVar1 + uVar5 * 8);
    lVar1 = *(long *)(this + 0x20);
    uVar3 = *(ulong *)(this + 0x40);
    lVar4 = lVar1 + uVar2 * 8;
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    uVar2 = uVar5;
  }
  lVar4 = *(long *)(this + 0x38);
  *(undefined4 *)(lVar1 + uVar2 * 8 + 4) = 0xffffffff;
  *(long *)(this + 0x38) = lVar4 + -1;
  return;
}


