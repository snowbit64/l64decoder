// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalReloadResource
// Entry Point: 00b2b68c
// Size: 304 bytes
// Signature: undefined __thiscall internalReloadResource(ResourceManager * this, Resource * param_1, uint param_2, ResourceDesc * param_3, STREAM_QUEUE param_4, bool param_5)


/* ResourceManager::internalReloadResource(Resource*, unsigned int, ResourceDesc const*,
   StreamManager::STREAM_QUEUE, bool) */

Resource * __thiscall
ResourceManager::internalReloadResource
          (ResourceManager *this,Resource *param_1,uint param_2,ResourceDesc *param_3,
          STREAM_QUEUE param_4,bool param_5)

{
  Resource *pRVar1;
  int iVar2;
  ulong uVar3;
  StreamManager *pSVar4;
  
  if (param_4 == 1) {
    uVar3 = Resource::isLoaded();
    if ((((uVar3 & 1) != 0) || (*(int *)(param_1 + 0x18) != 0)) ||
       (uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1), (uVar3 & 1) != 0)) {
      if (*(int *)(param_1 + 0x1c) == 2) {
        pSVar4 = (StreamManager *)StreamManager::getInstance();
        StreamManager::removeStreamable(pSVar4,(Streamable *)(param_1 + 0x10),2);
      }
      pSVar4 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable(pSVar4,(Streamable *)(param_1 + 0x10),1);
      if (*(int *)(param_1 + 0x18) == 3) goto LAB_00b2b710;
    }
    if (param_5) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00b2b784 to 00b2b78f has its CatchHandler @ 00b2b7bc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pRVar1 = param_1 + 0x31;
      if (((byte)param_1[0x30] & 1) != 0) {
        pRVar1 = *(Resource **)(param_1 + 0x40);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Can\'t load resource \'%s\'.\n",pRVar1);
    }
    param_1 = (Resource *)0x0;
  }
  else {
LAB_00b2b710:
    FUN_00f276d0(1,param_1 + 8);
  }
  return param_1;
}


