// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateChangeRequest_async
// Entry Point: 0096f160
// Size: 852 bytes
// Signature: undefined __thiscall updateChangeRequest_async(DowngradePipeline * this, ulonglong param_1, uint param_2)


/* TextureStreamingManager::DowngradePipeline::updateChangeRequest_async(unsigned long long,
   unsigned int) */

undefined4 __thiscall
TextureStreamingManager::DowngradePipeline::updateChangeRequest_async
          (DowngradePipeline *this,ulonglong param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulonglong *puVar8;
  long *plVar9;
  ulonglong *puVar10;
  ulong uVar11;
  ulonglong **ppuVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  if (((DAT_02110160 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_02110160), iVar6 != 0)) {
                    /* try { // try from 0096f478 to 0096f483 has its CatchHandler @ 0096f4b4 */
    TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110160);
  }
  cVar4 = DAT_021100e0;
  if (DAT_021100e0 == '\0') {
    Mutex::enterCriticalSection();
                    /* try { // try from 0096f250 to 0096f257 has its CatchHandler @ 0096f4e0 */
    Mutex::leaveCriticalSection();
    lVar1 = *(long *)(this + 0x68);
    if (*(long *)(this + 0x70) != lVar1) {
      uVar11 = *(ulong *)(this + 0x80);
      puVar10 = *(ulonglong **)(lVar1 + (uVar11 / 0xaa) * 8);
      puVar15 = puVar10 + (uVar11 % 0xaa) * 3;
      puVar8 = (ulonglong *)
               (*(long *)(lVar1 + ((*(long *)(this + 0x88) + uVar11) / 0xaa) * 8) +
               ((*(long *)(this + 0x88) + uVar11) % 0xaa) * 0x18);
      if (puVar15 == puVar8) goto LAB_0096f2ec;
      ppuVar12 = (ulonglong **)(lVar1 + (uVar11 / 0xaa) * 8);
      do {
        if (*puVar15 == param_1) goto LAB_0096f2ec;
        puVar15 = puVar15 + 3;
        if ((long)puVar15 - (long)puVar10 == 0xff0) {
          ppuVar12 = ppuVar12 + 1;
          puVar10 = *ppuVar12;
          puVar15 = puVar10;
        }
      } while (puVar15 != puVar8);
LAB_0096f414:
      uVar14 = 0;
      goto joined_r0x0096f414;
    }
    uVar14 = 0;
  }
  else {
    lVar1 = *(long *)(this + 0x10);
    if (*(long *)(this + 0x18) == lVar1) {
      uVar14 = 0;
      goto LAB_0096f438;
    }
    uVar11 = *(ulong *)(this + 0x28);
    puVar10 = *(ulonglong **)(lVar1 + (uVar11 / 0xaa) * 8);
    puVar15 = puVar10 + (uVar11 % 0xaa) * 3;
    puVar8 = (ulonglong *)
             (*(long *)(lVar1 + ((*(long *)(this + 0x30) + uVar11) / 0xaa) * 8) +
             ((*(long *)(this + 0x30) + uVar11) % 0xaa) * 0x18);
    if (puVar15 == puVar8) {
LAB_0096f2ec:
      if (puVar15 != puVar8) {
        uVar11 = *(ulong *)(*(long *)this + 0x18);
        uVar17 = NEON_cnt(uVar11,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if ((uint)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) < 2) {
          uVar13 = uVar11 - 1 & param_1;
        }
        else {
          uVar13 = param_1;
          if (uVar11 <= param_1) {
            uVar13 = 0;
            if (uVar11 != 0) {
              uVar13 = param_1 / uVar11;
            }
            uVar13 = param_1 - uVar13 * uVar11;
          }
        }
        plVar9 = *(long **)(*(long *)(*(long *)this + 0x10) + uVar13 * 8);
        do {
          do {
            plVar9 = (long *)*plVar9;
          } while (plVar9[1] != param_1);
        } while (plVar9[2] != param_1);
        uVar2 = *(int *)((long)plVar9 + 0x3c) - 1;
        iVar6 = 0;
        if (uVar2 <= *(uint *)(plVar9 + 0x16)) {
          iVar6 = *(uint *)(plVar9 + 0x16) - uVar2;
        }
        if (iVar6 + *(int *)(puVar15 + 1) < (int)param_2) goto LAB_0096f414;
        iVar6 = *(int *)((long)puVar15 + 0xc);
        iVar5 = computeMipRangeSize((StreamingDesc *)(plVar9 + 3),*(int *)(puVar15 + 1) - param_2);
        uVar2 = iVar5 - iVar6;
        *(uint *)(puVar15 + 1) = *(int *)(puVar15 + 1) - param_2;
        *(int *)((long)puVar15 + 0xc) = -iVar5;
        FUN_00f27700(uVar2,this + 0x1a0);
        DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
        logFeedback("[DowngradePipeline] 0: increase downgrade request for texture [id: %llu] numMoreRemoveMips: %u additional: -%.2f MB"
                    ,(double)((float)(ulong)uVar2 * 9.536743e-07),param_1,(ulong)param_2);
        uVar14 = 1;
        goto joined_r0x0096f414;
      }
    }
    else {
      ppuVar12 = (ulonglong **)(lVar1 + (uVar11 / 0xaa) * 8);
      do {
        if (*puVar15 == param_1) goto LAB_0096f2ec;
        puVar15 = puVar15 + 3;
        if ((long)puVar15 - (long)puVar10 == 0xff0) {
          ppuVar12 = ppuVar12 + 1;
          puVar10 = *ppuVar12;
          puVar15 = puVar10;
        }
      } while (puVar15 != puVar8);
    }
    uVar14 = 0;
joined_r0x0096f414:
    if (cVar4 != '\0') goto LAB_0096f438;
  }
  Mutex::enterCriticalSection();
                    /* try { // try from 0096f430 to 0096f437 has its CatchHandler @ 0096f4cc */
  Mutex::leaveCriticalSection();
LAB_0096f438:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


