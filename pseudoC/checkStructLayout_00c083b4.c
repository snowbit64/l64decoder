// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkStructLayout
// Entry Point: 00c083b4
// Size: 856 bytes
// Signature: undefined __thiscall checkStructLayout(ShaderConverter * this, ShaderStructLayout * param_1, ShaderStructLayout * param_2)


/* ShaderConverter::checkStructLayout(ShaderStructLayout const&, ShaderStructLayout const&) */

void __thiscall
ShaderConverter::checkStructLayout
          (ShaderConverter *this,ShaderStructLayout *param_1,ShaderStructLayout *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  ShaderStructLayout SVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  Logger *pLVar10;
  char *pcVar11;
  ShaderStructLayout *pSVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (param_1[0x18] == param_2[0x18]) {
    if (param_1[0x19] == param_2[0x19]) {
      lVar14 = *(long *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x28) == lVar14) {
        uVar9 = 1;
      }
      else {
        uVar8 = 1;
        uVar15 = 0;
        do {
          uVar13 = uVar8;
          pbVar1 = (byte *)(lVar14 + uVar15 * 0x20);
          pbVar4 = pbVar1 + 1;
          if ((*pbVar1 & 1) != 0) {
            pbVar4 = *(byte **)(pbVar1 + 0x10);
          }
          uVar8 = ShaderStructLayout::findField(param_2,(char *)pbVar4,&local_6c);
          if ((uVar8 & 1) == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 00c086b4 to 00c086bb has its CatchHandler @ 00c08710 */
              pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c086c0 to 00c086c3 has its CatchHandler @ 00c0870c */
              Logger::Logger(pLVar10);
              pcVar11 = 
              "Error: Constant buffer \'%s\' has to match predefined version, but used field \'%s\' is not expected\n"
              ;
LAB_00c086cc:
              LogManager::getInstance()::singletonLogManager = pLVar10;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            else {
              pcVar11 = 
              "Error: Constant buffer \'%s\' has to match predefined version, but used field \'%s\' is not expected\n"
              ;
            }
LAB_00c08594:
            pSVar12 = *(ShaderStructLayout **)(param_1 + 0x10);
            if (((byte)*param_1 & 1) == 0) {
              pSVar12 = param_1 + 1;
            }
            pbVar4 = pbVar1 + 1;
            if ((*pbVar1 & 1) != 0) {
              pbVar4 = *(byte **)(pbVar1 + 0x10);
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11,
                               pSVar12,pbVar4);
            goto LAB_00c08524;
          }
          lVar2 = *(long *)(param_2 + 0x20) + (ulong)local_6c * 0x20;
          if ((((*(byte *)(lVar2 + 0x1b) != pbVar1[0x1b]) ||
               (lVar3 = lVar14 + uVar15 * 0x20, *(char *)(lVar2 + 0x1a) != *(char *)(lVar3 + 0x1a)))
              || (lVar2 = *(long *)(param_2 + 0x20) + (ulong)local_6c * 0x20,
                 *(char *)(lVar2 + 0x1e) != *(char *)(lVar3 + 0x1e))) ||
             (*(short *)(lVar2 + 0x1c) != *(short *)(lVar14 + uVar15 * 0x20 + 0x1c))) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 00c0867c to 00c08683 has its CatchHandler @ 00c08720 */
              pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c08688 to 00c0868b has its CatchHandler @ 00c08714 */
              Logger::Logger(pLVar10);
              pcVar11 = 
              "Error: Constant buffer \'%s\' has to match predefined version, but type of field \'%s\' is incorrect\n"
              ;
              goto LAB_00c086cc;
            }
            pcVar11 = 
            "Error: Constant buffer \'%s\' has to match predefined version, but type of field \'%s\' is incorrect\n"
            ;
            goto LAB_00c08594;
          }
          lVar14 = *(long *)(param_1 + 0x20);
          uVar9 = 1;
          uVar8 = (ulong)((int)uVar13 + 1);
          uVar15 = uVar13;
        } while (uVar13 < (ulong)(*(long *)(param_1 + 0x28) - lVar14 >> 5));
      }
      goto LAB_00c08528;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00c08628 to 00c0862f has its CatchHandler @ 00c08728 */
      pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c08634 to 00c08637 has its CatchHandler @ 00c08724 */
      Logger::Logger(pLVar10);
      LogManager::getInstance()::singletonLogManager = pLVar10;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    SVar5 = *param_1;
    pSVar12 = *(ShaderStructLayout **)(param_1 + 0x10);
    pcVar11 = 
    "Error: Constant buffer \'%s\' has to match predefined version, but struct types are not the same\n"
    ;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00c085d8 to 00c085df has its CatchHandler @ 00c0873c */
      pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c085e4 to 00c085e7 has its CatchHandler @ 00c0872c */
      Logger::Logger(pLVar10);
      LogManager::getInstance()::singletonLogManager = pLVar10;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    SVar5 = *param_1;
    pSVar12 = *(ShaderStructLayout **)(param_1 + 0x10);
    pcVar11 = 
    "Error: Constant buffer \'%s\' has to match predefined version, but layout styles are not the same\n"
    ;
  }
  if (((byte)SVar5 & 1) == 0) {
    pSVar12 = param_1 + 1;
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar11,pSVar12);
LAB_00c08524:
  uVar9 = 0;
LAB_00c08528:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


