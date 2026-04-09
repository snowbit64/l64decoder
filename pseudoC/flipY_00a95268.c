// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipY
// Entry Point: 00a95268
// Size: 704 bytes
// Signature: undefined __cdecl flipY(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, FORMAT param_6, char * param_7, bool param_8)


/* ImageUtil::flipY(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int,
   ImageDesc::FORMAT, char const*, bool) */

void ImageUtil::flipY(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                     FORMAT param_6,char *param_7,bool param_8)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uchar *puVar9;
  uchar *puVar10;
  ulong uVar11;
  code *pcVar12;
  uint uVar13;
  char local_6c [4];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (param_6 - 0x11 < 0xfffffff6) {
    uVar13 = 0;
    if (param_5 != 0) {
      uVar13 = param_2 / param_5;
    }
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = uVar13 / param_4;
    }
    uVar8 = (ulong)uVar3;
    pvVar5 = operator_new__(uVar8);
    if (param_5 != 0) {
      uVar11 = 0;
      uVar2 = param_4 >> 1;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        if (1 < param_4) {
          puVar9 = param_1 + uVar13 * (int)uVar11;
          puVar10 = puVar9 + (uVar13 - uVar3);
          uVar7 = uVar2;
          do {
            memcpy(pvVar5,puVar10,uVar8);
            memcpy(puVar10,puVar9,uVar8);
            memcpy(puVar9,pvVar5,uVar8);
            puVar9 = puVar9 + uVar8;
            puVar10 = puVar10 + -uVar8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != param_5);
    }
    operator_delete__(pvVar5);
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
    uVar13 = param_6 - 7;
    if ((uVar13 < 10) && ((0x27fU >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      uVar3 = param_3 >> 2;
      uVar2 = *(int *)(&DAT_005209c8 + (long)(int)uVar13 * 4) * uVar3;
      uVar8 = (ulong)uVar2;
      pvVar5 = operator_new__(uVar8);
      local_6c[0] = '\0';
      if (7 < param_4) {
        uVar7 = 0;
        pcVar12 = (code *)(&PTR_flipBlocksBC1Y_00fe45f0)[(int)uVar13];
        uVar13 = uVar2 * ((param_4 >> 2) - 1);
        uVar11 = (ulong)(param_4 >> 3);
        do {
          puVar9 = param_1 + uVar7;
          puVar10 = param_1 + uVar13;
          (*pcVar12)(puVar9,uVar3,local_6c);
          (*pcVar12)(puVar10,uVar3,local_6c);
          memcpy(pvVar5,puVar10,uVar8);
          memcpy(puVar10,puVar9,uVar8);
          memcpy(puVar9,pvVar5,uVar8);
          uVar7 = uVar7 + uVar2;
          uVar13 = uVar13 - uVar2;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      operator_delete__(pvVar5);
      if ((local_6c[0] != '\0') && (param_8)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00a954ec to 00a954f7 has its CatchHandler @ 00a95528 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar1 = "(no name)";
        if (param_7 != (char *)0x0) {
          pcVar1 = param_7;
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Texture was flipped with quality loss: %s\n",pcVar1);
      }
    }
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


