// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: merge
// Entry Point: 0089c460
// Size: 112 bytes
// Signature: undefined __thiscall merge(Obstacle * this, Obstacle * param_1, float param_2)


/* SimulatedPedestrian::Obstacle::merge(SimulatedPedestrian::Obstacle&, float) */

void __thiscall SimulatedPedestrian::Obstacle::merge(Obstacle *this,Obstacle *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar3;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar2 = (float)*(undefined8 *)param_1;
  fVar11 = (float)*(undefined8 *)(param_1 + 8);
  fVar16 = fVar2 - fVar11;
  fVar4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar17 = fVar4 - fVar13;
  fVar5 = (float)*(undefined8 *)this;
  fVar9 = (float)*(undefined8 *)(this + 8);
  fVar14 = fVar5 - fVar9;
  fVar7 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar15 = fVar7 - fVar10;
  uVar6 = CONCAT44(fVar7 + fVar10,fVar5 + fVar9);
  uVar8 = CONCAT44(fVar4 + fVar13,fVar2 + fVar11);
  uVar3 = NEON_fcmgt(CONCAT44(fVar15,fVar14),CONCAT44(fVar17,fVar16),4);
  uVar12 = NEON_fcmgt(uVar8,uVar6,4);
  uVar3 = NEON_bsl(uVar3,CONCAT44(fVar17,fVar16),CONCAT44(fVar15,fVar14),1);
  uVar6 = NEON_bit(uVar6,uVar8,uVar12,1);
  fVar7 = -param_2;
  fVar2 = (float)uVar3;
  fVar4 = (float)uVar6;
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar9 = (fVar2 + fVar4) * 0.5;
  fVar10 = ((float)((ulong)uVar3 >> 0x20) + fVar5) * 0.5;
  *(ulong *)this = CONCAT44(fVar10,fVar9);
  *(ulong *)(this + 8) = CONCAT44(fVar5 - fVar10,fVar4 - fVar9);
  if ((fVar2 < fVar7 || fVar4 != param_2) && (fVar2 < fVar7 || param_2 <= fVar4)) {
    uVar1 = (uint)(fVar7 <= fVar2 || fVar4 <= param_2);
    if (fVar7 <= fVar2) {
      uVar1 = 0xffffffff;
    }
    *(uint *)(this + 0x14) = uVar1;
  }
  return;
}


