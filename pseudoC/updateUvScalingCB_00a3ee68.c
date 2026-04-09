// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateUvScalingCB
// Entry Point: 00a3ee68
// Size: 188 bytes
// Signature: undefined __thiscall updateUvScalingCB(ScreenSpaceProcessor * this, ICommandBuffer * param_1, RenderArgs * param_2, bool param_3)


/* ScreenSpaceProcessor::updateUvScalingCB(ICommandBuffer*, RenderArgs const*, bool) */

void __thiscall
ScreenSpaceProcessor::updateUvScalingCB
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,RenderArgs *param_2,bool param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  uVar5 = 0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(this + 0x1868);
  if (param_3) {
    fVar4 = (float)*(undefined8 *)(param_2 + 0x590);
    fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x590) >> 0x20);
    uVar5 = CONCAT44(fVar6 + fVar6,fVar4 + fVar4);
  }
  uVar8 = NEON_ucvtf(uVar7,4);
  uVar7 = NEON_ucvtf(CONCAT44((int)((ulong)uVar7 >> 0x20) + 1,(int)uVar7 + 1) & 0xfffffffefffffffe,4
                    );
  puVar2 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x19e8) + 0x10))(*(long **)(this + 0x19e8),param_1);
  puVar2[1] = uVar5;
  *puVar2 = CONCAT44((float)((ulong)uVar8 >> 0x20) / (float)((ulong)uVar7 >> 0x20),
                     (float)uVar8 / (float)uVar7);
  uVar5 = NEON_ucvtf(*(undefined8 *)(this + 0x1868),4);
  puVar2[2] = uVar5;
  (**(code **)(**(long **)(this + 0x19e8) + 0x18))(*(long **)(this + 0x19e8),param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


