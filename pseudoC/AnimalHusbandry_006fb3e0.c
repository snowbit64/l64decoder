// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalHusbandry
// Entry Point: 006fb3e0
// Size: 1096 bytes
// Signature: undefined __thiscall AnimalHusbandry(AnimalHusbandry * this, char * param_1, TransformGroup * param_2, NavigationMeshScenegraphNode * param_3, float param_4, uint param_5, uint param_6, uint param_7)


/* AnimalHusbandry::AnimalHusbandry(char const*, TransformGroup*, NavigationMeshScenegraphNode*,
   float, unsigned int, unsigned int, unsigned int) */

void __thiscall
AnimalHusbandry::AnimalHusbandry
          (AnimalHusbandry *this,char *param_1,TransformGroup *param_2,
          NavigationMeshScenegraphNode *param_3,float param_4,uint param_5,uint param_6,uint param_7
          )

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  TransformGroup *this_00;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  BoundingAxisAlignedBox aBStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float local_84;
  float fStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Entity::Entity((Entity *)this,param_1,true);
  this[0x28] = (AnimalHusbandry)0x0;
  *(undefined ***)(this + 0x30) = &PTR__AnimalHusbandry_00fd9a80;
  *(undefined ***)this = &PTR__AnimalHusbandry_00fd9a28;
  *(undefined ***)(this + 0x20) = &PTR__AnimalHusbandry_00fd9a58;
                    /* try { // try from 006fb468 to 006fb46f has its CatchHandler @ 006fb84c */
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x68));
                    /* try { // try from 006fb47c to 006fb4e3 has its CatchHandler @ 006fb8e0 */
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x3f08));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x7da8));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0xbc48));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0xfae8));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x13988));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x17828));
  Animal::AnimalSource::AnimalSource((AnimalSource *)(this + 0x1b6c8));
  *(undefined8 *)(this + 0x1f6f0) = 0;
  *(undefined8 *)(this + 0x1f6d8) = 0;
  *(undefined8 *)(this + 0x1f6d0) = 0;
  *(undefined8 *)(this + 0x1f6e8) = 0;
  *(undefined8 *)(this + 0x1f6e0) = 0;
  *(undefined8 *)(this + 0x1f6b8) = 0;
  *(undefined8 *)(this + 0x1f6b0) = 0;
  *(undefined8 *)(this + 0x1f6c8) = 0;
  *(undefined8 *)(this + 0x1f6c0) = 0;
  *(undefined8 *)(this + 0x1f698) = 0;
  *(undefined8 *)(this + 0x1f690) = 0;
  *(undefined8 *)(this + 0x1f6a8) = 0;
  *(undefined8 *)(this + 0x1f6a0) = 0;
  *(undefined8 *)(this + 0x1f678) = 0;
  *(undefined8 *)(this + 0x1f670) = 0;
  *(undefined8 *)(this + 0x1f688) = 0;
  *(undefined8 *)(this + 0x1f680) = 0;
  *(undefined8 *)(this + 0x1f658) = 0;
  *(undefined8 *)(this + 0x1f650) = 0;
  *(undefined8 *)(this + 0x1f668) = 0;
  *(undefined8 *)(this + 0x1f660) = 0;
  *(undefined8 *)(this + 0x1f638) = 0;
  *(undefined8 *)(this + 0x1f630) = 0;
  *(undefined8 *)(this + 0x1f648) = 0;
  *(undefined8 *)(this + 0x1f640) = 0;
  *(undefined4 *)(this + 0x1f6f8) = 0x4c24cb80;
                    /* try { // try from 006fb528 to 006fb52b has its CatchHandler @ 006fb844 */
  BoundingAxisAlignedBox::BoundingAxisAlignedBox((BoundingAxisAlignedBox *)(this + 0x1f770));
  *(undefined8 *)(this + 0x1fba8) = 0;
  *(undefined8 *)(this + 0x1fba0) = 0;
  *(undefined8 *)(this + 0x1fb88) = 0;
  *(undefined8 *)(this + 0x1fb80) = 0;
  *(undefined8 *)(this + 0x1fbc8) = 0;
  *(undefined8 *)(this + 0x1fbc0) = 0;
  *(undefined8 *)(this + 0x1f748) = 0;
  *(undefined8 *)(this + 0x1f740) = 0;
  *(undefined8 *)(this + 0x1fc30) = 0;
  *(undefined8 *)(this + 0x1fb70) = 0;
  *(undefined8 *)(this + 0x1fc54) = 0x46c35000466a6000;
  *(undefined8 *)(this + 0x1fc4c) = 0x46c35000466a6000;
  *(undefined8 *)(this + 0x1fc40) = 0;
  *(undefined8 *)(this + 0x1fc38) = 0;
  *(undefined4 *)(this + 0x1f7a8) = 0;
  *(undefined4 *)(this + 0x1f7b0) = 0;
  *(undefined8 *)(this + 0x1fc64) = 0x466a600045dac000;
  *(undefined8 *)(this + 0x1fc5c) = 0x46c35000466a6000;
  *(undefined4 *)(this + 0x1fb38) = 0;
  *(undefined4 *)(this + 0x1fbd8) = 0;
  *(undefined8 *)(this + 0x1fc74) = 0x466a600045dac000;
  *(undefined8 *)(this + 0x1fc6c) = 0x466a600045dac000;
  *(undefined8 *)(this + 0x1f758) = 0;
  *(undefined8 *)(this + 0x1f750) = 0;
  *(undefined8 *)(this + 0x1f768) = 0;
  *(undefined8 *)(this + 0x1f760) = 0;
  *(undefined2 *)(this + 0x1fc48) = 1;
  *(undefined8 *)(this + 0x1fc84) = 0x461c4000459c4000;
  *(undefined8 *)(this + 0x1fc7c) = 0x466a600045dac000;
  *(undefined4 *)(this + 0x1fc8c) = 0x3f800000;
  *(undefined8 *)(this + 0x1fca8) = 0;
  *(undefined8 *)(this + 0x1fca0) = 0;
  *(undefined8 *)(this + 0x1fc98) = 0;
                    /* try { // try from 006fb5f4 to 006fb5fb has its CatchHandler @ 006fb83c */
  AnimalSoundSystem::AnimalSoundSystem((AnimalSoundSystem *)(this + 0x1fcb0));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(NavigationMeshScenegraphNode **)(this + 0x40) = param_3;
  *(uint *)(this + 0x1fd18) = param_7;
  *(AnimalHusbandry **)(this + 0x1f760) = this;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x8000000;
                    /* try { // try from 006fb61c to 006fb64b has its CatchHandler @ 006fb85c */
  RawTransformGroup::updateWorldTransformation();
  uVar2 = *(undefined8 *)(param_3 + 0xe8);
  uVar7 = *(undefined8 *)(param_3 + 0xe0);
  uVar6 = *(undefined8 *)(param_3 + 0xd8);
  uVar9 = *(undefined8 *)(param_3 + 0xd0);
  uVar8 = *(undefined8 *)(param_3 + 200);
  uVar12 = *(undefined8 *)(param_3 + 0xc0);
  uVar11 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(this + 0x1f734) = *(undefined8 *)(param_3 + 0xf0);
  *(undefined8 *)(this + 0x1f72c) = uVar2;
  *(undefined8 *)(this + 0x1f724) = uVar7;
  *(undefined8 *)(this + 0x1f71c) = uVar6;
  *(undefined8 *)(this + 0x1f714) = uVar9;
  *(undefined8 *)(this + 0x1f70c) = uVar8;
  *(undefined8 *)(this + 0x1f704) = uVar12;
  *(undefined8 *)(this + 0x1f6fc) = uVar11;
  uVar2 = NavigationMeshScenegraphNode::getNavigationMesh();
  *(undefined8 *)(this + 0x1f740) = uVar2;
                    /* try { // try from 006fb650 to 006fb65b has its CatchHandler @ 006fb858 */
  NavigationMeshScenegraphNode::getNavigationMesh();
  puVar3 = (undefined4 *)NavigationMesh::getGridMinBound();
                    /* try { // try from 006fb660 to 006fb66b has its CatchHandler @ 006fb854 */
  NavigationMeshScenegraphNode::getNavigationMesh();
  puVar4 = (undefined4 *)NavigationMesh::getGridMaxBound();
  uVar10 = *puVar3;
  uVar15 = puVar3[2];
  fVar5 = (float)puVar3[1] + -50.0;
  uVar13 = NEON_fmadd(uVar10,*(undefined4 *)(this + 0x1f700),fVar5 * *(float *)(this + 0x1f710));
  uVar14 = NEON_fmadd(uVar10,*(undefined4 *)(this + 0x1f704),fVar5 * *(float *)(this + 0x1f714));
  uVar10 = NEON_fmadd(uVar10,*(undefined4 *)(this + 0x1f6fc),fVar5 * *(float *)(this + 0x1f70c));
  local_84 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f720),uVar13);
  fStack_80 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f724),uVar14);
  local_84 = *(float *)(this + 0x1f730) + local_84;
  fStack_80 = *(float *)(this + 0x1f734) + fStack_80;
  local_88 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f71c),uVar10);
  local_88 = *(float *)(this + 0x1f72c) + local_88;
  fVar5 = (float)puVar4[1] + 50.0;
  uVar14 = *puVar4;
  uVar15 = puVar4[2];
  uVar10 = NEON_fmadd(uVar14,*(undefined4 *)(this + 0x1f6fc),*(float *)(this + 0x1f70c) * fVar5);
  uVar13 = NEON_fmadd(uVar14,*(undefined4 *)(this + 0x1f700),*(float *)(this + 0x1f710) * fVar5);
  uVar14 = NEON_fmadd(uVar14,*(undefined4 *)(this + 0x1f704),*(float *)(this + 0x1f714) * fVar5);
  local_98 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f71c),uVar10);
  fStack_94 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f720),uVar13);
  local_90 = (float)NEON_fmadd(uVar15,*(undefined4 *)(this + 0x1f724),uVar14);
  local_98 = *(float *)(this + 0x1f72c) + local_98;
  fStack_94 = *(float *)(this + 0x1f730) + fStack_94;
  local_90 = *(float *)(this + 0x1f734) + local_90;
                    /* try { // try from 006fb728 to 006fb737 has its CatchHandler @ 006fb838 */
  BoundingAxisAlignedBox::BoundingAxisAlignedBox
            (aBStack_d0,(Vector3 *)&local_88,(Vector3 *)&local_98);
  *(undefined8 *)(this + 0x1f780) = uStack_c0;
  *(undefined8 *)(this + 0x1f778) = local_c8;
  *(undefined4 *)(this + 0x1f788) = local_b8;
  *(undefined8 *)(this + 0x1f794) = uStack_ac;
  *(undefined8 *)(this + 0x1f78c) = local_b4;
  *(undefined8 *)(this + 0x1f79c) = local_a4;
  BoundingAxisAlignedBox::~BoundingAxisAlignedBox(aBStack_d0);
                    /* try { // try from 006fb780 to 006fb7c3 has its CatchHandler @ 006fb860 */
  uVar2 = NavigationMeshScenegraphNode::getNavigationMeshQuery();
  *(undefined8 *)(this + 0x1f748) = uVar2;
  *(AnimalHusbandry **)(this + 0x1f750) = this + 0x30;
  *(float *)(this + 130000) = param_4;
  *(uint *)(this + 0x1fd14) = param_6;
  *(uint *)(this + 0x1fbd4) = param_5;
  *(undefined4 *)(this + 0x1fd1c) = 0;
  *(undefined4 *)(this + 0x1fd10) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  this[0x52] = (AnimalHusbandry)0x1;
  *(undefined8 *)(this + 0x1fd08) = 0xffffffffffffffff;
  this_00 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 006fb7c8 to 006fb7cf has its CatchHandler @ 006fb828 */
  TransformGroup::TransformGroup(this_00,param_1);
  *(TransformGroup **)(this + 0x48) = this_00;
                    /* try { // try from 006fb7dc to 006fb7eb has its CatchHandler @ 006fb860 */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,this_00,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


