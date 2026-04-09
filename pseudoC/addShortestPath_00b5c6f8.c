// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShortestPath
// Entry Point: 00b5c6f8
// Size: 72 bytes
// Signature: undefined __thiscall addShortestPath(GsQuaternion * this, GsQuaternion * param_1, float param_2)


/* GsQuaternion::addShortestPath(GsQuaternion const&, float) */

void __thiscall
GsQuaternion::addShortestPath(GsQuaternion *this,GsQuaternion *param_1,float param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = (float)*(undefined8 *)(param_1 + 8);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar8 = (float)*(undefined8 *)param_1;
  fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar4 = (float)*(undefined8 *)this;
  fVar6 = (float)*(undefined8 *)(this + 8);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  auVar2 = NEON_fcmgt(ZEXT816(0),
                      ZEXT416((uint)(fVar5 * fVar9 + fVar8 * fVar4 + fVar10 * fVar6 + fVar11 * fVar7
                                    )),4);
  auVar3._0_4_ = auVar2._0_4_;
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar2._12_4_ = fVar11;
  auVar2._0_12_ = *(undefined (*) [12])param_1;
  auVar1._4_4_ = -fVar9;
  auVar1._0_4_ = -fVar8;
  auVar1._8_4_ = -fVar10;
  auVar1._12_4_ = -fVar11;
  auVar2 = NEON_bsl(auVar3,auVar1,auVar2,1);
  *(ulong *)(this + 8) = CONCAT44(fVar7 + auVar2._12_4_ * param_2,fVar6 + auVar2._8_4_ * param_2);
  *(ulong *)this = CONCAT44(fVar5 + auVar2._4_4_ * param_2,fVar4 + auVar2._0_4_ * param_2);
  return;
}


