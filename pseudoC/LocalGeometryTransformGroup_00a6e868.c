// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LocalGeometryTransformGroup
// Entry Point: 00a6e868
// Size: 232 bytes
// Signature: undefined __thiscall LocalGeometryTransformGroup(LocalGeometryTransformGroup * this, char * param_1, LocalGeometryTransformGroupDesc * param_2)


/* LocalGeometryTransformGroup::LocalGeometryTransformGroup(char const*,
   LocalGeometryTransformGroupDesc const&) */

void __thiscall
LocalGeometryTransformGroup::LocalGeometryTransformGroup
          (LocalGeometryTransformGroup *this,char *param_1,LocalGeometryTransformGroupDesc *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  uVar1 = *(uint *)(param_2 + 4);
  *(undefined ***)this = &PTR__LocalGeometryTransformGroup_00fe3ce0;
  *(undefined ***)(this + 0x158) = &PTR__LocalGeometryTransformGroup_00fe3d70;
                    /* try { // try from 00a6e8b0 to 00a6e927 has its CatchHandler @ 00a6e950 */
  RawTransformGroup::setObjectMask((RawTransformGroup *)this,uVar1);
  fVar4 = *(float *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (LocalGeometryTransformGroup)0x0;
  this[0x1b0] = (LocalGeometryTransformGroup)0x0;
  *(float *)(this + 0x160) = fVar4;
  *(undefined4 *)(this + 0x16c) = uVar2;
  *(float *)(this + 0x164) = fVar4 * 0.5;
  *(undefined4 *)(this + 0x170) = 0x42480000;
  lVar3 = EngineManager::getInstance();
  fVar5 = *(float *)(this + 0x170);
  fVar4 = *(float *)(lVar3 + 0x1cc) * 50.0;
  *(float *)(this + 0x174) = fVar4;
  lVar3 = EngineManager::getInstance();
  if (fVar5 * *(float *)(lVar3 + 0x1d0) <= fVar4) {
    fVar4 = *(float *)(this + 0x174);
  }
  else {
    fVar4 = *(float *)(this + 0x170);
    lVar3 = EngineManager::getInstance();
    fVar4 = fVar4 * *(float *)(lVar3 + 0x1d0);
  }
  *(float *)(this + 0x178) = fVar4;
  return;
}


