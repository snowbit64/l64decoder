// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashMultipleBlocks
// Entry Point: 00d06d48
// Size: 652 bytes
// Signature: undefined __thiscall HashMultipleBlocks(IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> * this, ulong * param_1, ulong param_2)


/* CryptoPP::IteratedHashBase<unsigned long,
   CryptoPP::HashTransformation>::HashMultipleBlocks(unsigned long const*, unsigned long) */

ulong __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::HashTransformation>::HashMultipleBlocks
          (IteratedHashBase<unsigned_long,CryptoPP::HashTransformation> *this,ulong *param_1,
          ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *__dest;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined (*pauVar9) [16];
  ulong *puVar10;
  uint uVar11;
  ulong __n;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  
  uVar5 = (**(code **)(*(long *)this + 0x50))();
  __n = uVar5 & 0xffffffff;
  iVar4 = (**(code **)(*(long *)this + 0xa8))(this);
  __dest = (ulong *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar13 = __n >> 3;
  if (iVar4 == 0) {
    lVar12 = 0;
    do {
      puVar6 = (ulong *)((long)param_1 + lVar12);
      if (((ulong)puVar6 & 7) != 0) {
        memcpy(__dest,puVar6,__n);
        puVar6 = __dest;
      }
      (**(code **)(*(long *)this + 0xb0))(this,puVar6);
      param_2 = param_2 - __n;
      lVar12 = lVar12 + (uVar5 & 0xfffffff8);
    } while (__n <= param_2);
  }
  else {
    uVar11 = (uint)uVar5;
    if (uVar11 < 8) {
      lVar12 = 0;
      do {
        if (((ulong)param_1 & 7) != 0) {
          memcpy(__dest,(void *)((long)param_1 + lVar12),__n);
        }
        (**(code **)(*(long *)this + 0xb0))(this,__dest);
        param_2 = param_2 - __n;
        lVar12 = lVar12 + (uVar5 & 0xfffffff8);
      } while (__n <= param_2);
    }
    else {
      lVar12 = 0;
      uVar14 = uVar13 & 0x1ffffffc;
      puVar6 = param_1;
      do {
        if (((ulong)puVar6 & 7) == 0) {
          if (uVar11 < 0x20) {
            uVar8 = 0;
          }
          else if (__dest < param_1 + uVar13 + uVar13 * lVar12 &&
                   puVar6 < (ulong *)((long)__dest + (uVar5 & 0xfffffff8))) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              pauVar9 = (undefined (*) [16])((long)puVar6 + uVar8);
              puVar2 = (undefined8 *)((long)__dest + uVar8);
              uVar8 = uVar8 + 0x20;
              auVar15 = NEON_rev64(*pauVar9,1);
              auVar16 = NEON_rev64(pauVar9[1],1);
              puVar2[1] = auVar15._8_8_;
              *puVar2 = auVar15._0_8_;
              puVar2[3] = auVar16._8_8_;
              puVar2[2] = auVar16._0_8_;
            } while ((uVar5 & 0xffffffe0) != uVar8);
            uVar8 = uVar14;
            if (uVar13 == uVar14) goto LAB_00d06e88;
          }
          do {
            uVar1 = uVar8 + 1;
            uVar3 = (puVar6[uVar8] & 0xff00ff00ff00ff00) >> 8 |
                    (puVar6[uVar8] & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            __dest[uVar8] = uVar3 >> 0x20 | uVar3 << 0x20;
            uVar8 = uVar1;
          } while (uVar13 != uVar1);
        }
        else {
          memcpy(__dest,puVar6,__n);
          uVar8 = uVar14;
          pauVar9 = (undefined (*) [16])(__dest + 2);
          if (uVar11 < 0x20) {
            uVar8 = 0;
          }
          else {
            do {
              uVar8 = uVar8 - 4;
              auVar15 = NEON_rev64(pauVar9[-1],1);
              auVar16 = NEON_rev64(*pauVar9,1);
              *(long *)(pauVar9[-1] + 8) = auVar15._8_8_;
              *(long *)pauVar9[-1] = auVar15._0_8_;
              *(long *)(*pauVar9 + 8) = auVar16._8_8_;
              *(long *)*pauVar9 = auVar16._0_8_;
              pauVar9 = pauVar9 + 2;
            } while (uVar8 != 0);
            uVar8 = uVar14;
            if (uVar13 == uVar14) goto LAB_00d06e88;
          }
          lVar7 = uVar13 - uVar8;
          puVar10 = __dest + uVar8;
          do {
            lVar7 = lVar7 + -1;
            uVar8 = (*puVar10 & 0xff00ff00ff00ff00) >> 8 | (*puVar10 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            *puVar10 = uVar8 >> 0x20 | uVar8 << 0x20;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
        }
LAB_00d06e88:
        (**(code **)(*(long *)this + 0xb0))(this,__dest);
        param_2 = param_2 - __n;
        lVar12 = lVar12 + 1;
        puVar6 = (ulong *)((long)puVar6 + (uVar5 & 0xfffffff8));
      } while (__n <= param_2);
    }
  }
  return param_2;
}


