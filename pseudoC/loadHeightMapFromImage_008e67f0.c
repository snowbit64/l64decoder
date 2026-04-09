// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadHeightMapFromImage
// Entry Point: 008e67f0
// Size: 1048 bytes
// Signature: undefined __thiscall loadHeightMapFromImage(BaseTerrain * this, char * param_1, ushort * * param_2, uint * param_3, uint * param_4, uint * param_5)


/* BaseTerrain::loadHeightMapFromImage(char const*, unsigned short*&, unsigned int&, unsigned int*,
   unsigned int*) */

undefined4 __thiscall
BaseTerrain::loadHeightMapFromImage
          (BaseTerrain *this,char *param_1,ushort **param_2,uint *param_3,uint *param_4,
          uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  BitmapImage aBStack_98 [8];
  uint local_90;
  uint uStack_8c;
  int local_84;
  long local_78;
  int local_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  BitmapImage::BitmapImage(aBStack_98,param_1,0,0);
                    /* try { // try from 008e683c to 008e68bf has its CatchHandler @ 008e6c2c */
  uVar5 = BitmapImage::isLoaded();
  if ((uVar5 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008e6b3c to 008e6b47 has its CatchHandler @ 008e6c10 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to load height map \'%s\'.\n",param_1);
  }
  else {
    if (local_90 == uStack_8c) {
      if (local_90 == 0) {
        uVar10 = 0xffffffff;
LAB_008e68d4:
        uVar25 = local_90;
        if ((uVar10 & uVar10 - 1) != 0) {
LAB_008e6998:
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 008e6bcc to 008e6bd7 has its CatchHandler @ 008e6c08 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 008e69a8 to 008e69bf has its CatchHandler @ 008e6c24 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Height map \'%s\'  width must either be n^2 or n^2+1.\n",
                             param_1);
          goto LAB_008e69c0;
        }
      }
      else {
        if ((local_90 & local_90 - 1) != 0) {
          uVar10 = local_90 - 1;
          if (uVar10 != 0) goto LAB_008e68d4;
          goto LAB_008e6998;
        }
        uVar25 = local_90 + 1;
      }
      uVar10 = uVar25 * uVar25;
                    /* try { // try from 008e68ec to 008e68ef has its CatchHandler @ 008e6c28 */
      puVar6 = (ushort *)operator_new__((ulong)uVar10 << 1);
      if (local_90 == 0) {
        uVar11 = 0;
        uVar14 = 0xffff;
      }
      else {
        iVar4 = 0;
        uVar15 = 0;
        uVar11 = 0;
        uVar14 = 0xffff;
        uVar23 = 1;
        do {
          uVar5 = 0;
          uVar12 = uVar11;
          uVar13 = uVar14;
          uVar2 = uVar23;
          do {
            uVar9 = (ulong)(uVar2 - 1);
            if (local_84 == 1) {
              if (local_64 == 3) {
                uVar8 = (uint)*(ushort *)(local_78 + uVar9 * 2);
              }
              else {
                uVar8 = (uint)*(byte *)(local_78 + uVar9);
              }
            }
            else {
              uVar8 = (uint)CONCAT11(*(undefined *)(local_78 + uVar9),
                                     *(undefined *)(local_78 + (ulong)uVar2));
            }
            iVar7 = (int)uVar5;
            uVar11 = uVar8;
            if (uVar8 <= uVar12) {
              uVar11 = uVar12;
            }
            uVar14 = uVar8;
            if (uVar13 <= uVar8) {
              uVar14 = uVar13;
            }
            uVar5 = uVar5 + 1;
            uVar2 = uVar2 + local_84;
            puVar6[(uint)(iVar4 + iVar7)] = (ushort)uVar8;
            uVar12 = uVar11;
            uVar13 = uVar14;
          } while (local_90 != uVar5);
          uVar15 = uVar15 + 1;
          iVar4 = iVar4 + uVar25;
          uVar23 = uVar23 + local_90 * local_84;
        } while (uVar15 != local_90);
      }
      if (local_90 != uVar25) {
        uVar5 = (ulong)(uVar10 - uVar25);
        uVar15 = uVar10 - 1;
        uVar9 = (ulong)uVar15;
        if (uVar10 - uVar25 < uVar15) {
          uVar17 = uVar9 - uVar5;
          if (0xf < uVar17) {
            uVar23 = uVar25 * (uVar25 - 2);
            uVar19 = (ulong)uVar23;
            if (((!CARRY4(uVar23,(uint)(~uVar5 + uVar9))) && (~uVar5 + uVar9 >> 0x20 == 0)) &&
               ((puVar6 + ((uVar19 + uVar9) - uVar5) <= puVar6 + uVar5 ||
                (puVar6 + uVar9 <= puVar6 + uVar23)))) {
              uVar20 = uVar17 & 0xfffffffffffffff0;
              puVar21 = (undefined8 *)(puVar6 + uVar5 + 8);
              uVar5 = uVar20 + uVar5;
              uVar22 = uVar20;
              do {
                puVar1 = (undefined8 *)(puVar6 + uVar19);
                uVar19 = (ulong)((int)uVar19 + 0x10);
                uVar22 = uVar22 - 0x10;
                uVar26 = *puVar1;
                uVar28 = puVar1[3];
                uVar27 = puVar1[2];
                puVar21[-1] = puVar1[1];
                puVar21[-2] = uVar26;
                puVar21[1] = uVar28;
                *puVar21 = uVar27;
                puVar21 = puVar21 + 4;
              } while (uVar22 != 0);
              if (uVar17 == uVar20) goto LAB_008e6a48;
            }
          }
          uVar23 = (int)uVar5 - uVar25;
          lVar16 = uVar9 - uVar5;
          puVar18 = puVar6 + uVar5;
          do {
            uVar5 = (ulong)uVar23;
            uVar23 = uVar23 + 1;
            lVar16 = lVar16 + -1;
            *puVar18 = puVar6[uVar5];
            puVar18 = puVar18 + 1;
          } while (lVar16 != 0);
        }
LAB_008e6a48:
        for (uVar23 = uVar25 - 1; uVar23 < uVar25 * local_90; uVar23 = uVar23 + uVar25) {
          puVar6[uVar23] = puVar6[uVar23 - 1];
        }
        puVar6[uVar9] = (ushort)((uint)puVar6[uVar15 - uVar25] + (uint)puVar6[uVar10 - 2] >> 1);
      }
      *param_2 = puVar6;
      *param_3 = uVar25;
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar14;
      }
      uVar24 = 1;
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar11;
      }
      goto LAB_008e69c4;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008e6b84 to 008e6b8f has its CatchHandler @ 008e6c0c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Height map \'%s\'  width and height must be equal.\n",param_1);
  }
LAB_008e69c0:
  uVar24 = 0;
LAB_008e69c4:
  BitmapImage::~BitmapImage(aBStack_98);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


