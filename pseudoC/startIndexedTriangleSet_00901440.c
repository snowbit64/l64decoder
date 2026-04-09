// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startIndexedTriangleSet
// Entry Point: 00901440
// Size: 632 bytes
// Signature: undefined __cdecl startIndexedTriangleSet(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startIndexedTriangleSet(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startIndexedTriangleSet(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  IndexedTriangleSet *this;
  char *pcVar6;
  bool *pbVar7;
  long lVar8;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)((long)param_1 + 0x278);
  if (*(char *)(lVar8 + 0x80) == '\0') {
    *(undefined *)(lVar8 + 0x80) = 1;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0090167c to 00901687 has its CatchHandler @ 009016b8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar8 = (long)param_1 + 0x211;
    if ((*(byte *)((long)param_1 + 0x210) & 1) != 0) {
      lVar8 = *(long *)((long)param_1 + 0x220);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: i3d contains non-binary indexed triangle sets: %s\n",lVar8);
    lVar8 = *(long *)((long)param_1 + 0x278);
  }
  *(undefined8 *)(lVar8 + 8) = 0;
  if (*(long *)(lVar8 + 0x30) != *(long *)(lVar8 + 0x28)) {
    *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x28);
  }
  if (*(long *)(lVar8 + 0x18) != *(long *)(lVar8 + 0x10)) {
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x10);
  }
  lVar8 = ExpatUtil::getAttr("name",param_3);
  pcVar5 = (char *)ExpatUtil::getAttr("shapeId",param_3);
  if ((lVar8 != 0) && (pcVar5 != (char *)0x0)) {
    this = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 0090151c to 0090151f has its CatchHandler @ 009016d0 */
    IndexedTriangleSet::IndexedTriangleSet(this);
    lVar8 = *(long *)((long)param_1 + 0x278);
    *(IndexedTriangleSet **)(lVar8 + 8) = this;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar8 + 0x50));
    StringUtil::strtouint(pcVar5,(uint *)(*(long *)((long)param_1 + 0x278) + 0x7c));
    local_4c = 0;
    ExpatUtil::getUIntAttr("meshUsage",&local_4c,param_3);
    lVar8 = *(long *)(*(long *)((long)param_1 + 0x278) + 8);
    *(uint *)(lVar8 + 0x8c) = *(uint *)(lVar8 + 0x8c) | local_4c;
  }
  pcVar5 = (char *)ExpatUtil::getAttr("bvCenter",param_3);
  pcVar6 = (char *)ExpatUtil::getAttr("bvRadius",param_3);
  cVar2 = I3DLoad::s_optimizeScene;
  lVar8 = *(long *)((long)param_1 + 0x278);
  if (((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) || (I3DLoad::s_optimizeScene != '\0')) {
    *(undefined4 *)(lVar8 + 0x74) = 0;
    pbVar7 = (bool *)(lVar8 + 0x78);
    *pbVar7 = false;
  }
  else {
    lVar8 = StringUtil::atof(pcVar5,(float *)(lVar8 + 0x68));
    lVar8 = StringUtil::atof((char *)(lVar8 + 1),(float *)(*(long *)((long)param_1 + 0x278) + 0x6c))
    ;
    StringUtil::atof((char *)(lVar8 + 1),(float *)(*(long *)((long)param_1 + 0x278) + 0x70));
    StringUtil::atof(pcVar6,(float *)(*(long *)((long)param_1 + 0x278) + 0x74));
    cVar2 = I3DLoad::s_optimizeScene;
    pbVar7 = (bool *)(*(long *)((long)param_1 + 0x278) + 0x78);
    *pbVar7 = false;
  }
  if (cVar2 == '\0') {
    ExpatUtil::getBoolAttr("isOptimized",pbVar7,param_3);
  }
  bVar3 = ExpatUtil::getBoolAttrRet("isAttachment",false,param_3);
  *(byte *)(*(long *)((long)param_1 + 0x278) + 0x79) = bVar3 & 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


