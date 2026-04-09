// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadExpat
// Entry Point: 008feec0
// Size: 680 bytes
// Signature: undefined __thiscall loadExpat(I3DLoad * this, File * param_1)


/* I3DLoad::loadExpat(File*) */

bool __thiscall I3DLoad::loadExpat(I3DLoad *this,File *param_1)

{
  I3DLoad *pIVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  Logger *pLVar8;
  
  lVar5 = XML_ParserCreate(0);
  if (lVar5 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008ff088 to 008ff08f has its CatchHandler @ 008ff194 */
      pLVar8 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ff094 to 008ff097 has its CatchHandler @ 008ff184 */
      Logger::Logger(pLVar8);
      LogManager::getInstance()::singletonLogManager = pLVar8;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not allocate memory for i3d xml parser.\n");
    bVar2 = false;
  }
  else {
    XML_SetElementHandler(lVar5,startElement,endElement);
    XML_SetUserData(lVar5,this);
    while (iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,s_readBuffer,0x80000), -1 < iVar3)
    {
      uVar4 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
      iVar3 = XML_Parse(lVar5,s_readBuffer,iVar3,uVar4 & 1);
      if (iVar3 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 008ff128 to 008ff12f has its CatchHandler @ 008ff16c */
          pLVar8 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ff134 to 008ff137 has its CatchHandler @ 008ff168 */
          Logger::Logger(pLVar8);
          LogManager::getInstance()::singletonLogManager = pLVar8;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pIVar1 = this + 0x211;
        if (((byte)this[0x210] & 1) != 0) {
          pIVar1 = *(I3DLoad **)(this + 0x220);
        }
        uVar6 = XML_GetCurrentLineNumber(lVar5);
        XML_GetErrorCode(lVar5);
        uVar7 = XML_ErrorString();
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Parse error in \'%s\' at line %d. %s.\n",pIVar1,
                           uVar6 & 0xffffffff,uVar7);
        goto LAB_008ff03c;
      }
      if ((((uVar4 & 1) != 0) || (this[0x10] != (I3DLoad)0x0)) || (this[0x11] != (I3DLoad)0x0))
      goto LAB_008ff044;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008ff0d8 to 008ff0df has its CatchHandler @ 008ff180 */
      pLVar8 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ff0e4 to 008ff0e7 has its CatchHandler @ 008ff170 */
      Logger::Logger(pLVar8);
      LogManager::getInstance()::singletonLogManager = pLVar8;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pIVar1 = this + 0x211;
    if (((byte)this[0x210] & 1) != 0) {
      pIVar1 = *(I3DLoad **)(this + 0x220);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to read \'%s\'.\n",pIVar1);
LAB_008ff03c:
    this[0x10] = (I3DLoad)0x1;
LAB_008ff044:
    XML_ParserFree(lVar5);
    bVar2 = ((byte)this[0x10] | (byte)this[0x11]) == 0;
  }
  return bVar2;
}


