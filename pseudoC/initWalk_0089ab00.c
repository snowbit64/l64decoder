// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWalk
// Entry Point: 0089ab00
// Size: 512 bytes
// Signature: undefined __thiscall initWalk(SimulatedPedestrian * this, PedestrianSpline * param_1, float param_2, float param_3, float param_4)


/* SimulatedPedestrian::initWalk(PedestrianSpline*, float, float, float) */

void __thiscall
SimulatedPedestrian::initWalk
          (SimulatedPedestrian *this,PedestrianSpline *param_1,float param_2,float param_3,
          float param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  *(undefined2 *)(this + 0x71) = 0;
  *(float *)(this + 0x84) = param_3;
  fVar9 = param_4 / *(float *)(this + 0x9c);
  *(float *)(this + 0x80) = param_2;
  *(float *)(this + 0x98) = param_4;
  *(float *)(this + 0x94) = param_4;
  *(PedestrianSpline **)(this + 0x78) = param_1;
  this[0x88] = (SimulatedPedestrian)0x0;
  fVar7 = *(float *)(param_1 + 0x1c);
  *(float *)(this + 0xb0) = fVar9 * *(float *)(this + 0x9c) * fVar9 * 0.5 * 0.01;
  uVar4 = MathUtil::getRandomMinMax(-fVar7,fVar7);
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(this + 0xa0) = uVar4;
  *(undefined4 *)(this + 0xb4) = uVar4;
  (**(code **)(*plVar1 + 0x10))(*(undefined4 *)(this + 0x84),plVar1,this + 0x1c,this + 0x28);
  lVar3 = *(long *)param_1;
  RawTransformGroup::updateWorldTransformation();
  uVar5 = *(undefined4 *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x20);
  uVar10 = *(undefined4 *)(this + 0x24);
  lVar2 = *(long *)param_1;
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar3 + 0xb8),fVar7 * *(float *)(lVar3 + 200));
  fVar9 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar3 + 0xd8),uVar4);
  *(float *)(this + 0x1c) = *(float *)(lVar3 + 0xe8) + fVar9;
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar3 + 0xbc),fVar7 * *(float *)(lVar3 + 0xcc));
  fVar9 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar3 + 0xdc),uVar4);
  *(float *)(this + 0x20) = *(float *)(lVar3 + 0xec) + fVar9;
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar3 + 0xc0),fVar7 * *(float *)(lVar3 + 0xd0));
  fVar7 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar3 + 0xe0),uVar4);
  *(float *)(this + 0x24) = *(float *)(lVar3 + 0xf0) + fVar7;
  RawTransformGroup::updateWorldTransformation();
  uVar5 = *(undefined4 *)(this + 0x28);
  fVar6 = *(float *)(this + 0x2c);
  uVar10 = *(undefined4 *)(this + 0x30);
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar2 + 0xb8),fVar6 * *(float *)(lVar2 + 200));
  fVar7 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar2 + 0xd8),uVar4);
  *(float *)(this + 0x28) = fVar7;
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar2 + 0xbc),fVar6 * *(float *)(lVar2 + 0xcc));
  fVar9 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar2 + 0xdc),uVar4);
  *(float *)(this + 0x2c) = fVar9;
  uVar4 = NEON_fmadd(uVar5,*(undefined4 *)(lVar2 + 0xc0),fVar6 * *(float *)(lVar2 + 0xd0));
  fVar6 = (float)NEON_fmadd(uVar10,*(undefined4 *)(lVar2 + 0xe0),uVar4);
  uVar4 = NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
  fVar11 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
  fVar8 = 1.0;
  if (1e-06 < fVar11) {
    fVar8 = 1.0 / SQRT(fVar11);
  }
  *(float *)(this + 0x28) = fVar7 * fVar8;
  *(float *)(this + 0x2c) = fVar9 * fVar8;
  *(float *)(this + 0x30) = fVar6 * fVar8;
  uVar4 = MathUtil::getRandomMinMax(0.0,1.0);
  *(undefined4 *)(this + 0xbc) = uVar4;
  uVar4 = MathUtil::getRandomMinMax(1.2,2.2);
  *(undefined4 *)(this + 0xc0) = uVar4;
  findNextSpline();
  return;
}


