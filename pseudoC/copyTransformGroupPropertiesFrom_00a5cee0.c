// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTransformGroupPropertiesFrom
// Entry Point: 00a5cee0
// Size: 360 bytes
// Signature: undefined __thiscall copyTransformGroupPropertiesFrom(TransformGroup * this, TransformGroup * param_1)


/* TransformGroup::copyTransformGroupPropertiesFrom(TransformGroup&) */

void __thiscall
TransformGroup::copyTransformGroupPropertiesFrom(TransformGroup *this,TransformGroup *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  PhysicsObject *pPVar4;
  undefined8 uVar5;
  
  if (((((byte)param_1[0x41] >> 3 & 1) != 0) &&
      (updateEulerFromMatrix(), ((byte)param_1[0x41] >> 3 & 1) != 0)) &&
     (updateEulerFromMatrix(), ((byte)param_1[0x41] >> 3 & 1) != 0)) {
    updateEulerFromMatrix();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined8 *)(this + 0x13c) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x150);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x150) = uVar2;
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffff7ff;
  updateTransformation();
  if (*(long *)(this + 0x108) != 0) {
    plVar3 = (long *)RawTransformGroup::getPhysicsObject();
    pPVar4 = (PhysicsObject *)(**(code **)(*plVar3 + 0x10))(plVar3,this);
    RawTransformGroup::setPhysicsObject((RawTransformGroup *)this,pPVar4);
  }
  RawTransformGroup::setClipDistance((RawTransformGroup *)this,*(float *)(param_1 + 0x118));
  RawTransformGroup::setMinClipDistance((RawTransformGroup *)this,*(float *)(param_1 + 0x11c));
  RawTransformGroup::setObjectMask
            ((RawTransformGroup *)this,
             *(uint *)(param_1 + 0x120) & (*(int *)(param_1 + 0x40) << 0x15) >> 0x1f);
  if (((byte)param_1[0x41] >> 1 & 1) != 0) {
    RawTransformGroup::setVisibilityCondition
              ((RawTransformGroup *)this,*(VisibilityCondition **)(param_1 + 0xf8),true);
  }
  pcVar1 = "";
  if (*(char **)(param_1 + 0x100) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x100);
  }
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  if (*pcVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = StringUtil::createStrCpy(pcVar1);
  }
  *(undefined8 *)(this + 0x100) = uVar5;
  ScenegraphNode::copyScenegraphNodePropertiesFrom((ScenegraphNode *)this,(ScenegraphNode *)param_1)
  ;
  *(undefined2 *)(this + 300) = *(undefined2 *)(param_1 + 300);
  return;
}


