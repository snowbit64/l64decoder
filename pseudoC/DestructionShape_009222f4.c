// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionShape
// Entry Point: 009222f4
// Size: 552 bytes
// Signature: undefined __thiscall DestructionShape(DestructionShape * this, char * param_1, DestructionGeometry * param_2)


/* DestructionShape::DestructionShape(char const*, DestructionGeometry*) */

void __thiscall
DestructionShape::DestructionShape
          (DestructionShape *this,char *param_1,DestructionGeometry *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  DestructionPhysicsObject *this_00;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  GsShape::GsShape((GsShape *)this,param_1,(Geometry *)param_2);
  this[0x208] = (DestructionShape)0x0;
  this[0x220] = (DestructionShape)0x0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__DestructionShape_00fdfcf8;
  *(undefined ***)(this + 0x158) = &PTR__DestructionShape_00fdfd88;
  *(undefined ***)(this + 0x160) = &PTR__DestructionShape_00fdfdb0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined ***)(this + 0x200) = &PTR__DestructionShape_00fdfde0;
  *(undefined ***)(this + 0x210) = &PTR__DestructionShape_00fdfe08;
  *(undefined ***)(this + 0x218) = &PTR__DestructionShape_00fdfe30;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(DestructionShape **)(this + 0x230) = this + 0x238;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(DestructionShape **)(this + 0x248) = this + 0x250;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(DestructionShape **)(this + 0x260) = this + 0x268;
  *(DestructionShape **)(this + 0x278) = this + 0x280;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a0) = 0x43fa000043fa0000;
  *(undefined8 *)(this + 0x298) = 0x4248000042480000;
  *(undefined8 *)(this + 0x2b0) = 0x3a83126f3f3504f3;
  *(undefined8 *)(this + 0x2a8) = 0x3d4ccccd00000000;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x20000;
  *(undefined8 *)(this + 0x2b8) = uVar9;
                    /* try { // try from 009223d4 to 009223db has its CatchHandler @ 0092252c */
  this_00 = (DestructionPhysicsObject *)operator_new(0x18);
                    /* try { // try from 009223e0 to 009223e7 has its CatchHandler @ 0092251c */
  DestructionPhysicsObject::DestructionPhysicsObject(this_00,this);
                    /* try { // try from 009223e8 to 00922447 has its CatchHandler @ 0092252c */
  RawTransformGroup::setPhysicsObject((RawTransformGroup *)this,(PhysicsObject *)this_00);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)(this + 0x2c0),(Matrix4x4 *)(this + 0xb8));
  RawTransformGroup::updateWorldTransformation();
  *(undefined8 *)(this + 0x308) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this + 0x300) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0xd0);
  *(undefined8 *)(this + 0x310) = *(undefined8 *)(this + 200);
  *(undefined8 *)(this + 0x328) = *(undefined8 *)(this + 0xe0);
  *(undefined8 *)(this + 800) = *(undefined8 *)(this + 0xd8);
  *(undefined8 *)(this + 0x338) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(this + 0x330) = *(undefined8 *)(this + 0xe8);
  DestructionGeometry::getShared();
  uVar2 = DestructionGeometryShared::getNumChunks();
  uVar8 = (ulong)uVar2;
  puVar3 = (ulong *)operator_new__((uVar8 + (ulong)uVar2 * 2) * 0x10 | 8);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar8;
  if (uVar2 != 0) {
    puVar3 = puVar4;
    do {
      *(undefined4 *)puVar3 = 0;
      puVar3[2] = 0;
      puVar3[1] = 0;
      puVar3[4] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4 + uVar8 * 6);
  }
  lVar7 = 0;
  uVar8 = 0;
  *(ulong **)(this + 0x228) = puVar4;
  while( true ) {
                    /* try { // try from 009224a4 to 009224af has its CatchHandler @ 00922530 */
    DestructionGeometry::getShared();
    uVar5 = DestructionGeometryShared::getNumChunks();
    if ((uVar5 & 0xffffffff) <= uVar8) break;
    puVar1 = (undefined4 *)(*(long *)(this + 0x228) + lVar7);
    pvVar6 = *(void **)(puVar1 + 2);
    *puVar1 = 0;
    if (pvVar6 != (void *)0x0) {
      *(void **)(puVar1 + 4) = pvVar6;
      operator_delete(pvVar6);
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
    }
    puVar1[10] = 0;
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 0x30;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  this[0x208] = (DestructionShape)0x1;
  return;
}


