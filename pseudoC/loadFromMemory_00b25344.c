// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromMemory
// Entry Point: 00b25344
// Size: 572 bytes
// Signature: undefined __thiscall loadFromMemory(DomXMLFile * this, char * param_1, uint param_2, char * param_3, bool param_4, bool param_5)


/* DomXMLFile::loadFromMemory(char const*, unsigned int, char const*, bool, bool) */

bool __thiscall
DomXMLFile::loadFromMemory
          (DomXMLFile *this,char *param_1,uint param_2,char *param_3,bool param_4,bool param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  XMLDocument *this_00;
  long *plVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  
  uVar2 = *(uint *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = 0;
  if (8 < uVar2) {
    *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x80))();
  }
  this_00 = (XMLDocument *)operator_new(0x308);
                    /* try { // try from 00b253b4 to 00b253bb has its CatchHandler @ 00b2559c */
  tinyxml2::XMLDocument::XMLDocument(this_00,true,~(uint)param_5 & 1);
  *(XMLDocument **)(this + 0x28) = this_00;
  this[0x30] = (DomXMLFile)0x0;
  if (1 < param_2) {
    pcVar6 = param_1 + 1;
    lVar7 = (ulong)param_2 - 1;
    do {
      if ((pcVar6[-1] == '\r') && (*pcVar6 == '\n')) {
        this[0x30] = (DomXMLFile)0x1;
        break;
      }
      pcVar6 = pcVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  tinyxml2::XMLDocument::Parse(this_00,param_1,(ulong)param_2);
  iVar3 = *(int *)(*(long *)(this + 0x28) + 0x6c);
  this[8] = (DomXMLFile)(iVar3 == 0);
  if (iVar3 == 0) {
    return true;
  }
  if (param_4) {
    if (iVar3 != 0xd) {
      puVar5 = (undefined *)tinyxml2::XMLDocument::ErrorStr();
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00b25548 to 00b25553 has its CatchHandler @ 00b25580 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar1 = &DAT_0050a39f;
      if (puVar5 != (undefined *)0x0) {
        puVar1 = puVar5;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: %s. %s.\n",
                         param_3,puVar1);
      plVar4 = *(long **)(this + 0x28);
      goto joined_r0x00b25464;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b25500 to 00b2550b has its CatchHandler @ 00b25584 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: %s. XML_ERROR_EMPTY_DOCUMENT.\n",param_3);
  }
  plVar4 = *(long **)(this + 0x28);
joined_r0x00b25464:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x80))();
  }
  *(undefined8 *)(this + 0x28) = 0;
  return this[8] != (DomXMLFile)0x0;
}


