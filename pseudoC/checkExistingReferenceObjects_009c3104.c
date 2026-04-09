// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkExistingReferenceObjects
// Entry Point: 009c3104
// Size: 416 bytes
// Signature: undefined __thiscall checkExistingReferenceObjects(ProceduralPlacementCacheManager * this, TransformGroup * param_1)


/* ProceduralPlacementCacheManager::checkExistingReferenceObjects(TransformGroup*) */

void __thiscall
ProceduralPlacementCacheManager::checkExistingReferenceObjects
          (ProceduralPlacementCacheManager *this,TransformGroup *param_1)

{
  char *__s1;
  long lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  __tree_iterator _Var5;
  ProceduralPlacementManager *this_00;
  basic_string *__s2;
  basic_string *extraout_x1;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined auVar9 [16];
  float local_98;
  float fStack_94;
  byte local_90 [16];
  char *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  auVar9 = ProceduralPlacementManager::getInstance();
  __s2 = auVar9._8_8_;
  this_00 = auVar9._0_8_;
  lVar8 = *(long *)(this_00 + 0x38);
  if ((int)((ulong)(*(long *)(this_00 + 0x40) - lVar8) >> 3) != 0) {
    uVar7 = 0;
    do {
      lVar8 = *(long *)(lVar8 + uVar7 * 8);
      ProceduralPlacementManager::getAbsPath((ProceduralPlacementManager *)(lVar8 + 0x18),__s2);
      if (((byte)param_1[0x41] >> 3 & 1) != 0) {
                    /* try { // try from 009c31a4 to 009c31ab has its CatchHandler @ 009c32a4 */
        TransformGroup::updateEulerFromMatrix();
      }
                    /* try { // try from 009c31b4 to 009c320f has its CatchHandler @ 009c32a8 */
      ProceduralPlacementManager::toWorldSpace
                (this_00,*(float *)(param_1 + 0x130),*(float *)(param_1 + 0x138),&fStack_94,
                 &local_98);
      __s1 = (char *)((ulong)local_90 | 1);
      if ((local_90[0] & 1) != 0) {
        __s1 = local_80;
      }
      __s2 = (basic_string *)&DAT_0050a39f;
      if (*(basic_string **)(param_1 + 0x100) != (basic_string *)0x0) {
        __s2 = *(basic_string **)(param_1 + 0x100);
      }
      iVar4 = strcmp(__s1,(char *)__s2);
      fVar3 = fStack_94;
      fVar2 = local_98;
      if (iVar4 == 0) {
        __s2 = (basic_string *)(lVar8 + 0x30);
        _Var5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementCacheManager::DistanceMatrixTypeField*>>>
                            *)(this + 8),__s2);
        if (this + 0x10 != (ProceduralPlacementCacheManager *)(ulong)_Var5) {
          DistanceMatrixTypeField::addPointForBulkAdd
                    (*(DistanceMatrixTypeField **)
                      ((ProceduralPlacementCacheManager *)(ulong)_Var5 + 0x38),(int)fVar3,(int)fVar2
                    );
          __s2 = extraout_x1;
        }
      }
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar8 = *(long *)(this_00 + 0x38);
      uVar7 = uVar7 + 1;
    } while (uVar7 < ((ulong)(*(long *)(this_00 + 0x40) - lVar8) >> 3 & 0xffffffff));
  }
  uVar7 = *(long *)(param_1 + 0x30) - (long)*(TransformGroup ***)(param_1 + 0x28);
  if ((int)(uVar7 >> 3) != 0) {
    uVar7 = uVar7 >> 3 & 0xffffffff;
    checkExistingReferenceObjects(this,**(TransformGroup ***)(param_1 + 0x28));
    if (uVar7 != 1) {
      uVar6 = 1;
      do {
        checkExistingReferenceObjects
                  (this,*(TransformGroup **)(*(long *)(param_1 + 0x28) + uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


