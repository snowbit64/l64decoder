// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromXml
// Entry Point: 00707b88
// Size: 3084 bytes
// Signature: undefined __thiscall loadFromXml(AnimalAnimationSystemSource * this, DomXMLFile * param_1, char * param_2)


/* AnimalAnimationSystemSource::loadFromXml(DomXMLFile&, char const*) */

void __thiscall
AnimalAnimationSystemSource::loadFromXml
          (AnimalAnimationSystemSource *this,DomXMLFile *param_1,char *param_2)

{
  DomXMLFile *pDVar1;
  DomXMLFile *pDVar2;
  uint uVar3;
  uint uVar4;
  DomXMLFile DVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  Logger *pLVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  DomXMLFile *pDVar20;
  int *piVar21;
  AnimalAnimationSystemSource *pAVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  char acStack_390 [128];
  undefined auStack_310 [128];
  char acStack_290 [256];
  char acStack_190 [256];
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)this = 0x447a0000;
  *(undefined4 *)(this + 0x1110) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x2918) = 0;
  FUN_00708804(acStack_190,0x100,"%s.states",param_2);
  iVar7 = DomXMLFile::getNumChildren(param_1,acStack_190);
  pDVar1 = param_1 + 0x11;
  if (iVar7 != 0) {
    iVar27 = 0;
    do {
      FUN_00708804(acStack_190,0x100,"%s.states.state(%u)",param_2,iVar27);
      FUN_00708804(acStack_290,0x100,"%s#id",acStack_190);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
      uVar17 = *(uint *)(this + 4);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + (ulong)uVar17 * 0x18 + 8));
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
      iVar8 = DomXMLFile::getNumChildren(param_1,acStack_190);
      if (iVar8 != 0) {
        iVar24 = 0;
        do {
          FUN_00708804(acStack_190,0x100,"%s.states.state(%u).animation(%u)",param_2,iVar27,iVar24);
          FUN_00708804(acStack_290,0x100,"%s#id",acStack_190);
          pcVar12 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
          if (pcVar12 == (char *)0x0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar10 != 0)) {
                    /* try { // try from 007081cc to 007081d3 has its CatchHandler @ 007087d8 */
              pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 007081d8 to 007081db has its CatchHandler @ 007087c8 */
              Logger::Logger(pLVar16);
              LogManager::getInstance()::singletonLogManager = pLVar16;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pDVar20 = pDVar1;
            if (((byte)param_1[0x10] & 1) != 0) {
              pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Animal animation error (%s): animation id missing.\n",pDVar20);
          }
          else {
            FUN_00708804(acStack_290,0x100,"%s#startTime",acStack_190);
            Properties::getFloat((Properties *)param_1,acStack_290,0.0);
            FUN_00708804(acStack_290,0x100,"%s#clip",acStack_190);
            lVar13 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
            if (lVar13 == 0) {
              FUN_00708804(acStack_290,0x100,"%s#clipLeft",acStack_190);
              lVar13 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
              FUN_00708804(acStack_290,0x100,"%s#clipRight",acStack_190);
              lVar25 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
              if (lVar13 == 0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar10 != 0)) {
                    /* try { // try from 00708228 to 0070822f has its CatchHandler @ 007087c4 */
                  pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 00708234 to 00708237 has its CatchHandler @ 007087c0 */
                  Logger::Logger(pLVar16);
                  LogManager::getInstance()::singletonLogManager = pLVar16;
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                pDVar20 = pDVar1;
                if (((byte)param_1[0x10] & 1) != 0) {
                  pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
                }
                LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                  "Animal animation error (%s): clip is missing.\n",pDVar20);
                goto LAB_00707cf4;
              }
            }
            else {
              lVar25 = 0;
            }
            FUN_00708804(acStack_290,0x100,"%s#distance",acStack_190);
            uVar28 = Properties::getFloat((Properties *)param_1,acStack_290,0.0);
            FUN_00708804(acStack_290,0x100,"%s#rotation",acStack_190);
            fVar29 = (float)Properties::getFloat((Properties *)param_1,acStack_290,0.0);
            uVar30 = MathUtil::degreeToRadian(fVar29);
            FUN_00708804(acStack_290,0x100,"%s#speed",acStack_190);
            uVar31 = Properties::getFloat((Properties *)param_1,acStack_290,1.0);
            FUN_00708804(acStack_290,0x100,"%s#weight",acStack_190);
            uVar32 = Properties::getFloat((Properties *)param_1,acStack_290,0.0);
            uVar9 = StringUtil::hash(pcVar12);
            uVar3 = *(uint *)(this + 0x308);
            *(undefined4 *)(this + (ulong)uVar3 * 0x70 + 0x310) = uVar9;
            *(uint *)(this + (ulong)uVar3 * 0x70 + 0x348) = uVar17;
            *(undefined8 *)(this + (ulong)uVar3 * 0x70 + 0x34c) = 0xffffffffffffffff;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)(this + (ulong)uVar3 * 0x70 + 0x318));
            if (lVar25 != 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((char *)(this + (ulong)*(uint *)(this + 0x308) * 0x70 + 0x330));
            }
            uVar3 = *(uint *)(this + 0x308);
            *(undefined4 *)(this + (ulong)uVar3 * 0x70 + 0x354) = uVar28;
            *(undefined4 *)(this + (ulong)uVar3 * 0x70 + 0x358) = uVar30;
            *(undefined4 *)(this + (ulong)uVar3 * 0x70 + 0x35c) = uVar31;
            *(undefined4 *)(this + (ulong)uVar3 * 0x70 + 0x360) = uVar32;
            *(uint *)(this + 0x308) = uVar3 + 1;
            iVar10 = DomXMLFile::getNumChildren(param_1,acStack_190);
            if (iVar10 != 0) {
              iVar23 = 0;
              do {
                FUN_00708804(acStack_190,0x100,"%s.states.state(%u).animation(%u).trigger(%u)",
                             param_2,iVar27,iVar24,iVar23);
                FUN_00708804(acStack_290,0x100,"%s#type",acStack_190);
                pcVar12 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
                FUN_00708804(acStack_290,0x100,"%s#name",acStack_190);
                lVar13 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_290,0);
                FUN_00708804(acStack_290,0x100,&DAT_004da8b7,acStack_190);
                uVar9 = Properties::getFloat((Properties *)param_1,acStack_290,0.0);
                if ((pcVar12 == (char *)0x0) || (lVar13 == 0)) {
                  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                     iVar11 != 0)) {
                    /* try { // try from 00708140 to 00708147 has its CatchHandler @ 007087ec */
                    pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 0070814c to 0070814f has its CatchHandler @ 007087dc */
                    Logger::Logger(pLVar16);
                    LogManager::getInstance()::singletonLogManager = pLVar16;
                    __cxa_atexit(LogManager::~LogManager,
                                 &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0)
                    ;
                    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                  }
                  pDVar20 = pDVar1;
                  if (((byte)param_1[0x10] & 1) != 0) {
                    pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
                  }
                  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                    "Animal animation error (%s): trigger type or name is missing.\n"
                                    ,pDVar20);
                }
                else {
                  iVar11 = strcasecmp(pcVar12,"sound");
                  if (iVar11 == 0) {
                    puVar18 = (uint *)(this + (ulong)*(uint *)(this + 0x2918) * 0x28 + 0x2920);
                    *puVar18 = uVar3;
                    puVar18[1] = 0;
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    assign((char *)(puVar18 + 2));
                    uVar4 = *(uint *)(this + 0x2918);
                    *(uint *)(this + 0x2918) = uVar4 + 1;
                    *(undefined4 *)(this + (ulong)uVar4 * 0x28 + 0x2944) = uVar9;
                  }
                }
                iVar23 = iVar23 + 1;
              } while (iVar10 != iVar23);
            }
            sortTriggers();
          }
