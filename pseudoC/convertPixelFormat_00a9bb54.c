// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelFormat
// Entry Point: 00a9bb54
// Size: 848 bytes
// Signature: undefined __cdecl convertPixelFormat(void * param_1, uint param_2, uint param_3, PIXEL_FORMAT param_4, void * param_5, uint param_6, uint param_7, PIXEL_FORMAT param_8, uint param_9, uint param_10, uint param_11)


/* PixelFormatUtil::convertPixelFormat(void const*, unsigned int, unsigned int,
   PixelFormat::PIXEL_FORMAT, void*, unsigned int, unsigned int, PixelFormat::PIXEL_FORMAT, unsigned
   int, unsigned int, unsigned int) */

void PixelFormatUtil::convertPixelFormat
               (void *param_1,uint param_2,uint param_3,PIXEL_FORMAT param_4,void *param_5,
               uint param_6,uint param_7,PIXEL_FORMAT param_8,uint param_9,uint param_10,
               uint param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  void *__src;
  ulong uVar8;
  uint uVar9;
  
  uVar7 = (ulong)param_7;
  uVar8 = (ulong)param_3;
  if (param_2 == 0) {
    param_2 = getMemorySize(param_9,1,1,param_4);
  }
  if (param_6 == 0) {
    param_6 = getMemorySize(param_9,1,1,param_8);
  }
  if (param_3 == 0) {
    uVar8 = getMemorySize(param_9,param_10,1,param_4);
    uVar8 = uVar8 & 0xffffffff;
  }
  if (param_7 == 0) {
    uVar7 = getMemorySize(param_9,param_10,1,param_8);
    uVar7 = uVar7 & 0xffffffff;
  }
  uVar1 = (uint)uVar8;
  if (param_4 == param_8) {
    uVar4 = getMemorySize(param_9,param_10,param_11,param_4);
    if (((param_2 == param_6) && (uVar1 == (uint)uVar7)) && (uVar1 * param_11 == uVar4)) {
      memcpy(param_5,param_1,(ulong)uVar4);
      return;
    }
    uVar4 = (uVar1 - 1) + uVar4;
    if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = 0;
      uVar1 = (uVar1 - 1) + param_2;
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = uVar1 / param_2;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        if (param_2 <= uVar1) {
          uVar9 = 0;
          __dest = param_5;
          __src = param_1;
          do {
            memcpy(__dest,__src,(ulong)param_2);
            __src = (void *)((long)__src + (ulong)param_2);
            __dest = (void *)((long)__dest + (ulong)param_6);
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar3);
        }
        uVar4 = uVar4 + 1;
        param_1 = (void *)((long)param_1 + uVar8);
        param_5 = (void *)((long)param_5 + uVar7);
      } while (uVar4 != uVar2);
    }
  }
  else {
    if (((byte)s_pixelFormats[(ulong)param_8 * 0x18 + 0xc] >> 1 & 1) != 0) {
      DebugUtil::message("Error","PixelFormatUtil::convertPixelFormat: compression not supported",
                         (char *)0x0,"T:/src/base/3d/PixelFormatUtil.cpp",0x2cd);
      return;
    }
    if (param_11 != 0) {
      do {
        uVar6 = PixelFormatConverter::convertPixelFormat
                          (param_1,param_2,param_4,param_5,param_6,param_8,param_9,param_10);
        if ((uVar6 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00a9be6c to 00a9be77 has its CatchHandler @ 00a9bea4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "PixelFormatUtil::convertPixelFormat: conversion from %s to %s  currently not supported\n"
                            ,*(undefined8 *)(s_pixelFormats + (ulong)param_4 * 0x18),
                            *(undefined8 *)(s_pixelFormats + (ulong)param_8 * 0x18));
          return;
        }
        param_1 = (void *)((long)param_1 + uVar8);
        param_5 = (void *)((long)param_5 + uVar7);
        param_11 = param_11 - 1;
      } while (param_11 != 0);
    }
  }
  return;
}


