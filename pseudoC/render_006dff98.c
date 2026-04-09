// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006dff98
// Size: 360 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* GpuProfilerStats::render(SharedRenderArgs const&, unsigned int) */

void GpuProfilerStats::render(SharedRenderArgs *param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  ulong uVar5;
  byte local_68 [16];
  char *local_58;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  uVar5 = (ulong)param_2;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GpuProfilerManager::getInstance();
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(uVar5 + 8),false);
  FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(uVar5 + 8),1.0,1.0,1.0,1.0);
  pbVar3 = (basic_string *)GpuProfilerManager::getStoredResultLabels();
  pbVar4 = (basic_string *)GpuProfilerManager::getStoredResultData();
  std::__ndk1::operator+("Engine GPU Profiler\n\nLabels\n",pbVar3);
  pcVar1 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
                    /* try { // try from 006e0030 to 006e005b has its CatchHandler @ 006e0134 */
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar5 + 8),0.03,0.94,0.02,0,pcVar1);
                    /* try { // try from 006e005c to 006e0073 has its CatchHandler @ 006e0130 */
  std::__ndk1::operator+("\n\nCount     Time     Self     %\n",pbVar4);
  pcVar1 = (char *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pcVar1 = local_58;
  }
                    /* try { // try from 006e008c to 006e00b7 has its CatchHandler @ 006e0100 */
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar5 + 8),0.29,0.94,0.02,1,pcVar1);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


