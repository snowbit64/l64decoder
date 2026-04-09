// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildDesc
// Entry Point: 00a791c0
// Size: 2216 bytes
// Signature: undefined __cdecl buildDesc(DDSHeader * param_1, DDSHeaderDX10 * param_2, ORIGIN param_3, ImageDesc * param_4, char * param_5)


/* DDSUtil::buildDesc(DDSUtil::DDSHeader const&, DDSUtil::DDSHeaderDX10 const&, ImageDesc::ORIGIN,
   ImageDesc&, char const*) */

undefined8
DDSUtil::buildDesc(DDSHeader *param_1,DDSHeaderDX10 *param_2,ORIGIN param_3,ImageDesc *param_4,
                  char *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(uint *)(param_1 + 0x68);
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(ORIGIN *)(param_4 + 0x44) = param_3;
  param_4[0x48] = (ImageDesc)0x1;
  if ((uVar5 >> 0x16 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_4 + 0x10) = iVar1;
    if (iVar1 != 0) {
      *(int *)(param_4 + 0x10) = iVar1 + -1;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_4 + 0x1c) = 0;
  uVar9 = NEON_rev64(uVar9,4);
  *(undefined8 *)param_4 = uVar9;
  uVar6 = *(uint *)(param_1 + 0x6c);
  uVar5 = uVar5 >> 3 & (uVar6 & 0x200) >> 9;
  *(uint *)(param_4 + 0x1c) = uVar5;
  if (((uVar6 >> 0x15 & 1) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar5 = 2;
    *(int *)(param_4 + 8) = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_4 + 0x1c) = 2;
  }
  uVar6 = *(uint *)(param_1 + 0x4c);
  if ((uVar6 >> 2 & 1) == 0) {
    if ((uVar6 >> 6 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        if (*(int *)(param_1 + 0x54) == 8) {
          uVar4 = 1;
          uVar9 = 0x100000001;
          goto LAB_00a795ac;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a797a8 to 00a797b3 has its CatchHandler @ 00a79a8c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = "Error: \'%s\' has unsupported 1 channel pixel format.\n";
      }
      else {
        if (*(int *)(param_1 + 0x54) == 0x10) {
          uVar4 = 2;
          uVar9 = 0x100000002;
          goto LAB_00a7940c;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a797f0 to 00a797fb has its CatchHandler @ 00a79a88 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = "Error: \'%s\' has unsupported 2 channel pixel format.\n";
      }
    }
    else if ((uVar6 & 1) == 0) {
      uVar5 = 0;
      uVar6 = *(uint *)(param_1 + 0x60);
      *(undefined4 *)(param_4 + 0x14) = 3;
      do {
        if ((uVar6 >> (ulong)(uVar5 & 0x1f) & 1) != 0) goto LAB_00a7933c;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x20);
      uVar5 = 0x1f;
LAB_00a7933c:
      uVar6 = 0;
      do {
        if ((*(uint *)(param_1 + 0x58) >> (ulong)(uVar6 & 0x1f) & 1) != 0) goto LAB_00a7935c;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x20);
      uVar6 = 0x1f;
LAB_00a7935c:
      iVar1 = *(int *)(param_1 + 0x54);
      uVar4 = 3;
      if (uVar5 <= uVar6) {
        uVar4 = 4;
      }
      *(undefined4 *)(param_4 + 0x40) = uVar4;
      if (iVar1 == 0x10) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a79910 to 00a7991b has its CatchHandler @ 00a79a78 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = "Error: \'%s\' has unsupported pixel format DDS_R5G6B5.\n";
      }
      else {
        if (iVar1 == 0x18) {
LAB_00a794c0:
          *(undefined4 *)(param_4 + 0x18) = 1;
          goto LAB_00a795f0;
        }
        if (iVar1 == 0x20) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 00a798c8 to 00a798d3 has its CatchHandler @ 00a79a7c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Error: \'%s\' has unsupported pixel format DDS_X8R8G8B8.\n";
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 00a79958 to 00a79963 has its CatchHandler @ 00a79a74 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Error: \'%s\' has unsupported pixel format (Unknow RGB format).\n";
        }
      }
    }
    else {
      uVar5 = 0;
      uVar6 = *(uint *)(param_1 + 0x60);
      *(undefined4 *)(param_4 + 0x14) = 4;
      do {
        if ((uVar6 >> (ulong)(uVar5 & 0x1f) & 1) != 0) goto LAB_00a7946c;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x20);
      uVar5 = 0x1f;
LAB_00a7946c:
      uVar6 = 0;
      do {
        if ((*(uint *)(param_1 + 0x58) >> (ulong)(uVar6 & 0x1f) & 1) != 0) goto LAB_00a7948c;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x20);
      uVar6 = 0x1f;
LAB_00a7948c:
      iVar1 = *(int *)(param_1 + 0x54);
      uVar4 = 5;
      if (uVar5 <= uVar6) {
        uVar4 = 6;
      }
      *(undefined4 *)(param_4 + 0x40) = uVar4;
      if (iVar1 == 0x10) {
        iVar1 = bitsCount(*(uint *)(param_1 + 100));
        if (iVar1 == 1) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 00a799a0 to 00a799ab has its CatchHandler @ 00a79a70 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Error: \'%s\' has unsupported pixel format DDS_A1R5G5B5.\n";
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 00a79a30 to 00a79a3b has its CatchHandler @ 00a79a68 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar3 = "Error: \'%s\' has unsupported pixel format DDS_A4R4G4B4.\n";
        }
      }
      else if (iVar1 == 0x20) {
        iVar1 = bitsCount(*(uint *)(param_1 + 100));
        if (iVar1 == 8) goto LAB_00a794c0;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a799e8 to 00a799f3 has its CatchHandler @ 00a79a6c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = "Error: \'%s\' has unsupported pixel format DDS_A2R10G10B10.\n";
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a79838 to 00a79843 has its CatchHandler @ 00a79a84 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar3 = "Error: \'%s\' has unsupported pixel format (unknown format).\n";
      }
    }
LAB_00a796b0:
    puVar2 = &LogManager::getInstance()::singletonLogManager;
LAB_00a796b4:
    LogManager::errorf((char *)puVar2,pcVar3,param_5);
    return 0;
  }
  *(undefined8 *)(param_4 + 0x14) = 0x100000004;
  iVar1 = *(int *)(param_1 + 0x50);
  if (0x33545843 < iVar1) {
    if (iVar1 < 0x53354342) {
      if (iVar1 == 0x33545844) {
switchD_00a79300_caseD_4a:
        uVar4 = 8;
        goto LAB_00a795ec;
      }
      if (iVar1 == 0x35545844) {
switchD_00a79300_caseD_4d:
        uVar4 = 9;
        goto LAB_00a795ec;
      }
      if (iVar1 != 0x53344342) goto LAB_00a79620;
switchD_00a79300_caseD_51:
      uVar4 = 0xb;
      uVar9 = 0x200000001;
      goto LAB_00a7940c;
    }
    if (iVar1 == 0x53354342) {
switchD_00a79300_caseD_54:
      uVar9 = 0x200000002;
      uVar4 = 0xd;
LAB_00a795ac:
      *(undefined4 *)(param_4 + 0x40) = uVar4;
      *(undefined8 *)(param_4 + 0x14) = uVar9;
      goto LAB_00a795f0;
    }
    if (iVar1 != 0x55344342) {
      iVar7 = 0x55354342;
      goto LAB_00a794f4;
    }
switchD_00a79300_caseD_50:
    uVar4 = 1;
    uVar8 = 10;
LAB_00a795dc:
    *(undefined4 *)(param_4 + 0x14) = uVar4;
    *(undefined4 *)(param_4 + 0x40) = uVar8;
    goto LAB_00a795f0;
  }
  if (0x31495440 < iVar1) {
    if (iVar1 == 0x31495441) goto switchD_00a79300_caseD_50;
    if (iVar1 == 0x31545844) {
switchD_00a79300_caseD_47:
      uVar4 = 3;
      uVar8 = 7;
    }
    else {
      iVar7 = 0x32495441;
LAB_00a794f4:
      if (iVar1 != iVar7) goto LAB_00a79620;
switchD_00a79300_caseD_53:
      uVar4 = 2;
      uVar8 = 0xc;
    }
    goto LAB_00a795dc;
  }
  if (iVar1 == 0x71) {
switchD_00a79300_caseD_a:
    uVar4 = 6;
LAB_00a795c0:
    *(undefined4 *)(param_4 + 0x40) = 5;
    *(undefined4 *)(param_4 + 0x18) = uVar4;
    goto LAB_00a795f0;
  }
  if (iVar1 == 0x74) {
switchD_00a79300_caseD_2:
    uVar4 = 8;
    goto LAB_00a795c0;
  }
  if (iVar1 != 0x30315844) {
LAB_00a79620:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00a79880 to 00a7988b has its CatchHandler @ 00a79a80 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = 
    "Error: \'%s\' has an invalid dxt format, only BC1, BC2 BC3, BC4 and BC5 are support.\n";
    goto LAB_00a796b0;
  }
  if ((uVar5 == 0) && (1 < *(uint *)(param_2 + 0xc))) {
    *(uint *)(param_4 + 0xc) = *(uint *)(param_2 + 0xc);
    *(undefined4 *)(param_4 + 0x1c) = 3;
  }
  *(undefined8 *)(param_4 + 0x14) = 0x100000004;
  switch(*(undefined4 *)param_2) {
  case 2:
    goto switchD_00a79300_caseD_2;
  default:
    puVar2 = (undefined8 *)LogManager::getInstance();
    pcVar3 = "Error: \'%s\' has an invalid dx10 format.\n";
    goto LAB_00a796b4;
  case 10:
    goto switchD_00a79300_caseD_a;
  case 0x1c:
    uVar4 = 5;
    break;
  case 0x29:
    uVar4 = 1;
    uVar9 = 0x800000001;
    goto LAB_00a7940c;
  case 0x31:
    uVar4 = 2;
    *(undefined4 *)(param_4 + 0x14) = 2;
    break;
  case 0x38:
    uVar4 = 1;
    uVar9 = 0x300000001;
    goto LAB_00a7940c;
  case 0x3d:
    uVar4 = 1;
    *(undefined4 *)(param_4 + 0x14) = 1;
    break;
  case 0x47:
    goto switchD_00a79300_caseD_47;
  case 0x4a:
    goto switchD_00a79300_caseD_4a;
  case 0x4d:
    goto switchD_00a79300_caseD_4d;
  case 0x50:
    goto switchD_00a79300_caseD_50;
  case 0x51:
    goto switchD_00a79300_caseD_51;
  case 0x53:
    goto switchD_00a79300_caseD_53;
  case 0x54:
    goto switchD_00a79300_caseD_54;
  case 0x57:
    uVar4 = 6;
    break;
  case 0x5f:
    uVar4 = 0xe;
    uVar9 = 0x500000003;
    goto LAB_00a7940c;
  case 0x60:
    uVar4 = 0xf;
    uVar9 = 0x600000003;
LAB_00a7940c:
    *(undefined4 *)(param_4 + 0x40) = uVar4;
    *(undefined8 *)(param_4 + 0x14) = uVar9;
    goto LAB_00a795f0;
  case 0x62:
    *(undefined4 *)(param_4 + 0x14) = 3;
    if (*(int *)(param_1 + 0x1c) == 0x288ae8d9) {
      if (((byte)param_1[0x24] >> 2 & 1) != 0) {
        *(undefined4 *)(param_4 + 0x14) = 4;
        uVar4 = 0x10;
        break;
      }
    }
    else {
      pcVar3 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar3,
                         "Warning: \'%s\' (BC7) has undefined channel count, assuming 3 channels.\n"
                         ,param_5);
    }
    uVar4 = 0x10;
  }
LAB_00a795ec:
  *(undefined4 *)(param_4 + 0x40) = uVar4;
LAB_00a795f0:
  if ((*(int *)(param_1 + 0x1c) == 0x288ae8d9) && (((byte)param_1[0x24] >> 1 & 1) != 0)) {
    param_4[0x49] = (ImageDesc)0x1;
  }
  return 1;
}


