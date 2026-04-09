// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShape
// Entry Point: 00a699b4
// Size: 324 bytes
// Signature: undefined __cdecl createShape(char * param_1, IRenderDevice * param_2)


/* FoliageTransformGroup::createShape(char const*, IRenderDevice*) */

GsShape * FoliageTransformGroup::createShape(char *param_1,IRenderDevice *param_2)

{
  long lVar1;
  FoliageCellGeometry *this;
  BoundingSphere *this_00;
  GsShape *this_01;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (FoliageCellGeometry *)operator_new(0xb8);
                    /* try { // try from 00a699f0 to 00a699f7 has its CatchHandler @ 00a69b08 */
  FoliageCellGeometry::FoliageCellGeometry
            (this,(char *)param_2,*(FoliageLayerGraphics **)(param_1 + 0x230));
  local_58 = 0;
  local_50 = 0;
  this_00 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00a69a0c to 00a69a17 has its CatchHandler @ 00a69afc */
  BoundingSphere::BoundingSphere(this_00,(Vector3 *)&local_58,1.0);
  Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
  this_01 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00a69a30 to 00a69a3b has its CatchHandler @ 00a69af8 */
  GsShape::GsShape(this_01,(char *)param_2,(Geometry *)this);
  lVar2 = *(long *)(*(long *)(param_1 + 0x230) + 0x50);
  if ((int)((ulong)(*(long *)(*(long *)(param_1 + 0x230) + 0x58) - lVar2) >> 3) * 0x286bca1b != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
      GsShape::addMaterial(this_01,*(GsMaterial **)(lVar2 + lVar4));
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x98;
      lVar2 = *(long *)(*(long *)(param_1 + 0x230) + 0x50);
    } while (uVar3 < (uint)((int)((ulong)(*(long *)(*(long *)(param_1 + 0x230) + 0x58) - lVar2) >> 3
                                 ) * 0x286bca1b));
  }
  *(uint *)(this_01 + 400) =
       *(uint *)(this_01 + 400) & 0xff000000 |
       *(uint *)(this_01 + 400) & 0x3fffff | (*(uint *)(param_1 + 0x16c) & 3) << 0x16;
  GsShape::raiseShapeFlag(this_01,0x200);
  if (*(char *)(*(long *)(param_1 + 0x230) + 0x98) != '\0') {
    GsShape::raiseShapeFlag(this_01,0x100);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


