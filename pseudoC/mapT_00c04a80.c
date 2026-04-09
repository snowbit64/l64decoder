// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mapT
// Entry Point: 00c04a80
// Size: 1356 bytes
// Signature: undefined __thiscall mapT(Main * this, PerItemData * param_1, PerThreadData * param_2)


/* DictionaryCompressor::Main::mapT(DictionaryCompressor::PerItemData*,
   DictionaryCompressor::PerThreadData*) const */

undefined8 __thiscall
DictionaryCompressor::Main::mapT(Main *this,PerItemData *param_1,PerThreadData *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  byte *__src;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong extraout_x12;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar21 = *(uint *)(param_1 + 8);
  pbVar20 = *(byte **)param_1;
  *(uint *)param_2 = *(int *)param_2 + uVar21;
  __src = (byte *)operator_new__((ulong)(uVar21 << 1));
  pbVar11 = __src;
  if (uVar21 != 0) {
    uVar15 = 0;
    uVar14 = extraout_x12;
    do {
      while( true ) {
        uVar17 = (uint)*pbVar20;
        uVar3 = uVar21 - 1;
        if (uVar3 != 0) {
          uVar17 = (uint)CONCAT11(pbVar20[1],*pbVar20);
        }
        uVar13 = uVar21;
        if (0x22 < uVar21) {
          uVar13 = 0x23;
        }
        uVar2 = *(int *)(this + (ulong)(uVar17 + 1) * 4 + 0x38) -
                *(uint *)(this + (ulong)uVar17 * 4 + 0x38);
        if (uVar2 != 0) break;
LAB_00c04ca0:
        uVar21 = (uint)uVar15 + 1;
        uVar15 = (ulong)uVar21;
        pbVar16 = pbVar20 + 1;
        if ((uVar21 & 0xff) == 0x80) {
          *pbVar11 = 0xff;
          if ((pbVar11 < pbVar20) && (pbVar20 + -0x7f < pbVar11 + 0x81)) {
            lVar9 = 0;
            do {
              pbVar11[lVar9 + 1] = (pbVar20 + -0x7f)[lVar9];
              lVar9 = lVar9 + 1;
            } while (lVar9 != 0x80);
            uVar15 = 0;
            pbVar11 = pbVar11 + 0x81;
          }
          else {
            uVar8 = *(undefined8 *)(pbVar20 + -0x7f);
            uVar24 = *(undefined8 *)(pbVar20 + -0x67);
            uVar23 = *(undefined8 *)(pbVar20 + -0x6f);
            uVar15 = 0;
            uVar26 = *(undefined8 *)(pbVar20 + -0x57);
            uVar25 = *(undefined8 *)(pbVar20 + -0x5f);
            *(undefined8 *)(pbVar11 + 9) = *(undefined8 *)(pbVar20 + -0x77);
            *(undefined8 *)(pbVar11 + 1) = uVar8;
            uVar22 = *(undefined8 *)(pbVar20 + -0x47);
            uVar8 = *(undefined8 *)(pbVar20 + -0x4f);
            *(undefined8 *)(pbVar11 + 0x19) = uVar24;
            *(undefined8 *)(pbVar11 + 0x11) = uVar23;
            uVar24 = *(undefined8 *)(pbVar20 + -0x37);
            uVar23 = *(undefined8 *)(pbVar20 + -0x3f);
            *(undefined8 *)(pbVar11 + 0x29) = uVar26;
            *(undefined8 *)(pbVar11 + 0x21) = uVar25;
            uVar26 = *(undefined8 *)(pbVar20 + -0x27);
            uVar25 = *(undefined8 *)(pbVar20 + -0x2f);
            *(undefined8 *)(pbVar11 + 0x39) = uVar22;
            *(undefined8 *)(pbVar11 + 0x31) = uVar8;
            uVar22 = *(undefined8 *)(pbVar20 + -0x17);
            uVar8 = *(undefined8 *)(pbVar20 + -0x1f);
            *(undefined8 *)(pbVar11 + 0x49) = uVar24;
            *(undefined8 *)(pbVar11 + 0x41) = uVar23;
            uVar24 = *(undefined8 *)(pbVar20 + -7);
            uVar23 = *(undefined8 *)(pbVar20 + -0xf);
            *(undefined8 *)(pbVar11 + 0x59) = uVar26;
            *(undefined8 *)(pbVar11 + 0x51) = uVar25;
            *(undefined8 *)(pbVar11 + 0x69) = uVar22;
            *(undefined8 *)(pbVar11 + 0x61) = uVar8;
            *(undefined8 *)(pbVar11 + 0x79) = uVar24;
            *(undefined8 *)(pbVar11 + 0x71) = uVar23;
            pbVar11 = pbVar11 + 0x81;
          }
        }
        pbVar12 = pbVar11;
        pbVar20 = pbVar16;
        uVar21 = uVar3;
        if (uVar3 == 0) goto LAB_00c04d94;
      }
      uVar6 = 0;
      uVar18 = 0;
      lVar9 = *(long *)(this + 0x20) + (ulong)*(uint *)(this + (ulong)uVar17 * 4 + 0x38) * 0xc;
      do {
        bVar1 = *(byte *)(lVar9 + uVar6 * 0xc + 2);
        uVar17 = (uint)bVar1;
        if (uVar13 <= bVar1) {
          uVar17 = uVar13;
        }
        if (uVar17 != 0) {
          lVar10 = 0;
          do {
            if (pbVar20[lVar10] !=
                *(byte *)(**(long **)(this + 0x10) + (ulong)*(uint *)(lVar9 + uVar6 * 0xc + 4) +
                         lVar10)) {
              uVar17 = (uint)lVar10;
              if ((uint)lVar10 <= uVar18) goto LAB_00c04b88;
              goto LAB_00c04bec;
            }
            lVar10 = lVar10 + 1;
          } while (uVar17 != (uint)lVar10);
          if (uVar18 < uVar17) {
LAB_00c04bec:
            uVar18 = uVar17;
            uVar14 = (ulong)*(uint *)(lVar9 + uVar6 * 0xc + 8);
          }
        }
LAB_00c04b88:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
      if (uVar18 < 4) goto LAB_00c04ca0;
      if ((uVar15 & 0xff) != 0) {
        uVar6 = uVar15 & 0xff;
        pbVar16 = pbVar11 + 1;
        *pbVar11 = (char)uVar15 + 0x7f;
        if ((((uint)uVar15 & 0xff) < 0x20) ||
           ((puVar19 = (undefined8 *)(pbVar20 + -uVar6), pbVar16 < pbVar20 &&
            (puVar19 < pbVar11 + uVar6 + 1)))) {
          uVar15 = 0;
          pbVar11 = pbVar16;
        }
        else {
          uVar8 = *puVar19;
          uVar23 = puVar19[3];
          uVar22 = puVar19[2];
          uVar15 = uVar15 & 0xe0;
          *(undefined8 *)(pbVar11 + 9) = puVar19[1];
          *(undefined8 *)(pbVar11 + 1) = uVar8;
          *(undefined8 *)(pbVar11 + 0x19) = uVar23;
          *(undefined8 *)(pbVar11 + 0x11) = uVar22;
          if (uVar15 != 0x20) {
            uVar8 = puVar19[4];
            uVar23 = puVar19[7];
            uVar22 = puVar19[6];
            *(undefined8 *)(pbVar11 + 0x29) = puVar19[5];
            *(undefined8 *)(pbVar11 + 0x21) = uVar8;
            *(undefined8 *)(pbVar11 + 0x39) = uVar23;
            *(undefined8 *)(pbVar11 + 0x31) = uVar22;
            if (uVar15 != 0x40) {
              uVar8 = puVar19[8];
              uVar23 = puVar19[0xb];
              uVar22 = puVar19[10];
              *(undefined8 *)(pbVar11 + 0x49) = puVar19[9];
              *(undefined8 *)(pbVar11 + 0x41) = uVar8;
              *(undefined8 *)(pbVar11 + 0x59) = uVar23;
              *(undefined8 *)(pbVar11 + 0x51) = uVar22;
              if (uVar15 != 0x60) {
                uVar8 = puVar19[0xc];
                uVar23 = puVar19[0xf];
                uVar22 = puVar19[0xe];
                *(undefined8 *)(pbVar11 + 0x69) = puVar19[0xd];
                *(undefined8 *)(pbVar11 + 0x61) = uVar8;
                *(undefined8 *)(pbVar11 + 0x79) = uVar23;
                *(undefined8 *)(pbVar11 + 0x71) = uVar22;
                if (uVar15 != 0x80) {
                  uVar8 = puVar19[0x10];
                  uVar23 = puVar19[0x13];
                  uVar22 = puVar19[0x12];
                  *(undefined8 *)(pbVar11 + 0x89) = puVar19[0x11];
                  *(undefined8 *)(pbVar11 + 0x81) = uVar8;
                  *(undefined8 *)(pbVar11 + 0x99) = uVar23;
                  *(undefined8 *)(pbVar11 + 0x91) = uVar22;
                  if (uVar15 != 0xa0) {
                    uVar8 = puVar19[0x14];
                    uVar23 = puVar19[0x17];
                    uVar22 = puVar19[0x16];
                    *(undefined8 *)(pbVar11 + 0xa9) = puVar19[0x15];
                    *(undefined8 *)(pbVar11 + 0xa1) = uVar8;
                    *(undefined8 *)(pbVar11 + 0xb9) = uVar23;
                    *(undefined8 *)(pbVar11 + 0xb1) = uVar22;
                    if (uVar15 != 0xc0) {
                      uVar8 = puVar19[0x18];
                      uVar23 = puVar19[0x1b];
                      uVar22 = puVar19[0x1a];
                      *(undefined8 *)(pbVar11 + 0xc9) = puVar19[0x19];
                      *(undefined8 *)(pbVar11 + 0xc1) = uVar8;
                      *(undefined8 *)(pbVar11 + 0xd9) = uVar23;
                      *(undefined8 *)(pbVar11 + 0xd1) = uVar22;
                    }
                  }
                }
              }
            }
          }
          pbVar11 = pbVar16 + uVar15;
          if (uVar15 == uVar6) goto LAB_00c04c60;
        }
        lVar9 = uVar15 - uVar6;
        pbVar16 = pbVar11;
        do {
          pbVar12 = pbVar20 + lVar9;
          bVar4 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          pbVar11 = pbVar16 + 1;
          *pbVar16 = *pbVar12;
          pbVar16 = pbVar11;
        } while (bVar4);
      }
LAB_00c04c60:
      pbVar12 = pbVar11 + 3;
      uVar15 = 0;
      pbVar11[1] = (byte)uVar14;
      pbVar16 = pbVar20 + uVar18;
      *pbVar11 = (char)uVar18 - 4U | (byte)(uVar14 >> 0xb) & 0x60;
      uVar21 = uVar21 - uVar18;
      pbVar11[2] = (byte)(uVar14 >> 8);
      pbVar11 = pbVar12;
      pbVar20 = pbVar16;
    } while (uVar21 != 0);
LAB_00c04d94:
    pbVar11 = pbVar12;
    if ((uVar15 & 0xff) != 0) {
      uVar14 = uVar15 & 0xff;
      pbVar11 = pbVar12 + 1;
      *pbVar12 = (char)uVar15 + 0x7f;
      if ((((uint)uVar15 & 0xff) < 0x20) ||
         ((puVar19 = (undefined8 *)(pbVar16 + -uVar14), pbVar11 < pbVar16 &&
          (puVar19 < pbVar12 + uVar14 + 1)))) {
        uVar15 = 0;
      }
      else {
        uVar8 = *puVar19;
        uVar23 = puVar19[3];
        uVar22 = puVar19[2];
        uVar15 = uVar15 & 0xe0;
        pbVar11 = pbVar11 + uVar15;
        *(undefined8 *)(pbVar12 + 9) = puVar19[1];
        *(undefined8 *)(pbVar12 + 1) = uVar8;
        *(undefined8 *)(pbVar12 + 0x19) = uVar23;
        *(undefined8 *)(pbVar12 + 0x11) = uVar22;
        if (uVar15 != 0x20) {
          uVar8 = puVar19[4];
          uVar23 = puVar19[7];
          uVar22 = puVar19[6];
          *(undefined8 *)(pbVar12 + 0x29) = puVar19[5];
          *(undefined8 *)(pbVar12 + 0x21) = uVar8;
          *(undefined8 *)(pbVar12 + 0x39) = uVar23;
          *(undefined8 *)(pbVar12 + 0x31) = uVar22;
          if (uVar15 != 0x40) {
            uVar8 = puVar19[8];
            uVar23 = puVar19[0xb];
            uVar22 = puVar19[10];
            *(undefined8 *)(pbVar12 + 0x49) = puVar19[9];
            *(undefined8 *)(pbVar12 + 0x41) = uVar8;
            *(undefined8 *)(pbVar12 + 0x59) = uVar23;
            *(undefined8 *)(pbVar12 + 0x51) = uVar22;
            if (uVar15 != 0x60) {
              uVar8 = puVar19[0xc];
              uVar23 = puVar19[0xf];
              uVar22 = puVar19[0xe];
              *(undefined8 *)(pbVar12 + 0x69) = puVar19[0xd];
              *(undefined8 *)(pbVar12 + 0x61) = uVar8;
              *(undefined8 *)(pbVar12 + 0x79) = uVar23;
              *(undefined8 *)(pbVar12 + 0x71) = uVar22;
              if (uVar15 != 0x80) {
                uVar8 = puVar19[0x10];
                uVar23 = puVar19[0x13];
                uVar22 = puVar19[0x12];
                *(undefined8 *)(pbVar12 + 0x89) = puVar19[0x11];
                *(undefined8 *)(pbVar12 + 0x81) = uVar8;
                *(undefined8 *)(pbVar12 + 0x99) = uVar23;
                *(undefined8 *)(pbVar12 + 0x91) = uVar22;
                if (uVar15 != 0xa0) {
                  uVar8 = puVar19[0x14];
                  uVar23 = puVar19[0x17];
                  uVar22 = puVar19[0x16];
                  *(undefined8 *)(pbVar12 + 0xa9) = puVar19[0x15];
                  *(undefined8 *)(pbVar12 + 0xa1) = uVar8;
                  *(undefined8 *)(pbVar12 + 0xb9) = uVar23;
                  *(undefined8 *)(pbVar12 + 0xb1) = uVar22;
                  if (uVar15 != 0xc0) {
                    uVar8 = puVar19[0x18];
                    uVar23 = puVar19[0x1b];
                    uVar22 = puVar19[0x1a];
                    *(undefined8 *)(pbVar12 + 0xc9) = puVar19[0x19];
                    *(undefined8 *)(pbVar12 + 0xc1) = uVar8;
                    *(undefined8 *)(pbVar12 + 0xd9) = uVar23;
                    *(undefined8 *)(pbVar12 + 0xd1) = uVar22;
                  }
                }
              }
            }
          }
        }
        if (uVar15 == uVar14) goto LAB_00c04df4;
      }
      lVar9 = uVar15 - uVar14;
      pbVar20 = pbVar11;
      do {
        pbVar12 = pbVar16 + lVar9;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        pbVar11 = pbVar20 + 1;
        *pbVar20 = *pbVar12;
        pbVar20 = pbVar11;
      } while (bVar4);
    }
  }
LAB_00c04df4:
  uVar21 = *(uint *)(param_1 + 8);
  uVar14 = (long)pbVar11 - (long)__src;
  uVar17 = (uint)uVar14;
  if (uVar17 < uVar21) {
    *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) + uVar17;
    pvVar7 = operator_new__((ulong)uVar21);
    CompressionDictionary::decompress
              (*(uchar **)(this + 0x10),(uint)__src,(uchar *)(uVar14 & 0xffffffff),(uint)pvVar7);
    iVar5 = memcmp(pvVar7,*(void **)param_1,(ulong)*(uint *)(param_1 + 8));
    if (iVar5 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00c04f58 to 00c04f5f has its CatchHandler @ 00c04fb8 */
        param_1 = (PerItemData *)operator_new(0x38);
                    /* try { // try from 00c04f64 to 00c04f67 has its CatchHandler @ 00c04fa8 */
        Logger::Logger((Logger *)param_1);
        LogManager::getInstance()::singletonLogManager = (Logger *)param_1;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar8 = LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "!!! INTERNAL COMPRESSION ERROR !!!\n");
                    /* catch() { ... } // from try @ 00c04f64 with catch @ 00c04fa8 */
      operator_delete(param_1);
      __cxa_guard_abort(&LogManager::getInstance()::singletonLogManager);
                    /* WARNING: Subroutine does not return */
      FUN_00f27898(uVar8);
    }
    operator_delete__(pvVar7);
    pvVar7 = operator_new__(uVar14 & 0xffffffff);
    *(void **)(param_1 + 0x10) = pvVar7;
    memcpy(pvVar7,__src,uVar14 & 0xffffffff);
    *(uint *)(param_1 + 0x18) = uVar17;
  }
  else {
    *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) + uVar21;
  }
  operator_delete__(__src);
  return 1;
}


