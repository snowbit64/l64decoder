// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00727798
// Size: 316 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HashTable<unsigned int, DynamicAvoidance::ObstacleHash>::rehash() */

void HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long in_x0;
  uint **this;
  void *__s;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  this = (uint **)(in_x0 + 0x20);
  puVar2 = *this;
  puVar3 = *(uint **)(in_x0 + 0x28);
  *this = (uint *)0x0;
  *(undefined8 *)(in_x0 + 0x28) = 0;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  lVar5 = (long)puVar3 - (long)puVar2;
  uVar4 = lVar5 >> 2;
  *(ulong *)(in_x0 + 0x40) = uVar4 - 1;
  if (lVar5 == 0) {
    __s = (void *)0x0;
    lVar5 = 0;
  }
  else {
                    /* try { // try from 007277cc to 007277cf has its CatchHandler @ 007278d4 */
    std::__ndk1::
    vector<HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::Entry>>
    ::__append((vector<HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::Entry>>
                *)this,uVar4);
    __s = *(void **)(in_x0 + 0x20);
    lVar5 = *(long *)(in_x0 + 0x28);
  }
  memset(__s,0xff,lVar5 - (long)__s);
  *(undefined8 *)(in_x0 + 0x38) = 0;
  for (puVar1 = puVar2; puVar1 != puVar3; puVar1 = puVar1 + 2) {
    if (puVar1[1] != 0xffffffff) {
      uVar4 = (ulong)*puVar1;
      uVar8 = *(ulong *)(in_x0 + 0x40);
      lVar5 = *(long *)(in_x0 + 0x20);
      uVar6 = uVar8 & *(ulong *)(*(long *)(in_x0 + 8) + uVar4 * 0x20 + 0x18);
      puVar7 = (ulong *)(lVar5 + uVar6 * 8);
      uVar10 = *(uint *)((long)puVar7 + 4);
      if (uVar10 == 0xffffffff) {
        uVar6 = 0;
      }
      else {
        uVar9 = 0;
        do {
          if (uVar10 < uVar9) {
            uVar8 = uVar4 | (ulong)uVar9 << 0x20;
            uVar4 = (ulong)*(uint *)puVar7;
            uVar9 = *(uint *)((long)puVar7 + 4);
            *puVar7 = uVar8;
            uVar8 = *(ulong *)(in_x0 + 0x40);
            lVar5 = *(long *)(in_x0 + 0x20);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar8 & uVar6 + 1;
          puVar7 = (ulong *)(lVar5 + uVar6 * 8);
          uVar10 = *(uint *)((long)puVar7 + 4);
        } while (uVar10 != 0xffffffff);
        uVar6 = (ulong)uVar9 << 0x20;
      }
      *puVar7 = uVar6 | uVar4;
      *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + 1;
    }
  }
  if (puVar2 != (uint *)0x0) {
    operator_delete(puVar2);
    return;
  }
  return;
}


