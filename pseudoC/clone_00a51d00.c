// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a51d00
// Size: 380 bytes
// Signature: undefined __thiscall clone(GsShape * this, char * param_1, RawTransformGroup * * param_2, uint param_3, STREAM_QUEUE param_4)


/* GsShape::clone(char const*, RawTransformGroup**, unsigned int, StreamManager::STREAM_QUEUE) */

GsShape * __thiscall
GsShape::clone(GsShape *this,char *param_1,RawTransformGroup **param_2,uint param_3,
              STREAM_QUEUE param_4)

{
  GsMaterial **ppGVar1;
  undefined4 uVar2;
  GsShape *this_00;
  Geometry *pGVar3;
  StreamManager *pSVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  plVar7 = *(long **)(this + 0x170);
  if (plVar7 != (long *)0x0) {
    if (((uint)plVar7[4] >> 0x17 & 1) != 0) {
      pGVar3 = (Geometry *)(**(code **)(*plVar7 + 0x58))(plVar7);
      pSVar4 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable(pSVar4,(Streamable *)(pGVar3 + 0x80),param_4);
      this_00 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00a51d8c to 00a51d97 has its CatchHandler @ 00a51e80 */
      GsShape(this_00,param_1,pGVar3);
      goto LAB_00a51dd0;
    }
    if (((uint)plVar7[4] >> 0x16 & 1) != 0) {
      pGVar3 = (Geometry *)SplineGeometry::clone();
      pSVar4 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable(pSVar4,(Streamable *)(pGVar3 + 200),param_4);
      this_00 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00a51dc4 to 00a51dcf has its CatchHandler @ 00a51e7c */
      GsShape(this_00,param_1,pGVar3);
      goto LAB_00a51dd0;
    }
  }
  this_00 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00a51d4c to 00a51d57 has its CatchHandler @ 00a51e84 */
  GsShape(this_00,param_1,(Geometry *)plVar7);
LAB_00a51dd0:
  setShapeFlags(this_00,*(uint *)(this + 400));
  uVar5 = (ulong)*(ushort *)(this + 0x196);
  if (*(ushort *)(this + 0x196) != 0) {
    lVar6 = 0;
    uVar8 = 0;
    do {
      ppGVar1 = (GsMaterial **)(this + 0x178);
      if ((int)uVar5 != 1) {
        ppGVar1 = (GsMaterial **)(*(long *)(this + 0x178) + lVar6);
      }
      addMaterial(this_00,*ppGVar1);
      uVar5 = (ulong)*(ushort *)(this + 0x196);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar8 < uVar5);
  }
  uVar2 = *(undefined4 *)(this + 0x1c0);
  uVar9 = *(undefined4 *)(this + 0x1c4);
  *(undefined8 *)(this_00 + 0x1b8) = *(undefined8 *)(this + 0x1b8);
  *(undefined4 *)(this_00 + 0x1c0) = uVar2;
  *(undefined4 *)(this_00 + 0x1c4) = uVar9;
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this_00,(TransformGroup *)this)
  ;
  if (((byte)this[400] & 1) != 0) {
    setBindBones(this_00,param_2,param_3,false);
  }
  return this_00;
}


