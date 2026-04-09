// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderWireframe
// Entry Point: 00a15298
// Size: 1604 bytes
// Signature: undefined __thiscall renderWireframe(Renderer * this, ScenegraphNode * param_1, float * param_2, bool param_3)


/* WARNING: Type propagation algorithm not settling */
/* Renderer::renderWireframe(ScenegraphNode*, float const*, bool) */

void __thiscall
Renderer::renderWireframe(Renderer *this,ScenegraphNode *param_1,float *param_2,bool param_3)

{
  char *__s;
  long lVar1;
  Field *pFVar2;
  Field *pFVar3;
  pair pVar4;
  int iVar5;
  size_t __n;
  undefined8 uVar6;
  long *plVar7;
  Field *pFVar8;
  void *__dest;
  ulong uVar9;
  undefined8 *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  __tree_node *local_b8;
  undefined8 local_b0;
  basic_string local_a8 [4];
  char *local_98;
  undefined2 local_90;
  Field *local_88;
  Field *local_80;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x1ba0) != 0) goto LAB_00a155d4;
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_a8,"WireframeConstants",0);
                    /* try { // try from 00a152f0 to 00a153f7 has its CatchHandler @ 00a15928 */
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"viewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"modelMatrix",2,3,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"color",2,0,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"positionOffset",2,0,3,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"positionScale",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"nearPlane",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"farPlane",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  local_c0 = &local_b8;
  local_b8 = (__tree_node *)0x0;
  local_b0 = 0;
  __s = (char *)((ulong)local_a8 | 1);
  if (((byte)local_a8[0]._0_1_ & 1) != 0) {
    __s = local_98;
  }
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00a15888 to 00a1588f has its CatchHandler @ 00a158f4 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_d8 | 1);
    local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00a15470;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a15458 to 00a1545f has its CatchHandler @ 00a158f4 */
    __dest = operator_new(uVar9);
    local_d8 = uVar9 | 1;
    local_d0 = __n;
    local_c8 = __dest;
LAB_00a15470:
    memcpy(__dest,__s,__n);
  }
  local_e0 = &local_d8;
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00a1548c to 00a154db has its CatchHandler @ 00a15904 */
  pVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)&local_c0,(piecewise_construct_t *)&local_d8,
                     (tuple *)&DAT_0051d594,(tuple *)&local_e0);
  uVar9 = (ulong)pVar4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (uVar9 + 0x38),local_a8);
  *(undefined2 *)(uVar9 + 0x50) = local_90;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (uVar9 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_a8) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar9 + 0x58),local_88,local_80);
  }
  *(undefined4 *)(uVar9 + 0x70) = local_70;
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 00a158a0 to 00a158ab has its CatchHandler @ 00a158dc */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
                    /* try { // try from 00a1550c to 00a15523 has its CatchHandler @ 00a158f0 */
  ShaderManager::createProgramFromFile
            ((ShaderManager *)&ShaderManager::getInstance()::instance,"wireframe.cg",
             (map *)&local_c0,(IProgramObject **)(this + 0x1b98));
  plVar7 = *(long **)(this + 0x30);
  local_d0 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,0x98);
  local_c8 = (void *)CONCAT44(local_c8._4_4_,8);
                    /* try { // try from 00a15544 to 00a15563 has its CatchHandler @ 00a158fc */
  uVar6 = (**(code **)(*plVar7 + 0x138))(plVar7);
  uVar6 = (**(code **)(*plVar7 + 0x118))(plVar7,uVar6,&local_d8);
  *(undefined8 *)(this + 0x1ba0) = uVar6;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_c0,local_b8);
  pFVar3 = local_88;
  if (local_88 != (Field *)0x0) {
    while (pFVar8 = local_80, pFVar8 != pFVar3) {
      local_80 = pFVar8 + -0x20;
      if (((byte)*local_80 & 1) != 0) {
        operator_delete(*(void **)(pFVar8 + -0x10));
      }
    }
    local_80 = pFVar3;
    operator_delete(local_88);
  }
  if (((byte)local_a8[0]._0_1_ & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00a155d4:
  if (*(long *)(this + 0x1ba8) == 0) {
    ShaderStructLayout::ShaderStructLayout
              ((ShaderStructLayout *)local_a8,"TerrainWireframeConstants",0);
                    /* try { // try from 00a155f0 to 00a1571b has its CatchHandler @ 00a1592c */
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"viewProjMatrix",2,4,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"modelMatrix",2,3,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"color",2,0,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"terrainPatchOffset",2,0,4,false,0);
    ShaderStructLayout::addField
              ((ShaderStructLayout *)local_a8,"terrainSizeInvSizeScaleXZScaleY",2,0,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"nearPlane",2,0,0,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"farPlane",2,0,0,false,0);
    ShaderStructLayout::endDefinition();
    AdhocShader::load((AdhocShader *)(this + 0x1bd0),*(IRenderDevice **)(this + 0x30),
                      "terrainWireframe.cg",(char *)0x0,0,(ShaderStructLayout *)local_a8,1);
    plVar7 = *(long **)(this + 0x30);
    local_b8 = (__tree_node *)0x0;
    local_c0 = (__tree_node **)CONCAT44(local_c0._4_4_,0xa8);
    local_b0 = CONCAT44(local_b0._4_4_,8);
                    /* try { // try from 00a1573c to 00a1575b has its CatchHandler @ 00a158f8 */
    uVar6 = (**(code **)(*plVar7 + 0x138))(plVar7);
    uVar6 = (**(code **)(*plVar7 + 0x118))(plVar7,uVar6,&local_c0);
    pFVar3 = local_88;
    *(undefined8 *)(this + 0x1ba8) = uVar6;
    pFVar8 = local_80;
    if (local_88 != (Field *)0x0) {
      while (pFVar2 = pFVar8, pFVar2 != pFVar3) {
        pFVar8 = pFVar2 + -0x20;
        if (((byte)*pFVar8 & 1) != 0) {
          operator_delete(*(void **)(pFVar2 + -0x10));
        }
      }
      local_80 = pFVar3;
      operator_delete(local_88);
    }
    if (((byte)local_a8[0]._0_1_ & 1) != 0) {
      operator_delete(local_98);
    }
  }
  if ((*(long *)(this + 0x1b98) != 0) && (*(long *)(this + 0x1ba0) != 0)) {
    plVar7 = (long *)(**(code **)(**(long **)(this + 0x30) + 0x138))();
    (**(code **)(*plVar7 + 0xb0))(plVar7,*(undefined8 *)(this + 0x1bb8));
    (**(code **)(*plVar7 + 0xb8))(plVar7,*(undefined8 *)(this + 0x1bb0));
    (**(code **)(*plVar7 + 0xc0))(plVar7,*(undefined8 *)(this + 0x1bc0));
    if ((*(long *)(this + 8) != 0) &&
       ((*(long *)(this + 0x18) != 0 && (((byte)param_1[0x40] & 1) != 0)))) {
      if (param_3) {
        renderWireframeRecursive
                  (this,param_1,param_2,(ICommandBuffer *)plVar7,*(ITextureObject **)(this + 0xf18))
        ;
      }
      else {
        renderWireframeNode(this,param_1,param_2,(ICommandBuffer *)plVar7,
                            *(ITextureObject **)(this + 0xf18));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


