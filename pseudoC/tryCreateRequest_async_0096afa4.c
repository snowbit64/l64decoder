// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryCreateRequest_async
// Entry Point: 0096afa4
// Size: 484 bytes
// Signature: undefined __thiscall tryCreateRequest_async(DowngradePipeline * this, ulonglong param_1, uint param_2)


/* TextureStreamingManager::DowngradePipeline::tryCreateRequest_async(unsigned long long, unsigned
   int) */

uint __thiscall
TextureStreamingManager::DowngradePipeline::tryCreateRequest_async
          (DowngradePipeline *this,ulonglong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long **pplVar12;
  ulonglong uVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulonglong local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar7 = CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,param_1,0,3);
  if ((uVar7 & 1) == 0) goto LAB_0096b150;
  FUN_00f27700(1,this + 0x1a4);
  uVar9 = *(ulong *)(*(long *)this + 0x18);
  if (uVar9 == 0) {
LAB_0096b0a8:
    plVar14 = (long *)0x0;
  }
  else {
    uVar16 = NEON_cnt(uVar9,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & param_1;
    }
    else {
      uVar11 = param_1;
      if (uVar9 <= param_1) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = param_1 / uVar9;
        }
        uVar11 = param_1 - uVar11 * uVar9;
      }
    }
    pplVar12 = *(long ***)(*(long *)(*(long *)this + 0x10) + uVar11 * 8);
    if (pplVar12 == (long **)0x0) goto LAB_0096b0a8;
    plVar14 = *pplVar12;
    if (plVar14 != (long *)0x0) {
      do {
        uVar13 = plVar14[1];
        if (uVar13 == param_1) {
          if (plVar14[2] == param_1) break;
        }
        else {
          if (uVar10 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar5 * uVar9;
          }
          if (uVar13 != uVar11) goto LAB_0096b0a8;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  uVar16 = Watch::getCurrentTicks();
  iVar8 = computeMipRangeSize((StreamingDesc *)(plVar14 + 3),-param_2);
  uVar2 = *(uint *)(plVar14 + 0x16);
  uVar3 = *(uint *)(plVar14 + 10) >> (ulong)(*(int *)(plVar14 + 0xc) - uVar2 & 0x1f);
  uVar4 = *(uint *)((long)plVar14 + 0x54) >> (ulong)(*(int *)(plVar14 + 0xc) - uVar2 & 0x1f);
  iVar1 = *(int *)((long)plVar14 + 0xb4) + uVar2;
  logFeedback("[DowngradePipeline] 0: create request for texture [id: %llu] resolution %ix%i => %ix%i (-%u mips: %i/%i => %i/%i) %i B"
              ,param_1,(ulong)uVar3,(ulong)uVar4,(ulong)(uVar3 >> (ulong)(param_2 & 0x1f)),
              (ulong)(uVar4 >> (ulong)(param_2 & 0x1f)),(ulong)param_2,(ulong)uVar2,iVar1,
              uVar2 - param_2,iVar1,-iVar8);
  FUN_00f27700(iVar8,this + 0x1a0);
  DAT_0210ee60 = *(undefined4 *)(this + 0x1a0);
  local_80 = param_1;
  local_78 = -param_2;
  iStack_74 = -iVar8;
  local_70 = uVar16;
  dispatchNewRequest_async(this,&local_80);
LAB_0096b150:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


