// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006dec64
// Size: 2300 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1, uint param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextureStreamingStats::render(SharedRenderArgs const&, unsigned int) */

void TextureStreamingStats::render(SharedRenderArgs *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  TextureStreamingManager TVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  TextureStreamingManager *this;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  TextureStreamingManager *pTVar15;
  long lVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long *this_00;
  long lVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  bool local_e4 [4];
  undefined auStack_e0 [8];
  undefined auStack_d8 [8];
  undefined auStack_d0 [8];
  ulong local_c8;
  long local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined local_a0;
  undefined7 uStack_9f;
  long *local_98;
  float local_90;
  long local_88;
  
  lVar10 = tpidr_el0;
  local_88 = *(long *)(lVar10 + 0x28);
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  this_00 = ((long **)(ulong)param_2)[1];
  FontOverlayRenderer::setBold((FontOverlayRenderer *)this_00,false);
  FontOverlayRenderer::setColor((FontOverlayRenderer *)this_00,1.0,1.0,1.0,1.0);
  dVar23 = 0.0;
  dVar24 = 0.0;
  if (DAT_0210e9e0 != 0) {
    if (DAT_0210e9e0 == 1) {
      dVar24 = 0.0;
      uVar18 = 0;
LAB_006ded50:
      iVar19 = DAT_0210e9e0 - uVar18;
      uVar18 = uVar18 + DAT_0210e9e4;
      do {
        uVar20 = 0;
        if (DAT_0210e9e8 != 0) {
          uVar20 = uVar18 / DAT_0210e9e8;
        }
        iVar19 = iVar19 + -1;
        uVar20 = uVar18 - uVar20 * DAT_0210e9e8;
        uVar18 = uVar18 + 1;
        dVar24 = dVar24 + *(double *)(&DAT_0210e5e0 + (ulong)uVar20 * 8);
      } while (iVar19 != 0);
    }
    else {
      uVar18 = DAT_0210e9e0 & 0xfffffffe;
      dVar24 = 0.0;
      uVar8 = uVar18;
      uVar20 = DAT_0210e9e4;
      do {
        uVar6 = 0;
        if (DAT_0210e9e8 != 0) {
          uVar6 = uVar20 / DAT_0210e9e8;
        }
        uVar1 = uVar20 + 1;
        uVar8 = uVar8 - 2;
        uVar6 = uVar20 - uVar6 * DAT_0210e9e8;
        uVar20 = uVar20 + 2;
        uVar7 = 0;
        if (DAT_0210e9e8 != 0) {
          uVar7 = uVar1 / DAT_0210e9e8;
        }
        dVar24 = dVar24 + *(double *)(&DAT_0210e5e0 + (ulong)uVar6 * 8) +
                 *(double *)(&DAT_0210e5e0 + (ulong)(uVar1 - uVar7 * DAT_0210e9e8) * 8);
      } while (uVar8 != 0);
      if (DAT_0210e9e0 != uVar18) goto LAB_006ded50;
    }
    if (DAT_0210e9e0 != 0) {
      dVar24 = dVar24 / (double)(ulong)DAT_0210e9e0;
    }
  }
  if (DAT_0210ee00 == 0) goto LAB_006dee28;
  if (DAT_0210ee00 == 1) {
    dVar23 = 0.0;
    uVar18 = 0;
LAB_006dedf4:
    iVar19 = DAT_0210ee00 - uVar18;
    uVar18 = uVar18 + _DAT_0210ee04;
    do {
      uVar20 = 0;
      if (_DAT_0210ee08 != 0) {
        uVar20 = uVar18 / _DAT_0210ee08;
      }
      iVar19 = iVar19 + -1;
      uVar20 = uVar18 - uVar20 * _DAT_0210ee08;
      uVar18 = uVar18 + 1;
      dVar23 = dVar23 + *(double *)(&DAT_0210ea00 + (ulong)uVar20 * 8);
    } while (iVar19 != 0);
  }
  else {
    uVar18 = DAT_0210ee00 & 0xfffffffe;
    dVar23 = 0.0;
    uVar8 = uVar18;
    uVar20 = _DAT_0210ee04;
    do {
      uVar6 = 0;
      if (_DAT_0210ee08 != 0) {
        uVar6 = uVar20 / _DAT_0210ee08;
      }
      uVar1 = uVar20 + 1;
      uVar8 = uVar8 - 2;
      uVar6 = uVar20 - uVar6 * _DAT_0210ee08;
      uVar20 = uVar20 + 2;
      uVar7 = 0;
      if (_DAT_0210ee08 != 0) {
        uVar7 = uVar1 / _DAT_0210ee08;
      }
      dVar23 = dVar23 + *(double *)(&DAT_0210ea00 + (ulong)uVar6 * 8) +
               *(double *)(&DAT_0210ea00 + (ulong)(uVar1 - uVar7 * _DAT_0210ee08) * 8);
    } while (uVar8 != 0);
    if (DAT_0210ee00 != uVar18) goto LAB_006dedf4;
  }
  if (DAT_0210ee00 != 0) {
    dVar23 = dVar23 / (double)(ulong)DAT_0210ee00;
  }
LAB_006dee28:
  plVar11 = *(long **)(ulong)param_2;
  (**(code **)(*plVar11 + 0x58))
            (plVar11,&uStack_b8,&local_c0,&local_c8,auStack_d0,auStack_d8,auStack_e0);
  uVar12 = TextureStreamingManager::getSafeMemoryBudget(this,0xc800000,local_e4);
  local_90 = 0.94;
  local_98 = this_00;
  uVar13 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar14 = TextureStreamingManager::isPaused();
  pcVar3 = "paused";
  if ((uVar14 & 1) == 0) {
    pcVar3 = "active";
  }
  uVar14 = TextureStreamingManager::hasHardwareSupport();
  pcVar4 = "HW support";
  if ((uVar14 & 1) == 0) {
    pcVar4 = "no HW support";
  }
  uVar14 = TextureStreamingManager::hasMultiThreadedRenderBackend();
  puVar17 = &UNK_0050f38d;
  if ((uVar14 & 1) == 0) {
    puVar17 = &UNK_004d7fff;
  }
  Printer::printLine((char *)&local_98,"%s [%s] [%s] [%s]",uVar13,pcVar3,pcVar4,puVar17);
  local_90 = local_90 + -0.016;
  Printer::printLine((char *)&local_98,0.2,"update():",TextureStreamingManager::s_stats_any,dVar24,
                     DAT_0210e9f0,"%.3f ms / avg: %.3f ms / max: %.3f ms");
  Printer::printLine((char *)&local_98,0.2,"async update():",DAT_0210e9f8,dVar23,DAT_0210ee10,
                     "%.3f ms / avg: %.3f ms / max: %.3f ms");
  local_90 = local_90 + -0.016;
  Printer::printLine((char *)&local_98,0.2,"Registry pipeline:","%u registered => %u unregistered",
                     (ulong)DAT_0210ee18,(ulong)DAT_0210ee1c);
  fVar22 = (float)NEON_ucvtf(DAT_0210ee50);
  Printer::printLine((char *)&local_98,0.2,"Upgrade pipeline:",(double)(fVar22 * 9.536743e-07),
                     "%u file load => %u texture realloc => %u done | %u cancel | %.2f MB reserved mem"
                     ,(ulong)DAT_0210ee40,(ulong)(uint)DAT_0210ee44,(ulong)DAT_0210ee44._4_4_,
                     (ulong)DAT_0210ee4c);
  fVar22 = (float)NEON_ucvtf(DAT_0210ee60);
  Printer::printLine((char *)&local_98,0.2,"Downgrade pipeline:",(double)(fVar22 * 9.536743e-07),
                     "%u texture realloc => %u done | %u cancel | %.2f MB releasing mem",
                     (ulong)DAT_0210ee54,(ulong)_DAT_0210ee58,(ulong)DAT_0210ee5c);
  Printer::printLine((char *)&local_98,0.2,"Streaming strategy:",
                     "%u alive | %u highest | %u needing | %u wasting | %u ideal | %u constrained | %u zombie"
                     ,(ulong)DAT_0210ee20,(ulong)DAT_0210ee34,(ulong)DAT_0210ee28,
                     (ulong)DAT_0210ee2c,(ulong)DAT_0210ee30,DAT_0210ee3c,DAT_0210ee38);
  local_90 = local_90 + -0.016;
  puVar17 = &UNK_004c942b;
  if (local_e4[0] != false) {
    puVar17 = &DAT_004f12ae;
  }
  Printer::printLine((char *)&local_98,0.2,"Memory budget:",
                     (double)((float)(unkuint9)DAT_0210ee68 * 9.536743e-07),
                     (double)((float)(unkuint9)uVar12 * 9.536743e-07),
                     (double)((float)(unkuint9)DAT_0210ee70 * 9.536743e-07),
                     (double)((float)(unkuint9)(uStack_b8 - local_c0) * 9.536743e-07),
                     (double)((float)(unkuint9)uStack_b8 * 9.536743e-07),
                     (double)((float)(unkuint9)local_c8 * 9.536743e-07),
                     "mips: %.2f MB / limit: %0.2f MB (%s) / budget: %.2f MB | Global VRAM: %.2f MB / %.2f MB / %.2f MB"
                     ,puVar17);
  Printer::printLine((char *)&local_98,0.2,"Memory details:",
                     (double)((float)(unkuint9)DAT_0210ee78 * 9.536743e-07),
                     (double)((float)(unkuint9)DAT_0210ee80 * 9.536743e-07),
                     "numMips: %u | missing: %.2f MB | work: %.2f MB",(ulong)DAT_0210ee64);
  TVar5 = this[0x7c];
  if (TVar5 != (TextureStreamingManager)0x0) {
    Printer::printLine((char *)&local_98,0.2,"Overbudget protection:",&DAT_004d33bb,"ENABLED");
  }
  uVar20 = (uint)(TVar5 != (TextureStreamingManager)0x0);
  Printer::printLine((char *)&local_98,0.2,"Meta metric:","%u (the lower the better)",
                     (ulong)(uint)(DAT_0210ee24 *
                                  (int)((float)(unkuint9)DAT_0210ee68 * 9.536743e-07)));
  local_b0 = &DAT_0210f820;
  local_a8 = &DAT_0210f848;
  local_a0 = 0;
  Mutex::enterCriticalSection();
  if (DAT_0210f848 != DAT_0210f850) {
    local_90 = local_90 + -0.016;
                    /* try { // try from 006df20c to 006df21b has its CatchHandler @ 006df580 */
    Printer::printLine((char *)&local_98,
                       "Textures needing more mips on disk to reach ideal resolution:");
    iVar19 = (int)((ulong)(DAT_0210f850 - DAT_0210f848) >> 3) * 0x3e0f83e1;
    if (iVar19 != 0) {
      lVar21 = 0;
      uVar12 = 0;
      do {
        lVar9 = DAT_0210f848;
                    /* try { // try from 006df264 to 006df2a3 has its CatchHandler @ 006df5ac */
        pTVar15 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
        lVar16 = TextureStreamingManager::getTexture_main(pTVar15,*(ulonglong *)(lVar9 + lVar21));
        puVar17 = &DAT_004e1c00;
        if (lVar16 != 0) {
          puVar17 = (undefined *)(lVar16 + 0x31);
          if ((*(byte *)(lVar16 + 0x30) & 1) != 0) {
            puVar17 = *(undefined **)(lVar16 + 0x40);
          }
        }
        puVar2 = (undefined8 *)(lVar9 + lVar21);
        Printer::printLine((char *)&local_98,"%s [id: %u]: %s",puVar17,*puVar2,puVar2 + 1);
        uVar12 = uVar12 + 1;
        lVar21 = lVar21 + 0x108;
        uVar14 = (DAT_0210f850 - DAT_0210f848 >> 3) * 0x3e0f83e1;
        iVar19 = (int)uVar14;
      } while (uVar12 < (uVar14 & 0xffffffff));
    }
    uVar20 = iVar19 + uVar20 + 2;
  }
                    /* try { // try from 006df2d8 to 006df2db has its CatchHandler @ 006df590 */
  Mutex::leaveCriticalSection();
  local_b0 = &DAT_0210f860;
  local_a8 = &DAT_0210f888;
  local_a0 = 0;
  Mutex::enterCriticalSection();
  if (DAT_0210f888 != DAT_0210f890) {
    local_90 = local_90 + -0.016;
                    /* try { // try from 006df320 to 006df32f has its CatchHandler @ 006df57c */
    Printer::printLine((char *)&local_98,"Constrained textures by memory budget:");
    iVar19 = (int)((ulong)(DAT_0210f890 - DAT_0210f888) >> 3) * 0x3e0f83e1;
    if (iVar19 != 0) {
      lVar21 = 0;
      uVar12 = 0;
      do {
        lVar9 = DAT_0210f888;
                    /* try { // try from 006df378 to 006df3b7 has its CatchHandler @ 006df5a8 */
        pTVar15 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
        lVar16 = TextureStreamingManager::getTexture_main(pTVar15,*(ulonglong *)(lVar9 + lVar21));
        puVar17 = &DAT_004e1c00;
        if (lVar16 != 0) {
          puVar17 = (undefined *)(lVar16 + 0x31);
          if ((*(byte *)(lVar16 + 0x30) & 1) != 0) {
            puVar17 = *(undefined **)(lVar16 + 0x40);
          }
        }
        puVar2 = (undefined8 *)(lVar9 + lVar21);
        Printer::printLine((char *)&local_98,"%s [id: %u]: %s",puVar17,*puVar2,puVar2 + 1);
        uVar12 = uVar12 + 1;
        lVar21 = lVar21 + 0x108;
        uVar14 = (DAT_0210f890 - DAT_0210f888 >> 3) * 0x3e0f83e1;
        iVar19 = (int)uVar14;
      } while (uVar12 < (uVar14 & 0xffffffff));
    }
    uVar20 = uVar20 + iVar19 + 2;
  }
                    /* try { // try from 006df3ec to 006df3ef has its CatchHandler @ 006df58c */
  Mutex::leaveCriticalSection();
  if (render(SharedRenderArgs_const&,unsigned_int)::debug_Feedback != '\0') {
    TextureStreamingManager::debug_getTextureInfos_main((char *)this);
    puVar2 = (undefined8 *)(ulong)((byte)local_b0 >> 1);
    if (((ulong)local_b0 & 1) != 0) {
      puVar2 = local_a8;
    }
    if (puVar2 != (undefined8 *)0x0) {
      uVar12 = (ulong)&local_b0 | 1;
      if (((ulong)local_b0 & 1) != 0) {
        uVar12 = CONCAT71(uStack_9f,local_a0);
      }
                    /* try { // try from 006df444 to 006df453 has its CatchHandler @ 006df560 */
      Printer::printLine((char *)&local_98,&DAT_004d33bb,uVar12);
    }
    if (((byte)local_b0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_9f,local_a0));
    }
  }
  local_b0 = &DAT_0210ee88;
  local_a0 = 0;
  local_a8 = (undefined8 *)&DAT_0210eeb0;
  local_90 = (float)NEON_fmadd((float)(ulong)(0x1d - uVar20),0xbc83126f,local_90);
  Mutex::enterCriticalSection();
                    /* try { // try from 006df4a0 to 006df4af has its CatchHandler @ 006df588 */
  Printer::printLine((char *)&local_98,"History: (last 5)");
  uVar18 = DAT_0210f810;
  uVar20 = DAT_0210f810;
  if ((int)DAT_0210f810 < 6) {
    uVar20 = 5;
  }
  uVar20 = uVar20 - 5;
  if (uVar20 < DAT_0210f810) {
    do {
      uVar8 = 0;
      if (DAT_0210f818 != 0) {
        uVar8 = (uVar20 + DAT_0210f814) / DAT_0210f818;
      }
      lVar9 = (ulong)((uVar20 + DAT_0210f814) - uVar8 * DAT_0210f818) * 0x18;
      lVar21 = lVar9 + 0x210eeb1;
      if (((&DAT_0210eeb0)[lVar9] & 1) != 0) {
        lVar21 = *(long *)(&DAT_0210eec0 + lVar9);
      }
                    /* try { // try from 006df504 to 006df50f has its CatchHandler @ 006df594 */
      Printer::printLine((char *)&local_98,&DAT_004d33bb,lVar21);
      uVar20 = uVar20 + 1;
    } while (uVar18 != uVar20);
  }
                    /* try { // try from 006df51c to 006df523 has its CatchHandler @ 006df584 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar10 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


