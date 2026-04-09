// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rehash
// Entry Point: 00741e68
// Size: 308 bytes
// Signature: undefined rehash(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HashTable<unsigned int, Hash<unsigned int> >::rehash() */

void HashTable<unsigned_int,Hash<unsigned_int>>::rehash(void)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint **in_x0;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  puVar2 = *in_x0;
  puVar3 = in_x0[1];
  *in_x0 = (uint *)0x0;
  in_x0[1] = (uint *)0x0;
  in_x0[2] = (uint *)0x0;
  lVar6 = (long)puVar3 - (long)puVar2;
  uVar5 = lVar6 >> 2;
  in_x0[4] = (uint *)(uVar5 - 1);
  if (lVar6 == 0) {
    puVar4 = (uint *)0x0;
    puVar9 = (uint *)0x0;
  }
  else {
                    /* try { // try from 00741e9c to 00741ea3 has its CatchHandler @ 00741f9c */
    std::__ndk1::
    vector<HashTable<unsigned_int,Hash<unsigned_int>>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,Hash<unsigned_int>>::Entry>>
    ::__append((vector<HashTable<unsigned_int,Hash<unsigned_int>>::Entry,std::__ndk1::allocator<HashTable<unsigned_int,Hash<unsigned_int>>::Entry>>
                *)in_x0,uVar5);
    puVar4 = *in_x0;
    puVar9 = in_x0[1];
  }
  memset(puVar4,0xff,(long)puVar9 - (long)puVar4);
  in_x0[3] = (uint *)0x0;
  for (puVar4 = puVar2; puVar4 != puVar3; puVar4 = puVar4 + 2) {
    if (puVar4[1] != 0xffffffff) {
      uVar5 = (ulong)*puVar4;
      puVar9 = in_x0[4];
      puVar10 = *in_x0;
      uVar7 = (ulong)puVar9 & uVar5;
      puVar8 = (ulong *)(puVar10 + uVar7 * 2);
      uVar12 = *(uint *)((long)puVar8 + 4);
      if (uVar12 == 0xffffffff) {
        uVar7 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (uVar12 < uVar11) {
            uVar1 = uVar5 | (ulong)uVar11 << 0x20;
            uVar5 = (ulong)*(uint *)puVar8;
            uVar11 = *(uint *)((long)puVar8 + 4);
            *puVar8 = uVar1;
            puVar9 = in_x0[4];
            puVar10 = *in_x0;
          }
          uVar11 = uVar11 + 1;
          uVar7 = (ulong)puVar9 & uVar7 + 1;
          puVar8 = (ulong *)(puVar10 + uVar7 * 2);
          uVar12 = *(uint *)((long)puVar8 + 4);
        } while (uVar12 != 0xffffffff);
        uVar7 = (ulong)uVar11 << 0x20;
      }
      *puVar8 = uVar7 | uVar5;
      in_x0[3] = (uint *)((long)in_x0[3] + 1);
    }
  }
  if (puVar2 != (uint *)0x0) {
    operator_delete(puVar2);
    return;
  }
  return;
}


