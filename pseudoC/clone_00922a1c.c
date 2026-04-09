// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00922a1c
// Size: 164 bytes
// Signature: undefined __cdecl clone(char * param_1, RawTransformGroup * * param_2, uint param_3)


/* DestructionShape::clone(char const*, RawTransformGroup**, unsigned int) */

DestructionShape * DestructionShape::clone(char *param_1,RawTransformGroup **param_2,uint param_3)

{
  DestructionGeometry *this;
  DestructionGeometryShared *pDVar1;
  DestructionShape *this_00;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 0x170);
  this = (DestructionGeometry *)operator_new(0xe8);
  pcVar2 = *(char **)(lVar3 + 0x18);
                    /* try { // try from 00922a4c to 00922a63 has its CatchHandler @ 00922acc */
  pDVar1 = (DestructionGeometryShared *)DestructionGeometry::getShared();
  DestructionGeometry::DestructionGeometry(this,pcVar2,pDVar1);
  this_00 = (DestructionShape *)operator_new(0x3d0);
                    /* try { // try from 00922a70 to 00922a7b has its CatchHandler @ 00922ac0 */
  DestructionShape(this_00,(char *)param_2,this);
  GsShape::copyShapePropertiesFrom((GsShape *)this_00,(GsShape *)param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  uVar4 = *(undefined8 *)(param_1 + 0x298);
  uVar7 = *(undefined8 *)(param_1 + 0x2b0);
  uVar6 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined4 *)(this_00 + 0x2b8) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined8 *)(this_00 + 0x2a0) = uVar5;
  *(undefined8 *)(this_00 + 0x298) = uVar4;
  *(undefined8 *)(this_00 + 0x2b0) = uVar7;
  *(undefined8 *)(this_00 + 0x2a8) = uVar6;
  return this_00;
}


