// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 00b13bf8
// Size: 364 bytes
// Signature: undefined __thiscall process(FDNReverb * this, float * param_1, float * param_2, uint param_3)


/* FDNReverb::process(float*, float*, unsigned int) */

void __thiscall FDNReverb::process(FDNReverb *this,float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  undefined4 uVar12;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      fVar11 = (float)IIRFilter::processSample
                                (*(IIRFilter **)(this + 0x150),*(float *)((long)param_1 + uVar10));
      uVar12 = IIRFilter::processSample(*(IIRFilter **)(this + 0x148),fVar11);
      uVar2 = *(uint *)(this + 4);
      uVar3 = *(uint *)(this + 0x14);
      lVar8 = *(long *)(this + 8);
      *(undefined4 *)(lVar8 + (ulong)(uVar3 & uVar2) * 4) = uVar12;
      fVar11 = (float)processEarlyReflections
                                (this,*(float *)(lVar8 + (ulong)(uVar2 - **(int **)(this + 0x20) &
                                                                uVar3) * 4));
      piVar6 = *(int **)(this + 0x20);
      iVar4 = *(int *)(this + 4);
      uVar2 = *(uint *)(this + 0x14);
      lVar9 = *(long *)(this + 8);
      lVar8 = (ulong)(iVar4 - *piVar6 & uVar2) * 4;
      *(float *)(lVar9 + lVar8) = fVar11 + *(float *)(lVar9 + lVar8);
      processLateReverb(this,*(float *)(lVar9 + (ulong)(iVar4 - piVar6[1] & uVar2) * 4),&local_68);
      uVar7 = uVar10 & 0xfffffffc;
      uVar10 = uVar10 + 4;
      pfVar1 = param_2 + uVar7;
      *pfVar1 = *(float *)(this + 0xd8) * (fVar11 + local_68);
      pfVar1[1] = *(float *)(this + 0xd8) * (fVar11 + fStack_64);
      pfVar1[2] = *(float *)(this + 0xd8) * (fVar11 + local_60);
      pfVar1[3] = *(float *)(this + 0xd8) * (fVar11 + fStack_5c);
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    } while ((ulong)param_3 * 4 - uVar10 != 0);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


