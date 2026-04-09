// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParticleSystem
// Entry Point: 008d62ac
// Size: 756 bytes
// Signature: undefined __thiscall ParticleSystem(ParticleSystem * this, ParticleSystemDesc * param_1, bool param_2)


/* ParticleSystem::ParticleSystem(ParticleSystemDesc const&, bool) */

void __thiscall
ParticleSystem::ParticleSystem(ParticleSystem *this,ParticleSystemDesc *param_1,bool param_2)

{
  ParticleSystemDesc *pPVar1;
  int iVar2;
  undefined4 uVar3;
  ParticleSystem PVar4;
  ParticleSystem PVar5;
  bool bVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  
  pPVar1 = param_1 + 0x81;
  if (((byte)param_1[0x80] & 1) != 0) {
    pPVar1 = *(ParticleSystemDesc **)(param_1 + 0x90);
  }
  DynamicGeometry::DynamicGeometry((DynamicGeometry *)this,(char *)pPVar1,true);
  this[0x78] = (ParticleSystem)0x0;
  *(undefined ***)(this + 0x70) = &PTR__Updateable_00fde2d8;
                    /* try { // try from 008d6300 to 008d6307 has its CatchHandler @ 008d65a0 */
  Streamable::Streamable((Streamable *)(this + 0x80));
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0xfc) = 0x3f800000;
  *(undefined4 *)(this + 0x120) = uVar11;
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x130) = 0x3f800000;
  *(undefined4 *)(this + 0x128) = uVar9;
  *(undefined4 *)(this + 300) = uVar12;
  *(undefined4 *)(this + 0x134) = uVar11;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)this = &PTR__ParticleSystem_00fde1a0;
  *(undefined ***)(this + 0x10) = &PTR__ParticleSystem_00fde218;
  *(undefined8 *)(this + 0x13c) = uVar16;
  *(undefined ***)(this + 0x70) = &PTR__ParticleSystem_00fde238;
  *(undefined ***)(this + 0x80) = &PTR__ParticleSystem_00fde260;
  *(ulong *)(this + 0x98) = CONCAT44((float)((ulong)uVar16 >> 0x20) * 0.5,(float)uVar16 * 0.5);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) | 0x800000;
  this[0xc0] = (ParticleSystem)0x0;
  *(undefined8 *)(this + 0x14c) = uVar16;
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined4 *)(param_1 + 8);
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) & 0xffffffe3 | 0x10;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  *(undefined8 *)(this + 0x154) = uVar16;
  PVar5 = *(ParticleSystem *)(param_1 + 0x78);
  fVar14 = *(float *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x11c) = uVar11;
  *(int *)(this + 0x124) = iVar2;
  this[0x138] = PVar5;
  if (fVar14 == 0.0) {
    PVar5 = (ParticleSystem)0x1;
    if (*(float *)(param_1 + 0x34) == 0.0) {
      PVar5 = (ParticleSystem)(*(float *)(param_1 + 0x38) != 0.0);
    }
  }
  else {
    PVar5 = (ParticleSystem)0x1;
  }
  *(float *)(this + 0x160) = fVar14;
  uVar11 = *(undefined4 *)(param_1 + 0x34);
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  PVar4 = *(ParticleSystem *)(param_1 + 0x7b);
  this[0x15c] = PVar5;
  *(undefined4 *)(this + 0x164) = uVar11;
  uVar11 = *(undefined4 *)(param_1 + 0x38);
  uVar17 = NEON_umax(uVar16,0x100000001,4);
  this[0x118] = (ParticleSystem)0x1;
  *(undefined4 *)(this + 0x168) = uVar11;
  PVar5 = *(ParticleSystem *)(param_1 + 0x7a);
  uVar16 = *(undefined8 *)(param_1 + 0x3c);
  uVar19 = NEON_ucvtf(uVar17,4);
  uVar11 = 0;
  if (PVar4 != (ParticleSystem)0x0) {
    uVar11 = 0x40c90fdb;
  }
  *(undefined8 *)(this + 0x178) = uVar17;
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  this[0x180] = PVar5;
  *(undefined8 *)(this + 0xa8) = uVar16;
  uVar15 = *(undefined4 *)(param_1 + 0x44);
  this[0x16d] = PVar4;
  *(undefined4 *)(this + 400) = uVar3;
  PVar5 = *(ParticleSystem *)(param_1 + 0x79);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0xb0) = uVar15;
  uVar16 = NEON_fmov(0x3f800000,4);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0xb4) = uVar11;
  this[0x16c] = PVar5;
  uVar17 = NEON_rev64(uVar17,4);
  *(undefined8 *)(this + 0x144) = uVar17;
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_1 + 0x60);
  *(ulong *)(this + 0x90) =
       CONCAT44((float)((ulong)uVar16 >> 0x20) / (float)((ulong)uVar19 >> 0x20),
                (float)uVar16 / (float)uVar19);
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0xd4) = uVar9;
  *(undefined4 *)(this + 0xd8) = uVar12;
  *(undefined8 *)(this + 0x184) = uVar16;
  uVar11 = *(undefined4 *)(param_1 + 0x70);
  this[0xf8] = (ParticleSystem)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  plVar7 = *(long **)(param_1 + 0xa0);
  *(undefined4 *)(this + 0x18c) = uVar11;
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 008d64f0 to 008d6533 has its CatchHandler @ 008d65a8 */
    uVar16 = (**(code **)(*plVar7 + 0x18))();
    *(undefined8 *)(this + 0x110) = uVar16;
    uVar11 = TriangleSet::getNumVertices();
    *(undefined4 *)(this + 0x100) = uVar11;
  }
  (**(code **)(*(long *)this + 0x50))(this,*(undefined8 *)(param_1 + 0x98),param_2);
  *(undefined4 *)(this + 0x1b0) = 0;
  pvVar8 = operator_new__((ulong)*(uint *)(this + 0x11c) * 0x24);
  *(void **)(this + 0x1a8) = pvVar8;
  uVar11 = ParticleSystemManager::getVertexDeclarationAttributes();
  fVar13 = *(float *)(this + 0x134);
  *(undefined4 *)(this + 0x38) = uVar11;
  bVar6 = this[0x138] == (ParticleSystem)0x0;
  fVar18 = fVar13 * *(float *)(this + 0x170);
  fVar14 = fVar13 * *(float *)(this + 0x174);
  if (!bVar6) {
    fVar14 = 0.0;
  }
  uVar10 = NEON_cmlt(CONCAT44((uint)bVar6 << 0x1f,(uint)bVar6 << 0x1f),0,4);
  if (!bVar6) {
    fVar18 = 0.0;
  }
  *(ulong *)(this + 0xa0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x144) >> 0x20) * fVar13 * 0.5,
                (float)*(undefined8 *)(this + 0x144) * fVar13 * 0.5) & uVar10;
  *(float *)(this + 0xb8) = fVar18;
  *(float *)(this + 0xbc) = fVar14;
  return;
}


