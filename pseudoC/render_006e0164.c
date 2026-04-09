// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006e0164
// Size: 588 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* LuaProfilerStats::render(SharedRenderArgs const&, unsigned int) */

void LuaProfilerStats::render(SharedRenderArgs *param_1,uint param_2)

{
  char *pcVar1;
  SharedRenderArgs SVar2;
  long lVar3;
  LuauScriptSystem *this;
  ulong uVar4;
  ProfilerManager *this_00;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  ulong local_188;
  undefined8 uStack_180;
  char *local_178;
  ulong local_170;
  undefined8 uStack_168;
  char *local_160;
  char acStack_158 [256];
  long local_58;
  
  uVar7 = (ulong)param_2;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(uVar7 + 8),false);
  FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(uVar7 + 8),1.0,1.0,1.0,1.0);
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  uVar4 = LuauScriptSystem::getUsedMemory();
  uVar8 = uVar4 >> 10 & 0x3fffff;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) < (uint)uVar8) {
    *(uint *)(param_1 + 0xc) = (uint)uVar8;
    uVar4 = uVar8;
  }
  FUN_006dcb40(acStack_158,0x100,"Script Stats\n\nVM Memory Used %d KB Max %d KB",uVar8,uVar4);
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar7 + 8),0.03,0.94,0.02,0,acStack_158);
  local_170 = 0;
  uStack_168 = 0;
  local_160 = (char *)0x0;
                    /* try { // try from 006e023c to 006e024b has its CatchHandler @ 006e03c0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_170);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (char *)0x0;
                    /* try { // try from 006e0254 to 006e0263 has its CatchHandler @ 006e03bc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_188);
                    /* try { // try from 006e0264 to 006e0267 has its CatchHandler @ 006e03b8 */
  this_00 = (ProfilerManager *)ProfilerManager::getInstance();
                    /* try { // try from 006e026c to 006e0273 has its CatchHandler @ 006e03b4 */
  lVar5 = ProfilerManager::getSection(this_00,0x2a);
                    /* try { // try from 006e0278 to 006e0283 has its CatchHandler @ 006e03b0 */
  lVar6 = ProfilerManager::getSection(this_00,0x2c);
                    /* try { // try from 006e028c to 006e035b has its CatchHandler @ 006e03d0 */
  dVar9 = (double)Watch::convertTicksToMs(*(ulonglong *)(lVar5 + 0x10));
  dVar10 = (double)Watch::convertTicksToMs(*(ulonglong *)(lVar6 + 0x10));
  SVar2 = param_1[9];
  param_1[9] = (SharedRenderArgs)0x0;
  LuauScriptSystem::getProfilerStringData
            (this,(basic_string *)&local_170,(basic_string *)&local_188,
             (int)((dVar9 + dVar10) * 1000.0),(bool)SVar2);
  pcVar1 = (char *)((ulong)&local_170 | 1);
  if ((local_170 & 1) != 0) {
    pcVar1 = local_160;
  }
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar7 + 8),0.03,0.86,0.02,0,pcVar1);
  pcVar1 = (char *)((ulong)&local_188 | 1);
  if ((local_188 & 1) != 0) {
    pcVar1 = local_178;
  }
  FontOverlayRenderer::xyprintf(*(FontOverlayRenderer **)(uVar7 + 8),0.29,0.86,0.02,1,pcVar1);
  if ((local_188 & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


