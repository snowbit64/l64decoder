// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reload
// Entry Point: 00704f98
// Size: 864 bytes
// Signature: undefined reload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::reload() */

void AnimalAnimationSystem::reload(void)

{
  AnimalAnimationSystemSource *pAVar1;
  byte *pbVar2;
  char *pcVar3;
  long lVar4;
  AnimalAnimationSystemSource AVar5;
  undefined4 uVar6;
  int iVar7;
  long *in_x0;
  AnimalAnimationSystemSource *pAVar8;
  Logger *pLVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
  if (pAVar8 != (AnimalAnimationSystemSource *)0x0) {
    lVar14 = *in_x0;
    if (in_x0[1] != lVar14) {
      uVar12 = 0;
      do {
        lVar13 = uVar12 * 0x28;
        lVar14 = lVar14 + lVar13;
        pcVar3 = (char *)(lVar14 + 9);
        if ((*(byte *)(lVar14 + 8) & 1) != 0) {
          pcVar3 = *(char **)(lVar14 + 0x18);
        }
        uVar6 = AnimalAnimationSystemSource::findStateId(pAVar8,pcVar3);
        lVar14 = *in_x0;
        lVar4 = in_x0[1];
        uVar12 = (ulong)((int)uVar12 + 1);
        pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
        *(undefined4 *)(lVar14 + lVar13 + 4) = uVar6;
        uVar10 = (lVar4 - lVar14 >> 3) * -0x3333333333333333;
      } while (uVar12 <= uVar10 && uVar10 - uVar12 != 0);
    }
    if (*(int *)(pAVar8 + 0x308) != 0) {
      uVar12 = 0;
      lVar14 = 0x318;
      do {
        pAVar1 = pAVar8 + lVar14;
        AVar5 = *pAVar1;
        uVar10 = (ulong)((byte)AVar5 >> 1);
        if (((byte)AVar5 & 1) != 0) {
          uVar10 = *(ulong *)(pAVar1 + 8);
        }
        if (uVar10 != 0) {
          pAVar8 = *(AnimalAnimationSystemSource **)(pAVar1 + 0x10);
          if (((byte)AVar5 & 1) == 0) {
            pAVar8 = pAVar1 + 1;
          }
          iVar7 = CharacterSet::getNamedClipIndex((CharacterSet *)in_x0[0x53],(char *)pAVar8);
          if (iVar7 < 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 0070517c to 00705183 has its CatchHandler @ 00705318 */
              pLVar9 = (Logger *)operator_new(0x38);
                    /* try { // try from 00705188 to 0070518b has its CatchHandler @ 00705308 */
              Logger::Logger(pLVar9);
              LogManager::getInstance()::singletonLogManager = pLVar9;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pbVar2 = (byte *)(in_x0[0x51] + lVar14);
            pbVar11 = *(byte **)(pbVar2 + 0x10);
            if ((*pbVar2 & 1) == 0) {
              pbVar11 = pbVar2 + 1;
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Animation clip \"%s\" has not been found.\n",pbVar11);
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
          }
          else {
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
            *(int *)(pAVar8 + lVar14 + 0x34) = iVar7;
          }
        }
        AVar5 = pAVar8[lVar14 + 0x18];
        uVar10 = (ulong)((byte)AVar5 >> 1);
        if (((byte)AVar5 & 1) != 0) {
          uVar10 = *(ulong *)(pAVar8 + lVar14 + 0x20);
        }
        if (uVar10 != 0) {
          pAVar1 = pAVar8 + lVar14 + 0x19;
          if (((byte)AVar5 & 1) != 0) {
            pAVar1 = *(AnimalAnimationSystemSource **)(pAVar8 + lVar14 + 0x28);
          }
          iVar7 = CharacterSet::getNamedClipIndex((CharacterSet *)in_x0[0x53],(char *)pAVar1);
          if (iVar7 < 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 007051b8 to 007051bf has its CatchHandler @ 00705304 */
              pLVar9 = (Logger *)operator_new(0x38);
                    /* try { // try from 007051c4 to 007051c7 has its CatchHandler @ 00705300 */
              Logger::Logger(pLVar9);
              LogManager::getInstance()::singletonLogManager = pLVar9;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            lVar13 = in_x0[0x51] + lVar14;
            lVar4 = lVar13 + 0x19;
            if ((*(byte *)(lVar13 + 0x18) & 1) != 0) {
              lVar4 = *(long *)(lVar13 + 0x28);
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Animation clip \"%s\" has not been found.\n",lVar4);
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
          }
          else {
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
            *(int *)(pAVar8 + lVar14 + 0x38) = iVar7;
          }
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x70;
      } while (uVar12 < *(uint *)(pAVar8 + 0x308));
    }
    if (*(int *)(pAVar8 + 0x1110) != 0) {
      uVar12 = 0;
      lVar14 = 0x1148;
      do {
        pAVar1 = pAVar8 + lVar14;
        AVar5 = *pAVar1;
        uVar10 = (ulong)((byte)AVar5 >> 1);
        if (((byte)AVar5 & 1) != 0) {
          uVar10 = *(ulong *)(pAVar1 + 8);
        }
        if (uVar10 != 0) {
          pAVar8 = *(AnimalAnimationSystemSource **)(pAVar1 + 0x10);
          if (((byte)AVar5 & 1) == 0) {
            pAVar8 = pAVar1 + 1;
          }
          iVar7 = CharacterSet::getNamedClipIndex((CharacterSet *)in_x0[0x53],(char *)pAVar8);
          if (iVar7 < 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 007052ac to 007052b3 has its CatchHandler @ 007052fc */
              pLVar9 = (Logger *)operator_new(0x38);
                    /* try { // try from 007052b8 to 007052bb has its CatchHandler @ 007052f8 */
              Logger::Logger(pLVar9);
              LogManager::getInstance()::singletonLogManager = pLVar9;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pbVar2 = (byte *)(in_x0[0x51] + lVar14);
            pbVar11 = *(byte **)(pbVar2 + 0x10);
            if ((*pbVar2 & 1) == 0) {
              pbVar11 = pbVar2 + 1;
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Animation clip \"%s\" has not been found.\n",pbVar11);
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
          }
          else {
            pAVar8 = (AnimalAnimationSystemSource *)in_x0[0x51];
            *(int *)(pAVar8 + lVar14 + 0x20) = iVar7;
          }
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x60;
      } while (uVar12 < *(uint *)(pAVar8 + 0x1110));
    }
  }
  return;
}


