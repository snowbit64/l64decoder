// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deSerializeInPlace
// Entry Point: 00f5e0b8
// Size: 788 bytes
// Signature: undefined __cdecl deSerializeInPlace(void * param_1, uint param_2, bool param_3)


/* btQuantizedBvh::deSerializeInPlace(void*, unsigned int, bool) */

void * btQuantizedBvh::deSerializeInPlace(void *param_1,uint param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  
  if (param_1 != (void *)0x0) {
    if (param_3) {
      auVar12 = NEON_rev32(*(undefined (*) [16])((long)param_1 + 8),1);
      auVar13 = NEON_rev32(*(undefined (*) [16])((long)param_1 + 0x18),1);
      uVar3 = (*(uint *)((long)param_1 + 0x3c) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_1 + 0x3c) & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      *(long *)((long)param_1 + 0x10) = auVar12._8_8_;
      *(long *)((long)param_1 + 8) = auVar12._0_8_;
      uVar4 = (*(uint *)((long)param_1 + 200) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_1 + 200) & 0xff00ff) << 8;
      auVar12 = NEON_rev32(*(undefined (*) [16])((long)param_1 + 0x28),1);
      uVar10 = (*(uint *)((long)param_1 + 0xf0) & 0xff00ff00) >> 8 |
               (*(uint *)((long)param_1 + 0xf0) & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      *(uint *)((long)param_1 + 0x3c) = uVar3;
      *(long *)((long)param_1 + 0x20) = auVar13._8_8_;
      *(long *)((long)param_1 + 0x18) = auVar13._0_8_;
      *(uint *)((long)param_1 + 200) = uVar4 >> 0x10 | uVar4 << 0x10;
      *(long *)((long)param_1 + 0x30) = auVar12._8_8_;
      *(long *)((long)param_1 + 0x28) = auVar12._0_8_;
      *(uint *)((long)param_1 + 0xf0) = uVar10;
    }
    else {
      uVar10 = *(uint *)((long)param_1 + 0xf0);
      uVar3 = *(uint *)((long)param_1 + 0x3c);
    }
    uVar4 = 6;
    if (*(char *)((long)param_1 + 0x40) != '\0') {
      uVar4 = 4;
    }
    if (param_2 < (uVar3 << (ulong)uVar4) + uVar10 * 0x20 + 0xf8) {
      param_1 = (void *)0x0;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x38) = 0x11c;
      *(undefined8 *)((long)param_1 + 0x58) = 0;
      *(undefined *)((long)param_1 + 0x60) = 1;
      *(undefined *)((long)param_1 + 0x80) = 1;
      *(undefined8 *)((long)param_1 + 0x78) = 0;
      *(undefined8 *)((long)param_1 + 0x4c) = 0;
      *(undefined ***)param_1 = &PTR__btQuantizedBvh_0101a090;
      lVar11 = (long)param_1 + 0xf8;
      *(undefined8 *)((long)param_1 + 0x6c) = 0;
      *(undefined *)((long)param_1 + 0xa0) = 1;
      *(undefined8 *)((long)param_1 + 0x98) = 0;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      *(undefined *)((long)param_1 + 0xc0) = 1;
      *(undefined8 *)((long)param_1 + 0xb8) = 0;
      *(undefined8 *)((long)param_1 + 0xac) = 0;
      *(undefined *)((long)param_1 + 0xe8) = 1;
      *(undefined8 *)((long)param_1 + 0xe0) = 0;
      *(undefined8 *)((long)param_1 + 0xd4) = 0;
      if (*(char *)((long)param_1 + 0x40) == '\0') {
        *(undefined *)((long)param_1 + 0x80) = 0;
        *(long *)((long)param_1 + 0x78) = lVar11;
        *(uint *)((long)param_1 + 0x6c) = uVar3;
        *(uint *)((long)param_1 + 0x70) = uVar3;
        if ((param_3) && (0 < (int)uVar3)) {
          lVar7 = 0;
          lVar9 = lVar11;
          do {
            auVar12 = NEON_rev32(*(undefined (*) [16])(lVar9 + lVar7),1);
            ((undefined8 *)(lVar9 + lVar7))[1] = auVar12._8_8_;
            *(undefined8 *)(lVar9 + lVar7) = auVar12._0_8_;
            lVar9 = *(long *)((long)param_1 + 0x78) + lVar7;
            auVar12 = NEON_rev32(*(undefined (*) [16])(lVar9 + 0x10),1);
            *(long *)(lVar9 + 0x18) = auVar12._8_8_;
            *(long *)(lVar9 + 0x10) = auVar12._0_8_;
            lVar9 = *(long *)((long)param_1 + 0x78);
            lVar1 = lVar9 + lVar7;
            lVar7 = lVar7 + 0x40;
            uVar10 = (*(uint *)(lVar1 + 0x20) & 0xff00ff00) >> 8 |
                     (*(uint *)(lVar1 + 0x20) & 0xff00ff) << 8;
            uVar4 = (*(uint *)(lVar1 + 0x24) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar1 + 0x24) & 0xff00ff) << 8;
            uVar2 = (*(uint *)(lVar1 + 0x28) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar1 + 0x28) & 0xff00ff) << 8;
            *(uint *)(lVar1 + 0x20) = uVar10 >> 0x10 | uVar10 << 0x10;
            *(uint *)(lVar1 + 0x24) = uVar4 >> 0x10 | uVar4 << 0x10;
            *(uint *)(lVar1 + 0x28) = uVar2 >> 0x10 | uVar2 << 0x10;
          } while ((ulong)uVar3 * 0x40 - lVar7 != 0);
          uVar10 = *(uint *)((long)param_1 + 0xf0);
          lVar11 = lVar11 + (long)(int)uVar3 * 0x40;
          if ((*(long *)((long)param_1 + 0xe0) != 0) && (*(char *)((long)param_1 + 0xe8) != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
        }
        else {
          lVar11 = lVar11 + (long)(int)uVar3 * 0x40;
        }
      }
      else {
        *(undefined *)((long)param_1 + 0xc0) = 0;
        *(long *)((long)param_1 + 0xb8) = lVar11;
        *(uint *)((long)param_1 + 0xac) = uVar3;
        *(uint *)((long)param_1 + 0xb0) = uVar3;
        if ((param_3) && (0 < (int)uVar3)) {
          uVar6 = (ulong)uVar3;
          puVar8 = (uint *)((long)param_1 + 0x104);
          do {
            uVar6 = uVar6 - 1;
            *(ushort *)(puVar8 + -3) =
                 *(ushort *)(puVar8 + -3) >> 8 |
                 (ushort)((*(ushort *)(puVar8 + -3) & 0xff00ff) << 8);
            *(ushort *)((long)puVar8 + -10) =
                 *(ushort *)((long)puVar8 + -10) >> 8 |
                 (ushort)((*(ushort *)((long)puVar8 + -10) & 0xff00ff) << 8);
            *(ushort *)(puVar8 + -2) =
                 *(ushort *)(puVar8 + -2) >> 8 |
                 (ushort)((*(ushort *)(puVar8 + -2) & 0xff00ff) << 8);
            uVar4 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
            *(ushort *)((long)puVar8 + -6) =
                 *(ushort *)((long)puVar8 + -6) >> 8 |
                 (ushort)((*(ushort *)((long)puVar8 + -6) & 0xff00ff) << 8);
            *(ushort *)(puVar8 + -1) =
                 *(ushort *)(puVar8 + -1) >> 8 |
                 (ushort)((*(ushort *)(puVar8 + -1) & 0xff00ff) << 8);
            *(ushort *)((long)puVar8 + -2) =
                 *(ushort *)((long)puVar8 + -2) >> 8 |
                 (ushort)((*(ushort *)((long)puVar8 + -2) & 0xff00ff) << 8);
            *puVar8 = uVar4 >> 0x10 | uVar4 << 0x10;
            puVar8 = puVar8 + 4;
          } while (uVar6 != 0);
        }
        lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
      }
      *(undefined *)((long)param_1 + 0xe8) = 0;
      *(long *)((long)param_1 + 0xe0) = lVar11;
      *(uint *)((long)param_1 + 0xd4) = uVar10;
      *(uint *)((long)param_1 + 0xd8) = uVar10;
      if ((param_3) &&
         (uVar6 = (ulong)*(uint *)((long)param_1 + 0xf0), 0 < (int)*(uint *)((long)param_1 + 0xf0)))
      {
        puVar5 = (ushort *)(lVar11 + 8);
        do {
          uVar6 = uVar6 - 1;
          puVar5[-4] = puVar5[-4] >> 8 | (ushort)((puVar5[-4] & 0xff00ff) << 8);
          puVar5[-3] = puVar5[-3] >> 8 | (ushort)((puVar5[-3] & 0xff00ff) << 8);
          puVar5[-2] = puVar5[-2] >> 8 | (ushort)((puVar5[-2] & 0xff00ff) << 8);
          uVar3 = (*(uint *)(puVar5 + 2) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar5 + 2) & 0xff00ff) << 8;
          *puVar5 = *puVar5 >> 8 | (ushort)((*puVar5 & 0xff00ff) << 8);
          uVar10 = (*(uint *)(puVar5 + 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(puVar5 + 4) & 0xff00ff) << 8;
          puVar5[-1] = puVar5[-1] >> 8 | (ushort)((puVar5[-1] & 0xff00ff) << 8);
          puVar5[1] = puVar5[1] >> 8 | (ushort)((puVar5[1] & 0xff00ff) << 8);
          *(uint *)(puVar5 + 2) = uVar3 >> 0x10 | uVar3 << 0x10;
          *(uint *)(puVar5 + 4) = uVar10 >> 0x10 | uVar10 << 0x10;
          puVar5 = puVar5 + 0x10;
        } while (uVar6 != 0);
      }
    }
  }
  return param_1;
}


