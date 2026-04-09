// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryCreateRequest_async
// Entry Point: 0096c8a4
// Size: 532 bytes
// Signature: undefined __thiscall tryCreateRequest_async(UpgradePipeline * this, ulonglong param_1, uint param_2)


/* TextureStreamingManager::UpgradePipeline::tryCreateRequest_async(unsigned long long, unsigned
   int) */

uint __thiscall
TextureStreamingManager::UpgradePipeline::tryCreateRequest_async
          (UpgradePipeline *this,ulonglong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulonglong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long **pplVar13;
  ulonglong uVar14;
  long *plVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar6 = CommonPipelineData::tryChangeTextureStatus_any(*(CommonPipelineData **)this,param_1,0,1);
  if ((uVar6 & 1) == 0) goto LAB_0096ca98;
  FUN_00f27700(1,this + 0x230);
  uVar8 = *(ulong *)(*(long *)this + 0x18);
  if (uVar8 == 0) {
LAB_0096c998:
    plVar15 = (long *)0x0;
  }
  else {
    uVar17 = NEON_cnt(uVar8,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar11 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar8 - 1 & param_1;
    }
    else {
      uVar12 = param_1;
      if (uVar8 <= param_1) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = param_1 / uVar8;
        }
        uVar12 = param_1 - uVar12 * uVar8;
      }
    }
    pplVar13 = *(long ***)(*(long *)(*(long *)this + 0x10) + uVar12 * 8);
    if (pplVar13 == (long **)0x0) goto LAB_0096c998;
    plVar15 = *pplVar13;
    if (plVar15 != (long *)0x0) {
      do {
        uVar14 = plVar15[1];
        if (uVar14 == param_1) {
          if (plVar15[2] == param_1) break;
        }
        else {
          if (uVar11 < 2) {
            uVar14 = uVar14 & uVar8 - 1;
          }
          else if (uVar8 <= uVar14) {
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = uVar14 / uVar8;
            }
            uVar14 = uVar14 - uVar5 * uVar8;
          }
          if (uVar14 != uVar12) goto LAB_0096c998;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  uVar14 = Watch::getCurrentTicks();
  iVar7 = computeMipRangeSize((StreamingDesc *)(plVar15 + 3),param_2);
  uVar2 = *(uint *)(plVar15 + 0x16);
  uVar3 = *(uint *)(plVar15 + 10) >> (ulong)(*(int *)(plVar15 + 0xc) - uVar2 & 0x1f);
  uVar4 = *(uint *)((long)plVar15 + 0x54) >> (ulong)(*(int *)(plVar15 + 0xc) - uVar2 & 0x1f);
  iVar1 = *(int *)((long)plVar15 + 0xb4) + uVar2;
  logFeedback("[UpgradePipeline] 0: create request for texture [id: %llu] resolution %ix%i => %ix%i (+%u mips: %i/%i => %i/%i) +%u B"
              ,param_1,(ulong)uVar3,(ulong)uVar4,(ulong)(uVar3 << (ulong)(param_2 & 0x1f)),
              (ulong)(uVar4 << (ulong)(param_2 & 0x1f)),(ulong)param_2,(ulong)uVar2,iVar1,
              uVar2 + param_2,iVar1,iVar7);
  lVar9 = *(long *)(this + 0x10);
  DAT_0210ee50 = *(int *)(this + 0x1d0) + iVar7;
  *(int *)(this + 0x1d0) = DAT_0210ee50;
  uVar8 = *(long *)(this + 0x30) + *(long *)(this + 0x28);
  uVar11 = 0;
  if (*(long *)(this + 0x18) - lVar9 != 0) {
    uVar11 = (*(long *)(this + 0x18) - lVar9 >> 3) * 0xaa - 1;
  }
  if (uVar11 == uVar8) {
    std::__ndk1::
    deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
    ::__add_back_capacity();
    lVar9 = *(long *)(this + 0x10);
    uVar8 = *(long *)(this + 0x28) + *(long *)(this + 0x30);
  }
  puVar10 = (ulonglong *)(*(long *)(lVar9 + (uVar8 / 0xaa) * 8) + (uVar8 % 0xaa) * 0x18);
  *puVar10 = param_1;
  *(uint *)(puVar10 + 1) = param_2;
  *(int *)((long)puVar10 + 0xc) = iVar7;
  puVar10[2] = uVar14;
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
LAB_0096ca98:
  return uVar6 & 1;
}


