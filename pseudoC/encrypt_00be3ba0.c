// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encrypt
// Entry Point: 00be3ba0
// Size: 1348 bytes
// Signature: undefined __thiscall encrypt(CustomStreamCipher * this, uchar * param_1, uint param_2, uchar * param_3)


/* CustomStreamCipher::encrypt(unsigned char const*, unsigned int, unsigned char*) */

void __thiscall
CustomStreamCipher::encrypt(CustomStreamCipher *this,uchar *param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  undefined8 *puVar34;
  bool bVar35;
  uint uVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  ulong uVar41;
  undefined *puVar42;
  ulong uVar43;
  undefined *puVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  uint uVar47;
  ulong uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 *local_100;
  undefined8 local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_70;
  
  uVar37 = (ulong)param_2;
  lVar33 = tpidr_el0;
  local_70 = *(long *)(lVar33 + 0x28);
  if (param_2 != 0) {
    uVar29 = *(uint *)(this + 0x10);
    uVar30 = *(uint *)(this + 0x14);
    uVar8 = *(uint *)this;
    uVar18 = *(uint *)(this + 4);
    uVar31 = *(uint *)(this + 0x18);
    uVar9 = *(uint *)(this + 8);
    uVar19 = *(uint *)(this + 0xc);
    uVar54 = *(uint *)(this + 0x24);
    uVar20 = *(uint *)(this + 0x28);
    uVar32 = *(uint *)(this + 0x3c);
    uVar10 = *(uint *)(this + 0x1c);
    uVar52 = *(uint *)(this + 0x20);
    uVar11 = *(uint *)(this + 0x2c);
    uVar21 = *(uint *)(this + 0x30);
    uVar12 = *(uint *)(this + 0x34);
    uVar22 = *(uint *)(this + 0x38);
    do {
      uVar36 = (uint)uVar37;
      puVar45 = (undefined8 *)param_3;
      if (uVar36 < 0x40) {
        if (uVar36 != 0) {
          if ((uVar36 < 8) ||
             ((local_b0 < (undefined8 *)((long)param_1 + uVar37) &&
              (param_1 < (undefined8 *)((long)local_b0 + uVar37))))) {
            uVar41 = 0;
          }
          else {
            if (uVar36 < 0x10) {
              uVar48 = 0;
            }
            else {
              uVar41 = uVar37 & 0xfffffff0;
              local_b0[1] = *(undefined8 *)((long)param_1 + 8);
              local_b0[0] = *(undefined8 *)param_1;
              if (uVar41 != 0x10) {
                local_b0[3] = *(undefined8 *)((long)param_1 + 0x18);
                local_b0[2] = *(undefined8 *)((long)param_1 + 0x10);
                if (uVar41 != 0x20) {
                  uStack_88 = *(undefined8 *)((long)param_1 + 0x28);
                  local_90 = *(undefined8 *)((long)param_1 + 0x20);
                }
              }
              if (uVar41 == uVar37) goto LAB_00be3ca4;
              uVar48 = uVar41;
              if ((uVar36 >> 3 & 1) == 0) goto LAB_00be3c88;
            }
            uVar41 = uVar37 & 0xfffffff8;
            lVar40 = uVar48 - uVar41;
            puVar45 = (undefined8 *)((long)param_1 + uVar48);
            puVar46 = (undefined8 *)((long)local_b0 + uVar48);
            do {
              lVar40 = lVar40 + 8;
              *puVar46 = *puVar45;
              puVar45 = puVar45 + 1;
              puVar46 = puVar46 + 1;
            } while (lVar40 != 0);
            if (uVar41 == uVar37) goto LAB_00be3ca4;
          }
LAB_00be3c88:
          lVar40 = uVar37 - uVar41;
          puVar42 = (undefined *)((long)param_1 + uVar41);
          puVar44 = (undefined *)((long)local_b0 + uVar41);
          do {
            lVar40 = lVar40 + -1;
            *puVar44 = *puVar42;
            puVar42 = puVar42 + 1;
            puVar44 = puVar44 + 1;
          } while (lVar40 != 0);
        }
LAB_00be3ca4:
        param_1 = (uchar *)local_b0;
        puVar45 = local_b0;
        local_100 = (undefined8 *)param_3;
      }
      param_3 = (uchar *)puVar45;
      uVar39 = 0x16;
      uVar55 = uVar32;
      uVar56 = uVar11;
      uVar57 = uVar21;
      uVar58 = uVar12;
      uVar59 = uVar22;
      uVar51 = uVar10;
      uVar50 = uVar31;
      uVar49 = uVar30;
      uVar53 = uVar29;
      uVar3 = uVar54;
      uVar5 = uVar18;
      uVar4 = uVar9;
      uVar6 = uVar8;
      uVar38 = uVar52;
      uVar7 = uVar20;
      uVar47 = uVar19;
      do {
        uVar53 = uVar53 ^ (uVar57 + uVar6 >> 0x19 | (uVar57 + uVar6) * 0x80);
        uVar3 = uVar3 ^ (uVar49 + uVar5 >> 0x19 | (uVar49 + uVar5) * 0x80);
        uVar59 = uVar59 ^ (uVar7 + uVar50 >> 0x19 | (uVar7 + uVar50) * 0x80);
        uVar47 = uVar47 ^ (uVar55 + uVar56 >> 0x19 | (uVar55 + uVar56) * 0x80);
        uVar38 = uVar38 ^ (uVar53 + uVar6 >> 0x17 | (uVar53 + uVar6) * 0x200);
        uVar58 = uVar58 ^ (uVar3 + uVar49 >> 0x17 | (uVar3 + uVar49) * 0x200);
        uVar4 = uVar4 ^ (uVar59 + uVar7 >> 0x17 | (uVar59 + uVar7) * 0x200);
        uVar57 = uVar57 ^ (uVar38 + uVar53 >> 0x13 | (uVar38 + uVar53) * 0x2000);
        uVar51 = uVar51 ^ (uVar47 + uVar55 >> 0x17 | (uVar47 + uVar55) * 0x200);
        uVar1 = uVar57 + uVar38;
        uVar5 = uVar5 ^ (uVar58 + uVar3 >> 0x13 | (uVar58 + uVar3) * 0x2000);
        uVar6 = uVar6 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar50 = uVar50 ^ (uVar4 + uVar59 >> 0x13 | (uVar4 + uVar59) * 0x2000);
        uVar56 = uVar56 ^ (uVar51 + uVar47 >> 0x13 | (uVar51 + uVar47) * 0x2000);
        uVar1 = uVar5 + uVar58;
        uVar2 = uVar50 + uVar4;
        uVar5 = uVar5 ^ (uVar6 + uVar47 >> 0x19 | (uVar6 + uVar47) * 0x80);
        uVar49 = uVar49 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar56 + uVar51;
        uVar7 = uVar7 ^ (uVar2 >> 0xe | uVar2 * 0x40000);
        uVar4 = uVar4 ^ (uVar5 + uVar6 >> 0x17 | (uVar5 + uVar6) * 0x200);
        uVar55 = uVar55 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar50 = uVar50 ^ (uVar49 + uVar53 >> 0x19 | (uVar49 + uVar53) * 0x80);
        uVar56 = uVar56 ^ (uVar7 + uVar3 >> 0x19 | (uVar7 + uVar3) * 0x80);
        uVar47 = uVar47 ^ (uVar4 + uVar5 >> 0x13 | (uVar4 + uVar5) * 0x2000);
        uVar57 = uVar57 ^ (uVar55 + uVar59 >> 0x19 | (uVar55 + uVar59) * 0x80);
        uVar51 = uVar51 ^ (uVar50 + uVar49 >> 0x17 | (uVar50 + uVar49) * 0x200);
        uVar38 = uVar38 ^ (uVar56 + uVar7 >> 0x17 | (uVar56 + uVar7) * 0x200);
        uVar58 = uVar58 ^ (uVar57 + uVar55 >> 0x17 | (uVar57 + uVar55) * 0x200);
        uVar53 = uVar53 ^ (uVar51 + uVar50 >> 0x13 | (uVar51 + uVar50) * 0x2000);
        uVar3 = uVar3 ^ (uVar38 + uVar56 >> 0x13 | (uVar38 + uVar56) * 0x2000);
        uVar59 = uVar59 ^ (uVar58 + uVar57 >> 0x13 | (uVar58 + uVar57) * 0x2000);
        uVar6 = uVar6 ^ (uVar47 + uVar4 >> 0xe | (uVar47 + uVar4) * 0x40000);
        uVar49 = uVar49 ^ (uVar53 + uVar51 >> 0xe | (uVar53 + uVar51) * 0x40000);
        uVar7 = uVar7 ^ (uVar3 + uVar38 >> 0xe | (uVar3 + uVar38) * 0x40000);
        uVar55 = uVar55 ^ (uVar59 + uVar58 >> 0xe | (uVar59 + uVar58) * 0x40000);
        uVar39 = uVar39 - 2;
      } while (2 < uVar39);
      uVar39 = *(uint *)((long)param_1 + 0x10);
      uVar1 = *(uint *)((long)param_1 + 0x14);
      uVar38 = uVar38 + uVar52;
      uVar3 = uVar3 + uVar54;
      bVar35 = uVar52 == 0xffffffff;
      uVar52 = uVar52 + 1;
      if (bVar35) {
        uVar54 = uVar54 + 1;
      }
      uVar23 = *(uint *)((long)param_1 + 4);
      uVar2 = *(uint *)((long)param_1 + 8);
      uVar13 = *(uint *)((long)param_1 + 0x28);
      uVar24 = *(uint *)((long)param_1 + 0x2c);
      uVar6 = *(uint *)param_1 ^ uVar6 + uVar8;
      uVar14 = *(uint *)((long)param_1 + 0x18);
      uVar25 = *(uint *)((long)param_1 + 0x1c);
      uVar15 = *(uint *)((long)param_1 + 0x20);
      uVar26 = *(uint *)((long)param_1 + 0x24);
      uVar16 = *(uint *)((long)param_1 + 0x30);
      uVar27 = *(uint *)((long)param_1 + 0x34);
      uVar17 = *(uint *)((long)param_1 + 0x38);
      uVar28 = *(uint *)((long)param_1 + 0x3c);
      *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_1 + 0xc) ^ uVar47 + uVar19;
      *(uint *)((long)param_3 + 0x10) = uVar39 ^ uVar53 + uVar29;
      *(uint *)((long)param_3 + 4) = uVar23 ^ uVar5 + uVar18;
      *(uint *)((long)param_3 + 8) = uVar2 ^ uVar4 + uVar9;
      *(uint *)((long)param_3 + 0x14) = uVar1 ^ uVar49 + uVar30;
      *(uint *)((long)param_3 + 0x18) = uVar14 ^ uVar50 + uVar31;
      *(uint *)((long)param_3 + 0x1c) = uVar25 ^ uVar51 + uVar10;
      *(uint *)((long)param_3 + 0x20) = uVar15 ^ uVar38;
      *(uint *)((long)param_3 + 0x24) = uVar26 ^ uVar3;
      *(uint *)((long)param_3 + 0x28) = uVar13 ^ uVar7 + uVar20;
      *(uint *)((long)param_3 + 0x2c) = uVar24 ^ uVar56 + uVar11;
      *(uint *)((long)param_3 + 0x30) = uVar16 ^ uVar57 + uVar21;
      *(uint *)param_3 = uVar6;
      *(uint *)((long)param_3 + 0x3c) = uVar28 ^ uVar55 + uVar32;
      *(uint *)((long)param_3 + 0x34) = uVar27 ^ uVar58 + uVar12;
      *(uint *)((long)param_3 + 0x38) = uVar17 ^ uVar59 + uVar22;
      if (uVar36 < 0x41) {
        if ((uVar36 - 1 < 0x3f) && (*(char *)local_100 = (char)uVar6, uVar36 != 1)) {
          uVar41 = uVar37 - 1;
          if ((uVar41 < 8) ||
             (((long)local_100 + 1U < (long)param_3 + uVar37 &&
              ((long)param_3 + 1U < (long)local_100 + uVar37)))) {
            uVar41 = 1;
          }
          else {
            if (uVar41 < 0x20) {
              uVar43 = 0;
            }
            else {
              uVar43 = uVar41 & 0xffffffffffffffe0;
              puVar45 = (undefined8 *)((long)param_3 + 0x11);
              puVar46 = (undefined8 *)((long)local_100 + 0x11);
              uVar48 = uVar43;
              do {
                puVar34 = puVar45 + -1;
                uVar60 = puVar45[-2];
                uVar62 = puVar45[1];
                uVar61 = *puVar45;
                puVar45 = puVar45 + 4;
                uVar48 = uVar48 - 0x20;
                puVar46[-1] = *puVar34;
                puVar46[-2] = uVar60;
                puVar46[1] = uVar62;
                *puVar46 = uVar61;
                puVar46 = puVar46 + 4;
              } while (uVar48 != 0);
              if (uVar41 == uVar43) goto LAB_00be3f94;
              if ((uVar41 & 0x18) == 0) {
                uVar41 = uVar43 | 1;
                goto LAB_00be3f74;
              }
            }
            uVar48 = uVar37 - 1 & 0xfffffffffffffff8;
            uVar41 = uVar48 | 1;
            lVar40 = uVar43 - uVar48;
            puVar45 = (undefined8 *)((long)param_3 + uVar43 + 1);
            puVar46 = (undefined8 *)((long)local_100 + uVar43 + 1);
            do {
              lVar40 = lVar40 + 8;
              *puVar46 = *puVar45;
              puVar45 = puVar45 + 1;
              puVar46 = puVar46 + 1;
            } while (lVar40 != 0);
            if (uVar37 - 1 == uVar48) goto LAB_00be3f94;
          }
LAB_00be3f74:
          lVar40 = uVar37 - uVar41;
          puVar42 = (undefined *)((long)local_100 + uVar41);
          puVar44 = (undefined *)((long)param_3 + uVar41);
          do {
            lVar40 = lVar40 + -1;
            *puVar42 = *puVar44;
            puVar42 = puVar42 + 1;
            puVar44 = puVar44 + 1;
          } while (lVar40 != 0);
        }
LAB_00be3f94:
        *(uint *)(this + 0x20) = uVar52;
        *(uint *)(this + 0x24) = uVar54;
        uVar38 = uVar36;
      }
      else {
        uVar38 = uVar36 - 0x40;
        param_1 = (uchar *)((long)param_1 + 0x40);
        param_3 = (uchar *)((long)param_3 + 0x40);
      }
      uVar37 = (ulong)uVar38;
    } while (0x40 < uVar36);
  }
  if (*(long *)(lVar33 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


