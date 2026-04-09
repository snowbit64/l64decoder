// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillShaderStructLayout
// Entry Point: 00c525c4
// Size: 1032 bytes
// Signature: undefined __thiscall fillShaderStructLayout(IR_Struct * this, ShaderStructLayout * param_1, vector * param_2)


/* IR_Struct::fillShaderStructLayout(ShaderStructLayout&, std::__ndk1::vector<ShaderStructLayout,
   std::__ndk1::allocator<ShaderStructLayout> > const&) */

undefined8 __thiscall
IR_Struct::fillShaderStructLayout(IR_Struct *this,ShaderStructLayout *param_1,vector *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  Logger *pLVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  BasicType BVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  byte *__s1;
  ulong uVar17;
  byte *pbVar18;
  char **ppcVar19;
  ulong uVar20;
  uint *puVar21;
  
  lVar14 = *(long *)(this + 0x30);
  if (*(long *)(this + 0x38) != lVar14) {
    uVar20 = 0;
    do {
      ppcVar19 = (char **)(lVar14 + uVar20 * 0x38);
      puVar21 = (uint *)ppcVar19[2];
      uVar15 = *puVar21;
      if (uVar15 == 4) {
        uVar13 = puVar21[4];
        puVar21 = *(uint **)(puVar21 + 2);
LAB_00c526a0:
        uVar2 = puVar21[2];
        if (param_1[0x19] == (ShaderStructLayout)0x2) {
          pcVar7 = "struct field";
          if (6 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x68U) == 0) {
LAB_00c52884:
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar5 != 0)) {
                    /* try { // try from 00c5293c to 00c52943 has its CatchHandler @ 00c529d8 */
              pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c52948 to 00c5294b has its CatchHandler @ 00c529d4 */
              Logger::Logger(pLVar6);
              LogManager::getInstance()::singletonLogManager = pLVar6;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pcVar10 = *ppcVar19;
            pcVar8 = "Unsupported basic type for %s \'%s\'\n";
            goto LAB_00c528d0;
          }
          uVar11 = *puVar21;
        }
        else {
          if (uVar2 != 3) {
            pcVar7 = "constant";
            goto LAB_00c52884;
          }
          uVar11 = *puVar21;
          pcVar7 = "constant";
        }
        uVar9 = uVar11;
        if (uVar11 != 0) {
          if (uVar11 == 2) {
            uVar11 = puVar21[4];
            uVar9 = puVar21[5];
          }
          else {
            if (uVar11 != 1) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar5 != 0)) {
                    /* try { // try from 00c5298c to 00c52993 has its CatchHandler @ 00c529d0 */
                pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c52998 to 00c5299b has its CatchHandler @ 00c529cc */
                Logger::Logger(pLVar6);
                LogManager::getInstance()::singletonLogManager = pLVar6;
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              pcVar10 = *ppcVar19;
              pcVar8 = "Illegal type for %s \'%s\'\n";
LAB_00c528d0:
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar8,
                                 pcVar7,pcVar10);
              return 0;
            }
            uVar11 = puVar21[5];
            uVar9 = 0;
          }
        }
        bVar4 = uVar15 == 4;
        pcVar7 = *ppcVar19;
        BVar12 = 2;
        if (uVar2 != 3) {
          BVar12 = (BasicType)(uVar2 != 5);
        }
      }
      else {
        if (uVar15 != 3) {
          uVar13 = 0;
          goto LAB_00c526a0;
        }
        lVar14 = *(long *)param_2;
        lVar1 = *(long *)(param_2 + 8);
        if (lVar1 - lVar14 == 0) {
LAB_00c52820:
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00c528ec to 00c528f3 has its CatchHandler @ 00c529ec */
            pLVar6 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c528f8 to 00c528fb has its CatchHandler @ 00c529dc */
            Logger::Logger(pLVar6);
            LogManager::getInstance()::singletonLogManager = pLVar6;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar16 = *(byte **)(puVar21 + 2);
          pbVar18 = *(byte **)(pbVar16 + 0x10);
          if ((*pbVar16 & 1) == 0) {
            pbVar18 = pbVar16 + 1;
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Can\'t find definition for substructure \'%s\'\n",pbVar18);
          return 0;
        }
        pbVar16 = *(byte **)(puVar21 + 2);
        uVar17 = 0;
        pbVar18 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar18 = pbVar16 + 1;
        }
        while( true ) {
          pbVar16 = (byte *)(lVar14 + uVar17 * 0x40);
          __s1 = *(byte **)(pbVar16 + 0x10);
          if ((*pbVar16 & 1) == 0) {
            __s1 = pbVar16 + 1;
          }
          iVar5 = strcmp((char *)__s1,(char *)pbVar18);
          if (iVar5 == 0) break;
          uVar17 = (ulong)((int)uVar17 + 1);
          if ((ulong)(lVar1 - lVar14 >> 6) <= uVar17) goto LAB_00c52820;
        }
        lVar1 = *(long *)(pbVar16 + 0x28);
        if (lVar1 == *(long *)(pbVar16 + 0x20)) {
          uVar13 = 0;
        }
        else {
          bVar3 = *(byte *)(lVar1 + -6);
          if (*(char *)(lVar14 + uVar17 * 0x40 + 0x18) == '\0') {
            if (bVar3 == 0) goto LAB_00c527bc;
            uVar15 = (uint)bVar3 << 2;
          }
          else if (bVar3 == 0) {
LAB_00c527bc:
            uVar15 = (uint)*(byte *)(lVar1 + -5);
            if (uVar15 == 0) {
              uVar15 = 1;
            }
          }
          else {
            uVar15 = (uint)*(byte *)(lVar1 + -5) * (uint)bVar3;
          }
          uVar13 = ((uint)*(ushort *)(lVar1 + -8) + uVar15 * *(ushort *)(lVar1 + -4)) * 4 + 0xc &
                   0xfffffff0;
        }
        pcVar7 = *ppcVar19;
        uVar13 = uVar13 >> 4;
        BVar12 = 2;
        uVar9 = 0;
        uVar11 = 4;
        bVar4 = true;
      }
      ShaderStructLayout::addField(param_1,pcVar7,BVar12,uVar9,uVar11,bVar4,uVar13);
      lVar14 = *(long *)(this + 0x30);
      uVar20 = (ulong)((int)uVar20 + 1);
      uVar17 = (*(long *)(this + 0x38) - lVar14 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar20 <= uVar17 && uVar17 - uVar20 != 0);
  }
  ShaderStructLayout::endDefinition();
  return 1;
}


