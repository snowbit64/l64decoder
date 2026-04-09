// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nlerp
// Entry Point: 00b5c318
// Size: 96 bytes
// Signature: undefined __thiscall nlerp(GsQuaternion * this, GsQuaternion * param_1, GsQuaternion * param_2, float param_3)


/* GsQuaternion::nlerp(GsQuaternion const&, GsQuaternion const&, float) */

void __thiscall
GsQuaternion::nlerp(GsQuaternion *this,GsQuaternion *param_1,GsQuaternion *param_2,float param_3)

{
  undefined auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined auVar7 [16];
  
  auVar7 = *(undefined (*) [16])param_2;
  fVar2 = (auVar7._0_4_ - (float)*(undefined8 *)param_1) * param_3;
  fVar3 = (auVar7._4_4_ - (float)((ulong)*(undefined8 *)param_1 >> 0x20)) * param_3;
  fVar4 = (auVar7._8_4_ - (float)*(undefined8 *)(param_1 + 8)) * param_3;
  fVar5 = (auVar7._12_4_ - (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20)) * param_3;
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar5;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar7 = NEON_ext(auVar7,auVar1,4,1);
  *(float *)(this + 0xc) = fVar5;
  *(float *)this = fVar2;
  *(long *)(this + 4) = auVar7._0_8_;
  auVar7 = *(undefined (*) [16])param_1;
  fVar2 = fVar2 + auVar7._0_4_;
  fVar3 = fVar3 + auVar7._4_4_;
  fVar4 = fVar4 + auVar7._8_4_;
  fVar5 = fVar5 + auVar7._12_4_;
  fVar6 = 1.0 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
  *(ulong *)(this + 8) = CONCAT44(fVar5 * fVar6,fVar4 * fVar6);
  *(ulong *)this = CONCAT44(fVar3 * fVar6,fVar2 * fVar6);
  return;
}


