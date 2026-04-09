// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeferredDebugRenderer
// Entry Point: 009f0470
// Size: 1728 bytes
// Signature: undefined __thiscall DeferredDebugRenderer(DeferredDebugRenderer * this, IRenderDevice * param_1)


/* WARNING: Type propagation algorithm not settling */
/* DeferredDebugRenderer::DeferredDebugRenderer(IRenderDevice*) */

void __thiscall
DeferredDebugRenderer::DeferredDebugRenderer(DeferredDebugRenderer *this,IRenderDevice *param_1)

{
  char *pcVar1;
  long lVar2;
  Field *pFVar3;
  Field *pFVar4;
  pair pVar5;
  int iVar6;
  Frustum *this_00;
  size_t sVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined local_1a0 [4];
  undefined4 local_19c;
  __tree_node **local_198;
  __tree_node *local_190;
  undefined8 uStack_188;
  __tree_node **local_180;
  __tree_node *local_178;
  undefined8 uStack_170;
  undefined4 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined local_14c;
  undefined4 local_148;
  undefined4 local_140 [2];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 *local_128 [2];
  char *local_118;
  undefined2 local_110;
  Field *local_108;
  Field *local_100;
  undefined4 local_f0;
  basic_string local_e8 [4];
  char *local_d8;
  undefined2 local_d0;
  Field *local_c8;
  Field *local_c0;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(IRenderDevice **)(this + 0x298) = param_1;
  *(undefined8 *)(this + 0x2a0) = 0x4120000000000000;
  *(undefined2 *)(this + 0x1f8) = 0;
  this[0x1fa] = (DeferredDebugRenderer)0x0;
  *(undefined8 *)(this + 0x200) = 0;
  this[0x208] = (DeferredDebugRenderer)0x0;
                    /* try { // try from 009f0504 to 009f050b has its CatchHandler @ 009f0b70 */
  this_00 = (Frustum *)operator_new(0xf0);
                    /* try { // try from 009f0510 to 009f0513 has its CatchHandler @ 009f0b60 */
  Frustum::Frustum(this_00);
  *(Frustum **)(this + 0x210) = this_00;
                    /* try { // try from 009f0518 to 009f052b has its CatchHandler @ 009f0b58 */
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_e8,"DebugConstants",0);
                    /* try { // try from 009f052c to 009f05a3 has its CatchHandler @ 009f0c30 */
  ShaderStructLayout::addField((ShaderStructLayout *)local_e8,"viewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_e8,"pointSize",2,0,2,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_e8,"nearPlane",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  local_180 = &local_178;
  local_178 = (__tree_node *)0x0;
  uStack_170 = 0;
  pcVar1 = (char *)((ulong)local_e8 | 1);
  if (((byte)local_e8[0]._0_1_ & 1) != 0) {
    pcVar1 = local_d8;
  }
  sVar7 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 009f0a8c to 009f0a93 has its CatchHandler @ 009f0b7c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pvVar9 = (void *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT31(local_a8._1_3_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_009f061c;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009f0604 to 009f060b has its CatchHandler @ 009f0b7c */
    pvVar9 = operator_new(uVar10);
    local_a8 = (uint)uVar10 | 1;
    uStack_9c = (undefined4)(sVar7 >> 0x20);
    local_98 = SUB84(pvVar9,0);
    uStack_94 = (undefined4)((ulong)pvVar9 >> 0x20);
    uStack_a4 = (undefined4)(uVar10 >> 0x20);
    iStack_a0 = (int)sVar7;
LAB_009f061c:
    memcpy(pvVar9,pcVar1,sVar7);
  }
  local_128[0] = &local_a8;
  *(undefined *)((long)pvVar9 + sVar7) = 0;
                    /* try { // try from 009f0638 to 009f0687 has its CatchHandler @ 009f0c10 */
  pVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)&local_180,(piecewise_construct_t *)&local_a8,
                     (tuple *)&DAT_0051b1c8,(tuple *)local_128);
  uVar10 = (ulong)pVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (uVar10 + 0x38),local_e8);
  *(undefined2 *)(uVar10 + 0x50) = local_d0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (uVar10 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_e8) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar10 + 0x58),local_c8,local_c0);
  }
  *(undefined4 *)(uVar10 + 0x70) = local_b0;
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_94,local_98));
  }
                    /* try { // try from 009f06a0 to 009f06b3 has its CatchHandler @ 009f0b50 */
  ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_128,"DebugConstantsNoZ",0);
                    /* try { // try from 009f06b4 to 009f0707 has its CatchHandler @ 009f0c28 */
  ShaderStructLayout::addField((ShaderStructLayout *)local_128,"viewProjMatrix",2,4,4,false,0);
  ShaderStructLayout::addField((ShaderStructLayout *)local_128,"pointSize",2,0,2,false,0);
  ShaderStructLayout::endDefinition();
  local_198 = &local_190;
  local_190 = (__tree_node *)0x0;
  uStack_188 = 0;
  pcVar1 = (char *)((ulong)local_128 | 1);
  if (((ulong)local_128[0] & 1) != 0) {
    pcVar1 = local_118;
  }
  sVar7 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 009f0a94 to 009f0a9b has its CatchHandler @ 009f0b78 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    pvVar9 = (void *)((ulong)&local_a8 | 1);
    local_a8 = CONCAT31(local_a8._1_3_,(char)((int)sVar7 << 1));
    if (sVar7 == 0) goto LAB_009f0790;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009f0768 to 009f076f has its CatchHandler @ 009f0b78 */
    pvVar9 = operator_new(uVar10);
    local_a8 = (uint)uVar10 | 1;
    uStack_9c = (undefined4)(sVar7 >> 0x20);
    local_98 = SUB84(pvVar9,0);
    uStack_94 = (undefined4)((ulong)pvVar9 >> 0x20);
    uStack_a4 = (undefined4)(uVar10 >> 0x20);
    iStack_a0 = (int)sVar7;
  }
  memcpy(pvVar9,pcVar1,sVar7);
