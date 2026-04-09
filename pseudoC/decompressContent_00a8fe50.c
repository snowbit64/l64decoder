// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressContent
// Entry Point: 00a8fe50
// Size: 1356 bytes
// Signature: undefined __cdecl decompressContent(GS2DHeader * param_1, FORMAT param_2, TYPE param_3, uchar * param_4, uint param_5, uchar * * param_6, uint * param_7, uint param_8, uint param_9)


/* GS2DUtil::decompressContent(GS2DUtil::GS2DHeader const&, ImageDesc::FORMAT, ImageDesc::TYPE,
   unsigned char*, unsigned int, unsigned char**, unsigned int const*, unsigned int, unsigned int)
    */

undefined4
GS2DUtil::decompressContent
          (GS2DHeader *param_1,FORMAT param_2,TYPE param_3,uchar *param_4,uint param_5,
          uchar **param_6,uint *param_7,uint param_8,uint param_9)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  void *__s;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  int iVar11;
  uchar *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uchar *local_b0 [5];
  int local_88 [4];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar3 = *(ushort *)(param_1 + 0x12);
  uVar10 = (ulong)uVar3 * 4 + 4;
  __s = operator_new(uVar10);
  memset(__s,0,uVar10);
  uVar10 = 0;
  uVar6 = *(uint *)(param_1 + 4);
  uVar13 = *(undefined8 *)(param_1 + 8);
  do {
    uVar14 = (uint)((ulong)uVar13 >> 0x20);
                    /* try { // try from 00a8ff1c to 00a8ff2b has its CatchHandler @ 00a903c0 */
    iVar5 = ImageUtil::getMemorySize(uVar6,(uint)uVar13,uVar14,param_2,param_3);
    if (uVar10 < 4) {
      local_88[uVar10] = iVar5;
    }
    else {
      local_88[3] = local_88[3] + iVar5;
    }
    uVar6 = uVar6 >> 1;
    *(int *)((long)__s + uVar10 * 4) = iVar5;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar10 = uVar10 + 1;
    uVar13 = NEON_umax(CONCAT44(uVar14 >> 1,(uint)uVar13 >> 1),0x100000001,4);
  } while ((ulong)uVar3 + 1 != uVar10);
  iVar5 = *(int *)(param_1 + 0x14);
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    iVar5 = 6;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x12);
  local_b0[1] = (uchar *)0x0;
  local_b0[0] = (uchar *)0x0;
  local_b0[3] = (uchar *)0x0;
  local_b0[2] = (uchar *)0x0;
  if (2 < uVar6) {
    uVar6 = 3;
  }
  if (param_8 == 0) {
    puVar12 = param_6[uVar6];
    if (puVar12 != (uchar *)0x0) {
      uVar14 = local_88[0] * iVar5;
                    /* try { // try from 00a90004 to 00a9000b has its CatchHandler @ 00a903bc */
      local_b0[0] = (uchar *)operator_new__((ulong)uVar14);
      if (param_7[uVar6] == uVar14) {
        memcpy(local_b0[0],puVar12,(ulong)uVar14);
      }
      else {
                    /* try { // try from 00a90038 to 00a90093 has its CatchHandler @ 00a903bc */
        ZLIBCompressionUtil::decompress(puVar12,param_7[uVar6],local_b0[0],uVar14);
      }
      goto LAB_00a8ff78;
    }
LAB_00a9028c:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00a90360 to 00a9036b has its CatchHandler @ 00a9039c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a9029c to 00a902af has its CatchHandler @ 00a903b4 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to decompress image (pSegmentPtrs[i] == NULL)\n");
  }
  else {
LAB_00a8ff78:
    uVar14 = param_9 + param_8;
    if (uVar6 != 0) {
      if ((param_8 < 2) && (uVar14 != 1)) {
        puVar12 = param_6[uVar6 - 1];
        if (puVar12 == (uchar *)0x0) goto LAB_00a9028c;
        uVar7 = local_88[1] * iVar5;
                    /* try { // try from 00a8ffb8 to 00a8ffbf has its CatchHandler @ 00a903bc */
        local_b0[1] = (uchar *)operator_new__((ulong)uVar7);
        if (param_7[uVar6 - 1] == uVar7) {
          memcpy(local_b0[1],puVar12,(ulong)uVar7);
        }
        else {
          ZLIBCompressionUtil::decompress(puVar12,param_7[uVar6 - 1],local_b0[1],uVar7);
        }
      }
      if (uVar6 != 1) {
        if ((param_8 < 3) && (1 < uVar14 - 1)) {
          puVar12 = param_6[uVar6 - 2];
          if (puVar12 == (uchar *)0x0) goto LAB_00a9028c;
          uVar7 = local_88[2] * iVar5;
          local_b0[2] = (uchar *)operator_new__((ulong)uVar7);
          if (param_7[uVar6 - 2] == uVar7) {
            memcpy(local_b0[2],puVar12,(ulong)uVar7);
          }
          else {
                    /* try { // try from 00a900c0 to 00a900cb has its CatchHandler @ 00a903bc */
            ZLIBCompressionUtil::decompress(puVar12,param_7[uVar6 - 2],local_b0[2],uVar7);
          }
        }
        if (uVar6 != 2) {
          uVar7 = (uint)*(ushort *)(param_1 + 0x12);
          if (*(ushort *)(param_1 + 0x12) < 4) {
            uVar7 = 3;
          }
          if ((param_8 <= uVar7) && (2 < uVar14 - 1)) {
            puVar12 = param_6[uVar6 - 3];
            if (puVar12 == (uchar *)0x0) goto LAB_00a9028c;
            uVar7 = local_88[3] * iVar5;
                    /* try { // try from 00a90258 to 00a9025f has its CatchHandler @ 00a903bc */
            local_b0[3] = (uchar *)operator_new__((ulong)uVar7);
            if (param_7[uVar6 - 3] == uVar7) {
              memcpy(local_b0[3],puVar12,(ulong)uVar7);
            }
            else {
                    /* try { // try from 00a902f8 to 00a90303 has its CatchHandler @ 00a903bc */
              ZLIBCompressionUtil::decompress(puVar12,param_7[uVar6 - 3],local_b0[3],uVar7);
            }
          }
        }
      }
    }
    if (iVar5 == 0) {
      uVar7 = 0;
    }
    else {
      iVar11 = 0;
      uVar7 = 0;
      do {
        uVar10 = (ulong)param_8;
        if (param_8 < uVar14) {
          do {
            uVar8 = uVar10;
            if (2 < uVar10) {
              uVar8 = 3;
            }
            puVar12 = local_b0[uVar8] + (uint)(local_88[uVar8] * iVar11);
            if (3 < uVar10) {
              uVar8 = 3;
              do {
                lVar1 = uVar8 * 4;
                uVar8 = uVar8 + 1;
                puVar12 = puVar12 + *(uint *)((long)__s + lVar1);
              } while (uVar10 != uVar8);
            }
            uVar2 = *(uint *)((long)__s + uVar10 * 4);
            memcpy(param_4,puVar12,(ulong)uVar2);
            param_4 = param_4 + uVar2;
            uVar7 = uVar2 + uVar7;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar14);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar5);
    }
    if (uVar7 == param_5) {
      if (local_b0[0] != (uchar *)0x0) {
        operator_delete__(local_b0[0]);
      }
      if (uVar6 != 0) {
        if (local_b0[1] != (uchar *)0x0) {
          operator_delete__(local_b0[1]);
        }
        if (uVar6 != 1) {
          if (local_b0[2] != (uchar *)0x0) {
            operator_delete__(local_b0[2]);
          }
          if ((uVar6 != 2) && (local_b0[3] != (uchar *)0x0)) {
            operator_delete__(local_b0[3]);
          }
        }
      }
      uVar9 = 1;
      goto LAB_00a902b4;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00a90318 to 00a90323 has its CatchHandler @ 00a903a0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00a90200 to 00a90213 has its CatchHandler @ 00a903b8 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to decompress image (unexpected buffer size)\n");
  }
  uVar9 = 0;
LAB_00a902b4:
  operator_delete(__s);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


