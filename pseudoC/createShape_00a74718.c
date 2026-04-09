// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShape
// Entry Point: 00a74718
// Size: 392 bytes
// Signature: undefined __thiscall createShape(TerrainLayerTransformGroup * this, char * param_1, IRenderDevice * param_2)


/* TerrainLayerTransformGroup::createShape(char const*, IRenderDevice*) */

GsShape * __thiscall
TerrainLayerTransformGroup::createShape
          (TerrainLayerTransformGroup *this,char *param_1,IRenderDevice *param_2)

{
  long lVar1;
  undefined8 uVar2;
  IVertexBuffer *pIVar3;
  TerrainDetailGeometry *this_00;
  BoundingSphere *this_01;
  GsShape *this_02;
  GsMaterial *pGVar4;
  MaterialManager *this_03;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)(this + 0x630) + 0x8c) == 0) {
    this_02 = (GsShape *)0x0;
  }
  else {
    local_70 = 0;
    local_68 = (*(int *)(this + 0x20c) + 1) * (*(int *)(this + 0x20c) + 1) * 0x10;
    local_60 = "TerrainDetailTransformGroup";
    uStack_64 = 4;
    uVar2 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    pIVar3 = (IVertexBuffer *)(**(code **)(*(long *)param_2 + 0x108))(param_2,uVar2,&local_70);
    this_00 = (TerrainDetailGeometry *)operator_new(0x78);
                    /* try { // try from 00a747bc to 00a747d3 has its CatchHandler @ 00a748b0 */
    TerrainDetailGeometry::TerrainDetailGeometry
              (this_00,param_1,pIVar3,*(IIndexBuffer **)(this + 0x650),
               *(IVertexDeclaration **)(this + 0x648),0x25,0,0);
    local_58 = 0;
    local_50 = 0;
    this_01 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00a747e8 to 00a747f3 has its CatchHandler @ 00a748a4 */
    BoundingSphere::BoundingSphere(this_01,(Vector3 *)&local_58,1.0);
    Geometry::setBoundingVolume((Geometry *)this_00,(BoundingVolume *)this_01);
    this_02 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00a7480c to 00a74817 has its CatchHandler @ 00a748a0 */
    GsShape::GsShape(this_02,param_1,(Geometry *)this_00);
    GsShape::raiseShapeFlag(this_02,0x200);
    *(uint *)(this_02 + 400) =
         *(uint *)(this_02 + 400) & 0xff000000 |
         *(uint *)(this_02 + 400) & 0x3fffff | (*(uint *)(this + 0x16c) & 3) << 0x16;
    pGVar4 = (GsMaterial *)GsMaterial::clone();
    setupCustomShaderVariation(this,pGVar4,*(uint *)(this + 0x22c));
    GsShape::addMaterial(this_02,pGVar4);
    this_03 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseMaterial(this_03,pGVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_02;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


