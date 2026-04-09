// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00a1fbe4
// Size: 2252 bytes
// Signature: undefined __cdecl prepareRender(RenderTargetInfo * param_1, uint param_2, uint param_3, RenderStats * param_4, bool param_5)


/* RenderQueue::prepareRender(RenderTargetInfo const&, unsigned int, unsigned int, RenderStats&,
   bool) */

void RenderQueue::prepareRender
               (RenderTargetInfo *param_1,uint param_2,uint param_3,RenderStats *param_4,
               bool param_5)

{
  uint uVar1;
  vector *pvVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte in_w5;
  RenderStats *in_x7;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 local_250;
  ulong local_248;
  undefined8 uStack_240;
  void *local_238;
  undefined **local_230;
  undefined local_228;
  ulong local_220;
  undefined8 local_218;
  void *local_210;
  undefined auStack_208 [240];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_88;
  long local_80;
  
  pbVar10 = (byte *)(ulong)param_2;
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  *(int *)((ulong)param_5 + 0x20) = *(int *)((ulong)param_5 + 0x20) + 1;
  if (*(int *)(pbVar10 + 0xc) != 0) {
    FontOverlayRenderer::prepareRenderForRenderTexture
              (*(ITextureObject **)(*(long *)(param_1 + 8) + 8));
  }
  *(undefined8 *)(param_1 + 300) = 0x100000001;
  *(undefined8 *)(param_1 + 0x124) = 0x100000001;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  lVar17 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0x300000003;
  *(undefined8 *)(param_1 + 0x138) = 0x300000003;
  *(undefined8 *)(param_1 + 0x154) = 0x300000003;
  *(undefined8 *)(param_1 + 0x14c) = 0x300000003;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x148) = 3;
  *(undefined4 *)(param_1 + 0x15c) = 3;
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(uint *)(param_1 + 0x164) = param_3;
  *(int *)(param_1 + 0x168) = (int)param_4;
  param_1[400] = (RenderTargetInfo)0x1;
  if ((*(uint *)(lVar17 + 0x3a8) >> 1 & 1) == 0) {
    if ((*(uint *)(lVar17 + 0x3a8) >> 5 & 1) != 0) {
      uVar1 = *(uint *)(pbVar10 + 0xc);
      uVar12 = (ulong)uVar1;
      *(uint *)(param_1 + 0x16c) = uVar1;
      if (uVar1 != 0) {
        if (uVar1 == 1) {
LAB_00a1fe44:
          uVar14 = 0;
        }
        else {
          if ((param_1 + 0xc0 < pbVar10 + uVar12 * 8 + 0x10) &&
             (pbVar10 + 0x10 < param_1 + uVar12 * 8 + 0xc0)) goto LAB_00a1fe44;
          uVar14 = uVar12 & 0xfffffffe;
          puVar18 = (undefined8 *)(param_1 + 0x180);
          puVar19 = (undefined8 *)(param_1 + 0xc0);
          puVar21 = (undefined8 *)(pbVar10 + 0x10);
          uVar22 = uVar14;
          do {
            uVar20 = *puVar21;
            uVar22 = uVar22 - 2;
            puVar19[1] = puVar21[1];
            *puVar19 = uVar20;
            puVar18[-2] = 0;
            *puVar18 = 0;
            puVar18[-0xe] = 0x200000002;
            puVar18[-9] = 0;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 2;
            puVar21 = puVar21 + 2;
          } while (uVar22 != 0);
          if (uVar14 == uVar12) goto LAB_00a1fe90;
        }
        lVar17 = uVar12 - uVar14;
        puVar15 = (undefined4 *)(param_1 + uVar14 * 4 + 0x180);
        puVar18 = (undefined8 *)(pbVar10 + uVar14 * 8 + 0x10);
        puVar19 = (undefined8 *)(param_1 + uVar14 * 8 + 0xc0);
        do {
          lVar17 = lVar17 + -1;
          *puVar19 = *puVar18;
          puVar15[-4] = 0;
          *puVar15 = 0;
          puVar15[-0x1c] = 2;
          puVar15[-0x12] = 0;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar17 != 0);
      }
LAB_00a1fe90:
      *(undefined2 *)(param_1 + 0x160) = 0;
      uVar20 = *(undefined8 *)(pbVar10 + 0x58);
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x120) = 1;
      lVar17 = *(long *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x148) = 3;
      *(undefined8 *)(param_1 + 0xe0) = uVar20;
      pvVar2 = (vector *)(lVar17 + 0x58);
      if (*(long *)(lVar17 + 8) != 0) {
        pvVar2 = (vector *)(lVar17 + 0x70);
      }
      preparePass((RenderQueue *)param_1,pvVar2,6,0,0x24,0x25,1,in_x7,false);
      lVar17 = *(long *)(param_1 + 0x10);
      pvVar2 = (vector *)(lVar17 + 0x58);
      if (*(long *)(lVar17 + 8) != 0) {
        pvVar2 = (vector *)(lVar17 + 0x70);
      }
      preparePass((RenderQueue *)param_1,pvVar2,7,0,0x24,0x25,1,in_x7,false);
      goto LAB_00a2042c;
    }
    uVar11 = *(undefined4 *)(pbVar10 + 4);
    uVar13 = *(undefined4 *)(pbVar10 + 8);
    uVar20 = *(undefined8 *)(pbVar10 + 0x10);
    *(undefined4 *)(param_1 + 0x110) = 0;
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x170) = uVar11;
    *(undefined4 *)(param_1 + 0x180) = uVar13;
    *(undefined8 *)(param_1 + 0xc0) = uVar20;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x138) = 3;
    *(undefined2 *)(param_1 + 0x160) = 1;
    *(undefined4 *)(param_1 + 0x16c) = 1;
    uVar20 = *(undefined8 *)(pbVar10 + 0x58);
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(undefined4 *)(param_1 + 0x148) = 3;
    *(undefined8 *)(param_1 + 0xe0) = uVar20;
    uVar3 = *(uint *)(lVar17 + 0x3a8);
    lVar17 = *(long *)(lVar17 + 0x560);
    cVar4 = *(char *)(*(long *)(param_1 + 8) + 0x88);
    uVar1 = uVar3 & 4;
    if (((lVar17 != 0) && (cVar4 != '\0')) && (uVar1 != 0)) {
      uVar8 = ScreenSpaceProcessor::getNeedsProcessDepth();
    }
    uVar9 = 0;
    if (((lVar17 != 0) && (cVar4 == '\0')) && (uVar1 != 0)) {
      uVar9 = ScreenSpaceProcessor::getNeedsProcessDepth();
    }
    if (lVar17 != 0) {
      if ((uVar3 >> 2 & 1) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x40) != 0;
      }
      lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x3a0);
      ScreenSpaceProcessor::prepare
                (*(ScreenSpaceProcessor **)(*(long *)(param_1 + 0x28) + 0x560),
                 **(IRenderDevice ***)(param_1 + 8),*(bool *)(lVar17 + 0x50),
                 *(bool *)(lVar17 + 0x52),bVar7);
    }
    if ((uVar8 & 1) != 0) {
      local_248 = 0;
      uStack_240 = 0;
      local_218 = 0;
      local_210 = (void *)0x0;
      local_340 = 4;
      local_230 = &PTR__Task_00fde908;
      local_220 = 0;
      local_238 = (void *)0x0;
                    /* try { // try from 00a1ff84 to 00a1ff93 has its CatchHandler @ 00a20504 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_220);
      local_88 = 0;
      puVar18 = *(undefined8 **)(param_1 + 0x40);
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      local_230 = &PTR__Task_00fe3150;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      local_250 = 0x28;
      if (puVar18 < *(undefined8 **)(param_1 + 0x48)) {
        puVar18[0x22] = &PTR__Task_00fde908;
        puVar18[5] = uStack_318;
        puVar18[4] = local_320;
        puVar18[7] = uStack_308;
        puVar18[6] = uStack_310;
        puVar18[1] = uStack_338;
        *puVar18 = CONCAT44(uStack_33c,local_340);
        puVar18[3] = uStack_328;
        puVar18[2] = uStack_330;
        puVar18[0xd] = uStack_2d8;
        puVar18[0xc] = local_2e0;
        puVar18[0xf] = uStack_2c8;
        puVar18[0xe] = uStack_2d0;
        puVar18[9] = uStack_2f8;
        puVar18[8] = local_300;
        puVar18[0xb] = uStack_2e8;
        puVar18[10] = uStack_2f0;
        puVar18[0x15] = uStack_298;
        puVar18[0x14] = local_2a0;
        puVar18[0x17] = uStack_288;
        puVar18[0x16] = uStack_290;
        puVar18[0x11] = uStack_2b8;
        puVar18[0x10] = local_2c0;
        puVar18[0x13] = uStack_2a8;
        puVar18[0x12] = uStack_2b0;
        puVar18[0x1b] = uStack_268;
        puVar18[0x1a] = local_270;
        puVar18[0x1d] = uStack_258;
        puVar18[0x1c] = uStack_260;
        *(undefined4 *)(puVar18 + 0x1e) = 0x28;
        puVar18[0x19] = uStack_278;
        puVar18[0x18] = local_280;
        puVar18[0x21] = local_238;
        puVar18[0x20] = uStack_240;
        puVar18[0x1f] = local_248;
        uStack_240 = 0;
        local_238 = (void *)0x0;
        local_248 = 0;
        *(undefined *)(puVar18 + 0x23) = local_228;
                    /* try { // try from 00a20054 to 00a2005b has its CatchHandler @ 00a204d8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar18 + 0x24));
        puVar18[0x22] = &PTR__Task_00fe3150;
        memcpy(puVar18 + 0x27,auStack_208,0x180);
        puVar18[0x57] = local_88;
        *(undefined8 **)(param_1 + 0x40) = puVar18 + 0x58;
      }
      else {
                    /* try { // try from 00a20090 to 00a20097 has its CatchHandler @ 00a204d0 */
        std::__ndk1::
        vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>::
        __push_back_slow_path<RenderQueue::SubmitSection>
                  ((vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>
                    *)(param_1 + 0x38),(SubmitSection *)&local_340);
      }
      local_230 = &PTR__Task_00fde908;
      if ((local_220 & 1) != 0) {
        operator_delete(local_210);
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      param_1[400] = (RenderTargetInfo)0x1;
      *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
    }
    uVar11 = *(undefined4 *)(pbVar10 + 4);
    uVar13 = *(undefined4 *)(pbVar10 + 8);
    lVar17 = *(long *)(pbVar10 + 0x50);
    uVar20 = *(undefined8 *)(pbVar10 + 0x10);
    param_1[0x160] = (RenderTargetInfo)0x0;
    *(undefined4 *)(param_1 + 0x170) = uVar11;
    uVar11 = 1;
    if (lVar17 != 0) {
      uVar11 = 2;
    }
    *(undefined4 *)(param_1 + 0x180) = uVar13;
    lVar16 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x110) = 0x100000001;
    *(undefined8 *)(param_1 + 0xc0) = uVar20;
    *(long *)(param_1 + 200) = lVar17;
    *(undefined8 *)(param_1 + 0x138) = 0x300000003;
    *(undefined4 *)(param_1 + 0x16c) = uVar11;
    pvVar2 = (vector *)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 8) != 0) {
      pvVar2 = (vector *)(lVar16 + 0x70);
    }
    preparePass((RenderQueue *)param_1,pvVar2,2,0,0x24,0x25,9,in_x7,(bool)(in_w5 & 1));
    uVar20 = *(undefined8 *)(pbVar10 + 0x58);
    *(undefined4 *)(param_1 + 0x120) = 2;
    *(undefined8 *)(param_1 + 0xe0) = uVar20;
    *(undefined4 *)(param_1 + 0x148) = 3;
    uVar13 = *(undefined4 *)(pbVar10 + 4);
    uVar11 = *(undefined4 *)(pbVar10 + 8);
    lVar17 = *(long *)(pbVar10 + 0x50);
    uVar20 = *(undefined8 *)(pbVar10 + 0x10);
    *(undefined8 *)(param_1 + 0x110) = 0x200000002;
    *(undefined8 *)(param_1 + 0x138) = 0x300000003;
    *(undefined4 *)(param_1 + 0x180) = uVar11;
    uVar11 = 1;
    if (lVar17 != 0) {
      uVar11 = 2;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar13;
    lVar16 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0xc0) = uVar20;
    *(long *)(param_1 + 200) = lVar17;
    *(undefined2 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x16c) = uVar11;
    if (*(char *)(lVar16 + 0x50) != '\0') {
      uVar20 = RenderTextureController::getRefractionTexture();
      if (*(uint *)(param_1 + 0x194) != 0xffffffff) {
        lVar17 = *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x194) * 0x2c0;
        *(undefined8 *)(lVar17 + 0x40) = uVar20;
        *(undefined4 *)(lVar17 + 0x7c) = 1;
        *(undefined4 *)(lVar17 + 0xa4) = 0;
      }
      lVar17 = *(long *)(param_1 + 0x10);
      param_1[400] = (RenderTargetInfo)0x1;
      *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
      pvVar2 = (vector *)(lVar17 + 0x88);
      if (*(long *)(lVar17 + 8) != 0) {
        pvVar2 = (vector *)(lVar17 + 0xa0);
      }
      preparePass((RenderQueue *)param_1,pvVar2,4,1,0x26,0x26,0xb,in_x7,(bool)(in_w5 & 1));
      lVar16 = *(long *)(param_1 + 0x10);
    }
    pvVar2 = (vector *)(lVar16 + 0x58);
    if (*(long *)(lVar16 + 8) != 0) {
      pvVar2 = (vector *)(lVar16 + 0x70);
    }
    preparePass((RenderQueue *)param_1,pvVar2,5,0,0x24,0x25,10,in_x7,(bool)(in_w5 & 1));
    if ((uVar9 & 1) != 0) {
      local_248 = 0;
      uStack_240 = 0;
      local_218 = 0;
      local_210 = (void *)0x0;
      local_340 = 4;
      local_230 = &PTR__Task_00fde908;
      local_220 = 0;
      local_238 = (void *)0x0;
                    /* try { // try from 00a20288 to 00a20297 has its CatchHandler @ 00a20500 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_220);
      local_88 = 0;
      puVar18 = *(undefined8 **)(param_1 + 0x40);
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      local_230 = &PTR__Task_00fe3150;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_a4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      local_250 = 0x28;
      if (puVar18 < *(undefined8 **)(param_1 + 0x48)) {
        puVar18[0x22] = &PTR__Task_00fde908;
        puVar18[5] = uStack_318;
        puVar18[4] = local_320;
        puVar18[7] = uStack_308;
        puVar18[6] = uStack_310;
        puVar18[1] = uStack_338;
        *puVar18 = CONCAT44(uStack_33c,local_340);
        puVar18[3] = uStack_328;
        puVar18[2] = uStack_330;
        puVar18[0xd] = uStack_2d8;
        puVar18[0xc] = local_2e0;
        puVar18[0xf] = uStack_2c8;
        puVar18[0xe] = uStack_2d0;
        puVar18[9] = uStack_2f8;
        puVar18[8] = local_300;
        puVar18[0xb] = uStack_2e8;
        puVar18[10] = uStack_2f0;
        puVar18[0x15] = uStack_298;
        puVar18[0x14] = local_2a0;
        puVar18[0x17] = uStack_288;
        puVar18[0x16] = uStack_290;
        puVar18[0x11] = uStack_2b8;
        puVar18[0x10] = local_2c0;
        puVar18[0x13] = uStack_2a8;
        puVar18[0x12] = uStack_2b0;
        puVar18[0x1b] = uStack_268;
        puVar18[0x1a] = local_270;
        puVar18[0x1d] = uStack_258;
        puVar18[0x1c] = uStack_260;
        *(undefined4 *)(puVar18 + 0x1e) = 0x28;
        puVar18[0x19] = uStack_278;
        puVar18[0x18] = local_280;
        puVar18[0x21] = local_238;
        puVar18[0x20] = uStack_240;
        puVar18[0x1f] = local_248;
        uStack_240 = 0;
        local_238 = (void *)0x0;
        local_248 = 0;
        *(undefined *)(puVar18 + 0x23) = local_228;
                    /* try { // try from 00a20358 to 00a2035f has its CatchHandler @ 00a204b4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar18 + 0x24));
        puVar18[0x22] = &PTR__Task_00fe3150;
        memcpy(puVar18 + 0x27,auStack_208,0x180);
        puVar18[0x57] = local_88;
        *(undefined8 **)(param_1 + 0x40) = puVar18 + 0x58;
      }
      else {
                    /* try { // try from 00a20394 to 00a2039b has its CatchHandler @ 00a204b0 */
        std::__ndk1::
        vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>::
        __push_back_slow_path<RenderQueue::SubmitSection>
                  ((vector<RenderQueue::SubmitSection,std::__ndk1::allocator<RenderQueue::SubmitSection>>
                    *)(param_1 + 0x38),(SubmitSection *)&local_340);
      }
      local_230 = &PTR__Task_00fde908;
      if ((local_220 & 1) != 0) {
        operator_delete(local_210);
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
    }
    if (*(uint *)(param_1 + 0x194) == 0xffffffff) {
      param_1[400] = (RenderTargetInfo)0x1;
    }
    else {
      bVar5 = *pbVar10;
      lVar16 = (ulong)*(uint *)(param_1 + 0x194) * 0x2c0;
      lVar17 = *(long *)(param_1 + 0x38) + lVar16;
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(pbVar10 + 0x30);
      *(uint *)(lVar17 + 0x7c) = (uint)bVar5;
      *(undefined4 *)(lVar17 + 0xa4) = 0;
      param_1[400] = (RenderTargetInfo)0x1;
      bVar5 = pbVar10[1];
      lVar16 = *(long *)(param_1 + 0x38) + lVar16;
      *(undefined8 *)(lVar16 + 0x60) = 0;
      *(uint *)(lVar16 + 0x8c) = (uint)bVar5;
      *(undefined4 *)(lVar16 + 0xb4) = 3;
    }
  }
  else {
    lVar17 = *(long *)(param_1 + 0x10);
    bVar5 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x19);
    uVar20 = *(undefined8 *)(pbVar10 + 0x58);
    uVar11 = 1;
    if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18) != '\0') {
      uVar11 = 2;
    }
    uVar13 = 0;
    if ((int)param_4 - 1U != param_3) {
      uVar13 = 3;
    }
    param_1[0x161] = (RenderTargetInfo)0x0;
    *(undefined8 *)(param_1 + 0xe0) = uVar20;
    *(undefined4 *)(param_1 + 0x120) = uVar11;
    *(undefined4 *)(param_1 + 0x148) = uVar13;
    pvVar2 = (vector *)(lVar17 + 0x58);
    if (*(long *)(lVar17 + 8) != 0) {
      pvVar2 = (vector *)(lVar17 + 0x70);
    }
    preparePass((RenderQueue *)param_1,pvVar2,0,0,0x1c,0x1d,4,in_x7,(bool)(in_w5 & 1));
    if (*(uint *)(param_1 + 0x194) != 0xffffffff) {
      lVar17 = *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x194) * 0x2c0;
      *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)(pbVar10 + 0x60);
      *(uint *)(lVar17 + 0x8c) = (uint)bVar5;
      *(undefined4 *)(lVar17 + 0xb4) = uVar13;
    }
  }
  param_1[400] = (RenderTargetInfo)0x1;
LAB_00a2042c:
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


