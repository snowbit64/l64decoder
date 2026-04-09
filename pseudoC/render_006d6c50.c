// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006d6c50
// Size: 3444 bytes
// Signature: undefined __thiscall render(Console * this, FontOverlayRenderer * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Console::render(FontOverlayRenderer*) */

void __thiscall Console::render(Console *this,FontOverlayRenderer *param_1)

{
  uint uVar1;
  Console CVar2;
  uint uVar3;
  long lVar4;
  Console *pCVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  pair pVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  size_t __n;
  undefined8 uVar12;
  Field *pFVar13;
  char *pcVar14;
  float *pfVar15;
  char *pcVar16;
  undefined8 *puVar17;
  basic_string_conflict *pbVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *******pppppppuVar26;
  Field *pFVar27;
  long lVar28;
  void *pvVar29;
  ulong uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 *local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined8 *******local_198;
  uint local_190 [2];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  Field *local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  long local_b8;
  
  lVar4 = tpidr_el0;
  local_b8 = *(long *)(lVar4 + 0x28);
  if (((byte)this[0xb8] | (byte)this[0xba]) == 0) goto LAB_006d7930;
  RenderDeviceManager::getInstance();
  plVar10 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  plVar11 = (long *)(**(code **)(*plVar10 + 0x138))();
  if (*(long *)(this + 0x110) == 0) {
    ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)&local_f8,"ConsoleConstants",0);
                    /* try { // try from 006d6ce8 to 006d6d3b has its CatchHandler @ 006d7a70 */
    ShaderStructLayout::addField((ShaderStructLayout *)&local_f8,"modelViewProj",2,3,4,false,0);
    ShaderStructLayout::addField((ShaderStructLayout *)&local_f8,"color",2,0,4,false,0);
    ShaderStructLayout::endDefinition();
    local_1a8 = &local_1a0;
    local_1a0 = (undefined8 *******)0x0;
    local_198 = (undefined8 *******)0x0;
    pcVar14 = (char *)((ulong)&local_f8 | 1);
    if ((local_f8 & 1) != 0) {
      pcVar14 = (char *)CONCAT44(uStack_e4,local_e8);
    }
    __n = strlen(pcVar14);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 006d7970 to 006d7977 has its CatchHandler @ 006d7a30 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pvVar29 = (void *)((ulong)&local_168 | 1);
      local_168 = (float)CONCAT31(local_168._1_3_,(char)((int)(float)__n << 1));
      if (__n != 0) goto LAB_006d6db4;
    }
    else {
      uVar21 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006d6d9c to 006d6da3 has its CatchHandler @ 006d7a30 */
      pvVar29 = operator_new(uVar21);
      local_168 = (float)((uint)uVar21 | 1);
      fStack_15c = (float)(__n >> 0x20);
      fStack_158 = SUB84(pvVar29,0);
      fStack_154 = (float)((ulong)pvVar29 >> 0x20);
      fStack_164 = (float)(uVar21 >> 0x20);
      fStack_160 = (float)__n;
LAB_006d6db4:
      memcpy(pvVar29,pcVar14,__n);
    }
    local_1c0 = &local_168;
    *(undefined *)((long)pvVar29 + __n) = 0;
                    /* try { // try from 006d6dd0 to 006d6e1f has its CatchHandler @ 006d7a44 */
    pVar8 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                      ((basic_string *)&local_1a8,(piecewise_construct_t *)&local_168,
                       (tuple *)&DAT_00516b93,(tuple *)&local_1c0);
    uVar21 = (ulong)pVar8;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (undefined4 *)(uVar21 + 0x38),&local_f8);
    *(undefined2 *)(uVar21 + 0x50) = (undefined2)local_e0;
    if ((undefined4 *)(uVar21 + 0x38) != &local_f8) {
      std::__ndk1::
      vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
      assign<ShaderStructLayout::Field*>
                ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                  *)(uVar21 + 0x58),(Field *)CONCAT44(uStack_d4,local_d8),local_d0);
    }
    *(float *)(uVar21 + 0x70) = local_c0;
    if (((uint)local_168 & 1) != 0) {
      operator_delete((void *)CONCAT44(fStack_154,fStack_158));
    }
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar9 != 0)) {
                    /* try { // try from 006d7988 to 006d7993 has its CatchHandler @ 006d79c4 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
                    /* try { // try from 006d6e48 to 006d6e63 has its CatchHandler @ 006d7a28 */
    ShaderManager::createProgramFromFile
              ((ShaderManager *)&ShaderManager::getInstance()::instance,"console.cg",
               (map *)&local_1a8,(IProgramObject **)(this + 0x110));
    local_1c0 = (undefined4 *)&DAT_00516b38;
    uStack_1b8 = 0x100000048;
    local_1b0 = "Console";
                    /* try { // try from 006d6e90 to 006d6e9f has its CatchHandler @ 006d7a24 */
    uVar12 = (**(code **)(*plVar10 + 0x108))(plVar10,plVar11,&local_1c0);
    *(undefined8 *)(this + 0x118) = uVar12;
    local_168 = 1.401298e-45;
    uStack_14c = 0;
    fStack_154 = 0.0;
    fStack_15c = 0.0;
    fStack_158 = 0.0;
    fStack_164 = 0.0;
    fStack_160 = 0.0;
    uStack_13c = 0;
    local_144 = 0;
    uStack_12c = 0;
    local_134 = 0;
    uStack_11c = 0;
    local_124 = 0;
    uStack_10c = 0;
    local_114 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    fStack_150 = 4.203895e-45;
                    /* try { // try from 006d6ee0 to 006d6eeb has its CatchHandler @ 006d7a20 */
    uVar12 = (**(code **)(*plVar10 + 0x128))(plVar10,&local_168);
    *(undefined8 *)(this + 0x120) = uVar12;
    local_188 = 0;
    local_190[0] = 0x40;
    local_180 = 8;
                    /* try { // try from 006d6f0c to 006d6f1b has its CatchHandler @ 006d7a1c */
    uVar12 = (**(code **)(*plVar10 + 0x118))(plVar10,plVar11,local_190);
    *(undefined8 *)(this + 0x128) = uVar12;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
               *)&local_1a8,(__tree_node *)local_1a0);
    pFVar13 = (Field *)CONCAT44(uStack_d4,local_d8);
    if (pFVar13 != (Field *)0x0) {
      if (local_d0 != pFVar13) {
        do {
          pFVar27 = local_d0 + -0x20;
          if (((byte)*pFVar27 & 1) != 0) {
            operator_delete(*(void **)(local_d0 + -0x10));
          }
          local_d0 = pFVar27;
        } while (pFVar27 != pFVar13);
        pFVar13 = (Field *)CONCAT44(uStack_d4,local_d8);
      }
      operator_delete(pFVar13);
    }
    if ((local_f8 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_e4,local_e8));
    }
  }
  if (this[0xba] != (Console)0x0) {
    uVar35 = 0x3f800000;
    uVar34 = 0xbf800000;
    if (this[0xb8] != (Console)0x0) {
      uVar34 = 0x3f800000;
    }
    GlobalTimeManager::getInstance();
    fVar32 = (float)GlobalTimeManager::getCurrentDt();
    fVar32 = (float)NEON_fmadd(uVar34,fVar32 / *(float *)(this + 0xc0),*(undefined4 *)(this + 0xbc))
    ;
    *(float *)(this + 0xbc) = fVar32;
    if ((1.0 < fVar32) || (uVar35 = 0, fVar32 < 0.0)) {
      *(undefined4 *)(this + 0xbc) = uVar35;
      this[0xba] = (Console)0x0;
    }
  }
  FontOverlayRenderer::setBold(param_1,false);
  fVar32 = (float)FontOverlayRenderer::getLineHeight(param_1,0.015);
  pbVar18 = (basic_string_conflict *)0x0;
  fVar33 = (float)FontOverlayRenderer::getTextWidth(param_1,0.015,false,0," ");
  Mutex::enterCriticalSection();
  FontOverlayRenderer::setWrapWidth(param_1,0.985 - fVar33,true);
  plVar10 = (long *)(this + 8);
  lVar28 = *plVar10;
  uVar30 = (ulong)*(uint *)(this + 0x20);
  uVar21 = (*(long *)(this + 0x10) - lVar28 >> 3) * -0x5555555555555555;
  if (uVar30 <= uVar21 && uVar21 - uVar30 != 0) {
    do {
      pbVar19 = (byte *)(lVar28 + uVar30 * 0x18);
      local_168 = 0.0;
      fStack_164 = 0.0;
      fStack_160 = 0.0;
      fStack_15c = 0.0;
      fStack_158 = 0.0;
      fStack_154 = 0.0;
      pbVar23 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar23 = pbVar19 + 1;
      }
                    /* try { // try from 006d70c4 to 006d70db has its CatchHandler @ 006d7abc */
      pbVar18 = (basic_string_conflict *)0x0;
      FontOverlayRenderer::getTextLines(param_1,0.015,false,0,(char *)pbVar23,(vector *)&local_168);
      pvVar29 = (void *)CONCAT44(fStack_164,local_168);
      uVar21 = CONCAT44(fStack_15c,fStack_160) - (long)pvVar29;
      if (8 < uVar21) {
        local_f8 = CONCAT13(local_f8._3_1_,0x2002);
        iVar9 = (int)uVar30;
                    /* try { // try from 006d710c to 006d7117 has its CatchHandler @ 006d7a94 */
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)plVar10,(int)*plVar10 + iVar9 * 0x18 + 0x18,((long)uVar21 >> 3) - 1,&local_f8);
        if ((local_f8 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_e4,local_e8));
        }
        puVar20 = (undefined4 *)CONCAT44(fStack_164,local_168);
        uVar21 = CONCAT44(fStack_15c,fStack_160) - (long)puVar20;
        if (8 < uVar21) {
          uVar21 = (long)uVar21 >> 3;
          uVar24 = 1;
          do {
            uVar25 = (ulong)((int)uVar24 + 1);
            pbVar19 = (byte *)(*plVar10 + uVar30 * 0x18);
            pcVar14 = (char *)(*plVar10 + (ulong)(uint)(iVar9 + (int)uVar24) * 0x18);
            pbVar23 = *(byte **)(pbVar19 + 0x10);
            if ((*pbVar19 & 1) == 0) {
              pbVar23 = pbVar19 + 1;
            }
            if (uVar25 < uVar21) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (pcVar14,(ulong)(pbVar23 + (uint)puVar20[uVar24 * 2]));
            }
            else {
                    /* try { // try from 006d7144 to 006d71a7 has its CatchHandler @ 006d7ae0 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (pcVar14);
            }
            puVar20 = (undefined4 *)CONCAT44(fStack_164,local_168);
            uVar21 = CONCAT44(fStack_15c,fStack_160) - (long)puVar20 >> 3;
            uVar24 = uVar25;
          } while (uVar25 < uVar21);
        }
                    /* try { // try from 006d71c4 to 006d71cb has its CatchHandler @ 006d7abc */
        pbVar18 = (basic_string_conflict *)0x0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize(*plVar10 + uVar30 * 0x18,(char)puVar20[2] - (char)*puVar20);
        pvVar29 = (void *)CONCAT44(fStack_164,local_168);
        uVar30 = (ulong)((iVar9 + (int)((ulong)(CONCAT44(fStack_15c,fStack_160) - (long)pvVar29) >>
                                       3)) - 1);
      }
      if (pvVar29 != (void *)0x0) {
        fStack_160 = SUB84(pvVar29,0);
        fStack_15c = (float)((ulong)pvVar29 >> 0x20);
        operator_delete(pvVar29);
      }
      lVar28 = *(long *)(this + 8);
      uVar30 = (ulong)((int)uVar30 + 1);
      uVar21 = (*(long *)(this + 0x10) - lVar28 >> 3) * -0x5555555555555555;
    } while (uVar30 <= uVar21 && uVar21 - uVar30 != 0);
  }
  *(int *)(this + 0x20) = (int)uVar21;
  FontOverlayRenderer::setWrapWidth(param_1,0.0,true);
  CVar2 = this[0xb9];
  local_1a8 = (undefined8 *******)0x0;
  local_1a0 = (undefined8 *******)0x0;
  iVar9 = *(int *)(this + 0xb0);
  local_198 = (undefined8 *******)0x0;
  uVar1 = ~(uint)(byte)CVar2 & 1;
  lVar28 = *(long *)(this + 8);
  lVar22 = *(long *)(this + 0x10);
  if (iVar9 != 0) {
    uVar1 = 1;
  }
  if (0 < (int)((*(int *)(this + 0xb4) + uVar1) - ((byte)CVar2 ^ 1))) {
    lVar31 = 1;
    uVar3 = (int)((ulong)(lVar22 - lVar28) >> 3) * -0x55555555 - (iVar9 + *(int *)(this + 0xb4));
    while( true ) {
      pppppppuVar7 = local_1a0;
      if ((int)((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + (int)lVar31 + -1) <
          (int)((ulong)(lVar22 - lVar28) >> 3) * -0x55555555) {
        if (local_1a0 == local_198) {
                    /* try { // try from 006d72ac to 006d72b3 has its CatchHandler @ 006d7a84 */
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((basic_string *)&local_1a8);
        }
        else {
                    /* try { // try from 006d7298 to 006d729f has its CatchHandler @ 006d7a88 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)local_1a0);
          local_1a0 = pppppppuVar7 + 3;
        }
      }
      CVar2 = this[0xb9];
      if ((int)((*(int *)(this + 0xb4) + uVar1) - ((byte)CVar2 ^ 1)) <= lVar31) break;
      lVar28 = *(long *)(this + 8);
      lVar22 = *(long *)(this + 0x10);
      lVar31 = lVar31 + 1;
    }
    iVar9 = *(int *)(this + 0xb0);
  }
  if ((iVar9 == 0) && (CVar2 != (Console)0x0)) {
                    /* try { // try from 006d72f4 to 006d72fb has its CatchHandler @ 006d7a2c */
    std::__ndk1::operator+((__ndk1 *)(this + 0x98),(basic_string_conflict *)(this + 0x80),pbVar18);
    if (local_1a0 < local_198) {
      local_1a0[2] = (undefined8 ******)CONCAT44(fStack_154,fStack_158);
      local_1a0[1] = (undefined8 ******)CONCAT44(fStack_15c,fStack_160);
      *local_1a0 = (undefined8 ******)CONCAT44(fStack_164,local_168);
      local_1a0 = local_1a0 + 3;
    }
    else {
                    /* try { // try from 006d7324 to 006d732f has its CatchHandler @ 006d7a08 */
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)&local_1a8,&local_168);
      if (((uint)local_168 & 1) != 0) {
        operator_delete((void *)CONCAT44(fStack_154,fStack_158));
      }
    }
  }
                    /* try { // try from 006d7340 to 006d7347 has its CatchHandler @ 006d7a6c */
  Mutex::leaveCriticalSection();
  iVar9 = *(int *)(this + 0xb4);
  CVar2 = this[0xb9];
                    /* try { // try from 006d7350 to 006d7377 has its CatchHandler @ 006d7a68 */
  RenderDeviceUtil::makeOrthoProjectionMatrix(0.0,1.0,0.0,1.0,-1.0,1.0,(float *)&local_168);
  fVar45 = (float)NEON_fmadd(local_168,0,fStack_158 * 0.0);
  fVar33 = (float)(iVar9 + (uint)(byte)CVar2) * 0.015 * 1.1 + 0.03;
  fVar42 = 1.0 - fVar33;
  fVar44 = (float)NEON_fmadd(fStack_164,0,fStack_154 * 0.0);
  uVar47 = NEON_fmadd(uStack_14c._4_4_,0,local_168 + fStack_158 * 0.0);
  uVar48 = NEON_fmadd(local_168,0,fVar33 * fStack_158);
  uVar37 = NEON_fmadd(fStack_164,0,fVar33 * fStack_154);
  uVar40 = NEON_fmadd(fStack_160,0,fVar33 * fStack_150);
  uVar41 = NEON_fmadd(fStack_15c,0,fVar33 * (float)uStack_14c);
  uVar49 = NEON_fmadd((float)local_144,0,fStack_164 + fStack_154 * 0.0);
  fVar33 = (float)NEON_fmadd(fStack_160,0,fStack_150 * 0.0);
  fVar46 = (float)NEON_fmadd(fStack_15c,0,(float)uStack_14c * 0.0);
  uVar34 = NEON_fmadd(local_168,0,fVar42 * fStack_158);
  uVar35 = NEON_fmadd(fStack_164,0,fVar42 * fStack_154);
  uVar36 = NEON_fmadd(fStack_160,0,fVar42 * fStack_150);
  uVar43 = NEON_fmadd(fStack_15c,0,fVar42 * (float)uStack_14c);
  uVar38 = NEON_fmadd(local_144._4_4_,0,fStack_160 + fStack_150 * 0.0);
  uVar39 = NEON_fmadd((float)uStack_13c,0,fStack_15c + (float)uStack_14c * 0.0);
  local_f8 = NEON_fmadd(uStack_13c._4_4_,0,uVar47);
  uVar47 = NEON_fmadd(uStack_14c._4_4_,0,uVar48);
  uStack_f4 = NEON_fmadd((float)local_134,0,uVar49);
  uVar37 = NEON_fmadd((float)local_144,0,uVar37);
  uVar40 = NEON_fmadd(local_144._4_4_,0,uVar40);
  uVar41 = NEON_fmadd((float)uStack_13c,0,uVar41);
  local_d8 = NEON_fmadd(uStack_13c._4_4_,0,uStack_14c._4_4_ + fVar45);
  local_c8 = (float)NEON_fmadd(uStack_14c._4_4_,0,uVar34);
  uStack_d4 = NEON_fmadd((float)local_134,0,(float)local_144 + fVar44);
  fStack_c4 = (float)NEON_fmadd((float)local_144,0,uVar35);
  local_c0 = (float)NEON_fmadd(local_144._4_4_,0,uVar36);
  fStack_bc = (float)NEON_fmadd((float)uStack_13c,0,uVar43);
  local_f0 = NEON_fmadd(local_134._4_4_,0,uVar38);
  uStack_ec = NEON_fmadd((float)uStack_12c,0,uVar39);
  local_e8 = NEON_fmadd(uStack_13c._4_4_,0,uVar47);
  uStack_e4 = NEON_fmadd((float)local_134,0,uVar37);
  local_e0 = NEON_fmadd(local_134._4_4_,0,uVar40);
  uStack_dc = NEON_fmadd((float)uStack_12c,0,uVar41);
  uVar34 = NEON_fmadd(local_134._4_4_,0,local_144._4_4_ + fVar33);
  uVar35 = NEON_fmadd((float)uStack_12c,0,(float)uStack_13c + fVar46);
  local_c8 = uStack_13c._4_4_ + local_c8;
  fStack_c4 = (float)local_134 + fStack_c4;
  local_c0 = local_134._4_4_ + local_c0;
  fStack_bc = (float)uStack_12c + fStack_bc;
  local_d0 = (Field *)CONCAT44(uVar35,uVar34);
                    /* try { // try from 006d74f4 to 006d74fb has its CatchHandler @ 006d7a64 */
  (**(code **)(*plVar11 + 0x48))(plVar11,*(IProgramObject **)(this + 0x110));
  uStack_170 = 0x3e99999a;
  fStack_16c = *(float *)(this + 0xcc) * *(float *)(this + 0xbc);
  local_178 = 0x3e99999a3e99999a;
                    /* try { // try from 006d752c to 006d7603 has its CatchHandler @ 006d7aac */
  pfVar15 = (float *)(**(code **)(**(long **)(this + 0x128) + 0x10))
                               (*(long **)(this + 0x128),plVar11);
  ShaderStructLayout::setMatrix3x4(pfVar15,(Matrix4x4 *)&local_f8);
  *(ulong *)(pfVar15 + 0xe) = CONCAT44(fStack_16c,uStack_170);
  *(undefined8 *)(pfVar15 + 0xc) = local_178;
  (**(code **)(**(long **)(this + 0x128) + 0x18))(*(long **)(this + 0x128),plVar11);
  (**(code **)(*plVar11 + 0xb0))(plVar11,*(undefined8 *)(param_1 + 0x3b0));
  (**(code **)(*plVar11 + 0xb8))(plVar11,*(undefined8 *)(param_1 + 0x3c8));
  (**(code **)(*plVar11 + 0xc0))(plVar11,*(undefined8 *)(param_1 + 0x3c0));
  (**(code **)(*plVar11 + 0x50))(plVar11,this + 0x118,1,*(undefined8 *)(this + 0x120));
  (**(code **)(*plVar11 + 0x58))(plVar11,0);
  (**(code **)(*plVar11 + 0x88))(plVar11,0,*(undefined8 *)(this + 0x128));
  (**(code **)(*plVar11 + 0xe8))(plVar11,6,0,0,0,0);
  if ((int)((ulong)((long)local_1a0 - (long)local_1a8) >> 3) * -0x55555555 == 0) {
    fVar33 = 0.015;
  }
  else {
    fVar33 = 0.015;
    lVar28 = 0;
    uVar21 = 0;
    do {
      pppppppuVar7 = local_1a8;
                    /* try { // try from 006d765c to 006d7663 has its CatchHandler @ 006d7ab0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_1c0);
                    /* try { // try from 006d7664 to 006d76cb has its CatchHandler @ 006d7ac0 */
      StringUtil::toLower((basic_string *)&local_1c0);
      pcVar14 = (char *)((ulong)&local_1c0 | 1);
      if (((ulong)local_1c0 & 1) != 0) {
        pcVar14 = local_1b0;
      }
      pcVar16 = strstr(pcVar14,"error");
      fVar42 = 0.0;
      fVar44 = 0.0;
      if (pcVar16 == (char *)0x0) {
        pcVar14 = strstr(pcVar14,"warning");
        fVar42 = 1.0;
        fVar44 = 1.0;
        if (pcVar14 != (char *)0x0) {
          fVar42 = 0.0;
          fVar44 = 0.65;
        }
      }
      FontOverlayRenderer::setColor(param_1,1.0,fVar44,fVar42,*(float *)(this + 0xbc));
      if (((ulong)local_1c0 & 1) != 0) {
        operator_delete(local_1b0);
      }
      pbVar23 = (byte *)((long)pppppppuVar7 + lVar28);
      fVar42 = -0.0;
      if (lVar28 != 0) {
        fVar42 = fVar32;
      }
      pbVar19 = *(byte **)(pbVar23 + 0x10);
      fVar33 = fVar33 + fVar42;
      if ((*pbVar23 & 1) == 0) {
        pbVar19 = pbVar23 + 1;
      }
                    /* try { // try from 006d7704 to 006d7717 has its CatchHandler @ 006d7ab4 */
      FontOverlayRenderer::xyprintf(param_1,0.015,0.985 - fVar33,0.015,0,(char *)pbVar19);
      uVar21 = uVar21 + 1;
      lVar28 = lVar28 + 0x18;
    } while (uVar21 < (uint)((int)((ulong)((long)local_1a0 - (long)local_1a8) >> 3) * -0x55555555));
  }
  if ((*(int *)(this + 0xb0) == 0) && (this[0xb9] != (Console)0x0)) {
                    /* try { // try from 006d7764 to 006d776b has its CatchHandler @ 006d7a60 */
    GlobalTimeManager::getInstance();
    fVar32 = (float)GlobalTimeManager::getCurrentDt();
    fVar32 = (float)NEON_fminnm(fVar32 / *(float *)(this + 200),0x3f800000);
    fVar32 = *(float *)(this + 0xc4) + fVar32;
    *(float *)(this + 0xc4) = fVar32;
    if (0.5 < fVar32) {
                    /* try { // try from 006d7798 to 006d77a7 has its CatchHandler @ 006d7a04 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_190,(ulong)(this + 0x80),0,(allocator *)(ulong)*(uint *)(this + 0xe8));
      pCVar5 = this + 0x99;
      if (((byte)this[0x98] & 1) != 0) {
        pCVar5 = *(Console **)(this + 0xa8);
      }
                    /* try { // try from 006d77c4 to 006d77cf has its CatchHandler @ 006d79f0 */
      puVar17 = (undefined8 *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                insert((ulong)local_190,(char *)0x0,(ulong)pCVar5);
      local_1b0 = (char *)puVar17[2];
      uStack_1b8 = puVar17[1];
      local_1c0 = (undefined4 *)*puVar17;
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = 0;
      if ((local_190[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_17c,local_180));
      }
      pcVar14 = (char *)((ulong)&local_1c0 | 1);
      if (((ulong)local_1c0 & 1) != 0) {
        pcVar14 = local_1b0;
      }
                    /* try { // try from 006d7810 to 006d782b has its CatchHandler @ 006d79e0 */
      fVar32 = (float)FontOverlayRenderer::getTextWidth(param_1,0.015,false,0,pcVar14);
                    /* try { // try from 006d7830 to 006d7853 has its CatchHandler @ 006d79dc */
      fVar42 = (float)FontOverlayRenderer::getTextWidth(param_1,0.015,false,0,"|");
                    /* try { // try from 006d7880 to 006d7893 has its CatchHandler @ 006d79d8 */
      FontOverlayRenderer::xyprintf
                (param_1,fVar32 + 0.015 + fVar42 * -0.5,0.985 - fVar33,0.015,0,"|");
      if (((ulong)local_1c0 & 1) != 0) {
        operator_delete(local_1b0);
      }
      fVar32 = *(float *)(this + 0xc4);
    }
    if (1.0 < fVar32) {
      do {
        fVar32 = fVar32 + -1.0;
      } while (1.0 < fVar32);
      *(float *)(this + 0xc4) = fVar32;
    }
  }
                    /* try { // try from 006d78c8 to 006d78df has its CatchHandler @ 006d7a5c */
  FontOverlayRenderer::setColor(param_1,1.0,1.0,1.0,1.0);
  pppppppuVar7 = local_1a8;
  pppppppuVar26 = local_1a0;
  if (local_1a8 != (undefined8 *******)0x0) {
    while (pppppppuVar6 = pppppppuVar26, pppppppuVar6 != pppppppuVar7) {
      pppppppuVar26 = pppppppuVar6 + -3;
      if ((*(byte *)pppppppuVar26 & 1) != 0) {
        operator_delete(pppppppuVar6[-1]);
      }
    }
    local_1a0 = pppppppuVar7;
    operator_delete(local_1a8);
  }
LAB_006d7930:
  if (*(long *)(lVar4 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


