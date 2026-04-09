// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TyreTrackSystem
// Entry Point: 008e15a8
// Size: 352 bytes
// Signature: undefined __thiscall TyreTrackSystem(TyreTrackSystem * this, TransformGroup * param_1, GsShape * param_2, TerrainTransformGroup * param_3, uint param_4, uint param_5)


/* TyreTrackSystem::TyreTrackSystem(TransformGroup*, GsShape*, TerrainTransformGroup*, unsigned int,
   unsigned int) */

void __thiscall
TyreTrackSystem::TyreTrackSystem
          (TyreTrackSystem *this,TransformGroup *param_1,GsShape *param_2,
          TerrainTransformGroup *param_3,uint param_4,uint param_5)

{
  GsMaterial **ppGVar1;
  uint uVar2;
  long lVar3;
  TyreTrackGeometry *this_00;
  GsShape *pGVar4;
  uint uVar5;
  uint uVar6;
  
  Entity::Entity((Entity *)this,"TyreTrackSystem",true);
  *(undefined ***)this = &PTR__TyreTrackSystem_00fde5d8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x4000000000000;
                    /* try { // try from 008e1600 to 008e160b has its CatchHandler @ 008e172c */
  GsShape::raiseShapeFlag(param_2,0x400);
  uVar2 = *(uint *)(param_2 + 400);
                    /* try { // try from 008e1610 to 008e1613 has its CatchHandler @ 008e1728 */
  lVar3 = EngineManager::getInstance();
  uVar5 = (uint)(*(float *)(lVar3 + 0x1dc) * (float)(ulong)param_5);
  if ((uVar5 & uVar5 - 1) != 0) {
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 - 1 & uVar6;
    } while (uVar5 != 0);
    uVar5 = uVar6 << 1;
  }
                    /* try { // try from 008e1644 to 008e164b has its CatchHandler @ 008e1734 */
  this_00 = (TyreTrackGeometry *)operator_new(0xb0);
                    /* try { // try from 008e1650 to 008e165f has its CatchHandler @ 008e1718 */
  TyreTrackGeometry::TyreTrackGeometry(this_00,param_4,uVar5,(MultiresTexture *)0x0);
  *(TyreTrackGeometry **)(this + 0x28) = this_00;
                    /* try { // try from 008e1664 to 008e166b has its CatchHandler @ 008e1734 */
  pGVar4 = (GsShape *)operator_new(0x200);
                    /* try { // try from 008e1670 to 008e167f has its CatchHandler @ 008e1708 */
  GsShape::GsShape(pGVar4,"TyreTracks",(Geometry *)this_00);
  *(GsShape **)(this + 0x20) = pGVar4;
                    /* try { // try from 008e1684 to 008e169b has its CatchHandler @ 008e1734 */
  ScenegraphNode::setCullOverride((ScenegraphNode *)pGVar4,true);
  GsShape::raiseShapeFlag(*(GsShape **)(this + 0x20),0x200);
  pGVar4 = *(GsShape **)(this + 0x20);
  *(uint *)(pGVar4 + 400) = *(uint *)(pGVar4 + 400) & 0xff3fffff | uVar2 & 0xc00000;
  ppGVar1 = (GsMaterial **)(param_2 + 0x178);
  if (*(short *)(param_2 + 0x196) != 1) {
    ppGVar1 = *(GsMaterial ***)(param_2 + 0x178);
  }
                    /* try { // try from 008e16cc to 008e16e7 has its CatchHandler @ 008e1730 */
  GsShape::addMaterial(pGVar4,*ppGVar1);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,*(undefined8 *)(this + 0x20),0xffffffff);
  this[0x1d] = (TyreTrackSystem)0x1;
  return;
}