LAB_009f0790:
  local_168 = &local_a8;
  *(undefined *)((long)pvVar9 + sVar7) = 0;
                    /* try { // try from 009f079c to 009f07eb has its CatchHandler @ 009f0bf8 */
  pVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)&local_198,(piecewise_construct_t *)&local_a8,
                     (tuple *)&DAT_0051b1c8,(tuple *)&local_168);
  uVar10 = (ulong)pVar5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (undefined4 **)(uVar10 + 0x38),(basic_string *)local_128);
  *(undefined2 *)(uVar10 + 0x50) = local_110;
  if ((undefined4 **)(uVar10 + 0x38) != local_128) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::assign<ShaderStructLayout::Field*>
              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)(uVar10 + 0x58),local_108,local_100);
  }
  *(undefined4 *)(uVar10 + 0x70) = local_f0;
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_94,local_98));
  }
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar6 != 0)) {
                    /* try { // try from 009f0aac to 009f0ab7 has its CatchHandler @ 009f0b34 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
                    /* try { // try from 009f0818 to 009f0853 has its CatchHandler @ 009f0b90 */
  ShaderManager::createProgramFromFile
            ((ShaderManager *)&ShaderManager::getInstance()::instance,"debug.cg",(map *)&local_180,
             (IProgramObject **)(this + 600));
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar6 != 0)) {
                    /* try { // try from 009f0af4 to 009f0aff has its CatchHandler @ 009f0b30 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  ShaderManager::createProgramFromFile
            ((ShaderManager *)&ShaderManager::getInstance()::instance,"debug_noz.cg",
             (map *)&local_198,(IProgramObject **)(this + 0x260));
  local_138 = 0;
  local_140[0] = 0x4c;
  local_130 = 8;
                    /* try { // try from 009f0870 to 009f088f has its CatchHandler @ 009f0b8c */
  uVar8 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar8 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar8,local_140);
  *(undefined8 *)(this + 0x268) = uVar8;
                    /* try { // try from 009f089c to 009f08bb has its CatchHandler @ 009f0b88 */
  uVar8 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar8 = (**(code **)(*(long *)param_1 + 0x118))(param_1,uVar8,local_140);
  *(undefined8 *)(this + 0x270) = uVar8;
  local_1a0[0] = 0;
  local_19c = 1;
                    /* try { // try from 009f08d4 to 009f08df has its CatchHandler @ 009f0b4c */
  uVar8 = (**(code **)(*(long *)param_1 + 0xe0))(param_1,local_1a0);
  *(undefined8 *)(this + 0x278) = uVar8;
  uStack_94 = 1;
  uStack_9c = 0;
  local_98 = 9;
  local_80 = 0;
  uStack_78 = 0x100000001;
  local_90 = 0x100000001;
  uStack_88 = 0;
  local_70 = 0x100000001;
  uStack_a4 = 0;
  iStack_a0 = 0;
  uStack_60 = 0x101010101010101;
  local_68 = 0x101010101010101;
  local_a8 = 7;
                    /* try { // try from 009f0920 to 009f092b has its CatchHandler @ 009f0b48 */
  uVar8 = (**(code **)(*(long *)param_1 + 0xf0))(param_1,&local_a8);
  *(undefined8 *)(this + 0x290) = uVar8;
  local_160 = 0;
  uStack_158 = 0;
  local_14c = 0;
  local_150 = 0x1000101;
  local_148 = 0;
  local_168 = (undefined4 *)0x100000001;
                    /* try { // try from 009f0958 to 009f0983 has its CatchHandler @ 009f0b84 */
  uVar8 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_168);
  *(undefined8 *)(this + 0x280) = uVar8;
  local_14c = 1;
  uVar8 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,&local_168);
  *(undefined8 *)(this + 0x288) = uVar8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_198,local_190);
  pFVar4 = local_108;
  if (local_108 != (Field *)0x0) {
    while (pFVar3 = local_100, pFVar3 != pFVar4) {
      local_100 = pFVar3 + -0x20;
      if (((byte)*local_100 & 1) != 0) {
        operator_delete(*(void **)(pFVar3 + -0x10));
      }
    }
    local_100 = pFVar4;
    operator_delete(local_108);
  }
  if (((ulong)local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_180,local_178);
  pFVar4 = local_c8;
  if (local_c8 != (Field *)0x0) {
    while (pFVar3 = local_c0, pFVar3 != pFVar4) {
      local_c0 = pFVar3 + -0x20;
      if (((byte)*local_c0 & 1) != 0) {
        operator_delete(*(void **)(pFVar3 + -0x10));
      }
    }
    local_c0 = pFVar4;
    operator_delete(local_c8);
  }
  if (((byte)local_e8[0]._0_1_ & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


