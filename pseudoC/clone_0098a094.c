// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 0098a094
// Size: 176 bytes
// Signature: undefined __cdecl clone(char * param_1, RawTransformGroup * * param_2, uint param_3, STREAM_QUEUE param_4)


/* MeshSplitShape::clone(char const*, RawTransformGroup**, unsigned int,
   StreamManager::STREAM_QUEUE) */

undefined8 *
MeshSplitShape::clone(char *param_1,RawTransformGroup **param_2,uint param_3,STREAM_QUEUE param_4)

{
  int iVar1;
  undefined8 *this;
  Geometry *pGVar2;
  long lVar3;
  
  pGVar2 = *(Geometry **)(param_1 + 0x170);
  this = (undefined8 *)operator_new(0x218);
  lVar3 = *(long *)(param_1 + 0x200);
                    /* try { // try from 0098a0c4 to 0098a0cf has its CatchHandler @ 0098a144 */
  GsShape::GsShape((GsShape *)this,(char *)param_2,pGVar2);
  this[0x40] = lVar3;
  iVar1 = *(int *)(lVar3 + 0x14);
  *this = &PTR__MeshSplitShape_00fe0a50;
  this[0x2b] = &PTR__MeshSplitShape_00fe0ac0;
  this[0x2c] = &PTR__MeshSplitShape_00fe0ae8;
  this[2] = this[2] | 0x40000;
  *(int *)(lVar3 + 0x14) = iVar1 + 1;
  this[0x42] = 0xffffffff00000000;
  this[0x41] = 0xffffffffffffffff;
  GsShape::copyShapePropertiesFrom((GsShape *)this,(GsShape *)param_1);
  *(undefined4 *)(this + 0x42) = *(undefined4 *)(param_1 + 0x210);
  return this;
}


