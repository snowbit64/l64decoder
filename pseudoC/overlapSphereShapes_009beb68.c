// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapSphereShapes
// Entry Point: 009beb68
// Size: 660 bytes
// Signature: undefined __cdecl overlapSphereShapes(Bt2World * param_1, btDispatcher * param_2, SphereContactResultCallback * param_3, float param_4, uint param_5, bool param_6, bool param_7, bool param_8)


/* Bt2SceneQueryUtil::overlapSphereShapes(Bt2World*, btDispatcher*,
   Bt2SceneQueryUtil::SphereContactResultCallback&, float, unsigned int, bool, bool, bool) */

void Bt2SceneQueryUtil::overlapSphereShapes
               (Bt2World *param_1,btDispatcher *param_2,SphereContactResultCallback *param_3,
               float param_4,uint param_5,bool param_6,bool param_7,bool param_8)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined auStack_1a8 [4];
  uint local_1a4;
  undefined4 uStack_1a0;
  void *local_198;
  char local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float fStack_174;
  float local_170;
  undefined4 local_16c;
  undefined **local_168;
  float local_160;
  undefined4 local_15c;
  undefined **local_158;
  long *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined2 local_106;
  undefined8 local_100;
  undefined **local_d0;
  float local_c8;
  undefined4 local_c4;
  float local_a4;
  undefined4 local_94;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_3 + 0x18);
  *(short *)(param_3 + 8) = (short)param_5;
  *(uint *)(param_3 + 0x34) = (uint)(param_6 != param_7);
  *(uint *)(param_3 + 0x38) = (uint)param_7 & (param_6 ^ 0xffffffff) & 1;
  *(short *)(param_3 + 10) = (short)(param_5 >> 0x10);
  fVar8 = *(float *)(plVar4 + 7);
  fVar7 = *(float *)((long)plVar4 + 0x3c);
  lVar2 = plVar4[7];
  fVar6 = *(float *)(plVar4 + 8);
  local_88 = fVar8;
  fStack_84 = fVar7;
  local_80 = fVar6;
  if (param_8) {
    btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_d0);
    local_c8 = 1.121039e-44;
    local_94 = 0;
    local_d0 = &PTR__btConvexShape_0101c5e8;
                    /* try { // try from 009bec10 to 009bec1b has its CatchHandler @ 009bee04 */
    local_a4 = param_4;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_d0);
    local_110 = 0;
    fStack_174 = fVar7 - param_4;
    local_100 = 0;
    local_170 = fVar6 - param_4;
    *(undefined4 *)(plVar4 + 0x1c) = 5;
    local_108 = *(undefined2 *)(param_3 + 8);
    local_190 = '\x01';
    local_106 = *(undefined2 *)(param_3 + 10);
    local_160 = *(float *)(param_3 + 8);
    plVar4[0x18] = (long)&local_110;
    local_134 = *(undefined8 *)(param_3 + 0x34);
    local_168 = &PTR__ContactResultCallback_00fe1670;
    local_158 = &PTR__SphereArrayContactResultCallback_00fe16a8;
    local_188 = fVar8 + param_4;
    local_178 = fVar8 - param_4;
    local_118 = auStack_1a8;
    local_128 = CONCAT44(fStack_84,local_88);
    fStack_184 = fVar7 + param_4;
    local_180 = fVar6 + param_4;
    local_198 = (void *)0x0;
    local_1a4 = 0;
    uStack_1a0 = 0;
    local_12c = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_120 = local_80;
    local_16c = 0;
    local_17c = 0;
                    /* try { // try from 009bece8 to 009becf3 has its CatchHandler @ 009bee00 */
    plStack_150 = plVar4;
    local_11c = param_4;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),&local_178,&local_188,&local_158);
    if (local_1a4 != 0) {
      uVar5 = 1;
      do {
                    /* try { // try from 009bed0c to 009bed23 has its CatchHandler @ 009bee0c */
        btCollisionWorld::contactPairTest
                  ((btCollisionWorld *)param_1,(btCollisionObject *)plVar4,
                   *(btCollisionObject **)((long)local_198 + (long)(int)(uVar5 - 1) * 8),
                   (ContactResultCallback *)param_3,param_2,false);
        if (param_3[0x3c] != (SphereContactResultCallback)0x0) break;
        bVar3 = uVar5 < local_1a4;
        uVar5 = uVar5 + 1;
      } while (bVar3);
    }
    if ((local_198 != (void *)0x0) && (local_190 != '\0')) {
                    /* try { // try from 009bed50 to 009bed53 has its CatchHandler @ 009bedfc */
      btAlignedFreeInternal(local_198);
    }
    btConvexShape::~btConvexShape((btConvexShape *)&local_d0);
  }
  else {
    local_160 = fVar6 - param_4;
    *(float *)(param_3 + 0x4c) = param_4;
    local_168 = (undefined **)CONCAT44(fVar7 - param_4,fVar8 - param_4);
    local_c8 = fVar6 + param_4;
    *(long *)(param_3 + 0x40) = lVar2;
    *(float *)(param_3 + 0x48) = fVar6;
    local_15c = 0;
    local_d0 = (undefined **)CONCAT44(fVar7 + param_4,fVar8 + param_4);
    local_c4 = 0;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x38))
              (*(long **)(param_1 + 0x60),&local_168,&local_d0,param_3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(param_3 + 0x30));
}


