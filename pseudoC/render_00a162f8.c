// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 00a162f8
// Size: 4940 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* RenderStatsOverlay::render(SharedRenderArgs const&, unsigned int) */

void RenderStatsOverlay::render(SharedRenderArgs *param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ResourceManager *this;
  EntityRegistryManager *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *puVar17;
  uint *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long *plVar24;
  uint uVar25;
  long *this_01;
  uint uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  void *local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  void *local_128;
  undefined8 local_120;
  ulong local_118;
  ulong local_110;
  undefined auStack_108 [8];
  undefined auStack_100 [8];
  undefined auStack_f8 [8];
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  long *local_d8;
  float local_d0;
  char acStack_c8 [64];
  long local_88;
  
  uVar7 = render(SharedRenderArgs_const&,unsigned_int)::maxCycleFrameCount;
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar1 = *(short *)(param_1 + 0x290) + 1;
  *(ushort *)(param_1 + 0x290) = uVar1;
  uVar26 = 0;
  if (uVar7 != 0) {
    uVar26 = (uint)uVar1 / (uint)uVar7;
  }
  uVar15 = (ulong)*(ushort *)(param_1 + 0x28c);
  if ((uint)uVar1 == uVar26 * uVar7) {
    puVar20 = (undefined8 *)(param_1 + uVar15 * 0x7c + 0x20);
    uVar26 = *(ushort *)(param_1 + 0x28c) + 1 & 3;
    uVar15 = (ulong)uVar26;
    puVar17 = (undefined8 *)(param_1 + uVar15 * 0x7c + 0x20);
    uVar30 = puVar20[4];
    uVar29 = puVar20[7];
    uVar27 = puVar20[6];
    uVar34 = puVar20[1];
    uVar33 = *puVar20;
    uVar32 = puVar20[3];
    uVar31 = puVar20[2];
    *(undefined8 *)(param_1 + 0x238) = puVar20[5];
    *(undefined8 *)(param_1 + 0x230) = uVar30;
    *(undefined8 *)(param_1 + 0x248) = uVar29;
    *(undefined8 *)(param_1 + 0x240) = uVar27;
    *(undefined8 *)(param_1 + 0x218) = uVar34;
    *(undefined8 *)(param_1 + 0x210) = uVar33;
    *(undefined8 *)(param_1 + 0x228) = uVar32;
    *(undefined8 *)(param_1 + 0x220) = uVar31;
    uVar31 = puVar20[9];
    uVar30 = puVar20[8];
    uVar33 = puVar20[0xb];
    uVar32 = puVar20[10];
    uVar29 = *(undefined8 *)((long)puVar20 + 0x74);
    uVar27 = *(undefined8 *)((long)puVar20 + 0x6c);
    uVar35 = puVar20[0xd];
    uVar34 = puVar20[0xc];
    *(undefined2 *)(param_1 + 0x290) = 0;
    *(short *)(param_1 + 0x28c) = (short)uVar26;
    *(undefined8 *)(param_1 + 0x284) = uVar29;
    *(undefined8 *)(param_1 + 0x27c) = uVar27;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    *(undefined8 *)(param_1 + 0x268) = uVar33;
    *(undefined8 *)(param_1 + 0x260) = uVar32;
    *(undefined8 *)(param_1 + 0x278) = uVar35;
    *(undefined8 *)(param_1 + 0x270) = uVar34;
    *(undefined8 *)(param_1 + 600) = uVar31;
    *(undefined8 *)(param_1 + 0x250) = uVar30;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[7] = 0;
    puVar17[6] = 0;
    puVar17[9] = 0;
    puVar17[8] = 0;
    puVar17[0xb] = 0;
    puVar17[10] = 0;
    puVar17[0xd] = 0;
    puVar17[0xc] = 0;
    *(undefined8 *)((long)puVar17 + 0x74) = 0;
    *(undefined8 *)((long)puVar17 + 0x6c) = 0;
  }
  puVar18 = *(uint **)(param_1 + 0x10);
  uVar26 = *puVar18;
  if (*puVar18 <= *(uint *)(param_1 + uVar15 * 0x7c + 0x20)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x20);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x20) = uVar26;
  uVar26 = puVar18[0x13];
  if (puVar18[0x13] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x6c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x6c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x6c) = uVar26;
  uVar26 = puVar18[0x10];
  if (puVar18[0x10] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x60)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x60);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x60) = uVar26;
  uVar26 = puVar18[0xe];
  if (puVar18[0xe] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x58)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x58);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x58) = uVar26;
  uVar26 = puVar18[0xf];
  if (puVar18[0xf] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x5c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x5c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x5c) = uVar26;
  uVar26 = puVar18[4];
  if (puVar18[4] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x30)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x30);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x30) = uVar26;
  uVar26 = puVar18[0xb];
  if (puVar18[0xb] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x4c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x4c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x4c) = uVar26;
  uVar26 = puVar18[0xc];
  if (puVar18[0xc] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x50)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x50);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x50) = uVar26;
  uVar26 = puVar18[2];
  if (puVar18[2] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x28)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x28);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x28) = uVar26;
  uVar26 = puVar18[9];
  if (puVar18[9] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x44)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x44);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x44) = uVar26;
  uVar26 = puVar18[6];
  if (puVar18[6] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x38)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x38);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x38) = uVar26;
  uVar26 = puVar18[8];
  if (puVar18[8] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x40)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x40);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x40) = uVar26;
  uVar26 = puVar18[1];
  if (puVar18[1] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x24)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x24);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x24) = uVar26;
  uVar26 = puVar18[7];
  if (puVar18[7] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x3c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x3c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x3c) = uVar26;
  uVar26 = puVar18[0xd];
  if (puVar18[0xd] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x54)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x54);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x54) = uVar26;
  uVar26 = puVar18[10];
  if (puVar18[10] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x48)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x48);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x48) = uVar26;
  uVar26 = puVar18[0x16];
  if (puVar18[0x16] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x78)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x78);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x78) = uVar26;
  uVar26 = puVar18[5];
  if (puVar18[5] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x34)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x34);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x34) = uVar26;
  uVar26 = puVar18[3];
  if (puVar18[3] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x2c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x2c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x2c) = uVar26;
  uVar26 = puVar18[0x11];
  if (puVar18[0x11] <= *(uint *)(param_1 + uVar15 * 0x7c + 100)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 100);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 100) = uVar26;
  uVar26 = puVar18[0x14];
  if (puVar18[0x14] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x70)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x70);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x70) = uVar26;
  uVar26 = puVar18[0x15];
  if (puVar18[0x15] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x74)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x74);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x74) = uVar26;
  uVar26 = puVar18[0x17];
  if (puVar18[0x17] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x7c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x7c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x7c) = uVar26;
  uVar26 = puVar18[0x18];
  if (puVar18[0x18] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x80)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x80);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x80) = uVar26;
  uVar26 = puVar18[0x19];
  if (puVar18[0x19] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x84)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x84);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x84) = uVar26;
  uVar26 = puVar18[0x1a];
  if (puVar18[0x1a] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x88)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x88);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x88) = uVar26;
  uVar26 = puVar18[0x1b];
  if (puVar18[0x1b] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x8c)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x8c);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x8c) = uVar26;
  uVar26 = puVar18[0x1c];
  if (puVar18[0x1c] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x90)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x90);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x90) = uVar26;
  uVar26 = puVar18[0x1d];
  if (puVar18[0x1d] <= *(uint *)(param_1 + uVar15 * 0x7c + 0x94)) {
    uVar26 = *(uint *)(param_1 + uVar15 * 0x7c + 0x94);
  }
  *(uint *)(param_1 + uVar15 * 0x7c + 0x94) = uVar26;
  this_01 = ((long **)(ulong)param_2)[1];
  FontOverlayRenderer::setBold((FontOverlayRenderer *)this_01,false);
  FontOverlayRenderer::setColor((FontOverlayRenderer *)this_01,1.0,1.0,1.0,1.0);
  plVar24 = *(long **)(ulong)param_2;
  local_d0 = 0.94;
  local_d8 = this_01;
  RenderDeviceManager::getInstance();
  RenderDeviceManager::getCurrentRenderDeviceTypeName();
  (**(code **)(*plVar24 + 0x28))(plVar24);
  FUN_00a1770c(acStack_c8);
  FontOverlayRenderer::xyprintf((FontOverlayRenderer *)local_d8,0.03,local_d0,0.019,0,acStack_c8);
  local_d0 = local_d0 + -0.0209 + -0.0152;
  Printer::printLine((char *)&local_d8,0.18,"Objects","%5u | %5u",(ulong)*(uint *)(param_1 + 0x210),
                     (ulong)**(uint **)(param_1 + 0x10));
  Printer::printLine((char *)&local_d8,0.18,"Dir lights","%u (%u shadow) | %u (%u shadow)",
                     (ulong)*(uint *)(param_1 + 0x220),(ulong)*(uint *)(param_1 + 0x224),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x10),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x14));
  Printer::printLine((char *)&local_d8,0.18,"Spot lights","%u (%u shadow) | %u (%u shadow)",
                     (ulong)*(uint *)(param_1 + 0x218),(ulong)*(uint *)(param_1 + 0x21c),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 8),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0xc));
  Printer::printLine((char *)&local_d8,0.18,"Point lights","%u | %u",
                     (ulong)*(uint *)(param_1 + 0x214),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4));
  Printer::printLine((char *)&local_d8,0.18,"Occluders","%u (%u triangles) | %u (%u triangles)",
                     (ulong)*(uint *)(param_1 + 0x25c),(ulong)*(uint *)(param_1 + 0x264),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x4c),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x54));
  Printer::printLine((char *)&local_d8,0.18,"Occluded shapes","%u | %u",
                     (ulong)*(uint *)(param_1 + 0x260),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x50));
  uVar9 = *(uint *)(param_1 + 0x278);
  uVar26 = uVar9 + *(uint *)(param_1 + 0x270);
  if (uVar26 == 0) {
    uVar26 = 1;
  }
  lVar19 = *(long *)(param_1 + 0x10);
  uVar25 = *(uint *)(lVar19 + 0x68);
  uVar23 = uVar25 + *(int *)(lVar19 + 0x60);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  Printer::printLine((char *)&local_d8,0.18,"Culling tests (Shading pass)",
                     (double)(((float)(ulong)uVar9 * 100.0) / (float)(ulong)uVar26),
                     (double)(((float)(ulong)uVar25 * 100.0) / (float)(ulong)uVar23),
                     "cells: %u, objects tot/acc/skip: %u/%u/%u(%.1f%%) | cells: %u, objects tot/acc/skip: %u/%u/%u(%.1f%%)\n"
                     ,(ulong)*(uint *)(param_1 + 0x26c),(ulong)*(uint *)(param_1 + 0x270),
                     (ulong)*(uint *)(param_1 + 0x274),(ulong)uVar9,(ulong)*(uint *)(lVar19 + 0x5c),
                     *(int *)(lVar19 + 0x60),*(undefined4 *)(lVar19 + 100),uVar25);
  lVar19 = *(long *)(param_1 + 0x10);
  Printer::printLine((char *)&local_d8,0.18,"Culling shape entity counts","%u/%u/%u | %u/%u/%u",
                     (ulong)*(uint *)(param_1 + 0x27c),(ulong)*(uint *)(param_1 + 0x280),
                     (ulong)*(uint *)(param_1 + 0x284),(ulong)*(uint *)(lVar19 + 0x6c),
                     (ulong)*(uint *)(lVar19 + 0x70),*(undefined4 *)(lVar19 + 0x74));
  Printer::printLine((char *)&local_d8,0.18,"Render targets","%u | %u",
                     (ulong)*(uint *)(param_1 + 0x22c),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x1c));
  Printer::printLine((char *)&local_d8,0.18,"Render queues","%u | %u",
                     (ulong)*(uint *)(param_1 + 0x230),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x20));
  Printer::printLine((char *)&local_d8,0.18,"Render passes","%u | %u",
                     (ulong)*(uint *)(param_1 + 0x234),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x24));
  lVar19 = *(long *)(param_1 + 0x10);
  Printer::printLine((char *)&local_d8,0.18,"Draw calls",
                     "%4u (instances %4u soft %4u) | %4u (instances %4u soft %4u)",
                     (ulong)*(uint *)(param_1 + 0x23c),(ulong)*(uint *)(param_1 + 0x240),
                     (ulong)*(uint *)(param_1 + 0x244),(ulong)*(uint *)(lVar19 + 0x2c),
                     (ulong)*(uint *)(lVar19 + 0x30),*(undefined4 *)(lVar19 + 0x34));
  Printer::printLine((char *)&local_d8,0.18,"Dispatches","%u | %u",(ulong)*(uint *)(param_1 + 0x248)
                     ,(ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x38));
  Printer::printLine((char *)&local_d8,0.18,"Rendered VBs","%4u | %4u",
                     (ulong)*(uint *)(param_1 + 0x238),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28));
  Printer::printLine((char *)&local_d8,0.18,"Rendered triangles","%8u | %8u",
                     (ulong)*(uint *)(param_1 + 0x24c),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x3c));
  Printer::printLine((char *)&local_d8,0.18,"Rendered vertices","%8u | %8u",
                     (ulong)*(uint *)(param_1 + 0x250),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x40));
  local_d0 = local_d0 + -0.0152;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a172f0 to 00a172fb has its CatchHandler @ 00a1767c */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  if ((DAT_01048f80 != 0) && (DAT_01048f94 == '\0')) {
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a173c8 to 00a173d3 has its CatchHandler @ 00a17664 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    Printer::printLine((char *)&local_d8,0.18,"Shaders built",&DAT_004fcaef,(ulong)DAT_01048f90);
    MaterialShaderManager::getInstance();
    uVar15 = MaterialShaderManager::getAverageCodeGenerationTimeUs();
    MaterialShaderManager::getInstance();
    dVar28 = (double)MaterialShaderManager::getTotalCodeGenerationTimeUs();
    Printer::printLine((char *)&local_d8,0.18,"Avg shader generation time","%4u us (total %4u us)",
                       uVar15 & 0xffffffff,(ulong)(uint)(int)dVar28);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a17410 to 00a1741b has its CatchHandler @ 00a17660 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    uVar15 = ShaderManager::getAveragePreprocessorTimeUs();
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a17458 to 00a17463 has its CatchHandler @ 00a1765c */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    dVar28 = (double)ShaderManager::getTotalPreprocessorTimeUs();
    Printer::printLine((char *)&local_d8,0.18,"Avg shader preprocessing time",
                       "%4u us (total %4u us)",uVar15 & 0xffffffff,(ulong)(uint)(int)dVar28);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a174a0 to 00a174ab has its CatchHandler @ 00a17658 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    uVar15 = ShaderManager::getAverageCodeParserTimeUs();
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a174e8 to 00a174f3 has its CatchHandler @ 00a17654 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    dVar28 = (double)ShaderManager::getTotalCodeParserTimeUs();
    Printer::printLine((char *)&local_d8,0.18,"Avg shader parser time","%4u us (total %4u us)",
                       uVar15 & 0xffffffff,(ulong)(uint)(int)dVar28);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a17530 to 00a1753b has its CatchHandler @ 00a17650 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    uVar15 = ShaderManager::getAverageCodeConversionTimeUs();
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a17578 to 00a17583 has its CatchHandler @ 00a1764c */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    dVar28 = (double)ShaderManager::getTotalCodeConversionTimeUs();
    Printer::printLine((char *)&local_d8,0.18,"Avg shader conversion time","%4u us (total %4u us)",
                       uVar15 & 0xffffffff,(ulong)(uint)(int)dVar28);
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a175c0 to 00a175cb has its CatchHandler @ 00a17648 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    uVar15 = ShaderManager::getAverageCodeCompilationTimeUs();
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar10 != 0)) {
                    /* try { // try from 00a17608 to 00a17613 has its CatchHandler @ 00a17644 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    dVar28 = (double)ShaderManager::getTotalCodeCompilationTimeUs();
    Printer::printLine((char *)&local_d8,0.18,"Avg shader compilation time","%4u us (total %4u us)",
                       uVar15 & 0xffffffff,(ulong)(uint)(int)dVar28);
    local_d0 = local_d0 + -0.0152;
  }
  Printer::printLine((char *)&local_d8,0.14,"Uploaded detail cells","%4u | %4u Total %4u",
                     (ulong)*(uint *)(param_1 + 0x254),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x44),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x44));
  Printer::printLine((char *)&local_d8,0.14,"Uploaded foliage cells","%4u | %4u Total %4u",
                     (ulong)*(uint *)(param_1 + 600),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x48),
                     (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x48));
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
     iVar10 != 0)) {
                    /* try { // try from 00a17338 to 00a17343 has its CatchHandler @ 00a1766c */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  uVar8 = InstancedGeometryManager::getInstance()::s_instance._88_4_;
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
     iVar10 != 0)) {
                    /* try { // try from 00a17380 to 00a1738b has its CatchHandler @ 00a17668 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  Printer::printLine((char *)&local_d8,0.14,"Total soft instances","%8u Max %8u",(ulong)(uint)uVar8,
                     (ulong)(uint)InstancedGeometryManager::getInstance()::s_instance._92_4_);
  lVar19 = EngineManager::getInstance();
  uVar9 = (**(code **)(**(long **)(*(long *)(lVar19 + 0xb8) + 0x1148) + 0x28))();
  uVar26 = *(uint *)(*(long *)(param_1 + 0x10) + 0x58);
  if (uVar9 < uVar26) {
    FontOverlayRenderer::setColor((FontOverlayRenderer *)this_01,1.0,0.0,0.0,1.0);
    uVar26 = *(uint *)(*(long *)(param_1 + 0x10) + 0x58);
  }
  Printer::printLine((char *)&local_d8,0.14,"Max soft instance expand","%8u | %8u / %8u",
                     (ulong)*(uint *)(param_1 + 0x268),(ulong)uVar26,(ulong)uVar9);
  FontOverlayRenderer::setColor((FontOverlayRenderer *)this_01,1.0,1.0,1.0,1.0);
  local_d0 = local_d0 + -0.0152;
  uVar15 = (**(code **)(*plVar24 + 0x38))(plVar24);
  fVar4 = (float)(uVar15 & 0xffffffff) * 9.536743e-07;
  uVar15 = (**(code **)(*plVar24 + 0x40))(plVar24);
  fVar5 = (float)(uVar15 & 0xffffffff) * 9.536743e-07;
  uVar15 = (**(code **)(*plVar24 + 0x48))(plVar24);
  fVar6 = (float)(uVar15 & 0xffffffff) * 9.536743e-07;
  uVar15 = (**(code **)(*plVar24 + 0x50))(plVar24);
  fVar3 = (float)(uVar15 & 0xffffffff) * 9.536743e-07;
  Printer::printLine((char *)&local_d8,0.14,"Render Targets",(double)fVar4,"%7.2f MB");
  Printer::printLine((char *)&local_d8,0.14,"Textures",(double)fVar5,"%7.2f MB");
  Printer::printLine((char *)&local_d8,0.14,"Vertex buffers",(double)fVar6,"%7.2f MB");
  Printer::printLine((char *)&local_d8,0.14,"Index buffers",(double)fVar3,"%7.2f MB");
  Printer::printLine((char *)&local_d8,0.14,"Total VRAM",(double)(fVar4 + fVar5 + fVar6 + fVar3),
                     "%7.2f MB");
  (**(code **)(*plVar24 + 0x58))
            (plVar24,&local_e0,&local_e8,&local_f0,auStack_f8,auStack_100,auStack_108);
  if ((local_e0 != 0) && (local_f0 != 0)) {
    Printer::printLine((char *)&local_d8,0.14,"Usage | reserved VRAM",
                       (double)((float)(unkuint9)local_e0 * 9.536743e-07),
                       (double)((float)(unkuint9)local_e8 * 9.536743e-07),"%7.2f MB | %7.2f MB");
    Printer::printLine((char *)&local_d8,0.14,"Budget VRAM",
                       (double)((float)(unkuint9)local_f0 * 9.536743e-07),"%7.2f MB");
  }
  EnvUtil::getMemoryUsage(&local_110,&local_118);
  if ((local_110 != 0) && (local_118 != 0)) {
    Printer::printLine((char *)&local_d8,0.14,"Total RAM",
                       (double)((float)(unkuint9)local_110 * 0.0009765625 * 0.0009765625),
                       (double)((float)(unkuint9)local_118 * 0.0009765625 * 0.0009765625),
                       "%7.2f MB Max %.2f MB");
  }
  local_d0 = local_d0 + -0.0152;
  Mutex::enterCriticalSection();
  uVar26 = DAT_02110210;
  uVar11 = (ulong)DAT_02110214;
  uVar15 = DAT_02110200 - DAT_021101f8;
  Mutex::leaveCriticalSection();
  dVar28 = (double)NEON_ucvtf(uVar11);
  Printer::printLine((char *)&local_d8,0.0,(char *)0x0,
                     (double)(float)(dVar28 * 0.0009765625 * 0.0009765625),
                     "Split Shapes: %u Unsplit: %u VRam: %.3f MB",(ulong)uVar26,
                     (ulong)((int)(uVar15 >> 3) - uVar26));
  local_130 = (void *)0x0;
  local_128 = (void *)0x0;
  local_120 = 0;
                    /* try { // try from 00a16fe4 to 00a16fef has its CatchHandler @ 00a176d4 */
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::getResourceList(this,(vector *)&local_130);
  if (local_128 == local_130) {
    uVar23 = 0;
    uVar22 = 0;
    uVar25 = 0;
    uVar9 = 0;
    uVar26 = 0;
  }
  else {
    uVar15 = 0;
    uVar26 = 0;
    uVar9 = 0;
    uVar25 = 0;
    uVar22 = 0;
    uVar23 = 0;
    do {
                    /* try { // try from 00a17034 to 00a17077 has its CatchHandler @ 00a176d8 */
      iVar10 = Resource::getResourceType();
      if (iVar10 == 2) {
        uVar26 = uVar26 + 1;
      }
      else {
        iVar10 = Resource::getResourceType();
        if (iVar10 == 3) {
          uVar9 = uVar9 + 1;
        }
        else {
          iVar10 = Resource::getResourceType();
          if (iVar10 == 0) {
            uVar25 = uVar25 + 1;
          }
          else {
            iVar10 = Resource::getResourceType();
            if (iVar10 == 1) {
              uVar23 = uVar23 + 1;
            }
            else {
              uVar22 = uVar22 + 1;
            }
          }
        }
      }
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 < (ulong)((long)local_128 - (long)local_130 >> 3));
  }
                    /* try { // try from 00a170ac to 00a170d7 has its CatchHandler @ 00a176d4 */
  Printer::printLine((char *)&local_d8,0.0,(char *)0x0,
                     "Textures: %u Samples: %u Scripts: %u DensityMaps: %u Others: %u",(ulong)uVar26
                     ,(ulong)uVar9,(ulong)uVar25,(ulong)uVar23,(ulong)uVar22);
  local_148 = (void *)0x0;
  local_140 = (void *)0x0;
  local_138 = 0;
  local_d0 = local_d0 + -0.0152;
                    /* try { // try from 00a170f8 to 00a17103 has its CatchHandler @ 00a176a0 */
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  EntityRegistryManager::getEntities(this_00,(vector *)&local_148);
  if ((long)local_140 - (long)local_148 == 0) {
    uVar15 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    iVar10 = 0;
    uVar14 = 0;
    iVar16 = 0;
    uVar9 = 0;
    uVar26 = 0;
    uVar23 = 0;
    uVar25 = 0;
  }
  else {
    uVar21 = 0;
    uVar25 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar9 = 0;
    iVar16 = 0;
    uVar14 = 0;
    iVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar15 = 0;
    do {
      lVar19 = uVar21 * 8;
      uVar21 = (ulong)((int)uVar21 + 1);
      uVar22 = *(uint *)(*(long *)((long)local_148 + lVar19) + 0x10);
      uVar15 = (ulong)((uVar22 >> 5 & 1) + (int)uVar15);
      uVar12 = (ulong)((uVar22 >> 0xe & 1) + (int)uVar12);
      uVar11 = (ulong)((uVar22 >> 0xd & 1) + (int)uVar11);
      iVar10 = (uVar22 >> 0x10 & 1) + iVar10;
      uVar13 = (ulong)((uVar22 >> 0xf & 1) + (int)uVar13);
      iVar16 = (uVar22 >> 7 & 1) + iVar16;
      uVar14 = (ulong)((uVar22 >> 0xb & 1) + (int)uVar14);
      uVar26 = (uVar22 >> 0x15 & 1) + uVar26;
      uVar9 = (uVar22 >> 0x13 & 1) + uVar9;
      uVar23 = (uVar22 >> 0x16 & 1) + uVar23;
      uVar25 = (uVar22 >> 0x17 & 1) + uVar25;
    } while (uVar21 < (ulong)((long)local_140 - (long)local_148 >> 3));
  }
                    /* try { // try from 00a171e0 to 00a1722b has its CatchHandler @ 00a1769c */
  Printer::printLine((char *)&local_d8,0.0,(char *)0x0,
                     "Transforms: %u Lights: %u Audios: %u Cameras: %u Shapes: %u Terrains: %u Navs: %u"
                     ,uVar15,uVar11,uVar12,uVar13,uVar14,iVar16,iVar10);
  Printer::printLine((char *)&local_d8,0.0,(char *)0x0,
                     "Charsets: %u Geometries: %u Particle Systems: %u Splines: %u Others: %u",
                     (ulong)uVar9,(ulong)uVar26,(ulong)uVar25,(ulong)uVar23,0);
                    /* try { // try from 00a1722c to 00a17233 has its CatchHandler @ 00a17698 */
  EngineManager::getInstance();
  uVar15 = EngineManager::getNumScriptTriggerCallbacks();
                    /* try { // try from 00a17238 to 00a1723f has its CatchHandler @ 00a17694 */
  EngineManager::getInstance();
  uVar11 = EngineManager::getNumScriptWakeUpCallbacks();
                    /* try { // try from 00a17244 to 00a1726f has its CatchHandler @ 00a176a4 */
  EngineManager::getInstance();
  uVar12 = EngineManager::getNumScriptContactCallbacks();
  Printer::printLine((char *)&local_d8,0.0,(char *)0x0,
                     "Script Callbacks: Triggers: %u WakeUps: %u Contacts: %u",uVar15 & 0xffffffff,
                     uVar11 & 0xffffffff,uVar12 & 0xffffffff);
  local_d0 = local_d0 + -0.0152;
  if (local_148 != (void *)0x0) {
    local_140 = local_148;
    operator_delete(local_148);
  }
  if (local_130 != (void *)0x0) {
    local_128 = local_130;
    operator_delete(local_130);
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


