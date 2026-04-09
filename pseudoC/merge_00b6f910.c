// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 00b6f910
// Size: 384 bytes
// Signature: undefined __thiscall merge(BrepSpatialHash * this, BrepSpatialHash * param_1, ushort param_2)


/* BrepSpatialHash::merge(BrepSpatialHash const&, unsigned short) */

void __thiscall
BrepSpatialHash::merge(BrepSpatialHash *this,BrepSpatialHash *param_1,ushort param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  undefined8 *puVar7;
  ulong *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = 0;
  do {
    lVar5 = *(long *)(param_1 + lVar8 * 0x18);
    lVar4 = *(long *)((long)(param_1 + lVar8 * 0x18) + 8);
    if (lVar5 != lVar4) {
      this_00 = (ulong *)(this + lVar8 * 0x18);
      uVar10 = lVar4 - lVar5;
      uVar11 = this_00[1] - *this_00;
      uVar9 = (long)uVar11 >> 1;
      iVar12 = (int)(uVar10 >> 1);
      uVar2 = (ulong)(uint)((int)uVar9 + iVar12);
      if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
        if (uVar2 < uVar9) {
          this_00[1] = *this_00 + uVar2 * 2;
        }
      }
      else {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)this_00,
                   uVar2 - uVar9);
      }
      if (iVar12 != 0) {
        uVar2 = *this_00;
        uVar3 = uVar10 >> 1 & 0xffffffff;
        if (uVar3 < 0x10) {
LAB_00b6f9c8:
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          uVar11 = uVar11 >> 1;
          if ((!CARRY4((uint)uVar11,(uint)(uVar3 - 1))) && (uVar3 - 1 >> 0x20 == 0)) {
            if ((uVar2 + (uVar11 & 0xffffffff) * 2 < uVar2 + uVar3 * 2) &&
               (uVar2 < uVar2 + (uVar3 + (uVar11 & 0xffffffff)) * 2)) goto LAB_00b6f9c8;
            uVar10 = uVar10 >> 1 & 0xf;
            puVar7 = (undefined8 *)(uVar2 + 0x10);
            lVar5 = uVar3 - uVar10;
            lVar4 = lVar5;
            uVar11 = uVar9;
            do {
              uVar14 = puVar7[-1];
              uVar13 = puVar7[-2];
              uVar16 = puVar7[1];
              uVar15 = *puVar7;
              puVar1 = (undefined8 *)(uVar2 + (uVar11 & 0xffffffff) * 2);
              puVar7 = puVar7 + 4;
              uVar11 = uVar11 + 0x10;
              lVar4 = lVar4 + -0x10;
              puVar1[1] = CONCAT26((short)((ulong)uVar14 >> 0x30) + param_2,
                                   CONCAT24((short)((ulong)uVar14 >> 0x20) + param_2,
                                            CONCAT22((short)((ulong)uVar14 >> 0x10) + param_2,
                                                     (short)uVar14 + param_2)));
              *puVar1 = CONCAT26((short)((ulong)uVar13 >> 0x30) + param_2,
                                 CONCAT24((short)((ulong)uVar13 >> 0x20) + param_2,
                                          CONCAT22((short)((ulong)uVar13 >> 0x10) + param_2,
                                                   (short)uVar13 + param_2)));
              puVar1[3] = CONCAT26((short)((ulong)uVar16 >> 0x30) + param_2,
                                   CONCAT24((short)((ulong)uVar16 >> 0x20) + param_2,
                                            CONCAT22((short)((ulong)uVar16 >> 0x10) + param_2,
                                                     (short)uVar16 + param_2)));
              puVar1[2] = CONCAT26((short)((ulong)uVar15 >> 0x30) + param_2,
                                   CONCAT24((short)((ulong)uVar15 >> 0x20) + param_2,
                                            CONCAT22((short)((ulong)uVar15 >> 0x10) + param_2,
                                                     (short)uVar15 + param_2)));
            } while (lVar4 != 0);
            if (uVar10 == 0) goto LAB_00b6f950;
          }
        }
        uVar9 = lVar5 + uVar9;
        lVar4 = uVar3 - lVar5;
        psVar6 = (short *)(uVar2 + lVar5 * 2);
        do {
          lVar4 = lVar4 + -1;
          *(ushort *)(uVar2 + (uVar9 & 0xffffffff) * 2) = *psVar6 + param_2;
          uVar9 = uVar9 + 1;
          psVar6 = psVar6 + 1;
        } while (lVar4 != 0);
      }
    }
LAB_00b6f950:
    lVar8 = lVar8 + 1;
    if (lVar8 == 500) {
      return;
    }
  } while( true );
}


