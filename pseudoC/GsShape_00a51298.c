// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsShape
// Entry Point: 00a51298
// Size: 156 bytes
// Signature: undefined __thiscall GsShape(GsShape * this, char * param_1, Geometry * param_2)


/* GsShape::GsShape(char const*, Geometry*) */

void __thiscall GsShape::GsShape(GsShape *this,char *param_1,Geometry *param_2)

{
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)this = &PTR__GsShape_00fe3618;
  *(undefined ***)(this + 0x158) = &PTR__GsShape_00fe3688;
  *(undefined ***)(this + 0x160) = &PTR__GsShape_00fe36b0;
                    /* try { // try from 00a512d4 to 00a512db has its CatchHandler @ 00a51344 */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x198));
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0x80;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x800;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1c0) = 0xbf80000000000000;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0x3f800000;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0x3f800000;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0x3f800000;
                    /* try { // try from 00a51318 to 00a51323 has its CatchHandler @ 00a51334 */
  setGeometry(this,param_2);
  return;
}


