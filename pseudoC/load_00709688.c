// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00709688
// Size: 1308 bytes
// Signature: undefined __cdecl load(AnimalLocomotionSystemSource * param_1, TransformGroup * param_2, AnimalSharedContext * param_3, AnimalContext * param_4, uint param_5, bool param_6)


/* AnimalLocomotionSystem::load(AnimalLocomotionSystemSource*, TransformGroup*,
   AnimalSharedContext*, AnimalContext*, unsigned int, bool) */

void AnimalLocomotionSystem::load
               (AnimalLocomotionSystemSource *param_1,TransformGroup *param_2,
               AnimalSharedContext *param_3,AnimalContext *param_4,uint param_5,bool param_6)

{
  AnimalAnimationSystem *this;
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  CharacterSet *pCVar5;
  AnimalAnimationSystemSource *pAVar6;
  float *__dest;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *__src;
  float *pfVar14;
  ulong __n;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float *local_a8;
  undefined8 local_90;
  undefined8 *local_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  puVar7 = (undefined8 *)(ulong)param_5;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(TransformGroup **)(param_1 + 0x68) = param_2;
  *(AnimalSharedContext **)(param_1 + 0x70) = param_3;
  *(AnimalContext **)(param_1 + 0x3b0) = param_4;
  *(undefined8 **)(param_1 + 0x3b8) = puVar7;
  local_78 = *puVar7;
  local_70 = *(undefined4 *)(puVar7 + 1);
  TransformGroup::setTranslation((TransformGroup *)param_3,(Vector3 *)&local_78);
  *(undefined8 *)(param_1 + 0x3d0) = local_78;
  *(undefined8 *)(param_1 + 0x3e4) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x3c4) = local_78;
  *(undefined4 *)(param_1 + 0x3cc) = local_70;
  *(undefined8 *)(param_1 + 0x3ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d8) = local_70;
  *(undefined4 *)(param_1 + 0x3f4) = local_78._4_4_;
  param_1[0x3f8] = (AnimalLocomotionSystemSource)0x1;
  pCVar5 = (CharacterSet *)
           searchCharacterSet((AnimalLocomotionSystem *)param_1,*(TransformGroup **)(param_1 + 0x70)
                             );
  if (pCVar5 == (CharacterSet *)0x0) goto LAB_00709ad0;
  this = (AnimalAnimationSystem *)(param_1 + 0x78);
  AnimalAnimationSystem::registerState(this,0,"walk",true,false);
  AnimalAnimationSystem::registerState(this,1,"run",true,false);
  AnimalAnimationSystem::registerState(this,4,"idle",false,false);
  AnimalAnimationSystem::registerState(this,0xb,"idleTransition",false,false);
  AnimalAnimationSystem::registerState(this,7,"eat",false,false);
  AnimalAnimationSystem::registerState(this,8,"drink",false,false);
  AnimalAnimationSystem::registerState(this,5,"sleep",false,false);
  AnimalAnimationSystem::registerState(this,6,"rest",false,false);
  AnimalAnimationSystem::registerState(this,9,"chew",false,false);
  AnimalAnimationSystem::registerState(this,10,"graze",false,false);
  AnimalAnimationSystem::registerState(this,2,"turnLeft",false,true);
  AnimalAnimationSystem::registerState(this,3,"turnRight",false,true);
  pAVar6 = (AnimalAnimationSystemSource *)AnimalLocomotionSystemSource::getAnimationSource();
  AnimalAnimationSystem::load(this,pAVar6,*(TransformGroup **)(param_1 + 0x70),pCVar5);
  pAVar6 = *(AnimalAnimationSystemSource **)(param_1 + 0x300);
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = (void *)0x0;
                    /* try { // try from 007098c4 to 007098d3 has its CatchHandler @ 00709ba4 */
  AnimalAnimationSystemSource::findAnimations(pAVar6,0,(vector *)&local_90);
  lVar10 = (long)local_88 - (long)local_90 >> 2;
  puVar7 = local_90;
  puVar13 = local_90;
  if (lVar10 == 1) {
LAB_007098f8:
    *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)puVar7;
  }
  else {
    if (lVar10 == 2) {
      puVar7 = (undefined8 *)((long)local_90 + 4);
      goto LAB_007098f8;
    }
    if (8 < (ulong)((long)local_88 - (long)local_90)) {
      pfVar14 = (float *)0x0;
      pfVar12 = (float *)0x0;
      uVar15 = 0;
      local_a8 = (float *)0x0;
      puVar7 = local_88;
      __src = (float *)0x0;
      do {
        pfVar1 = (float *)(pAVar6 + uVar15 * 0x70 + 0x35c);
        if (pfVar12 == pfVar14) {
          __n = (long)pfVar14 - (long)__src;
          uVar8 = ((long)__n >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
                    /* try { // try from 00709b8c to 00709b9f has its CatchHandler @ 00709bcc */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)__n >> 1)) {
            uVar8 = (long)__n >> 1;
          }
          if (0x7ffffffffffffffb < __n) {
            uVar8 = 0x3fffffffffffffff;
          }
          if (uVar8 == 0) {
            __dest = (float *)0x0;
          }
          else {
            if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 007099ac to 007099af has its CatchHandler @ 00709bac */
            __dest = (float *)operator_new(uVar8 << 2);
          }
          pfVar12 = __dest + ((long)__n >> 2);
          *pfVar12 = *pfVar1;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          pfVar14 = __dest + uVar8;
          local_a8 = __dest;
          if (__src != (float *)0x0) {
            operator_delete(__src);
            puVar7 = local_88;
            puVar13 = local_90;
          }
        }
        else {
          *pfVar12 = *pfVar1;
          __dest = __src;
        }
        pfVar12 = pfVar12 + 1;
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar8 = (long)puVar7 - (long)puVar13 >> 2;
        __src = __dest;
      } while (uVar15 < uVar8);
      iVar11 = (int)((ulong)((long)puVar7 - (long)puVar13) >> 2);
      uVar3 = iVar11 - 1;
      if (uVar3 != 0) {
        uVar9 = 0;
        uVar2 = uVar3;
        do {
          uVar15 = (ulong)uVar2;
          if (~uVar9 != -iVar11) {
            fVar16 = *local_a8;
            puVar7 = puVar13;
            pfVar12 = local_a8;
            do {
              pfVar14 = pfVar12 + 1;
              fVar17 = *pfVar14;
              if (fVar17 < fVar16) {
                *pfVar14 = fVar16;
                uVar18 = *puVar7;
                *pfVar12 = fVar17;
                uVar18 = NEON_rev64(uVar18,4);
                *puVar7 = uVar18;
                fVar17 = fVar16;
              }
              fVar16 = fVar17;
              puVar7 = (undefined8 *)((long)puVar7 + 4);
              uVar15 = uVar15 - 1;
              pfVar12 = pfVar14;
            } while (uVar15 != 0);
          }
          uVar9 = uVar9 + 1;
          uVar2 = uVar2 - 1;
          __dest = local_a8;
        } while (uVar9 != uVar3);
      }
      *(undefined4 *)(param_1 + 0x408) =
           *(undefined4 *)((long)puVar13 + (uVar8 >> 1 & 0x7fffffff) * 4);
      if (__dest != (float *)0x0) {
        operator_delete(__dest);
        puVar13 = local_90;
      }
    }
    if (puVar13 == (undefined8 *)0x0) goto LAB_00709ad0;
  }
  local_88 = puVar13;
  operator_delete(puVar13);
LAB_00709ad0:
  initRotationData();
  *(uint *)(param_1 + 0x3c0) = (uint)param_6;
  pAVar6 = (AnimalAnimationSystemSource *)AnimalLocomotionSystemSource::getAnimationSource();
  local_90._5_3_ = (uint3)((ulong)local_90 >> 0x28) & 0xffff00;
  local_90 = (undefined8 *)CONCAT35(local_90._5_3_,0x6b6c617708);
                    /* try { // try from 00709afc to 00709b07 has its CatchHandler @ 00709bb8 */
  AnimalAnimationSystemSource::registerSoundTriggerId(pAVar6,0,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pAVar6 = (AnimalAnimationSystemSource *)AnimalLocomotionSystemSource::getAnimationSource();
  local_90 = (undefined8 *)CONCAT35(local_90._5_3_,0x6e757206);
                    /* try { // try from 00709b34 to 00709b3f has its CatchHandler @ 00709bb4 */
  AnimalAnimationSystemSource::registerSoundTriggerId(pAVar6,1,(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  AnimalAnimationSystem::setSoundSystem
            ((AnimalAnimationSystem *)(param_1 + 0x78),*(AnimalSoundSystem **)(param_4 + 0x70));
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


