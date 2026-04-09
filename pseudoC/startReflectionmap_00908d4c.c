// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startReflectionmap
// Entry Point: 00908d4c
// Size: 416 bytes
// Signature: undefined __cdecl startReflectionmap(void * param_1, char * param_2, char * * param_3)


/* I3DMaterialPoolFactory::startReflectionmap(void*, char const*, char const**) */

void I3DMaterialPoolFactory::startReflectionmap(void *param_1,char *param_2,char **param_3)

{
  int iVar1;
  char *__s1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  __s1 = (char *)ExpatUtil::getAttr("type",param_3);
  if (__s1 != (char *)0x0) {
    lVar2 = ExpatUtil::getAttr("fileId",param_3);
    lVar4 = *(long *)((long)param_1 + 0x268);
    if ((lVar2 == 0) && (iVar1 = strcmp(__s1,"cube"), iVar1 != 0)) {
      ExpatUtil::getFloatAttr("refractiveIndex",(float *)(lVar4 + 0xa4),param_3);
      ExpatUtil::getFloatAttr("bumpScale",(float *)(lVar4 + 0xa8),param_3);
      uVar3 = ExpatUtil::getUIntAttr("shapesObjectMask",(uint *)(lVar4 + 0x94),param_3);
      if ((uVar3 & 1) == 0) {
        ExpatUtil::getUIntAttr("objectMask",(uint *)(lVar4 + 0x94),param_3);
      }
      ExpatUtil::getUIntAttr("lightsObjectMask",(uint *)(lVar4 + 0x98),param_3);
      ExpatUtil::getFloatAttr("lodDistanceScaling",(float *)(lVar4 + 0x9c),param_3);
      ExpatUtil::getFloatAttr("viewDistanceScaling",(float *)(lVar4 + 0xa0),param_3);
      ExpatUtil::getFloatAttr("scaling",(float *)(lVar4 + 0x90),param_3);
      if (*(float *)(lVar4 + 0x90) <= 0.0) {
        *(float *)(lVar4 + 0x90) = 1.0;
      }
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00908eb4 to 00908ebf has its CatchHandler @ 00908eec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Material %s uses unsupported cube reflection map.\n",
                        *(undefined8 *)(lVar4 + 0x60));
    }
  }
  return;
}


