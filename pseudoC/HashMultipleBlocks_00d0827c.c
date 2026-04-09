// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashMultipleBlocks
// Entry Point: 00d0827c
// Size: 656 bytes
// Signature: undefined __thiscall HashMultipleBlocks(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, uint * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned int,
   CryptoPP::HashTransformation>::HashMultipleBlocks(unsigned int const*, unsigned long) */

ulong __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::HashMultipleBlocks
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,uint *param_1,
          ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *__dest;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong __n;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar5 = (**(code **)(*(long *)this + 0x50))();
  __n = uVar5 & 0xffffffff;
  iVar4 = (**(code **)(*(long *)this + 0xa8))(this);
  __dest = (uint *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar13 = __n >> 2;
  if (iVar4 == 0) {
    lVar12 = 0;
    do {
      puVar6 = (uint *)((long)param_1 + lVar12);
      if (((ulong)puVar6 & 3) != 0) {
        memcpy(__dest,puVar6,__n);
        puVar6 = __dest;
      }
      (**(code **)(*(long *)this + 0xb0))(this,puVar6);
      param_2 = param_2 - __n;
      lVar12 = lVar12 + (uVar5 & 0xfffffffc);
    } while (__n <= param_2);
  }
  else {
    uVar11 = (uint)uVar5;
    if (uVar11 < 4) {
      lVar12 = 0;
      do {
        if (((ulong)param_1 & 3) != 0) {
          memcpy(__dest,(void *)((long)param_1 + lVar12),__n);
        }
        (**(code **)(*(long *)this + 0xb0))(this,__dest);
        param_2 = param_2 - __n;
        lVar12 = lVar12 + (uVar5 & 0xfffffffc);
      } while (__n <= param_2);
    }
    else {
      lVar12 = 0;
      uVar14 = uVar13 & 0x3ffffffc;
      puVar6 = param_1;
      do {
        if (((ulong)puVar6 & 3) == 0) {
          if (uVar11 < 0x10) {
            uVar8 = 0;
          }
          else if (__dest < param_1 + uVar13 + uVar13 * lVar12 &&
                   puVar6 < (uint *)((long)__dest + (uVar5 & 0xfffffffc))) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              puVar9 = (undefined8 *)((long)puVar6 + uVar8);
              puVar2 = (undefined8 *)((long)__dest + uVar8);
              uVar8 = uVar8 + 0x10;
              uVar15 = NEON_rev32(*puVar9,1);
              uVar16 = NEON_rev32(puVar9[1],1);
              *puVar2 = uVar15;
              puVar2[1] = uVar16;
            } while ((uVar5 & 0xfffffff0) != uVar8);
            uVar8 = uVar14;
            if (uVar13 == uVar14) goto LAB_00d083bc;
          }
          do {
            uVar1 = uVar8 + 1;
            uVar3 = (puVar6[uVar8] & 0xff00ff00) >> 8 | (puVar6[uVar8] & 0xff00ff) << 8;
            __dest[uVar8] = uVar3 >> 0x10 | uVar3 << 0x10;
            uVar8 = uVar1;
          } while (uVar13 != uVar1);
        }
        else {
          memcpy(__dest,puVar6,__n);
          uVar8 = uVar14;
          puVar9 = (undefined8 *)(__dest + 2);
          if (uVar11 < 0x10) {
            uVar8 = 0;
          }
          else {
            do {
              uVar8 = uVar8 - 4;
              uVar15 = NEON_rev32(puVar9[-1],1);
              uVar16 = NEON_rev32(*puVar9,1);
              puVar9[-1] = uVar15;
              *puVar9 = uVar16;
              puVar9 = puVar9 + 2;
            } while (uVar8 != 0);
            uVar8 = uVar14;
            if (uVar13 == uVar14) goto LAB_00d083bc;
          }
          lVar7 = uVar13 - uVar8;
          puVar10 = __dest + uVar8;
          do {
            lVar7 = lVar7 + -1;
            uVar3 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
            *puVar10 = uVar3 >> 0x10 | uVar3 << 0x10;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
        }
LAB_00d083bc:
        (**(code **)(*(long *)this + 0xb0))(this,__dest);
        param_2 = param_2 - __n;
        lVar12 = lVar12 + 1;
        puVar6 = (uint *)((long)puVar6 + (uVar5 & 0xfffffffc));
      } while (__n <= param_2);
    }
  }
  return param_2;
}


