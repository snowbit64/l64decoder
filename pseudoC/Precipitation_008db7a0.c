// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precipitation
// Entry Point: 008db7a0
// Size: 352 bytes
// Signature: undefined __thiscall Precipitation(Precipitation * this, PrecipitationDesc * param_1)


/* Precipitation::Precipitation(PrecipitationDesc const&) */

void __thiscall Precipitation::Precipitation(Precipitation *this,PrecipitationDesc *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  BoundingSphere *this_00;
  PrecipitationDesc *pPVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pPVar5 = *(PrecipitationDesc **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pPVar5 = param_1 + 1;
  }
  Geometry::Geometry((Geometry *)this,(char *)pPVar5,true);
                    /* try { // try from 008db7e8 to 008db7ef has its CatchHandler @ 008db918 */
  Streamable::Streamable((Streamable *)(this + 0x58));
  *(undefined ***)this = &PTR__Precipitation_00fde400;
  *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) | 0x1000000;
  *(undefined ***)(this + 0x10) = &PTR__Precipitation_00fde460;
  *(undefined ***)(this + 0x58) = &PTR__Precipitation_00fde480;
  *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) & 0xffffffe3ffffffff | 0x40;
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(this + 0x68) = uVar1;
  *(uint *)(this + 0x6c) = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x84) = uVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x94) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x9c) = uVar2;
  this[0xa0] = *(Precipitation *)(param_1 + 0x5c);
  this[0xa1] = *(Precipitation *)(param_1 + 0x5d);
                    /* try { // try from 008db878 to 008db87b has its CatchHandler @ 008db914 */
  pvVar4 = operator_new__((ulong)uVar1 << 5);
  fVar7 = *(float *)(this + 0x70);
  fVar8 = *(float *)(this + 0x74);
  *(void **)(this + 0xa8) = pvVar4;
  *(undefined4 *)(this + 0xec) = 0x3f800000;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  local_58 = 0;
  local_50 = 0;
                    /* try { // try from 008db8a4 to 008db8ab has its CatchHandler @ 008db920 */
  this_00 = (BoundingSphere *)operator_new(0x20);
  fVar7 = (float)NEON_fmadd(fVar7 + fVar7,fVar7,fVar8 * fVar8);
                    /* try { // try from 008db8c0 to 008db8c7 has its CatchHandler @ 008db900 */
  BoundingSphere::BoundingSphere(this_00,(Vector3 *)&local_58,SQRT(fVar7));
                    /* try { // try from 008db8c8 to 008db8d3 has its CatchHandler @ 008db920 */
  Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


