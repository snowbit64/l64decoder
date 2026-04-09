// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSharedI3DLoadTask
// Entry Point: 00905b88
// Size: 1068 bytes
// Signature: undefined __thiscall addSharedI3DLoadTask(I3DManager * this, char * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4, bool param_5, IStreamingCallback * param_6, bool param_7)


/* I3DManager::addSharedI3DLoadTask(char const*, bool, bool, MeshSplitFileState const*, bool,
   IStreamingCallback*, bool) */

void __thiscall
I3DManager::addSharedI3DLoadTask
          (I3DManager *this,char *param_1,bool param_2,bool param_3,MeshSplitFileState *param_4,
          bool param_5,IStreamingCallback *param_6,bool param_7)

{
  long **this_00;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  __tree_iterator _Var4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  I3DStreamingManager *this_01;
  undefined8 *puVar9;
  __tree_node_base **pp_Var10;
  void *__dest;
  undefined8 *puVar11;
  ScenegraphNode **ppSVar12;
  ulong __n;
  void *pvVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_88;
  size_t sStack_80;
  void *local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar5 = (undefined4 *)operator_new(0x40);
  I3DStreamingManager::getInstance();
  uVar3 = I3DStreamingManager::getNextRequestId();
  fVar15 = *(float *)(this + 0x60);
  fVar16 = *(float *)(this + 100);
  *(bool *)(puVar5 + 4) = param_2;
  *(bool *)((long)puVar5 + 0x11) = param_3;
  *puVar5 = uVar3;
  *(MeshSplitFileState **)(puVar5 + 6) = param_4;
  *(IStreamingCallback **)(puVar5 + 8) = param_6;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined *)(puVar5 + 0xc) = 0;
  uVar3 = MathUtil::getRandomMinMax(fVar15,fVar16);
  *(undefined8 *)(puVar5 + 0xe) = 0;
  puVar5[0xd] = uVar3;
  sVar6 = strlen(param_1);
  if (0xffffffffffffffef < sVar6) goto LAB_00905f94;
  this_00 = (long **)(this + 0x30);
  if (sVar6 < 0x17) {
    pvVar13 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00905c68;
  }
  else {
    uVar14 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar13 = operator_new(uVar14);
    local_88 = uVar14 | 1;
    sStack_80 = sVar6;
    local_78 = pvVar13;
LAB_00905c68:
    memcpy(pvVar13,param_1,sVar6);
  }
  *(undefined *)((long)pvVar13 + sVar6) = 0;
                    /* try { // try from 00905c7c to 00905c87 has its CatchHandler @ 00905fd4 */
  _Var4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
                      *)this_00,(basic_string *)&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (this + 0x38 != (I3DManager *)(ulong)_Var4) {
    ppSVar12 = *(ScenegraphNode ***)((I3DManager *)(ulong)_Var4 + 0x38);
    *(ScenegraphNode ***)(puVar5 + 2) = ppSVar12;
    *(int *)(ppSVar12 + 2) = *(int *)(ppSVar12 + 2) + 1;
    if (*(char *)(ppSVar12 + 1) != '\0') {
      uVar3 = MathUtil::getRandomMinMax(*(float *)(this + 0x68),*(float *)(this + 0x6c));
      puVar5[0xd] = uVar3;
      if ((*ppSVar12 == (ScenegraphNode *)0x0) || (*(long *)(puVar5 + 8) == 0)) {
        *(undefined8 *)(puVar5 + 10) = 0;
      }
      else {
        uVar7 = CloneUtil::cloneScenegraphNode
                          (*ppSVar12,*(bool *)(puVar5 + 4),*(bool *)((long)puVar5 + 0x11),
                           *(MeshSplitFileState **)(puVar5 + 6));
        *(undefined8 *)(puVar5 + 10) = uVar7;
      }
      iVar1 = *(int *)((long)ppSVar12 + 0xc);
      puVar5[0xf] = iVar1;
      *(undefined *)(puVar5 + 0xc) = 1;
      if (iVar1 != 0) {
        unrefSharedI3D(this,(SharedI3D *)ppSVar12);
        *(undefined8 *)(puVar5 + 2) = 0;
      }
    }
    goto LAB_00905ebc;
  }
  puVar8 = (undefined8 *)operator_new(0x30);
  *puVar8 = 0;
  *(undefined *)(puVar8 + 1) = 0;
  *(undefined4 *)((long)puVar8 + 0x2c) = 0;
  *(undefined8 *)((long)puVar8 + 0x14) = 0;
  *(undefined8 *)((long)puVar8 + 0xc) = 0;
  *(undefined8 *)((long)puVar8 + 0x24) = 0;
  *(undefined8 *)((long)puVar8 + 0x1c) = 0;
                    /* try { // try from 00905d20 to 00905d2b has its CatchHandler @ 00905fb4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar8 + 3));
  *(undefined8 **)(puVar5 + 2) = puVar8;
  *puVar8 = 0;
  *(undefined *)(puVar8 + 1) = 0;
  *(undefined8 *)((long)puVar8 + 0xc) = 0x100000000;
  this_01 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  puVar9 = (undefined8 *)operator_new(0x10);
  *puVar9 = &PTR__IStreamingCallback_00fdfb78;
  puVar9[1] = this;
  uVar3 = I3DStreamingManager::addI3DLoadTask
                    (this_01,param_1,false,false,(MeshSplitFileState *)0x0,param_5,
                     (IStreamingCallback *)puVar9,param_7,true);
  *(undefined4 *)((long)puVar8 + 0x14) = uVar3;
  sVar6 = strlen(param_1);
  if (0xffffffffffffffef < sVar6) {
LAB_00905f94:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pvVar13 = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_00905e14;
  }
  else {
    uVar14 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar13 = operator_new(uVar14);
    local_88 = uVar14 | 1;
    sStack_80 = sVar6;
    local_78 = pvVar13;
LAB_00905e14:
    memcpy(pvVar13,param_1,sVar6);
  }
  *(undefined *)((long)pvVar13 + sVar6) = 0;
                    /* try { // try from 00905e28 to 00905e4b has its CatchHandler @ 00905fd0 */
  pp_Var10 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,I3DManager::SharedI3D*>>>
                         *)this_00,&local_70,(basic_string *)&local_88);
  puVar9 = (undefined8 *)*pp_Var10;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x40);
    pvVar13 = local_78;
    sVar6 = sStack_80;
    uVar14 = local_88;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_88 = 0;
    sStack_80 = 0;
    local_78 = (void *)0x0;
    puVar9[6] = pvVar13;
    puVar9[7] = 0;
    puVar9[5] = sVar6;
    puVar9[4] = uVar14;
    puVar9[2] = local_70;
    *pp_Var10 = (__tree_node_base *)puVar9;
    puVar11 = puVar9;
    if ((long *)**this_00 != (long *)0x0) {
      *this_00 = (long *)**this_00;
      puVar11 = (undefined8 *)*pp_Var10;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x38),(__tree_node_base *)puVar11);
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  }
  puVar9[7] = puVar8;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00905ebc:
  puVar8 = *(undefined8 **)(this + 8);
  if (puVar8 == *(undefined8 **)(this + 0x10)) {
    pvVar13 = *(void **)this;
    __n = (long)puVar8 - (long)pvVar13;
    uVar14 = ((long)__n >> 3) + 1;
    if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar14 <= (ulong)((long)__n >> 2)) {
      uVar14 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar14 << 3);
    }
    puVar8 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar8 = puVar5;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar13,__n);
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar8 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar14 * 8);
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  else {
    *puVar8 = puVar5;
    *(undefined8 **)(this + 8) = puVar8 + 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*puVar5);
  }
  return;
}


