// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadOverlayShader
// Entry Point: 006f63f8
// Size: 1168 bytes
// Signature: undefined __thiscall loadOverlayShader(TextureOverlayRenderer * this, char * param_1, char * param_2, uint param_3, OverlayShader * param_4)


/* WARNING: Type propagation algorithm not settling */
/* TextureOverlayRenderer::loadOverlayShader(char const*, char const*, unsigned int,
   TextureOverlayRenderer::OverlayShader&) */

void __thiscall
TextureOverlayRenderer::loadOverlayShader
          (TextureOverlayRenderer *this,char *param_1,char *param_2,uint param_3,
          OverlayShader *param_4)

{
  long lVar1;
  Field *pFVar2;
  Field *pFVar3;
  pair pVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  char **ppcVar14;
  uint auStack_e8 [2];
  undefined8 local_e0;
  undefined uStack_d8;
  undefined5 uStack_d7;
  undefined local_d2;
  void *local_d0;
  __tree_node **local_c8;
  __tree_node *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  basic_string local_a8 [4];
  void *local_98;
  undefined2 local_90;
  Field *local_88;
  Field *local_80;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_a8,"OverlayParams",0);
                    /* try { // try from 006f644c to 006f6507 has its CatchHandler @ 006f68b8 */
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"g_maskPos",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"g_maskInvSize",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"g_maskAlphaOnly",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"g_valueScale",2,0,0,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_a8,"g_swizzle",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  local_c0 = (__tree_node *)0x0;
  uStack_b8 = 0;
  local_c8 = &local_c0;
  local_d2 = 0;
  local_e0._0_1_ = (piecewise_construct_t)0x1a;
  local_e0._1_5_ = 0x6c7265764f;
  local_b0 = &local_e0;
  local_e0._6_2_ = 0x7961;
  uStack_d8 = 0x50;
  uStack_d7 = 0x736d617261;
                    /* try { // try from 006f653c to 006f658b has its CatchHandler @ 006f68a0 */
  pVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)&local_c8,(piecewise_construct_t *)&local_e0,
                     (tuple *)&DAT_00516ec5,(tuple *)&local_b0);
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
  if (((byte)local_e0._0_1_ & 1) != 0) {
    operator_delete(local_d0);
  }
  *(undefined8 *)(param_4 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_4 + 0x18) = 0xffffffff;
  *(undefined8 *)(param_4 + 0x10) = 0xffffffffffffffff;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar7 != 0)) {
                    /* try { // try from 006f684c to 006f6857 has its CatchHandler @ 006f6888 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
                    /* try { // try from 006f65cc to 006f65fb has its CatchHandler @ 006f689c */
  uVar9 = ShaderManager::createProgramFromFile
                    ((ShaderManager *)&ShaderManager::getInstance()::instance,param_1,param_2,
                     param_3,(map *)&local_c8,(IProgramObject **)param_4,(uint *)&local_b0,
                     (ShaderStructLayout **)&local_e0,auStack_e8);
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f6638 to 006f663b has its CatchHandler @ 006f68d4 */
    for (uVar13 = 0; uVar5 = (**(code **)(**(long **)param_4 + 0x20))(), uVar13 < uVar5;
        uVar13 = uVar13 + 1) {
                    /* try { // try from 006f6650 to 006f6657 has its CatchHandler @ 006f68cc */
      pcVar10 = (char *)(**(code **)(**(long **)param_4 + 0x18))(*(long **)param_4,uVar13);
                    /* try { // try from 006f6668 to 006f6673 has its CatchHandler @ 006f68c8 */
      uVar6 = (**(code **)(**(long **)param_4 + 0x10))(*(long **)param_4,uVar13,1);
      iVar7 = strcmp(pcVar10,"overlayTexture");
      puVar11 = (undefined8 *)(param_4 + 8);
      if ((iVar7 == 0) ||
         (iVar7 = strcmp(pcVar10,"maskTexture"), puVar11 = (undefined8 *)(param_4 + 0x10),
         iVar7 == 0)) {
        *(undefined4 *)puVar11 = uVar6;
      }
    }
                    /* try { // try from 006f66d0 to 006f66d3 has its CatchHandler @ 006f68d0 */
    for (uVar13 = 0; uVar5 = (**(code **)(**(long **)param_4 + 0x38))(), uVar13 < uVar5;
        uVar13 = uVar13 + 1) {
                    /* try { // try from 006f66e8 to 006f66ef has its CatchHandler @ 006f68c4 */
      pcVar10 = (char *)(**(code **)(**(long **)param_4 + 0x30))(*(long **)param_4,uVar13);
                    /* try { // try from 006f6700 to 006f670b has its CatchHandler @ 006f68c0 */
      uVar6 = (**(code **)(**(long **)param_4 + 0x28))(*(long **)param_4,uVar13,1);
      iVar7 = strcmp(pcVar10,"overlaySampler");
      puVar12 = (undefined4 *)(param_4 + 0xc);
      if ((iVar7 == 0) ||
         (iVar7 = strcmp(pcVar10,"maskSampler"), puVar12 = (undefined4 *)(param_4 + 0x14),
         iVar7 == 0)) {
        *puVar12 = uVar6;
      }
    }
    uVar9 = (ulong)local_b0 & 0xffffffff;
    if ((int)local_b0 != 0) {
      iVar7 = 0;
      ppcVar14 = (char **)(CONCAT26(local_e0._6_2_,CONCAT51(local_e0._1_5_,local_e0._0_1_)) + 0x10);
      do {
        if (*(char *)((long)ppcVar14 + 9) == '\0') {
          pcVar10 = (char *)((long)ppcVar14 + -0xf);
          if ((*(byte *)(ppcVar14 + -2) & 1) != 0) {
            pcVar10 = *ppcVar14;
          }
          iVar8 = strcmp(pcVar10,"OverlayParams");
          if (iVar8 == 0) {
            *(int *)(param_4 + 0x18) = iVar7;
          }
          iVar7 = iVar7 + 1;
        }
        ppcVar14 = ppcVar14 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_c8,local_c0);
  pFVar3 = local_88;
  if (local_88 != (Field *)0x0) {
    while (pFVar2 = local_80, pFVar2 != pFVar3) {
      local_80 = pFVar2 + -0x20;
      if (((byte)*local_80 & 1) != 0) {
        operator_delete(*(void **)(pFVar2 + -0x10));
      }
    }
    local_80 = pFVar3;
    operator_delete(local_88);
  }
  if (((byte)local_a8[0]._0_1_ & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


