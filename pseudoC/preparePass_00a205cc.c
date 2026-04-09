// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preparePass
// Entry Point: 00a205cc
// Size: 1108 bytes
// Signature: undefined __thiscall preparePass(RenderQueue * this, vector * param_1, uint param_2, SectionType param_3, PROFILE_SECTION param_4, PROFILE_SECTION param_5, PROFILE_SECTION param_6, RenderStats * param_7, bool param_8)


/* WARNING: Type propagation algorithm not settling */
/* RenderQueue::preparePass(std::__ndk1::vector<RenderList::ShapeViewInfo,
   std::__ndk1::allocator<RenderList::ShapeViewInfo> > const&, unsigned int,
   RenderQueue::SectionType, ProfilerManager::PROFILE_SECTION, ProfilerManager::PROFILE_SECTION,
   GpuProfilerManager::PROFILE_SECTION, RenderStats&, bool) */

void __thiscall
RenderQueue::preparePass
          (RenderQueue *this,vector *param_1,uint param_2,SectionType param_3,
          PROFILE_SECTION param_4,PROFILE_SECTION param_5,PROFILE_SECTION param_6,
          RenderStats *param_7,bool param_8)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  RenderPathManager *this_00;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  basic_string local_340 [4];
  char *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 local_238;
  ulong local_230;
  undefined8 uStack_228;
  void *local_220;
  undefined **local_218;
  undefined local_210;
  byte local_208;
  void *local_1f8;
  undefined auStack_1f0 [384];
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = (RenderPathManager *)RenderPathManager::getInstance();
  RenderPathManager::getRenderPass(this_00,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_340);
                    /* try { // try from 00a20634 to 00a2065f has its CatchHandler @ 00a20a50 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)local_340);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)local_340);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)local_340);
  bVar6 = true;
  if ((param_8) || (this[400] != (RenderQueue)0x0)) goto LAB_00a20834;
  uVar7 = (ulong)*(uint *)(this + 0x194);
  if (*(uint *)(this + 0x194) != 0xffffffff) {
    lVar8 = *(long *)(this + 0x38);
    lVar12 = lVar8 + uVar7 * 0x2c0;
    puVar13 = (ulong *)(lVar12 + 0x18);
    uVar16 = *puVar13;
    puVar9 = (ulong *)(lVar12 + 0x20);
    uVar10 = *puVar9;
    uVar17 = uVar16 | uVar10;
    if (uVar17 == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
      if ((uVar16 == *(ulong *)(this + 0xc0)) && (uVar10 == *(ulong *)(this + 200))) {
        if ((*(int *)(this + 0x110) == 1) && (*(char *)(lVar8 + uVar7 * 0x2c0 + 0xb8) == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = *(int *)(this + 0x114) != 1;
        }
      }
    }
    plVar11 = (long *)(lVar8 + uVar7 * 0x2c0 + 0x38);
    lVar12 = *plVar11;
    if (lVar12 == 0) {
      bVar5 = true;
    }
    else {
      if ((lVar12 != *(long *)(this + 0xe0)) ||
         (*(RenderQueue *)(lVar8 + uVar7 * 0x2c0 + 0xb9) != this[0x161])) goto LAB_00a20830;
      bVar5 = *(int *)(this + 0x120) != 1;
    }
    bVar6 = (bool)(bVar6 & bVar5);
    if (bVar6) {
      if (uVar17 != 0) {
        bVar6 = *(char *)(lVar8 + uVar7 * 0x2c0 + 0xb8) != '\0';
      }
      uVar10 = *(ulong *)(this + 0xc0);
      *puVar13 = uVar10;
      uVar16 = *(ulong *)(this + 200);
      lVar14 = lVar8 + uVar7 * 0x2c0;
      uVar18 = 1;
      if (uVar10 != 0) {
        uVar18 = 2;
      }
      *puVar9 = uVar16;
      uVar1 = (uint)(uVar10 != 0);
      if (uVar16 != 0) {
        uVar1 = uVar18;
      }
      piVar15 = (int *)(lVar14 + 0x68);
      *(uint *)(lVar14 + 0xc4) = uVar1;
      if ((bVar6) || (*piVar15 == 0)) {
        *piVar15 = *(int *)(this + 0x110);
      }
      piVar15 = (int *)(lVar8 + uVar7 * 0x2c0 + 0x6c);
      if ((bool)(bVar6 | *piVar15 == 0)) {
        *piVar15 = *(int *)(this + 0x114);
      }
      if (bVar6) {
        *(RenderQueue *)(lVar8 + uVar7 * 0x2c0 + 0xb8) = this[0x160];
      }
      *plVar11 = *(long *)(this + 0xe0);
      piVar15 = (int *)(lVar8 + uVar7 * 0x2c0 + 0x78);
      if ((lVar12 == 0) || (*piVar15 == 0)) {
        *piVar15 = *(int *)(this + 0x120);
      }
      bVar6 = false;
      *(RenderQueue *)(lVar8 + uVar7 * 0x2c0 + 0xb9) = this[0x161];
      *(undefined *)(*(long *)(this + 0x40) + -0x2ab) = 0;
      goto LAB_00a20834;
    }
  }
LAB_00a20830:
  bVar6 = true;
LAB_00a20834:
  pcVar2 = (char *)((ulong)local_340 | 1);
  if (((byte)local_340[0] & 1) != 0) {
    pcVar2 = local_330;
  }
                    /* try { // try from 00a20850 to 00a2087b has its CatchHandler @ 00a20a4c */
  SubmitSection::SubmitSection
            ((SubmitSection *)&local_328,param_3,param_1,param_2,bVar6,true,
             (RenderTargetData *)(this + 0xc0),param_4,param_5,param_6,pcVar2);
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar3 < *(undefined8 **)(this + 0x48)) {
    puVar3[5] = uStack_300;
    puVar3[4] = local_308;
    puVar3[7] = uStack_2f0;
    puVar3[6] = local_2f8;
    puVar3[1] = uStack_320;
    *puVar3 = local_328;
    puVar3[3] = uStack_310;
    puVar3[2] = local_318;
    puVar3[0xd] = uStack_2c0;
    puVar3[0xc] = local_2c8;
    puVar3[0xf] = uStack_2b0;
    puVar3[0xe] = local_2b8;
    puVar3[9] = uStack_2e0;
    puVar3[8] = local_2e8;
    puVar3[0xb] = uStack_2d0;
    puVar3[10] = local_2d8;
    puVar3[0x15] = uStack_280;
    puVar3[0x14] = local_288;
    puVar3[0x17] = uStack_270;
    puVar3[0x16] = uStack_278;
    puVar3[0x11] = uStack_2a0;
    puVar3[0x10] = local_2a8;
    puVar3[0x13] = uStack_290;
    puVar3[0x12] = uStack_298;
    puVar3[0x1b] = uStack_250;
    puVar3[0x1a] = local_258;
    puVar3[0x1d] = uStack_240;
    puVar3[0x1c] = uStack_248;
    *(undefined4 *)(puVar3 + 0x1e) = local_238;
    puVar3[0x19] = uStack_260;
    puVar3[0x18] = local_268;
    puVar3[0x20] = uStack_228;
    puVar3[0x1f] = local_230;
    puVar3[0x21] = local_220;
    puVar3[0x22] = &PTR__Task_00fde908;
    local_220 = (void *)0x0;
    local_230 = 0;
    uStack_228 = 0;
    *(undefined *)(puVar3 + 0x23) = local_210;
                    /* try { // try from 00a20928 to 00a2092b has its CatchHandler @ 00a20a28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 0x24));
    puVar3[0x22] = &PTR__Task_00fe3150;
    memcpy(puVar3 + 0x27,auStack_1f0,0x180);
    puVar3[0x57] = local_70;
    *(undefined8 **)(this + 0x40) = puVar3 + 0x58;
  }
  else {
                    /* try { // try from 00a20964 to 00a2096b has its CatchHandler @ 00a20a20 */
    std::__ndk1::
    vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>::
    __push_back_slow_path<RenderQueue::SubmitSection>
              ((vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>
                *)(this + 0x38),(SubmitSection *)&local_328);
  }
  local_218 = &PTR__Task_00fde908;
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if ((local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  if (bVar6) {
    *(int *)(this + 0x194) =
         (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 6) * -0x45d1745d + -1;
  }
  this[400] = (RenderQueue)0x0;
  if (((byte)local_340[0] & 1) != 0) {
    operator_delete(local_330);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


