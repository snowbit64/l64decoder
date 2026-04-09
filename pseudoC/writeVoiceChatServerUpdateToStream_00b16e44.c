// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeVoiceChatServerUpdateToStream
// Entry Point: 00b16e44
// Size: 1760 bytes
// Signature: undefined __thiscall writeVoiceChatServerUpdateToStream(VoiceChatManager * this, GsBitStream * param_1, uint param_2, uint param_3)


/* VoiceChatManager::writeVoiceChatServerUpdateToStream(GsBitStream*, unsigned int, unsigned int) */

void __thiscall
VoiceChatManager::writeVoiceChatServerUpdateToStream
          (VoiceChatManager *this,GsBitStream *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  void *__dest;
  byte bVar3;
  size_t __n;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  long *plVar21;
  undefined4 *puVar22;
  ulong uVar23;
  byte *pbVar24;
  short sVar25;
  undefined2 uVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar36;
  short sVar37;
  undefined8 uVar35;
  short sVar38;
  short sVar39;
  short sVar41;
  short sVar42;
  undefined8 uVar40;
  short sVar43;
  uint7 uVar44;
  undefined auVar45 [16];
  uint7 uVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  for (lVar8 = *(long *)(this + 0x1490); lVar8 != *(long *)(this + 0x1498); lVar8 = lVar8 + 0x70) {
    if (*(uint *)(lVar8 + 0x4c) == param_2) {
      uVar9 = (ulong)*(byte *)(lVar8 + 0x6c);
      goto LAB_00b16eb4;
    }
  }
  uVar9 = 0;
LAB_00b16eb4:
  lVar8 = *(long *)(this + 0x1518);
  uVar12 = *(long *)(this + 0x1520) - lVar8;
  if (uVar12 != 0) {
    uVar10 = (long)uVar12 / 0x18;
    uVar23 = uVar10;
    if (uVar10 < 2) {
      uVar23 = 1;
    }
    if (uVar23 < 0x10) {
LAB_00b16f08:
      uVar18 = 0;
      uVar12 = 0;
      uVar19 = 0;
    }
    else {
      uVar12 = uVar10;
      if (uVar10 < 2) {
        uVar12 = 1;
      }
      if ((int)(uVar12 - 1) == -1 || uVar12 - 1 >> 0x20 != 0) goto LAB_00b16f08;
      uVar18 = uVar23 & 0xfffffffffffffff0;
      puVar15 = (undefined4 *)(lVar8 + 200);
      sVar25 = 0;
      sVar27 = 0;
      sVar28 = 0;
      sVar29 = 0;
      sVar30 = 0;
      sVar31 = 0;
      sVar32 = 0;
      sVar33 = 0;
      uVar19 = (uint)uVar18;
      uVar35 = 0;
      uVar40 = 0;
      uVar12 = uVar18;
      do {
        auVar52._0_4_ = puVar15[0x18];
        auVar49._0_4_ = *puVar15;
        auVar52._4_4_ = puVar15[0x1e];
        auVar47._4_4_ = puVar15[-0x12];
        auVar47._0_4_ = puVar15[-0x18];
        auVar51._4_4_ = puVar15[-0x2a];
        auVar51._0_4_ = puVar15[-0x30];
        auVar49._4_4_ = puVar15[6];
        auVar52._8_4_ = puVar15[0x24];
        auVar47._8_4_ = puVar15[-0xc];
        auVar51._8_4_ = puVar15[-0x24];
        puVar22 = puVar15 + -0x1e;
        auVar49._8_4_ = puVar15[0xc];
        puVar2 = puVar15 + 0x12;
        auVar52._12_4_ = puVar15[0x2a];
        uVar12 = uVar12 - 0x10;
        auVar47._12_4_ = puVar15[-6];
        puVar15 = puVar15 + 0x60;
        auVar51._12_4_ = *puVar22;
        auVar49._12_4_ = *puVar2;
        auVar45._4_4_ = param_2;
        auVar45._0_4_ = param_2;
        auVar45._8_4_ = param_2;
        auVar45._12_4_ = param_2;
        auVar45 = NEON_cmeq(auVar52,auVar45,4);
        auVar48._4_4_ = param_2;
        auVar48._0_4_ = param_2;
        auVar48._8_4_ = param_2;
        auVar48._12_4_ = param_2;
        auVar48 = NEON_cmeq(auVar47,auVar48,4);
        auVar50._4_4_ = param_2;
        auVar50._0_4_ = param_2;
        auVar50._8_4_ = param_2;
        auVar50._12_4_ = param_2;
        auVar52 = NEON_cmeq(auVar51,auVar50,4);
        auVar6._4_4_ = param_2;
        auVar6._0_4_ = param_2;
        auVar6._8_4_ = param_2;
        auVar6._12_4_ = param_2;
        auVar50 = NEON_cmeq(auVar49,auVar6,4);
        uVar46 = CONCAT16(auVar52[12],
                          (uint6)(CONCAT14(auVar52[8],
                                           (uint)(CONCAT12(auVar52[4],(ushort)(auVar52[0] & 1)) &
                                                 0x1ffff)) & 0x1ffffffff)) & 0x1ffffffffffff;
        uVar44 = CONCAT16(auVar50[12],
                          (uint6)(CONCAT14(auVar50[8],
                                           (uint)(CONCAT12(auVar50[4],(ushort)(auVar50[0] & 1)) &
                                                 0x1ffff)) & 0x1ffffffff)) & 0x1ffffffffffff;
        sVar25 = sVar25 + (short)uVar46;
        sVar27 = sVar27 + (short)(uVar46 >> 0x10);
        sVar28 = sVar28 + (short)(uVar46 >> 0x20);
        sVar29 = sVar29 + (ushort)(byte)(uVar46 >> 0x30);
        sVar30 = sVar30 + (ushort)(auVar48[0] & 1);
        sVar31 = sVar31 + (ushort)(auVar48[4] & 1);
        sVar32 = sVar32 + (ushort)(auVar48[8] & 1);
        sVar33 = sVar33 + (ushort)(auVar48[12] & 1);
        sVar34 = (short)uVar35 + (short)uVar44;
        sVar36 = (short)((ulong)uVar35 >> 0x10) + (short)(uVar44 >> 0x10);
        sVar37 = (short)((ulong)uVar35 >> 0x20) + (short)(uVar44 >> 0x20);
        sVar38 = (short)((ulong)uVar35 >> 0x30) + (ushort)(byte)(uVar44 >> 0x30);
        uVar35 = CONCAT26(sVar38,CONCAT24(sVar37,CONCAT22(sVar36,sVar34)));
        sVar39 = (short)uVar40 + (ushort)(auVar45[0] & 1);
        sVar41 = (short)((ulong)uVar40 >> 0x10) + (ushort)(auVar45[4] & 1);
        sVar42 = (short)((ulong)uVar40 >> 0x20) + (ushort)(auVar45[8] & 1);
        sVar43 = (short)((ulong)uVar40 >> 0x30) + (ushort)(auVar45[12] & 1);
        uVar40 = CONCAT26(sVar43,CONCAT24(sVar42,CONCAT22(sVar41,sVar39)));
      } while (uVar12 != 0);
      sVar36 = sVar36 + sVar27;
      auVar5._2_2_ = sVar36;
      auVar5._0_2_ = sVar34 + sVar25;
      auVar5._4_2_ = sVar37 + sVar28;
      auVar5._6_2_ = sVar38 + sVar29;
      auVar5._8_2_ = sVar39 + sVar30;
      auVar5._10_2_ = sVar41 + sVar31;
      auVar5._12_2_ = sVar42 + sVar32;
      auVar5._14_2_ = sVar43 + sVar33;
      uVar26 = NEON_addv(auVar5,2);
      uVar12 = (ulong)CONCAT22(sVar36,uVar26);
      if (uVar23 == uVar18) goto LAB_00b16f3c;
    }
    do {
      uVar19 = uVar19 + 1;
      lVar14 = uVar18 * 0x18;
      uVar18 = (ulong)uVar19;
      uVar11 = (uint)uVar12;
      if (*(uint *)(lVar8 + lVar14 + 8) == param_2) {
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar11;
    } while (uVar18 < uVar10);
  }
LAB_00b16f3c:
  uVar26 = (undefined2)uVar12;
  lVar8 = *(long *)(this + 0x14e8);
  uVar9 = 1L << (uVar9 & 0x3f);
  if (*(long *)(this + 0x14f0) - lVar8 != 0) {
    uVar10 = *(long *)(this + 0x14f0) - lVar8 >> 3;
    uVar23 = uVar10;
    if (uVar10 < 2) {
      uVar23 = 1;
    }
    if (uVar23 < 2) {
      uVar17 = 0;
      uVar19 = 0;
    }
    else {
      uVar18 = uVar10;
      if (uVar10 < 2) {
        uVar18 = 1;
      }
      uVar17 = 0;
      uVar19 = 0;
      if (((int)(uVar18 - 1) != -1) && (uVar19 = 0, uVar18 - 1 >> 0x20 == 0)) {
        uVar17 = uVar23 & 0xfffffffffffffffe;
        plVar21 = (long *)(lVar8 + 8);
        uVar19 = (uint)uVar17;
        iVar20 = 0;
        uVar18 = uVar17;
        do {
          plVar1 = plVar21 + -1;
          lVar14 = *plVar21;
          plVar21 = plVar21 + 2;
          uVar11 = (uint)uVar12;
          if ((*(ulong *)(*plVar1 + 0x10) & uVar9) == 0) {
            uVar11 = uVar11 + 1;
          }
          uVar12 = (ulong)uVar11;
          if ((*(ulong *)(lVar14 + 0x10) & uVar9) == 0) {
            iVar20 = iVar20 + 1;
          }
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
        uVar12 = (ulong)(iVar20 + uVar11);
        uVar26 = (undefined2)(iVar20 + uVar11);
        if (uVar23 == uVar17) goto LAB_00b16f98;
      }
    }
    do {
      lVar14 = uVar17 * 8;
      uVar17 = (ulong)(uVar19 + 1);
      uVar11 = (uint)uVar12;
      if ((*(ulong *)(*(long *)(lVar8 + lVar14) + 0x10) & uVar9) == 0) {
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar11;
      uVar26 = (undefined2)uVar11;
      uVar19 = uVar19 + 1;
    } while (uVar17 < uVar10);
  }
LAB_00b16f98:
  local_80 = CONCAT22(local_80._2_2_,uVar26);
  GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
  lVar8 = *(long *)(this + 0x1518);
  if ((lVar8 != *(long *)(this + 0x1520)) &&
     (uVar12 = (*(long *)(this + 0x1520) - lVar8 >> 3) * -0x5555555555555555, 0 < (int)uVar12)) {
    uVar12 = uVar12 & 0xffffffff;
    do {
      uVar23 = (ulong)((int)uVar12 - 1);
      if (*(uint *)(lVar8 + uVar23 * 0x18 + 8) == param_2) {
        iVar20 = *(int *)(lVar8 + uVar23 * 0x18);
        if (iVar20 == 2) {
          pbVar24 = *(byte **)(lVar8 + uVar23 * 0x18 + 0x10);
          local_80._0_1_ = 2;
          GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
          bVar3 = *pbVar24;
          if (pbVar24[0x20] != 0) {
            bVar3 = *pbVar24 | 0x80;
          }
          local_80 = CONCAT31(local_80._1_3_,bVar3);
          GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
          local_80._0_2_ = *(undefined2 *)(pbVar24 + 2);
          GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
          local_80 = CONCAT22(local_80._2_2_,*(undefined2 *)(pbVar24 + 4));
          GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
          if (*(ushort *)(pbVar24 + 4) != 0) {
            GsBitStream::writeAlignedBytes
                      (param_1,*(uchar **)(pbVar24 + 8),(uint)*(ushort *)(pbVar24 + 4));
          }
        }
        else {
          if (iVar20 == 1) {
            lVar8 = *(long *)(lVar8 + uVar23 * 0x18 + 0x10);
            local_80._0_1_ = 1;
            GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
            bVar3 = *(byte *)(lVar8 + 0x6c);
            uVar19 = 8;
            if (*(char *)(lVar8 + 0x6e) != '\0') {
              bVar3 = bVar3 | 0x80;
            }
            local_80 = CONCAT31(local_80._1_3_,bVar3);
          }
          else {
            if (iVar20 != 0) goto LAB_00b17214;
            pbVar24 = *(byte **)(lVar8 + uVar23 * 0x18 + 0x10);
            local_80 = local_80 & 0xffffff00;
            GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
            bVar3 = pbVar24[0x6c];
            if (pbVar24[0x6e] != 0) {
              bVar3 = pbVar24[0x6c] | 0x80;
            }
            local_80._0_1_ = bVar3;
            GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
            local_80._0_1_ = *pbVar24 >> 1;
            if ((*pbVar24 & 1) != 0) {
              local_80._0_1_ = (byte)*(undefined8 *)(pbVar24 + 8);
            }
            GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
            pbVar13 = *(byte **)(pbVar24 + 0x10);
            bVar7 = (*pbVar24 & 1) == 0;
            if (bVar7) {
              pbVar13 = pbVar24 + 1;
            }
            uVar19 = (uint)(*pbVar24 >> 1);
            if (!bVar7) {
              uVar19 = *(uint *)(pbVar24 + 8);
            }
            GsBitStream::writeAlignedBytes(param_1,pbVar13,uVar19);
            bVar3 = pbVar24[0x18] >> 1;
            if ((pbVar24[0x18] & 1) != 0) {
              bVar3 = (byte)*(undefined8 *)(pbVar24 + 0x20);
            }
            local_80 = CONCAT31(local_80._1_3_,bVar3);
            GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
            bVar7 = (pbVar24[0x18] & 1) != 0;
            pbVar13 = pbVar24 + 0x19;
            if (bVar7) {
              pbVar13 = *(byte **)(pbVar24 + 0x28);
            }
            uVar19 = (uint)(pbVar24[0x18] >> 1);
            if (bVar7) {
              uVar19 = *(uint *)(pbVar24 + 0x20);
            }
            GsBitStream::writeAlignedBytes(param_1,pbVar13,uVar19);
            uVar19 = 0x10;
            local_80 = CONCAT22(local_80._2_2_,(short)*(undefined4 *)(pbVar24 + 0x48));
          }
          GsBitStream::writeBits(param_1,(uchar *)&local_80,uVar19,true);
        }
LAB_00b17214:
        *(uint *)(*(long *)(this + 0x1518) + uVar23 * 0x18 + 4) = param_3;
        FUN_00b165dc(this + 0x1500);
        __dest = (void *)(*(long *)(this + 0x1518) + uVar23 * 0x18);
        __n = *(long *)(this + 0x1520) - (long)(void *)((long)__dest + 0x18);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x18),__n);
        }
        *(size_t *)(this + 0x1520) = (long)__dest + __n;
      }
      if (uVar12 < 2) break;
      lVar8 = *(long *)(this + 0x1518);
      uVar12 = uVar12 - 1;
    } while( true );
  }
  lVar8 = *(long *)(this + 0x14f0);
  lVar14 = *(long *)(this + 0x14e8);
  if (lVar8 != lVar14) {
    uVar12 = 0;
    do {
      lVar16 = *(long *)(lVar14 + uVar12 * 8);
      uVar23 = *(ulong *)(lVar16 + 0x10);
      if ((uVar23 & uVar9) == 0) {
        local_80._0_1_ = 2;
        *(ulong *)(lVar16 + 0x10) = uVar23 | uVar9;
        GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
        lVar8 = uVar12 * 8;
        bVar3 = **(byte **)(*(long *)(this + 0x14e8) + lVar8);
        if ((*(byte **)(*(long *)(this + 0x14e8) + lVar8))[0x20] != 0) {
          bVar3 = bVar3 | 0x80;
        }
        local_80 = CONCAT31(local_80._1_3_,bVar3);
        GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
        local_80._0_2_ = *(undefined2 *)(*(long *)(*(long *)(this + 0x14e8) + lVar8) + 2);
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        local_80 = CONCAT22(local_80._2_2_,
                            *(undefined2 *)(*(long *)(*(long *)(this + 0x14e8) + lVar8) + 4));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        lVar8 = *(long *)(*(long *)(this + 0x14e8) + lVar8);
        if (*(ushort *)(lVar8 + 4) != 0) {
          GsBitStream::writeAlignedBytes
                    (param_1,*(uchar **)(lVar8 + 8),(uint)*(ushort *)(lVar8 + 4));
          lVar8 = *(long *)(*(long *)(this + 0x14e8) + uVar12 * 8);
        }
        uStack_78 = 0;
        local_80 = 2;
        local_7c = param_3;
        local_70 = lVar8;
        FUN_00b165dc(this + 0x1500,&local_80);
        lVar8 = *(long *)(this + 0x14f0);
        lVar14 = *(long *)(this + 0x14e8);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar8 - lVar14 >> 3));
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