LAB_00707cf4:
          iVar24 = iVar24 + 1;
        } while (iVar24 != iVar8);
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 != iVar7);
  }
  FUN_00708804(acStack_190,0x100,"%s.transitions#defaultBlendTime",param_2);
  uVar9 = Properties::getFloat((Properties *)param_1,acStack_190,0.0);
  *(undefined4 *)this = uVar9;
  FUN_00708804(acStack_190,0x100,"%s.transitions",param_2);
  iVar7 = DomXMLFile::getNumChildren(param_1,acStack_190);
  if (iVar7 != 0) {
    iVar27 = 0;
    do {
      FUN_00708804(auStack_310,0x80,"animation.transitions.transition(%u)",iVar27);
      FUN_00708804(acStack_390,0x80,"%s#animationIdFrom",auStack_310);
      pcVar12 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_390,0);
      if (pcVar12 == (char *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 007084c0 to 007084c7 has its CatchHandler @ 007087bc */
          pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 007084cc to 007084cf has its CatchHandler @ 007087b8 */
          Logger::Logger(pLVar16);
          LogManager::getInstance()::singletonLogManager = pLVar16;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        DVar5 = param_1[0x10];
        pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
        pcVar12 = "Animal animation error (%s): animationIdFrom is missing .\n";
LAB_00708498:
        pDVar2 = pDVar1;
        if (((byte)DVar5 & 1) != 0) {
          pDVar2 = pDVar20;
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar12,pDVar2);
      }
      else {
        FUN_00708804(acStack_390,0x80,"%s#animationIdTo",auStack_310);
        pcVar15 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_390,0);
        if (pcVar15 == (char *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar8 != 0)) {
                    /* try { // try from 00708514 to 0070851b has its CatchHandler @ 007087b4 */
            pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 00708520 to 00708523 has its CatchHandler @ 007087b0 */
            Logger::Logger(pLVar16);
            LogManager::getInstance()::singletonLogManager = pLVar16;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          DVar5 = param_1[0x10];
          pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
          pcVar12 = "Animal animation error (%s): animationIdTo is missing .\n";
          goto LAB_00708498;
        }
        FUN_00708804(acStack_390,0x80,"%s#clip",auStack_310);
        pcVar14 = (char *)(**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_390,0);
        FUN_00708804(acStack_390,0x80,"%s#sourceTime",auStack_310);
        fVar29 = (float)Properties::getFloat((Properties *)param_1,acStack_390,0.0);
        FUN_00708804(acStack_390,0x80,"%s#targetTime",auStack_310);
        fVar33 = (float)Properties::getFloat((Properties *)param_1,acStack_390,0.0);
        FUN_00708804(acStack_390,0x80,"%s#blendTime",auStack_310);
        fVar34 = (float)Properties::getFloat((Properties *)param_1,acStack_390,*(float *)this);
        addTransition(this,pcVar12,pcVar15,pcVar14,fVar29,fVar33,fVar34);
      }
      iVar27 = iVar27 + 1;
    } while (iVar7 != iVar27);
  }
  if (*(int *)(this + 0x1110) != 0) {
    uVar26 = 0;
    do {
      uVar17 = *(uint *)(this + 0x308);
      uVar19 = (ulong)uVar17;
      if (uVar17 != 0) {
        piVar21 = (int *)(this + 0x310);
        do {
          if (*piVar21 == *(int *)(this + uVar26 * 0x60 + 0x1160)) goto LAB_00708680;
          piVar21 = piVar21 + 0x1c;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00708714 to 0070871b has its CatchHandler @ 007087a8 */
        pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 00708720 to 00708723 has its CatchHandler @ 00708798 */
        Logger::Logger(pLVar16);
        LogManager::getInstance()::singletonLogManager = pLVar16;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pDVar20 = pDVar1;
      if (((byte)param_1[0x10] & 1) != 0) {
        pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
      }
      pAVar22 = *(AnimalAnimationSystemSource **)(this + uVar26 * 0x60 + 0x1128);
      if (((byte)this[uVar26 * 0x60 + 0x1118] & 1) == 0) {
        pAVar22 = this + uVar26 * 0x60 + 0x1119;
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Animal animation error (%s): transition has invalid animation %s.\n",
                        pDVar20,pAVar22);
      uVar17 = *(uint *)(this + 0x308);
LAB_00708680:
      if (uVar17 != 0) {
        uVar19 = (ulong)uVar17;
        piVar21 = (int *)(this + 0x310);
        do {
          if (*piVar21 == *(int *)(this + uVar26 * 0x60 + 0x1164)) goto LAB_007085e0;
          piVar21 = piVar21 + 0x1c;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 007086c4 to 007086cb has its CatchHandler @ 007087ac */
        pLVar16 = (Logger *)operator_new(0x38);
                    /* try { // try from 007086d0 to 007086d3 has its CatchHandler @ 00708794 */
        Logger::Logger(pLVar16);
        LogManager::getInstance()::singletonLogManager = pLVar16;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pDVar20 = pDVar1;
      if (((byte)param_1[0x10] & 1) != 0) {
        pDVar20 = *(DomXMLFile **)(param_1 + 0x20);
      }
      pAVar22 = this + uVar26 * 0x60 + 0x1131;
      if (((byte)this[uVar26 * 0x60 + 0x1130] & 1) != 0) {
        pAVar22 = *(AnimalAnimationSystemSource **)(this + uVar26 * 0x60 + 0x1140);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Animal animation error (%s): transition has invalid animation %s.\n",
                        pDVar20,pAVar22);
LAB_007085e0:
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(uint *)(this + 0x1110));
  }
  if (*(long *)(lVar6 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


