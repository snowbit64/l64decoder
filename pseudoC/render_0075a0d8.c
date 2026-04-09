// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 0075a0d8
// Size: 1092 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* WARNING: Type propagation algorithm not settling */
/* ProfilerStats::render(SharedRenderArgs const&, unsigned int) */

void ProfilerStats::render(SharedRenderArgs *param_1,uint param_2)

{
  SharedRenderArgs SVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *__s;
  char *pcVar11;
  basic_string local_a8 [4];
  char *local_98;
  basic_string local_90 [4];
  char *local_80;
  long local_78;
  
  uVar10 = (ulong)param_2;
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  ProfilerManager::getInstance();
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(uVar10 + 8),false);
  FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(uVar10 + 8),1.0,1.0,1.0,1.0);
  pbVar4 = (basic_string *)ProfilerManager::getStoredResultLabels();
  pbVar5 = (basic_string *)ProfilerManager::getStoredResultData();
  FontOverlayRenderer::setLineHeightScale(*(FontOverlayRenderer **)(uVar10 + 8),1.045);
  std::__ndk1::operator+("Engine Profiler\n\nLabels\n",pbVar4);
  __s = (char *)((ulong)local_90 | 1);
  pcVar11 = __s;
  if (((byte)local_90[0] & 1) != 0) {
    pcVar11 = local_80;
  }
                    /* try { // try from 0075a1a8 to 0075a1d3 has its CatchHandler @ 0075a538 */
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar10 + 8),0.03,0.94,0.019,0,pcVar11);
                    /* try { // try from 0075a1d4 to 0075a1eb has its CatchHandler @ 0075a534 */
  std::__ndk1::operator+("\n\nCount     Time     Self     %\n",pbVar5);
  pcVar11 = (char *)((ulong)local_a8 | 1);
  pcVar6 = pcVar11;
  if (((byte)local_a8[0] & 1) != 0) {
    pcVar6 = local_98;
  }
                    /* try { // try from 0075a204 to 0075a22f has its CatchHandler @ 0075a54c */
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar10 + 8),0.29,0.94,0.019,1,pcVar6);
  SVar1 = param_1[9];
  param_1[9] = (SharedRenderArgs)0x0;
  if (SVar1 != (SharedRenderArgs)0x0) {
    while( true ) {
      pcVar6 = __s;
      if (((byte)local_90[0] & 1) != 0) {
        pcVar6 = local_80;
      }
      pcVar6 = strstr(pcVar6,"   ");
      if (pcVar6 == (char *)0x0) break;
                    /* try { // try from 0075a268 to 0075a277 has its CatchHandler @ 0075a558 */
      StringUtil::replace(local_90,"   ","  ");
    }
    while( true ) {
      pcVar6 = pcVar11;
      if (((byte)local_a8[0] & 1) != 0) {
        pcVar6 = local_98;
      }
      pcVar6 = strstr(pcVar6,"   ");
      if (pcVar6 == (char *)0x0) break;
                    /* try { // try from 0075a2a8 to 0075a2b7 has its CatchHandler @ 0075a554 */
      StringUtil::replace(local_a8,"   ","  ");
    }
                    /* try { // try from 0075a2bc to 0075a333 has its CatchHandler @ 0075a54c */
    StringUtil::replace(local_90,"\n  ","\n");
    StringUtil::replace(local_a8,"\n  ","\n");
    StringUtil::replace(local_a8,"  ",";");
    StringUtil::replace(local_90,"  ",";");
    StringUtil::replace(local_a8,"  ",";");
    if (((byte)local_90[0] & 1) != 0) {
      __s = local_80;
    }
    pcVar6 = strchr(__s,10);
    if (((byte)local_a8[0] & 1) != 0) {
      pcVar11 = local_98;
    }
    pcVar7 = strchr(pcVar11,10);
    while ((pcVar6 != (char *)0x0 && (pcVar7 != (char *)0x0))) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 0075a400 to 0075a407 has its CatchHandler @ 0075a520 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 0075a3ac to 0075a3bf has its CatchHandler @ 0075a550 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%.*s;%.*s\n",
                        (ulong)(uint)((int)pcVar6 - (int)__s),__s,
                        (ulong)(uint)((int)pcVar7 - (int)pcVar11),pcVar11);
      __s = pcVar6 + 1;
      pcVar11 = pcVar7 + 1;
      pcVar6 = strchr(__s,10);
      pcVar7 = strchr(pcVar11,10);
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0075a4e0 to 0075a4eb has its CatchHandler @ 0075a51c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 0075a430 to 0075a46f has its CatchHandler @ 0075a548 */
    uVar8 = __strlen_chk(__s,0xffffffffffffffff);
    uVar9 = __strlen_chk(pcVar11,0xffffffffffffffff);
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%.*s;%.*s\n",
                      uVar8 & 0xffffffff,__s,uVar9,pcVar11);
  }
                    /* try { // try from 0075a474 to 0075a47b has its CatchHandler @ 0075a54c */
  FontOverlayRenderer::setLineHeightScale(*(FontOverlayRenderer **)(uVar10 + 8),1.1);
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


