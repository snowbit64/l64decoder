// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClusterFit
// Entry Point: 00de9920
// Size: 208 bytes
// Signature: undefined __thiscall ClusterFit(ClusterFit * this, ColourSet * param_1, int param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* squish::ClusterFit::ClusterFit(squish::ColourSet const*, int) */

void __thiscall squish::ClusterFit::ClusterFit(ClusterFit *this,ColourSet *param_1,int param_2)

{
  long lVar1;
  float *in_x3;
  uint *puVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined4 uVar8;
  Sym3x3 aSStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ColourFit::ColourFit((ColourFit *)this,param_1,param_2);
  auVar5 = _DAT_004c3b10;
  uVar8 = 0x3e59b3d0;
  uVar3 = 8;
  if ((*(uint *)(this + 0x10) & 0x100) == 0) {
    uVar3 = 1;
  }
  auVar4 = NEON_cmeq(ZEXT416(*(uint *)(this + 0x10) & 0x20),ZEXT816(0),4);
  auVar7 = NEON_fmov(0x3f800000,4);
  puVar2 = *(uint **)(this + 8);
  *(undefined4 *)(this + 0x14) = uVar3;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  auVar5 = NEON_bsl(auVar4,auVar7,auVar5,1);
  auVar7._8_4_ = 0x7f7fffff;
  auVar7._0_8_ = 0x7f7fffff7f7fffff;
  auVar7._12_4_ = 0x7f7fffff;
  *(undefined ***)this = &PTR_Compress3_01013188;
  *(long *)(this + 0x1bc) = auVar5._8_8_;
  *(long *)(this + 0x1b4) = auVar5._0_8_;
  *(long *)(this + 0x1cc) = auVar7._8_8_;
  *(undefined8 *)(this + 0x1c4) = 0x7f7fffff7f7fffff;
  ComputeWeightedCovariance((squish *)(ulong)*puVar2,(int)puVar2 + 4,(Vec3 *)(puVar2 + 0x31),in_x3);
  uVar6 = auVar7._0_4_;
  uVar3 = ComputePrincipleComponent(aSStack_50);
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


