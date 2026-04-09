// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nativeLoadMipsFromFile_async
// Entry Point: 0096d888
// Size: 520 bytes
// Signature: undefined __thiscall nativeLoadMipsFromFile_async(UpgradePipeline * this, ChangeRequest * param_1)


/* TextureStreamingManager::UpgradePipeline::nativeLoadMipsFromFile_async(TextureStreamingManager::ChangeRequest
   const&) */

void __thiscall
TextureStreamingManager::UpgradePipeline::nativeLoadMipsFromFile_async
          (UpgradePipeline *this,ChangeRequest *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uchar *local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uchar *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  logFeedback("[UpgradePipeline] 1a: start of sync file loading of texture [id: %llu]",
              *(undefined8 *)param_1);
  uVar12 = *(ulong *)param_1;
  uVar7 = *(ulong *)(*(long *)this + 0x18);
  if (uVar7 != 0) {
    uVar15 = NEON_cnt(uVar7,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar12;
    }
    else {
      uVar9 = uVar12;
      if (uVar7 <= uVar12) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar12 / uVar7;
        }
        uVar9 = uVar12 - uVar9 * uVar7;
      }
    }
    pplVar10 = *(long ***)(*(long *)(*(long *)this + 0x10) + uVar9 * 8);
    if (pplVar10 != (long **)0x0) {
      plVar13 = *pplVar10;
      if (plVar13 != (long *)0x0) {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar12) {
            if (plVar13[2] == uVar12) break;
          }
          else {
            if (uVar8 < 2) {
              uVar11 = uVar11 & uVar7 - 1;
            }
            else if (uVar7 <= uVar11) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar4 * uVar7;
            }
            if (uVar11 != uVar9) goto LAB_0096d978;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_0096d97c;
    }
  }
LAB_0096d978:
  plVar13 = (long *)0x0;
LAB_0096d97c:
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = *(int *)((long)plVar13 + 0xb4);
  pcVar1 = (char *)((long)plVar13 + 0x19);
  if ((*(byte *)(plVar13 + 3) & 1) != 0) {
    pcVar1 = (char *)plVar13[5];
  }
  local_80 = uVar2;
  acquireMipsBuffer_async(this,*(uint *)(param_1 + 0xc),&local_80);
  puVar6 = local_70;
  uVar7 = ImageLoadUtil::loadImageMipRange
                    (pcVar1,iVar3 - uVar2,uVar2,(ImageStreamingDesc *)(plVar13 + 7),&local_70,
                     (uint *)&uStack_78,(uint *)((ulong)&local_80 | 4));
  if (puVar6 != local_70) {
    Mutex::enterCriticalSection();
    if (puVar6 == *(uchar **)(this + 0x2a8)) {
      this[0x2a0] = (UpgradePipeline)0x0;
                    /* try { // try from 0096da18 to 0096da1f has its CatchHandler @ 0096da90 */
      Mutex::leaveCriticalSection();
    }
    else {
                    /* try { // try from 0096d9fc to 0096da03 has its CatchHandler @ 0096da94 */
      Mutex::leaveCriticalSection();
      if (puVar6 != (uchar *)0x0) {
        operator_delete__(puVar6);
      }
    }
  }
  if ((uVar7 & 1) == 0) {
    onLoadMipsFail_async(this,param_1,&local_80);
  }
  else {
    local_a0 = CONCAT44(uStack_7c,local_80);
    uStack_88 = *(undefined8 *)(param_1 + 0x10);
    uStack_98 = uStack_78;
    local_90 = local_70;
    local_a8 = uVar12;
    onLoadMipsSuccess_async(this,(WorkerResult *)&local_a8);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


